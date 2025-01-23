
#include "Logics.h"
#include "../SpawnPoints/Spawnpoints.h"

ATransportAircraftVehicle* GLOB_AircraftVehicle = nullptr;
UMatchPreparer* GLOB_OLD_MatchPreparer = nullptr;

void StartAirplane()
{
    if (!IsAirplaneGame())
        return;

    // Access the Engine and World instances
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    if (!World || !Engine)
    {
        CUSTOMLOG("World or Engine is invalid.");
        return;
    }

    SDK::APlayerController* MyController = SDK::UGameplayStatics::GetPlayerController(World, 0);

    if (!MyController || !MyController->HasAuthority())
    {
        CUSTOMLOG("Controller is invalid or lacks authority.");
        return;
    }

    auto MyGamemode = SDK::UGameplayStatics::GetGameMode(World);
    if (!MyGamemode || !MyGamemode->IsA(ATslGameMode::StaticClass()))
    {
        CUSTOMLOG("GameMode is invalid or not ATslGameMode.");
        return;
    }

    ATslGameMode* TslGameMode = static_cast<ATslGameMode*>(MyGamemode);

    if (!TslGameMode->MatchPreparerClasses.IsValidIndex(1) ||
        !TslGameMode->MatchPreparerClasses[1].Class) {
        CUSTOMLOG("AirborneMatchPreparer class not available.");
        return;
    }
    UClass* AirborneMatchPreparerClass = TslGameMode->MatchPreparerClasses[1].Class;
    UObject* PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
    {
        CUSTOMLOG("PersistentLevel is invalid.");
        return;
    }

    // Save old Match Preparer and set up Airborne Match Preparer
    GLOB_OLD_MatchPreparer = TslGameMode->MatchPreparer;
    TslGameMode->MatchPreparer = static_cast<UMatchPreparer*>(SDK::UGameplayStatics::SpawnObject(AirborneMatchPreparerClass, PersistentLevel));
    if (!TslGameMode->MatchPreparer ||
        !TslGameMode->MatchPreparer->IsA(AirborneMatchPreparerClass))
    {
        CUSTOMLOG("Failed to set MatchPreparer to AirborneMatchPreparer.");
        return;
    }

    // Cast to AirborneMatchPreparer to access aircraft properties
    UAirborneMatchPreparer* AirbornePrep = static_cast<UAirborneMatchPreparer*>(TslGameMode->MatchPreparer);
    if (!AirbornePrep)
    {
        CUSTOMLOG("Airborne Match Preparer casting failed.");
        return;
    }

    // Set up aircraft altitude and class
    float Degree = AirbornePrep->EndThetaDegree;
    float AircraftAltitude = AirbornePrep->AircraftAltitude;
    TSubclassOf<ATransportAircraftVehicle> AircraftClass = AirbornePrep->AircraftClass;

    if (!AircraftClass)
    {
        CUSTOMLOG("Aircraft class is invalid.");
        return;
    }


    // here we make sure we not randomize the plane position every time for new player.
    // Would be hilarius seeing players just going other direction than the plane.

    int randomNumber = random(1, 8);
    int rand2 = randomNumber;
    if (randomNumber > 4)
    {
        rand2 = random(1, 4);
    }
    CUSTOMLOG("Random location calculation");
    CUSTOMLOG("Random start location: " + std::to_string(randomNumber));
    CUSTOMLOG("Random end location: " + std::to_string(rand2));
    FVector SpawnLocation = UseAirplaneRandomStartPoint() ? FVector((float)randomNumber * 100000, 0, 150000) : GetAirplaneStartPos();
    FVector TargetLocation = UseAirplaneRandomEndPoint() ? FVector((float)rand2 * 100000, 999999, 150000) : GetAirplaneEndPos();

    // Fail Safe
    if (TargetLocation == FVector(0, 0, 0))
    {
        TargetLocation = FVector(600000, 999999, 150000);
    }
    if (SpawnLocation == FVector(0, 0, 0))
    {
        SpawnLocation = FVector(0, 0, 150000);
    }

    CUSTOMLOG("SpawnLocation: " + SpawnLocation.toString());
    CUSTOMLOG("TargetLocation: " + TargetLocation.toString());

    // Spawn the aircraft
    FTransform AircraftTransform;
    AircraftTransform.Translation = SpawnLocation;
    AircraftTransform.Scale3D = FVector(1, 1, 1);
    AircraftTransform.Rotation = FQuat(0, 0, 0, 1);
 
    ATransportAircraftVehicle* _ARC = static_cast<ATransportAircraftVehicle*>(SpawnActorFromClass(World, AircraftClass, AircraftTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));
    if (!_ARC)
    {
        CUSTOMLOG("Failed to spawn aircraft.");
        return;
    }

    // Store the global reference to the aircraft
    GLOB_AircraftVehicle = _ARC;
    // Kill server cus player stuck in plane forever.
    ATslCharacter* server_character = static_cast<ATslCharacter*>(UGameplayStatics::GetPlayerCharacter(World, 0));
    ATslPlayerController* Controller = server_character->GetTslPlayerController();
    Controller->Suicide();
    Controller->ServerSuicide();
    CUSTOMLOG("Killed server");

    // Get all pawns and assign them to the aircraft
    TArray<APawn*> AllPawns;
    TslGameMode->GetAllPawns(&AllPawns);
    int i = 0;

    for (APawn* Pawn : AllPawns)
    {
        if (!Pawn)
        {
            CUSTOMLOG("Pawn not exists.");
            continue;
        }

        ATslCharacter* TslPawn = static_cast<ATslCharacter*>(Pawn);
        if (!Pawn->Controller)
        {
            CUSTOMLOG("Controller is invalid.");
            continue;
        }

        if (!TslPawn->IsAlive())
        {
            CUSTOMLOG("Pawn not alive.");
            continue;
        }

        APlayerController* PlayerController = static_cast<APlayerController*>(Pawn->Controller);
        int NetIndex = PlayerController->NetPlayerIndex;

        if (_ARC->VehicleSeatComponent->GetSeats().IsValidIndex(i))
        {
            UVehicleSeatInteractionComponent* PlayerSeat = _ARC->VehicleSeatComponent->GetSeats()[i];

            // Important function calls (Get players in the plane and move it to the end of the map)
            if (PlayerSeat)
            {
                _ARC->VehicleSeatComponent->Ride(TslPawn, PlayerSeat);
                try
                {
                    PlayerSeat->Rider = TslPawn;
                }
                catch (std::exception e)
                {
                    CUSTOMLOG("Failed to set rider!");
                }
                _ARC->SplineComponent->AddSplinePoint(SpawnLocation, ESplineCoordinateSpace::World, true);
                _ARC->SplineComponent->AddSplinePoint(TargetLocation, ESplineCoordinateSpace::World, true);
                _ARC->MovementComponent->bUseSafeInterpolation = true;
                _ARC->MovementComponent->Activate(false);
                _ARC->EnterAtEjectionArea();
                _ARC->AllowInteractBy(TslPawn);
                AirbornePrep->AllowDealDamage();
                PlayerSeat->Activate(true);
                _ARC->InteractionComponent->Activate(true);
                // _ARC->EjectAll();
                CUSTOMLOG("Player seated!");
            }
            else
            {
                CUSTOMLOG("Player seat is invalid.");
            }
        }
        i++;
    }



    // Restore the old Match Preparer
    TslGameMode->MatchPreparer = GLOB_OLD_MatchPreparer;
}

void SpawnPlayerOnIsland(void* Func_Params)
{
    if (!IsAirplaneGame())
        return;
    auto Params_Input = reinterpret_cast <Params::GameModeBase_K2_PostLogin*> (Func_Params);
    auto NewPawn = Params_Input->NewPlayer->K2_GetPawn();

    FTransform NewTransform;

    NewTransform.Translation = FVector(796360, 19990, 528);
    NewTransform.Rotation = FQuat(0, 0, 0, 1);
    NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);

    struct FHitResult HitResultTeleport;
    NewPawn->K2_SetActorTransform(NewTransform, false, &HitResultTeleport, true);
}

void JumpFromPlane(ATslCharacter* tsl_char)
{
    if (!GLOB_AircraftVehicle)
    {
        CUSTOMLOG("GLOB_AircraftVehicle is null!");
        return;
    }

    if (!tsl_char)
    {
        CUSTOMLOG("tsl_char is null!");
        return;
    }
    UVehicleSeatInteractionComponent* char_seat = nullptr;
    for (auto& seat : GLOB_AircraftVehicle->VehicleSeatComponent->GetSeats())
    {
        if (seat->Rider == tsl_char)
        {
            char_seat = seat;
        }
    }

    if (!char_seat)
    {
        CUSTOMLOG("char_seat is null!");
        return;
    }
    GLOB_AircraftVehicle->VehicleSeatComponent->Leave(tsl_char, char_seat, true);
    CUSTOMLOG("Character forced out from seat!");
}