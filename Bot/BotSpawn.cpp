#include "Bot.h"

void SpawnBot()
{
    SDK::UWorld* World = SDK::UWorld::GetWorld();
    // Spawn island
    FTransform NewTransform;
    NewTransform.Translation = FVector(796360, 19990, 528);
    NewTransform.Rotation = FQuat(0, 0, 0, 1);
    NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);
    ATslBot* bot = static_cast<ATslBot*>(SpawnActorFromClass(World, ATslBot::StaticClass(), NewTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr));
    if (bot->BotBehavior == nullptr)
    {
        CUSTOMLOG("Bot behiv is null");
    }
}

void SpawnBot2()
{
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    ATslBot* bot_def = ATslBot::GetDefaultObj();
    // Spawn island
    FTransform NewTransform;
    NewTransform.Translation = FVector(796365, 19995, 528);
    NewTransform.Rotation = FQuat(0, 0, 0, 1);
    NewTransform.Scale3D = FVector(1.0, 1.0, 1.0);
    ATslBot* bot = static_cast<ATslBot*>(SDK::UGameplayStatics::SpawnObject(bot_def->Class, World->PersistentLevel));
    if (bot->BotBehavior == nullptr)
    {
        CUSTOMLOG("Bot behiv is null");
    }
}