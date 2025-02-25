
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
    auto mode = UGameplayStatics::GetGameMode(world);
    if (mode)
    {

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
        TsL_CurrentPawn->ClientCheatFly();

    }
    if (ZoneSettings_EnableDoubleWaiting())
    {
        for (auto& blueZone : TslGameMode->BlueZoneCustomOptions)
        {
            CUSTOMLOG("BlueZone index: " + blueZone.PhaseNum);
            CUSTOMLOG("ReleaseDuration: " + std::to_string(blueZone.ReleaseDuration));
            CUSTOMLOG("WarningDuration: " + std::to_string(blueZone.WarningDuration));
            CUSTOMLOG("RadiusRate: " + std::to_string(blueZone.RadiusRate));
            //blueZone.RadiusRate *= 2;
            //blueZone.ReleaseDuration /= 2;
        }
    }
    ABattleRoyaleModeController* brm_controller = static_cast<ABattleRoyaleModeController*>(TslGameMode->ModeController);
    if (brm_controller)
    {
        int i = 0;
        for (auto& gasdata : brm_controller->NormalPoisonGasDataArray)
        {
            CUSTOMLOG("normal");
            CUSTOMLOG("index: " + std::to_string(i));
            CUSTOMLOG("PoisonGasDamagePerSecond: " + std::to_string(gasdata.PoisonGasDamagePerSecond));
            CUSTOMLOG("RadiusRate: " + std::to_string(gasdata.RadiusRate));
            CUSTOMLOG("RandomRadiusRate: " + std::to_string(gasdata.RandomRadiusRate));
            CUSTOMLOG("ReleaseDuration: " + std::to_string(gasdata.ReleaseDuration));
            CUSTOMLOG("SpreadRatio: " + std::to_string(gasdata.SpreadRatio));
            CUSTOMLOG("StartDelay: " + std::to_string(gasdata.StartDelay));
            CUSTOMLOG("WarningDuration: " + std::to_string(gasdata.WarningDuration));
            i++;
        }
        i = 0;
        for (auto& gasdata : brm_controller->FastPoisonGasDataArray)
        {
            CUSTOMLOG("fast");
            CUSTOMLOG("index: " + std::to_string(i));
            CUSTOMLOG("PoisonGasDamagePerSecond: " + std::to_string(gasdata.PoisonGasDamagePerSecond));
            CUSTOMLOG("RadiusRate: " + std::to_string(gasdata.RadiusRate));
            CUSTOMLOG("RandomRadiusRate: " + std::to_string(gasdata.RandomRadiusRate));
            CUSTOMLOG("ReleaseDuration: " + std::to_string(gasdata.ReleaseDuration));
            CUSTOMLOG("SpreadRatio: " + std::to_string(gasdata.SpreadRatio));
            CUSTOMLOG("StartDelay: " + std::to_string(gasdata.StartDelay));
            CUSTOMLOG("WarningDuration: " + std::to_string(gasdata.WarningDuration));
            i++;
        }
    }
    ATslGameState* GameState = static_cast<ATslGameState*>(UGameplayStatics::GetGameState(world));

    if (Bots_Enabled())
    {
        SpawnBot();
    }
}