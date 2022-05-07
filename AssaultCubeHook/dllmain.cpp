#include <Windows.h>
#include "SDK/Player.h"

uintptr_t baseAddr;

void tickHandler() {
    if(!baseAddr)
        baseAddr = (uintptr_t)GetModuleHandleA("ac_client.exe");

    Player* player = *(Player**)(baseAddr + 0x10F4F4);
    player->Health = 9999;
    player->Armor = 9999;   
}

void init(HMODULE c) {
    while (true) {
        if (GetAsyncKeyState(VK_END))
            break;
        tickHandler();
    }

    FreeLibraryAndExitThread(c, -1);
}

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)init, hModule, 0, 0);
        break;
    }
    return TRUE;
}

