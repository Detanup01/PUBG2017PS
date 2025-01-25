#include "Logics.h"

void Thread_FixQuitPlayers(ATslCharacter* tsl_char)
{
    if (!tsl_char)
        return;
    Sleep(10 * 60);
    if (!tsl_char)
        return;
    if (tsl_char->IsFallingWithParachute())
    {
        tsl_char->GetParachute()->ServerRelease();
    }
    bool isSuccess = tsl_char->K2_TeleportTo(FVector(796360, 19990, 10528), FRotator());
    CUSTOMLOG("K2_TeleportTo: " + std::to_string(isSuccess));
}



void FixQuitPlayers(void* Func_Params)
{
    if (!Experimental_EnableFixQuitPlayers())
        return;
    Params::GameModeBase_K2_OnRestartPlayer* Parms = static_cast<Params::GameModeBase_K2_OnRestartPlayer*> (Func_Params);
    AController* player = Parms->NewPlayer;
    if (!player)
        return;
    ATslPlayerController* gameChar = static_cast<ATslPlayerController*>(player);
    auto tsl_char = gameChar->GetTslCharacter();
    if (!tsl_char)
        return;
    CUSTOMLOG("IsAlive: " + std::to_string(tsl_char->IsAlive()));
    CUSTOMLOG("IsInAircraft: " + std::to_string(tsl_char->IsInAircraft()));
    CUSTOMLOG("IsFallingWithParachute: " + std::to_string(tsl_char->IsFallingWithParachute()));
    if (!tsl_char->IsAlive())
        return;
    if (tsl_char->IsInAircraft())
        JumpFromPlane(tsl_char);
    if (tsl_char->IsFallingWithParachute())
    {
        tsl_char->GetParachute()->ServerRelease();
    }
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Thread_FixQuitPlayers, tsl_char, 0, 0);
}