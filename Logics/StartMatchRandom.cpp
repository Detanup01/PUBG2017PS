#include "Logics.h"
#include "../SpawnPoints/Spawnpoints.h"


void RandomizePlayerPosition(void* Func_Params)
{
    if (!IsRandomSpawn())
        return;
    auto Params_Input = reinterpret_cast <Params::GameModeBase_K2_PostLogin*> (Func_Params);
    auto NewPawn = Params_Input->NewPlayer->K2_GetPawn();

    FTransform NewTransform;

    NewTransform.Translation = GetRandomPoint();
    NewTransform.Rotation = FQuat(0, 0, 0, 1);;
    NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);

    struct FHitResult HitResultTeleport;

    NewPawn->K2_SetActorTransform(NewTransform, false, &HitResultTeleport, true);
}


void PlayerProtection(ATslCharacter* player)
{
    player->bCanBeDamaged = false;
    Sleep(60 * 60 * 2);
    //player->ProcessRevive(100);
    /*
    * It prints out message to wait
    */
    int time = 4;
    while (time == 0)
    {
        FText Message = UKismetTextLibrary::Conv_StringToText(FString(L"You have a spawn protection!"));
        player->SendSystemMessage(ESystemMessageType::Important, Message);
        Sleep(10 * 60); // add more waiting here?
        time--;
    }
    
    CUSTOMLOG("Player now can be dmg'd");
    player->bCanBeDamaged = true;
}


void RandomizePlayerPositionAfterMatchStart(void* Func_Params)
{
    // make a settings read from experimental settings
    if (!CanLatePlay())
    {
        return;
    }
    auto Params_Input = reinterpret_cast <Params::GameModeBase_K2_PostLogin*> (Func_Params);
    auto NewPawn = Params_Input->NewPlayer->K2_GetPawn();
    FTransform NewTransform;

    NewTransform.Translation = GetRandomPoint();
    NewTransform.Rotation = FQuat(0, 0, 0, 1);;
    NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);

    ATslCharacter* newPlayer = static_cast<ATslCharacter*>(NewPawn);
    struct FHitResult HitResultTeleport;
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)PlayerProtection, newPlayer, 0, 0);
    newPlayer->K2_SetActorTransform(NewTransform, false, &HitResultTeleport, true);
}