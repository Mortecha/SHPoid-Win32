#include <windows.h>
#include <windowsx.h>

#include "shpoidproc.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR pCmdLine, int nCmdShow)
{
    SHPoidProc proc;

    if (!proc.Create((LPSTR)"SHPoid", WS_OVERLAPPEDWINDOW))
    {
        return 0;
    }

    ShowWindow(proc.Window(), nCmdShow);

    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

