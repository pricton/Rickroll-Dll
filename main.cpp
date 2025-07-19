#include <Windows.h>
#include <shellapi.h>
#include "pch.h"
BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        ShellExecuteA(NULL, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_SHOWNORMAL);
    }
    return TRUE;
}
