#include "StartLogic.h"
#include "../SpawnPoints/Spawnpoints.h"

void StartRandomMatch()
{
    return;
    // todo figure out this

    auto MyGamemode = UGameplayStatics::GetGameMode(UWorld::GetWorld());
    bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

    class ATslGameMode* _MyGamemode = static_cast<ATslGameMode*>(MyGamemode);

    FText TeleportedMessage = UKismetTextLibrary::Conv_StringToText(
        FString(L"YOU, MY FRIEND, HAVE BEEN TELEPORTED HERE!"));

    TArray < class APawn* > AllPawn;

    _MyGamemode->GetAllPawns(&AllPawn);

    for (class APawn* CurrentPawn : AllPawn)
    {
        ATslCharacter* TsL_CurrentPawn = static_cast <ATslCharacter*> (CurrentPawn);
        TsL_CurrentPawn->bIsVaultingSystemEnabled = true;
        //TsL_CurrentPawn->K2_TeleportTo();

    }
}

void RandomizePlayerPosition(void* Func_Params)
{
    if (!IsRandomSpawn())
        return;
    auto Params_Input = reinterpret_cast <Params::GameModeBase_K2_PostLogin*> (Func_Params);
    auto NewPawn = Params_Input->NewPlayer->K2_GetPawn();

    FTransform NewTransform;

    NewTransform.Translation = GetRandomPoint();
    FQuat Rotation;

    Rotation.X = 0.0;
    Rotation.Y = 0.0;
    Rotation.Z = 0.0;
    Rotation.W = 1.0;

    NewTransform.Rotation = Rotation;
    NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);

    struct FHitResult HitResultTeleport;

    NewPawn->K2_SetActorTransform(NewTransform, false, &HitResultTeleport, true);
}


void RandomizePlayerPositionAfterMatchStart(void* Func_Params)
{
    // make a settings read from experimental settings
    /*
    if (!IsRandomSpawn())
        return;*/
    auto Params_Input = reinterpret_cast <Params::GameModeBase_K2_PostLogin*> (Func_Params);
    auto NewPawn = Params_Input->NewPlayer->K2_GetPawn();

    FTransform NewTransform;

    NewTransform.Translation = GetRandomPoint();
    FQuat Rotation;

    Rotation.X = 0.0;
    Rotation.Y = 0.0;
    Rotation.Z = 0.0;
    Rotation.W = 1.0;

    NewTransform.Rotation = Rotation;
    NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);

    ATslCharacter* newPlayer = static_cast<ATslCharacter*>(NewPawn);

    // fix this.
    struct FHitResult HitResultTeleport;
    CUSTOMLOG("New player joined, making it Invulnerable.");
    newPlayer->AdminInvulnerable();
    NewPawn->K2_SetActorTransform(NewTransform, false, &HitResultTeleport, true);
    Sleep(10000); // todo make this better
    newPlayer->AdminInvulnerable();
    CUSTOMLOG("Player should have spawned and fallen, reverting Invulnerable.");
}