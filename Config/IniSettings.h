#pragma once

#include "../Common.h"

void LoadIni(HMODULE hModule);

int GetWaitTime();

bool IsAirplaneGame();

bool IsRandomSpawn();

FVector GetVectorFromConfig(std::string section, std::string key);

FVector GetAirplaneStartPos();

FVector GetAirplaneEndPos();

std::vector<FVector> GetSpawnpoints();

bool CanLatePlay();

bool UseAirplaneRandomStartPoint();

bool UseAirplaneRandomEndPoint();

bool ZoneSettings_EnableDoubleWaiting();

bool Experimental_EnableFixQuitPlayers();