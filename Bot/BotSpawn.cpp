#include "Bot.h"

void SpawnBot()
{    // Spawn island
    FTransform NewTransform{};
    NewTransform.Translation = FVector(796360, 19990, 528);
    NewTransform.Rotation = FQuat(0, 0, 0, 1);
    NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);

    SDK::UWorld* World = SDK::UWorld::GetWorld();
    auto MyGamemode = UGameplayStatics::GetGameMode(World);
    ATslGameMode* TslGameMode = static_cast<ATslGameMode*>(MyGamemode);

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

    // UBrainComponent* brain = UBrainComponent::GetDefaultObj();
    ATslAIController* ai_controller = static_cast<ATslAIController*>(SpawnActorFromClass(World, ATslAIController::StaticClass(), NewTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));
    if (ai_controller->BehaviorComp)
    {
        CUSTOMLOG("ai_controller->BehaviorComp " + ai_controller->BehaviorComp->GetFullName());
    }
    ATslBotAIController* botcontroller = static_cast<ATslBotAIController*>(SpawnActorFromClass(World, ATslBotAIController::StaticClass(), NewTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));
    botcontroller->Possess(bot);
    botcontroller->BrainComponent = ai_controller->BehaviorComp;
    bot->Controller = botcontroller;
    bot->Controller->Possess(bot);
    bot->AutoPossessAI = EAutoPossessAI::Spawned;
}