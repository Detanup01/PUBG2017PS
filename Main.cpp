// PUBG2017PS Server Source code
// Made with much much love by H4TIUX, BigBoiTaj2005(TajyPoo) and Fischsalat :)
// WV is a cuck

// Credits:
// Fischsalat is a really chill and pacient guy, he literally developed a whole ass SDK dumper which we're using here aswell. Props to him <3
// Taj is our beloved <333 Thanks to him we were able to get in game. Thank you Taj, we love you
// Froi is a weird but funny guy (horse) 
// TwiceHit is the funniest and chillest Romanian guy you'll ever meet
// WackyHacky is a monkey (But we love him, respect) 
// Jerry saved our asses many times (Unfuckery dev)
// Tym helped us deploy the servers and develop the lobby, thank you sm <3

#include "Common.h"
#include "Config/IniSettings.h"
#include "SpawnPoints/Spawnpoints.h"

#pragma warning(disable: 4996)

#if _WIN64
#pragma comment(lib, "libMinHook.x64.lib")
#else
#pragma comment(lib, "libMinHook.x86.lib")
#endif

using namespace SDK;

// Basic.cpp was added to the VS project
// Engine_functions.cpp was added to the VS project


void DisableCullingForAllActors(UWorld* World) // Function half made by ChatGPT half made by me that saved my ass completely
{
    if (!World) {
        CUSTOMLOG("DisableCullingForAllActors: World is null.");
        return;
    }

    CUSTOMLOG("DisableCullingForAllActors: World is valid, proceeding.");

    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray < SDK::AActor* >& AllActors = Level->Actors;

    // Ignore persistent level, focus on streaming levels
    for (ULevelStreaming* StreamingLevel : World->StreamingLevels) {
        if (StreamingLevel) {
            std::string LevelName = StreamingLevel->GetName();

            CUSTOMLOG("We are iterating the level: " + LevelName);

            // Skip persistent level and ignored levels
            if (LevelName.find("327") != std::string::npos) {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            if (LevelName.find("328") != std::string::npos) {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            if (LevelName.find("329") != std::string::npos) {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            if (LevelName.find("32") != std::string::npos) {
                CUSTOMLOG("Skipping level: " + LevelName);
                continue;
            }

            // Force load and visibility for other levels
            StreamingLevel->bShouldBeLoaded = true;
            StreamingLevel->bShouldBeVisible = true;
            StreamingLevel->bDisableDistanceStreaming = true;
            StreamingLevel->bShouldBlockOnLoad = true;

            CUSTOMLOG("Forcing load for level: " + LevelName);
        }
    }
}

// It does exactly what its name states
bool isMatchStarting() {
    ATslGameState* GameState = static_cast <ATslGameState*> (
        UGameplayStatics::GetGameState(UWorld::GetWorld()));
    if (GameState) {
        if (GameState->RemainingTime <= 0) {
            return true; // The match is starting (RemainingTime <= 0) so it returns true.
        }
    }
    return false; // If no match is starting or GameState is null, return false.
}

std::vector<std::string> DontPrintFunctions =
{ 
    "ReceiveTick",
    "BlueprintUpdateCamera",
    "ReceiveBeginPlay",
    "ReadyToEndMatch",
    "UpdateWorldTimeSecondsDelta",
    "OnRep_ReplicatedWorldTimeSeconds"
};
std::vector<std::string> DontPrintFunctionContains =
{
    "ReceiveHit",
    "ReceiveDrawHUD",
    "ConstructionScript",
    "ServerUpdateCamera",
    "OnParameterUpdated"
};

void startMatch()
{
    return;
    auto MyGamemode = UGameplayStatics::GetGameMode(UWorld::GetWorld());
    bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

    class ATslGameMode* _MyGamemode = static_cast <ATslGameMode*> (MyGamemode);

    FText TeleportedMessage = UKismetTextLibrary::Conv_StringToText(
        FString(L"YOU, MY FRIEND, HAVE BEEN TELEPORTED HERE!"));

    TArray < class APawn* > AllPawn;

    _MyGamemode->GetAllPawns(&AllPawn);

    for (class APawn* CurrentPawn : AllPawn) {
        ATslCharacter* TsL_CurrentPawn = static_cast <ATslCharacter*> (CurrentPawn);
        TsL_CurrentPawn->bIsVaultingSystemEnabled = true;
        //TsL_CurrentPawn->K2_TeleportTo();

    }
}



void* (*ProcessEventO)(UObject* Obj, UFunction* Func, void* Func_Params);
void* ProcessEventHook(UObject* Obj, UFunction* Func, void* Func_Params)
{
    if (Obj && Func) {
        std::string FuncName;
        std::string ObjName;

        FuncName = Func->GetName();
        ObjName = Obj->GetName();

        bool isPresent = (std::find(DontPrintFunctions.begin(), DontPrintFunctions.end(), FuncName) != DontPrintFunctions.end());
        if (!isPresent)
        {
            for (size_t i = 0; i < DontPrintFunctionContains.size(); i++)
            {
                isPresent = FuncName.find(DontPrintFunctionContains[i]) != std::string::npos;
                if (isPresent)
                    break;
            }
        }
        if (!isPresent && Obj->IsA(AInfo::StaticClass()) && !(FuncName.find("BndEvt") != std::string::npos))
        {
            CUSTOMLOG(ObjName + " CALLED " + FuncName);
        }

        if (FuncName == "K2_OnSetMatchState")
        {
            Params::GameMode_K2_OnSetMatchState* Parms = static_cast <Params::GameMode_K2_OnSetMatchState*> (Func_Params);
            CUSTOMLOG("K2_OnSetMatchState CALLED WITH NewState: " + Parms->NewState.ToString());

            if (isMatchStarting() == true) 
            {
                startMatch();
            }
        }

        // Teleports players to random locations right after they join
        if (FuncName == "K2_OnRestartPlayer")
        {
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
        ProcessEventO(Obj, Func, Func_Params);
        return 0;
    }
}

DWORD MainThread(HMODULE Module) {
    /* Code to open a console window */
    AllocConsole();
    LoadIni(Module);
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);
    auto conin = freopen("conin$", "r", stdin);
    auto conout = freopen("conout$", "w", stdout);
    auto conout_err = freopen("conout$", "w", stderr);
    printf("Debugging Window:\n");

    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    auto MyGamemode = UGameplayStatics::GetGameMode(World);
    bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

    /* Getting the PlayerController, World, OwningGameInstance, ... should all be
     * checked not to be nullptr! */
    SDK::APlayerController* MyController =
        UGameplayStatics::GetPlayerController(World, 0);

    if (IsTsLGamemode) {
        SetCurrentNetworkStatus("SERVER");
    }
    else {
        SetCurrentNetworkStatus("CLIENT");
    }

    auto InitStatus = MH_Initialize();
    std::string StatusString = MH_StatusToString(InitStatus);

    CUSTOMLOG("MINHOOK STATUS INIT: " + StatusString);

    if (InitStatus != MH_OK) {
        CUSTOMLOG("MINHOOK STATUS INIT NOT OK!!!! ABORTING");
        return FALSE;
    }

    uintptr_t ProcessEventAddr =
        (uintptr_t(GetModuleHandle(0)) + Offsets::ProcessEvent);
    // auto ProcessEventAddr = UObject::GObjects->GetByIndex(1)->Vft[0x40];
    ProcessEventO = decltype(ProcessEventO)(ProcessEventAddr);

    auto HookResult = MH_CreateHook((PVOID&)ProcessEventAddr, ProcessEventHook,
        reinterpret_cast <LPVOID*> (&ProcessEventO));
    std::string HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK) {
        CUSTOMLOG("Process Event Hook CREATED FAILED WITH REASON : " +
            HookResultString + " !");
        return FALSE;
    }

    CUSTOMLOG("Process Event Hook CREATED GOOD!");

    if (MH_EnableHook((PVOID&)ProcessEventAddr) != MH_STATUS::MH_OK) {
        CUSTOMLOG("Process Event Hook ENABLE FAILED!");
        return FALSE;

    }
    else {
        CUSTOMLOG("Process Event Hook Enabled!");
    }

    CUSTOMLOG("Hooks Enabled!");

    InitUEConsole();
    DisableCullingForAllActors(UWorld::GetWorld());

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

    if (MyController->HasAuthority())
    {
        CUSTOMLOG("INJECTED, WE HAVE AUTHORITY, EITHER SERVER OR STANDALONE");

        auto MyGamemode = UGameplayStatics::GetGameMode(World);
        bool IsTsLGamemode = MyGamemode->IsA(ATslGameMode::StaticClass());

        if (IsTsLGamemode)
        {
            CUSTOMLOG("SERVER DLL INJECTED TO DO STUFF, WE ARE TSLGAMEMODE");
            UKismetSystemLibrary::SetWindowTitle(MakeText(L"PUBG_SERVER_LISTEN"));

            ATslGameState* GameState = static_cast<ATslGameState*>(UGameplayStatics::GetGameState(UWorld::GetWorld()));
            if (GameState)
            {
                GameState->RemainingTime = GetWaitTime();
            }
            /*
            ATslGameMode* GameMode = static_cast<ATslGameMode*>(MyGamemode);

            CUSTOMLOG("MatchPreparer name: " + std::to_string((int)(GameMode->MatchStartType)));
            CUSTOMLOG("MatchPreparer name: " + GameMode->MatchPreparer->GetFullName());

            GameMode->MatchStartType = EMatchStartType::Airborne;
            auto airborneClass = GameMode->MatchPreparerClasses[1].Class;
            CUSTOMLOG("airborneClass name: " + airborneClass->GetFullName());
            CUSTOMLOG("classname: " + airborneClass->Class->Name.ToString());
            CUSTOMLOG("UBlueprintGeneratedClass : " + UBlueprintGeneratedClass::StaticClass()->GetName());

            if (airborneClass->IsA(UBlueprintGeneratedClass::StaticClass()))
            {
                CUSTOMLOG("IsA");
                UObject* obj = airborneClass.Get();
                CUSTOMLOG("UClass");
                UBlueprintGeneratedClass* blueprint = static_cast<UBlueprintGeneratedClass*>(obj);
                CUSTOMLOG("UBlueprintGeneratedClass");
                UAirborneMatchPreparer* matchborn2 = static_cast<UAirborneMatchPreparer*>(blueprint->DefaultObject);
                CUSTOMLOG("AircraftAltitude name: " + std::to_string(matchborn2->AircraftAltitude));
                CUSTOMLOG("EndThetaDegree name: " + std::to_string(matchborn2->EndThetaDegree));
                GameMode->MatchPreparer = matchborn2;
                /* This here get the default for our match stuff
                auto AirborneMatchPreparer2 = UObject::FindObject("AirborneMatchPreparer_Default_C AirborneMatchPreparer_Default.Default__AirborneMatchPreparer_Default_C");
                CUSTOMLOG("AirborneMatchPreparer2: " + AirborneMatchPreparer2->GetFullName());
                */
            /*
            }
        */

            
            //GameMode->MatchPreparer = test;

            /*
            CUSTOMLOG("MatchPreparer name: " + std::to_string((int)(GameMode->MatchStartType)));
            CUSTOMLOG("MatchPreparer name: " + GameMode->MatchPreparer->GetFullName());
            GameMode->bStartPlayerAtMatchStart = true;
            GameMode->bShouldSpawnAtStartSpot = true;
            GameMode->bDelayedStart = true;*/
            /*
            UAirborneMatchPreparer airborne = {
                .AircraftAltitude = 150000.0f,
            };
            GameMode->MatchPreparer = &airborne;
            */
        }

    }
    else
    {
        UKismetSystemLibrary::SetWindowTitle(MakeText(L"PUBG_CLIENT_NOAUTHORITY"));
        CUSTOMLOG("DLL INJECTED, WE ARE NOT AUTHORITY, MOST LIKELY CLIENT");
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved) {
    switch (reason) {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
        break;
    }

    return TRUE;
}

// Your boy H4TIUX did all the comments. Thank me later for making your life easier :))))
//  Thanks for reading uwu