
#include "StartLogic.h"

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

    // Spawn the aircraft
    FTransform AircraftTransform;
    AircraftTransform.Translation = FVector(0, 0, AircraftAltitude);
    AircraftTransform.Scale3D = FVector(1, 1, 1);
    AircraftTransform.Rotation = FQuat(0, 0, 0, 1);

    // we should remove this?
    ATslAircraftVehicle* Aircraft2 = static_cast<ATslAircraftVehicle*>(
        SpawnActorFromClass(World, AircraftClass, AircraftTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));

    ATransportAircraftVehicle* _ARC = static_cast<ATransportAircraftVehicle*>(
        SpawnActorFromClass(World, AircraftClass, AircraftTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));

    if (!_ARC)
    {
        CUSTOMLOG("Failed to spawn aircraft.");
        return;
    }

    // Store the global reference to the aircraft
    GLOB_AircraftVehicle = _ARC;

    // Get all pawns and assign them to the aircraft
    TArray<APawn*> AllPawns;
    TslGameMode->GetAllPawns(&AllPawns);
    int i = 0;
    for (APawn* Pawn : AllPawns)
    {
        ATslCharacter* TslPawn = static_cast<ATslCharacter*>(Pawn);
        if (!TslPawn || !Pawn->Controller)
        {
            CUSTOMLOG("Pawn or Controller is invalid.");
            continue;
        }

        APlayerController* PlayerController = static_cast<APlayerController*>(Pawn->Controller);
        int NetIndex = PlayerController->NetPlayerIndex;

        if (_ARC->VehicleSeatComponent->GetSeats().IsValidIndex(i))
        {
            UVehicleSeatInteractionComponent* PlayerSeat =
                _ARC->VehicleSeatComponent->GetSeats()[NetIndex];

            // Important function calls (Get players in the plane and move it to the end of the map)
            if (PlayerSeat)
            {
                FVector TargetLocation = FVector(600000.0, 999999.0, AircraftAltitude);
                FVector SpawnLocation = FVector(0.0, 0.0, AircraftAltitude);
                CUSTOMLOG(_ARC->InteractionComponent->GetFullName());

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
            }
            else
            {
                CUSTOMLOG("Player seat is invalid.");
            }
        }
        else
        {
            CUSTOMLOG("Invalid NetIndex for seating assignment.");
        }
        i++;
    }

    // Restore the old Match Preparer
    TslGameMode->MatchPreparer = GLOB_OLD_MatchPreparer;
}