#define _WIN32_IE   0x0500

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>

#include "components/toolstoolbar.h"
#include "resource.h"

// hwnd - handle to the parent window
// hInstance - handle to the current instance of the application
// returns handle to newly created toolbar.
void ToolsToolbar::Create(HWND hWnd, HINSTANCE hInstance)
{
    const int ImageListID    = 0;
    const int numButtons     = 12;
    const int bitmapSize     = 16;
    const DWORD buttonStyles = BTNS_AUTOSIZE;

    // Create the toolbar.
    m_hToolbar = CreateWindowEx(0, TOOLBARCLASSNAME, NULL,
                                   WS_CHILD | TBSTYLE_FLAT, 0, 0, 0, 0,
                                   hWnd, NULL, hInstance, NULL);

    if (m_hToolbar == NULL)
        return;

    // Create the image list.
    m_hImageList = ImageList_Create(bitmapSize, bitmapSize,   // Dimensions of individual bitmaps.
                                             ILC_COLOR24 | ILC_MASK,   // Ensures transparent background.
                                             numButtons, 0);

    // Set the image list.
    SendMessage(m_hToolbar, TB_SETIMAGELIST, (WPARAM)ImageListID, (LPARAM)m_hImageList);

    // create buttons
    TBBUTTON tbButtons[numButtons] =
    {
        { MAKELONG(ImageList_Add(m_hImageList, LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_NEW)), NULL), ImageListID),
            MENU_FILE_ID_NEW,  TBSTATE_ENABLED, buttonStyles, {0}, 0, 0 },
        { MAKELONG(ImageList_Add(m_hImageList, LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_OPEN)), NULL), ImageListID),
            MENU_FILE_ID_OPEN,  TBSTATE_ENABLED, buttonStyles, {0}, 0, 0 },
        { MAKELONG(ImageList_Add(m_hImageList, LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_SAVE)), NULL), ImageListID),
            MENU_FILE_ID_SAVE,  TBSTATE_ENABLED, buttonStyles, {0}, 0, 0 },
        { MAKELONG(0, 0), 0, 0, TBSTATE_WRAP | TBSTYLE_SEP, {0}, 0, 0 }, // Separator
        { MAKELONG(ImageList_Add(m_hImageList, LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_GRID)), NULL), ImageListID),
            MENU_VIEW_ID_SHOW_GRID,  TBSTATE_ENABLED, buttonStyles, {0}, 0, 0 },
        { MAKELONG(ImageList_Add(m_hImageList, LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_CROSSHAIR)), NULL), ImageListID),
            MENU_VIEW_ID_SHOW_CENTER,  TBSTATE_ENABLED, buttonStyles, {0}, 0, 0 },
        { MAKELONG(0, 0), 0, 0, TBSTATE_WRAP | TBSTYLE_SEP, {0}, 0, 0 }, // Separator
        { MAKELONG(ImageList_Add(m_hImageList, LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_PREVIOUS_FRAME)), NULL), ImageListID),
            TOOLBAR_ID_PREVIOUS_FRAME,  TBSTATE_ENABLED, buttonStyles, {0}, 0, 0 },
        { MAKELONG(ImageList_Add(m_hImageList, LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_NEXT_FRAME)), NULL), ImageListID),
            TOOLBAR_ID_NEXT_FRAME,  TBSTATE_ENABLED, buttonStyles, {0}, 0, 0 },
        { MAKELONG(0, 0), 0, 0, TBSTATE_WRAP | TBSTYLE_SEP, {0}, 0, 0 }, // Separator
        { MAKELONG(ImageList_Add(m_hImageList, LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_ZOOM_IN)), NULL), ImageListID),
            MENU_VIEW_ID_ZOOM_IN,  TBSTATE_ENABLED, buttonStyles, {0}, 0, 0 },
        { MAKELONG(ImageList_Add(m_hImageList, LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_ZOOM_OUT)), NULL), ImageListID),
            MENU_VIEW_ID_ZOOM_OUT,  TBSTATE_ENABLED, buttonStyles, {0}, 0, 0 }
    };

    // Add buttons.
    SendMessage(m_hToolbar, TB_BUTTONSTRUCTSIZE, (WPARAM)sizeof(TBBUTTON), 0);
    SendMessage(m_hToolbar, TB_ADDBUTTONS,       (WPARAM)numButtons,       (LPARAM)&tbButtons);

    // Resize the toolbar, and then show it.
    SendMessage(m_hToolbar, TB_AUTOSIZE, 0, 0);
    ShowWindow(m_hToolbar,  TRUE);
}

HWND ToolsToolbar::GetHandle()
{
    return m_hToolbar;
}

