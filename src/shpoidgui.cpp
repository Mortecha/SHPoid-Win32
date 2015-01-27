#define _WIN32_IE   0x0500

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>

#include "shpoidgui.h"
#include "resource.h"

SHPoidGUI::SHPoidGUI()
{
    //ctor
}

SHPoidGUI::~SHPoidGUI()
{
    //dtor
}

void SHPoidGUI::AddDrawButtons(HWND hToolbar, HINSTANCE hInstance)
{
    const int       bitmapSize      = 16;
    const DWORD     buttonStyles    = BTNS_BUTTON;
    const int       ImageListID     = 0;
    const int       numButtons      = 12;

        // Create the image list.
    HIMAGELIST imageList = ImageList_Create(bitmapSize, bitmapSize,   // Dimensions of individual bitmaps.
                                            ILC_COLOR32 | ILC_MASK,   // Ensures transparent background.
                                            numButtons, 0);


    TBBUTTON tbButtons[numButtons] =
    {
        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_NEW))), ImageListID),
                                     MENU_FILE_ID_NEW,
                                     TBSTATE_WRAP | TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_OPEN))),ImageListID),
                                     MENU_FILE_ID_OPEN,
                                     TBSTATE_WRAP | TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_SAVE))), ImageListID),
                                     MENU_FILE_ID_SAVE,
                                     TBSTATE_WRAP | TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(0, 0), 0, 0, TBSTYLE_SEP, {0}, 0, 0 }, // Separator

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_CROSSHAIR))), ImageListID),
                                     MENU_VIEW_ID_SHOW_CENTER,
                                     TBSTATE_WRAP | TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_GRID))), ImageListID),
                                     MENU_VIEW_ID_SHOW_GRID,
                                     TBSTATE_WRAP | TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(0, 0), 0, 0, TBSTATE_WRAP | TBSTYLE_SEP, {0}, 0, 0 }, // Separator

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_PREVIOUS_FRAME))), ImageListID),
                                     TOOLBAR_ID_PREVIOUS_FRAME,
                                     TBSTATE_WRAP | TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_NEXT_FRAME))), ImageListID),
                                     TOOLBAR_ID_NEXT_FRAME,
                                     TBSTATE_WRAP | TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(0, 0), 0, 0, TBSTATE_WRAP | TBSTYLE_SEP, {0}, 0, 0 }, // Separator

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_ZOOM_IN))), ImageListID),
                                     MENU_VIEW_ID_ZOOM_IN,
                                     TBSTATE_WRAP | TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_ZOOM_OUT))), ImageListID),
                                     MENU_VIEW_ID_ZOOM_OUT,
                                     TBSTATE_WRAP | TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 }
    };

    // Set the image list.
    SendMessage(hToolbar, TB_SETIMAGELIST, (WPARAM)ImageListID, (LPARAM)imageList);

    // Add buttons.
    SendMessage(hToolbar, TB_BUTTONSTRUCTSIZE, (WPARAM)sizeof(TBBUTTON), 0);
    SendMessage(hToolbar, TB_ADDBUTTONS, (WPARAM)numButtons, (LPARAM)&tbButtons);
}

void SHPoidGUI::AddMainButtons(HWND hToolbar, HINSTANCE hInstance)
{
    const int       bitmapSize      = 16;
    const DWORD     buttonStyles    = BTNS_AUTOSIZE;
    const int       ImageListID     = 0;
    const int       numButtons      = 12;

        // Create the image list.
    HIMAGELIST imageList = ImageList_Create(bitmapSize, bitmapSize,   // Dimensions of individual bitmaps.
                                            ILC_COLOR32 | ILC_MASK,   // Ensures transparent background.
                                            numButtons, 0);

    // Set the image list.
    SendMessage(hToolbar, TB_SETIMAGELIST, (WPARAM)ImageListID, (LPARAM)imageList);

    TBBUTTON tbButtons[numButtons] =
    {
        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_NEW))), ImageListID),
                                     MENU_FILE_ID_NEW,
                                     TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_OPEN))),ImageListID),
                                     MENU_FILE_ID_OPEN,
                                     TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_SAVE))), ImageListID),
                                     MENU_FILE_ID_SAVE,
                                     TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(0, 0), 0, 0, TBSTYLE_SEP, {0}, 0, 0 }, // Separator

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_CROSSHAIR))), ImageListID),
                                     MENU_VIEW_ID_SHOW_CENTER,
                                     TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_GRID))), ImageListID),
                                     MENU_VIEW_ID_SHOW_GRID,
                                     TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(0, 0), 0, 0, TBSTYLE_SEP, {0}, 0, 0 }, // Separator

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_PREVIOUS_FRAME))), ImageListID),
                                     TOOLBAR_ID_PREVIOUS_FRAME,
                                     TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_NEXT_FRAME))), ImageListID),
                                     TOOLBAR_ID_NEXT_FRAME,
                                     TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(0, 0), 0, 0, TBSTYLE_SEP, {0}, 0, 0 }, // Separator

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_ZOOM_IN))), ImageListID),
                                     MENU_VIEW_ID_ZOOM_IN,
                                     TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 },

        { MAKELONG(ImageList_AddIcon(imageList,
                                     LoadIcon(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_ZOOM_OUT))), ImageListID),
                                     MENU_VIEW_ID_ZOOM_OUT,
                                     TBSTATE_ENABLED,
                                     buttonStyles,
                                     {0}, 0, 0 }
    };

    // Add buttons.
    SendMessage(hToolbar, TB_BUTTONSTRUCTSIZE, (WPARAM)sizeof(TBBUTTON), 0);
    SendMessage(hToolbar, TB_ADDBUTTONS, (WPARAM)numButtons, (LPARAM)&tbButtons);
}

void SHPoidGUI::CreateDrawToolbar(HWND hwnd, HINSTANCE hInstance)
{
    RECT hwndRect, mainToolbarRect, drawToolbarRect;

    m_hDrawToolbar = CreateWindowEx(0,
                                    TOOLBARCLASSNAME,
                                    NULL,
                                    TBSTYLE_FLAT | WS_CHILD | CCS_LEFT | CCS_NOPARENTALIGN | WS_BORDER,
                                    0, 0, 0, 0,
                                    hwnd,
                                    NULL,
                                    hInstance,
                                    NULL);

    if (m_hDrawToolbar == NULL)
        return;

    GetClientRect(hwnd, &hwndRect);
    GetClientRect(m_hMainToolbar, &mainToolbarRect);
    GetClientRect(m_hDrawToolbar, &drawToolbarRect);

    MoveWindow(m_hDrawToolbar,
               hwndRect.left,
               mainToolbarRect.bottom + 3,
               0,
               hwndRect.bottom,
               FALSE);

//    AddMainButtons(m_hDrawToolbar, hInstance);

    SendMessage(m_hDrawToolbar, TB_AUTOSIZE, 0, 0);
    ShowWindow(m_hDrawToolbar,  TRUE);
}

void SHPoidGUI::CreateToolbar(HWND hwnd, HINSTANCE hInstance)
{
    m_hMainToolbar = CreateWindowEx(0,
                                    TOOLBARCLASSNAME,
                                    NULL,
                                    TBSTYLE_FLAT | WS_BORDER | WS_CHILD | WS_VISIBLE,
                                    0, 0, 0, 0,
                                    hwnd,
                                    NULL,
                                    hInstance,
                                    NULL);

    if (m_hMainToolbar == NULL)
        return;

    AddMainButtons(m_hMainToolbar, hInstance);

    SendMessage(m_hMainToolbar, TB_AUTOSIZE, 0, 0);
    ShowWindow(m_hMainToolbar,  TRUE);
}

void SHPoidGUI::Create(HWND hwnd, HINSTANCE hInstance)
{
    SetMenu(hwnd, LoadMenu(hInstance, MAKEINTRESOURCE(MENU_ID_MAIN)));
    CreateToolbar(hwnd, hInstance);
    //CreateDrawToolbar(hwnd, hInstance);
}


