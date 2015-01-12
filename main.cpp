// INCLUDES ////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define WIN32_LEAN_AND_MEAN // No MFC

#include <windows.h>   // include all the windows headers
#include <windowsx.h>  // include useful macros
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <commctrl.h>

#include "resource.h"

// DEFINES /////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Defines for Windows
#define WINDOW_CLASS_NAME "SHPOID"

// MACROS //////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define KEYDOWN(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 1 : 0)
#define KEYUP(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 1 : 0)

// GLOBALS /////////////////////////////////////////////////////////////////////////////////////////////////////////////
HWND mainWindowHandle = NULL;
HINSTANCE hInstanceApp = NULL;

// PROTOTYPES //////////////////////////////////////////////////////////////////////////////////////////////////////////
LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

// WINMAIN /////////////////////////////////////////////////////////////////////////////////////////////////////////////
int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
    WNDCLASSEX wndClassEx;  // this will hold the created class
    HWND hwnd;              // generic window handle
    MSG msg;                // generic message

    // SHPoid window class structure
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

// return to Windows
return(msg.wParam);
} // end WinMain

// FUNCTIONS ///////////////////////////////////////////////////////////////////////////////////////////////////////////
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
                    case MENU_FILE_ID_IMPORT_IMAGE_TO_SHP: break;
                    case MENU_FILE_ID_EXPORT_FRAME_TO_IMAGE: break;
                    case MENU_FILE_ID_EXPORT_FRAMES_TO_IMAGES: break;
                    case MENU_FILE_ID_EXPORT_SHP_TO_IMAGES: break;
                    case MENU_FILE_ID_EXPORT_SHP_TO_SPRITESHEET: break;

                    case MENU_FILE_ID_EXIT:
                        PostMessage(hwnd, WM_CLOSE, 0, 0);
                        break;

                    case MENU_EDIT_ID_UNDO: break;
                    case MENU_EDIT_ID_REDO: break;
                    case MENU_EDIT_ID_CUT: break;
                    case MENU_EDIT_ID_COPY: break;
                    case MENU_EDIT_ID_PASTE: break;
                    case MENU_EDIT_ID_CLEAR: break;
                    case MENU_EDIT_ID_SHP_SIZE: break;
                    case MENU_EDIT_ID_CANVAS_SIZE: break;
                    case MENU_EDIT_ID_SHP_ROTATION_180: break;
                    case MENU_EDIT_ID_SHP_ROTATION_90CW: break;
                    case MENU_EDIT_ID_SHP_ROTATION_90CCW: break;
                    case MENU_EDIT_ID_SHP_ROTATION_ARBITRARY: break;
                    case MENU_EDIT_ID_TRANSFORM: break;

                    case MENU_SHP_ID_TYPE: break;
                    case MENU_SHP_ID_AUTOSELECT_TYPE: break;
                    case MENU_SHP_ID_INSERT_FRAME: break;
                    case MENU_SHP_ID_DELETE_FRAME: break;
                    case MENU_SHP_ID_SPLIT_FRAMES: break;

                    case MENU_SHP_ID_PALETTE_LOAD: break;
                    case MENU_SHP_ID_PALETTE_CUSTOM: break;
                    case MENU_SHP_ID_PALETTE_TIBERIAN_DAWN: break;
                    case MENU_SHP_ID_PALETTE_RED_ALERT: break;
                    case MENU_SHP_ID_PALETTE_TIBERIAN_SUN: break;
                    case MENU_SHP_ID_PALETTE_RED_ALERT_2: break;
                    case MENU_SHP_ID_PALETTE_YURI: break;
                    case MENU_SHP_ID_PALETTE_UPDATE: break;

                    case MENU_SHP_ID_COLOURSCHEME_SETTINGS: break;
                    case MENU_SHP_ID_COLOURSCHEME_APPLY: break;
                    case MENU_SHP_ID_COLOURSCHEME_UPDATE: break;

                    case MENU_SHP_ID_SEQUENCE: break;
                    case MENU_SHP_ID_SHADOWS_AUTO: break;
                    case MENU_SHP_ID_SHADOWS_CONVERT: break;
                    case MENU_SHP_ID_SHADOWS_FIX: break;
                    case MENU_SHP_ID_GENERATE_CAMEO: break;

                    case MENU_FILTER_ID_SETTINGS: break;
                    case MENU_FILTER_ID_SMOOTH_CONSERVATIVE: break;
                    case MENU_FILTER_ID_SMOOTH_POLYGON_MEAN: break;
                    case MENU_FILTER_ID_SMOOTH_MEAN_MINIMUM: break;

                    case MENU_FILTER_ID_SMOOTH_MEAN_3X3: break;
                    case MENU_FILTER_ID_SMOOTH_MEAN_5X5: break;
                    case MENU_FILTER_ID_SMOOTH_MEAN_7X7: break;
                    case MENU_FILTER_ID_SMOOTH_MEAN_SQUARED_3X3: break;
                    case MENU_FILTER_ID_SMOOTH_MEAN_SQUARED_5X5: break;
                    case MENU_FILTER_ID_SMOOTH_MEAN_SQUARED_7X7: break;

                    case MENU_FILTER_ID_SMOOTH_MEDIAN_MINIMUM: break;
                    case MENU_FILTER_ID_SMOOTH_MEDIAN_3X3: break;
                    case MENU_FILTER_ID_SMOOTH_MEDIAN_5X5: break;
                    case MENU_FILTER_ID_SMOOTH_MEDIAN_7X7: break;

                    case MENU_FILTER_ID_SHARPEN_UNSHARP_MASK: break;
                    case MENU_FILTER_ID_SHARPEN_WEAK: break;
                    case MENU_FILTER_ID_SHARPEN_STRONG: break;

                    case MENU_FILTER_ID_ARITHMETICS_EXP: break;
                    case MENU_FILTER_ID_ARITHMETICS_LOG: break;
                    case MENU_FILTER_ID_ARITHMETICS_LOG_LIGHT: break;
                    case MENU_FILTER_ID_ARITHMETICS_LOG_DARK: break;

                    case MENU_FILTER_ID_TEXTURIZE_BASIC: break;
                    case MENU_FILTER_ID_TEXTURIZE_ICED: break;
                    case MENU_FILTER_ID_TEXTURIZE_WHITE: break;
                    case MENU_FILTER_ID_TEXTURIZE_PETRO: break;
                    case MENU_FILTER_ID_TEXTURIZE_STONIFY: break;
                    case MENU_FILTER_ID_TEXTURIZE_ROCK: break;

                    case MENU_FILTER_ID_3D_BUTTONIZE_WEAK: break;
                    case MENU_FILTER_ID_3D_BUTTONIZE_STRONG: break;
                    case MENU_FILTER_3D_BUTTONIZE_VERYSTRONG: break;

                    case MENU_FILTER_ID_OTHER_MESS: break;
                    case MENU_FILTER_ID_OTHER_SQUARE_DEPTH: break;
                    case MENU_FILTER_ID_OTHER_XDEPTH: break;
                    case MENU_FILTER_ID_OTHER_UBER: break;
                    case MENU_FILTER_ID_OTHER_UNFOCUS: break;
                    case MENU_FILTER_ID_OTHER_UNDERLINE: break;

                    case MENU_VIEW_ID_ZOOM_IN: break;
                    case MENU_VIEW_ID_ZOOM_OUT: break;
                    case MENU_VIEW_ID_PREVIEW: break;
                    case MENU_VIEW_ID_SHOW_CENTER: break;

                    case MENU_OPTIONS_ID_PREFERENCES: break;

                    case MENU_HELP_ID_HELP: break;
                    case MENU_HELP_ID_REPORT_BUG: break;
                    case MENU_HELP_ID_ABOUT: break;

                    // messages from the main tool bar
                    case TOOLBAR_ID_NEW: break;
                    case TOOLBAR_ID_OPEN: break;
                    case TOOLBAR_ID_SAVE: break;
                    case TOOLBAR_ID_CROSSHAIR: break;
                    case TOOLBAR_ID_GRID: break;
                    case TOOLBAR_ID_PREVIOUS_FRAME: break;
                    case TOOLBAR_ID_NEXT_FRAME: break;
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
