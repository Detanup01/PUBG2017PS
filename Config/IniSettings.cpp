#include "IniSettings.h"

bool Loaded = false;
CSimpleIniA ini;

void LoadIni(HMODULE hModule)
{
    if (Loaded)
        return;
    std::string PathAndName;
    const int BUFSIZE = 4096;
    char buffer[BUFSIZE];
    if (GetModuleFileNameA(hModule, buffer, BUFSIZE - 1) <= 0)
        return;
    PathAndName = buffer;
    size_t found = PathAndName.find_last_of("/\\");
    PathAndName = PathAndName.substr(0, found);
    std::string str{ PathAndName.c_str() };
    str.append("\\settings.ini");
    ini.SetUnicode();

    SI_Error rc = ini.LoadFile(str.c_str());
    if (rc < 0)
        return;
    Loaded = true;
}

int GetWaitTime()
{
    if (!Loaded)
        return 60;
    std::string waitTime = std::string(ini.GetValue("Lobby", "WaitTime", "60"));
    return std::stoi(waitTime);
}

bool IsAirplaneGame()
{
    if (!Loaded)
        return false;
    bool IsAirplane = ini.GetBoolValue("GameMode", "IsAirPlane", false);
    bool IsRandomSpawn = ini.GetBoolValue("GameMode", "IsRandomSpawn", false);
    if (IsAirplane && IsRandomSpawn)
        return false;
    return IsAirplane;
}

bool IsRandomSpawn()
{
    if (!Loaded)
        return false;
    bool IsAirplane = ini.GetBoolValue("GameMode", "IsAirPlane", false);
    bool IsRandomSpawn = ini.GetBoolValue("GameMode", "IsRandomSpawn", false);
    if (IsAirplane && IsRandomSpawn)
        return true;
    return IsRandomSpawn;
}