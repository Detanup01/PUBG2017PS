
#include "Logics.h"
#include "../Bot/Bot.h"

void DoCustomSettings()
{
    UWorld* world = UWorld::GetWorld();
    ATslGameState* GameState = static_cast<ATslGameState*>(UGameplayStatics::GetGameState(world));
    if (GameState)
    {
        GameState->RemainingTime = GetWaitTime();
    }
}

void AfterMatchStart()
{
    UWorld* world = UWorld::GetWorld();
    auto MyGamemode = UGameplayStatics::GetGameMode(world);
    ATslGameMode* TslGameMode = static_cast<ATslGameMode*>(MyGamemode);
    TArray<APawn*> AllPawn;
    TslGameMode->GetAllPawns(&AllPawn);

    for (APawn* CurrentPawn : AllPawn)
    {
        ATslCharacter* TsL_CurrentPawn = static_cast<ATslCharacter*>(CurrentPawn);
        TsL_CurrentPawn->bIsVaultingSystemEnabled = true;

    }
    if (ZoneSettings_EnableDoubleWaiting())
    {
        for (auto& blueZone : TslGameMode->BlueZoneCustomOptions)
        {
            CUSTOMLOG("BlueZone index: " + blueZone.PhaseNum);
            CUSTOMLOG("ReleaseDuration index: " + std::to_string(blueZone.ReleaseDuration));
            CUSTOMLOG("WarningDuration index: " + std::to_string(blueZone.WarningDuration));
            CUSTOMLOG("RadiusRate index: " + std::to_string(blueZone.RadiusRate));
            //blueZone.RadiusRate *= 2;
            //blueZone.ReleaseDuration /= 2;
        }
    }
    ATslGameState* GameState = static_cast<ATslGameState*>(UGameplayStatics::GetGameState(world));
    CUSTOMLOG("SafetyZoneRadius: " + std::to_string(GameState->SafetyZoneRadius));

    if (Bots_Enabled())
    {
        SpawnBot();
    }
}