#include "Bot.h"

void SpawnBot()
{
    SDK::UWorld* World = SDK::UWorld::GetWorld();
    auto MyGamemode = UGameplayStatics::GetGameMode(World);
    ATslGameMode* TslGameMode = static_cast<ATslGameMode*>(MyGamemode);
    auto ATslBotAIController_Class = TslGameMode->GetDefaultPawnClassForController(ATslBotAIController::GetDefaultObj());
    if (ATslBotAIController_Class != nullptr)
    {
        CUSTOMLOG("ATslBotAIController_Class: " + ATslBotAIController_Class->GetFullName());
    }


    // Spawn island
    FTransform NewTransform{};
    NewTransform.Translation = FVector(796360, 19990, 528);
    NewTransform.Rotation = FQuat(0, 0, 0, 1);
    NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);
    ATslBot* bot = static_cast<ATslBot*>(SpawnActorFromClass(World, ATslBot::StaticClass(), NewTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));
    if (bot->BotBehavior == nullptr)
    {
        CUSTOMLOG("Bot behiv is null!");
    }
    if (bot->AIControllerClass == nullptr)
    {
        CUSTOMLOG("bot->AIControllerClass is null!");
    }
    else
    {
        CUSTOMLOG("bot->AIControllerClass " + bot->AIControllerClass->GetFullName());
    }
    ATslBotAIController* botcontroller = static_cast<ATslBotAIController*>(SpawnActorFromClass(World, ATslBotAIController::StaticClass(), NewTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));
    bot->Controller = botcontroller;


}