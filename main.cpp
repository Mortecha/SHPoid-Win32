// INCLUDES ////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define WIN32_LEAN_AND_MEAN // No MFC

#include <windows.h>   // include all the windows headers
#include <windowsx.h>  // include useful macros
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

#include "resources.h"

// DEFINES /////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Defines for Windows
#define WINDOW_CLASS_NAME "WINCLASS1"

// MACROS //////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define KEYDOWN(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 1 : 0)
#define KEYUP(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 1 : 0)

// Globals /////////////////////////////////////////////////////////////////////////////////////////////////////////////
HWND mainWindowHandle = NULL;
HINSTANCE hInstanceApp = NULL;

// Functions ///////////////////////////////////////////////////////////////////////////////////////////////////////////
LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    // this is the main main message handler of the system
    PAINTSTRUCT ps;
    HDC hdc;

    // what was the message?
    switch(msg)
    {
        case WM_CREATE:
            {
                // do initialisation here
                return 0;
            } break;

        case WM_PAINT:
            {
                hdc = BeginPaint(hwnd, &ps);
                EndPaint(hwnd, &ps);
                return 0;
            } break;

        case WM_CLOSE:
            {
                // kill the application, this sends a WM_QUIT message
                PostQuitMessage(0);
                return 0;
            } break;

        case WM_DESTROY:
            {
                // kill the application, this sends a WM_QUIT message
                PostQuitMessage(0);
                return 0;
            } break;

        default: break;
    } // end switch

    // process any messages that we didn't take care of
    return DefWindowProc(hwnd, msg, wParam, lParam);
}

// WINMAIN /////////////////////////////////////////////////////////////////////////////////////////////////////////////
int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
    WNDCLASSEX wndClassEx;  // this will hold the created class
    HWND hwnd;              // generic window handle
    MSG msg;                // generic message

    // first fill the window class structure
    wndClassEx.cbSize = sizeof(WNDCLASSEX);
    wndClassEx.style = CS_DBLCLKS | CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
    wndClassEx.lpfnWndProc = WindowProc;
    wndClassEx.cbClsExtra = 0;
    wndClassEx.cbWndExtra = 0;
    wndClassEx.hInstance = hInstance;
    wndClassEx.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndClassEx.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndClassEx.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wndClassEx.lpszMenuName = NULL;
    wndClassEx.lpszClassName = WINDOW_CLASS_NAME;
    wndClassEx.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

    // save hInstance in global
    hInstanceApp = hInstance;

    // register the window class
    if(!RegisterClassEx(&wndClassEx))
        return 0;

    // create the window
    if(!(hwnd = CreateWindowEx(0,                                   // extended style
                               WINDOW_CLASS_NAME,                   // class
                               "SHPoid",                            // title
                               WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                               GetSystemMetrics(SM_CXSCREEN) / 4,   // initial x
                               GetSystemMetrics(SM_CYSCREEN) / 4,   // initial y
                               GetSystemMetrics(SM_CXSCREEN) / 2,   // initial width
                               GetSystemMetrics(SM_CYSCREEN) / 2,   // initial height
                               HWND_DESKTOP,                        // handle to parent
                               LoadMenu(hInstance, "MainMenu"),     // handle to menu
                               hInstance,                           // instance of this application
                               NULL)))                              // extra creation params
        return 0;

    HMENU hMenuHandle = LoadMenu(hInstance, "MainMenu"); // load menu resource
    SetMenu(hwnd, hMenuHandle);
    mainWindowHandle = hwnd; // save main window handle
    HDC hdc = GetDC(hwnd); // save device context
    srand(GetTickCount()); // seed random number generator

    // main event loop
    while(TRUE)
    {
        // tests if there is a message in the queue
        if(PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            if(msg.message == WM_QUIT) //test if this is a quit message
                break;

            TranslateMessage(&msg); // translate any accelerator keys
            DispatchMessage(&msg); // send the message to the window proc
        } // end if

        if (KEYDOWN(VK_ESCAPE))
           SendMessage(hwnd, WM_CLOSE, 0, 0);
	} // end while

// release the device context
ReleaseDC(hwnd,hdc);

// return to Windows like this
return(msg.wParam);
} // end WinMain
