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
        case WM_COMMAND:
            {
                switch(LOWORD(wParam))
                {
                    case MENU_FILE_ID_NEW: break;
                    case MENU_FILE_ID_OPEN: break;
                    case MENU_FILE_ID_OPEN_RECENT: break;
                    case MENU_FILE_ID_CLOSE: break;
                    case MENU_FILE_ID_CLOSE_ALL: break;
                    case MENU_FILE_ID_SAVE: break;
                    case MENU_FILE_ID_SAVE_AS: break;
                    case MENU_FILE_ID_SAVE_ALL: break;
                    case MENU_FILE_ID_BATCH_CONVERT: break;
                    case MENU_FILE_ID_IMPORT: break;
                    case MENU_FILE_ID_EXPORT: break;
                    case MENU_FILE_ID_EXIT: break;

                    case MENU_EDIT_ID_UNDO: break;
                    case MENU_EDIT_ID_REDO: break;
                    case MENU_EDIT_ID_CUT: break;
                    case MENU_EDIT_ID_COPY: break;
                    case MENU_EDIT_ID_PASTE: break;
                    case MENU_EDIT_ID_CLEAR: break;
                    case MENU_EDIT_ID_RESIZE_CANVAS: break;
                    case MENU_EDIT_ID_RESIZE: break;
                    case MENU_EDIT_ID_TRANSFORM: break;

                    case MENU_SHP_ID_TYPE: break;
                    case MENU_SHP_ID_ADD_FRAME: break;
                    case MENU_SHP_ID_DELETE_FRAME: break;

                    case MENU_PALETTE_ID_LOAD: break;
                    case MENU_PALETTE_ID_CUSTOM: break;
                    case MENU_PALETTE_ID_TIBERIAN_DAWN: break;
                    case MENU_PALETTE_ID_RED_ALERT: break;
                    case MENU_PALETTE_ID_TIBERIAN_SUN: break;
                    case MENU_PALETTE_ID_RED_ALERT_2: break;
                    case MENU_PALETTE_ID_YURI: break;

                    case MENU_FILTER_ID_SMOOTH_CONSERVATIVE: break;
                    case MENU_FILTER_ID_SMOOTH_MEAN: break;
                    case MENU_FILTER_ID_SMOOTH_MEDIAN: break;
                    case MENU_FILTER_ID_SHARPEN: break;
                    case MENU_FILTER_ID_ARITHMETICS: break;
                    case MENU_FILTER_ID_TEXTURIZE: break;
                    case MENU_FILTER_ID_3D: break;
                    case MENU_FILTER_ID_OTHER: break;

                    //case MENU_VIEW_ID_...

                    case MENU_OPTIONS_ID_PREFERENCES: break;

                    //case MENU_HELP_ID_ABOUT
                }
            }

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

    mainWindowHandle = hwnd; // save main window handle
    HDC hdc = GetDC(hwnd); // save device context
    srand(GetTickCount()); // seed random number generator
    HMENU hMenuHandle = LoadMenu(hInstance, "MainMenu"); // load menu resource
    SetMenu(hwnd, hMenuHandle);

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

        // main processing goes here

        if (KEYDOWN(VK_ESCAPE))
           SendMessage(hwnd, WM_CLOSE, 0, 0);
	} // end while

// release the device context
ReleaseDC(hwnd,hdc);

// return to Windows like this
return(msg.wParam);
} // end WinMain
