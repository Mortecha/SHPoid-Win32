#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>

#include "SHPoidProc.h"
#include "Resource.h"

BOOL SHPoidProc::OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct)
{
    m_SHPoidGUI.Create(m_hwnd, lpCreateStruct->hInstance);
    return TRUE;
}

void SHPoidProc::OnSize(HWND hWnd, UINT state, int cx, int cy)
{
    //SendMessage(m_SHPoidGUI.GetMainToolbarHandle(), TB_AUTOSIZE, 0, 0);
    SendMessage(m_SHPoidGUI.GetMainToolbarHandle(), TB_AUTOSIZE, 0, 0);
}

void SHPoidProc::OnPaint(HWND hwnd)
{
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(m_hwnd, &ps);

    // All painting occurs here, between BeginPaint and EndPaint.

    FillRect(hdc, &ps.rcPaint, (HBRUSH) (COLOR_WINDOW+1));
    EndPaint(m_hwnd, &ps);
}

void SHPoidProc::OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT code)
{
    switch(id)
    {
        // messages from file
        case MENU_FILE_ID_NEW:break;
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
            PostMessage(m_hwnd, WM_CLOSE, 0, 0);
            break;

        // messages from edit
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

        // messages from shp
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

        // messages from filter->smooth
        case MENU_FILTER_ID_SMOOTH_CONSERVATIVE: break;
        case MENU_FILTER_ID_SMOOTH_POLYGON_MEAN: break;
        case MENU_FILTER_ID_SMOOTH_MEAN_MINIMUM: break;

        // messages from filter->smooth(mean)
        case MENU_FILTER_ID_SMOOTH_MEAN_3X3: break;
        case MENU_FILTER_ID_SMOOTH_MEAN_5X5: break;
        case MENU_FILTER_ID_SMOOTH_MEAN_7X7: break;
        case MENU_FILTER_ID_SMOOTH_MEAN_SQUARED_3X3: break;
        case MENU_FILTER_ID_SMOOTH_MEAN_SQUARED_5X5: break;
        case MENU_FILTER_ID_SMOOTH_MEAN_SQUARED_7X7: break;

        // messages from filter->smooth(median)
        case MENU_FILTER_ID_SMOOTH_MEDIAN_MINIMUM: break;
        case MENU_FILTER_ID_SMOOTH_MEDIAN_3X3: break;
        case MENU_FILTER_ID_SMOOTH_MEDIAN_5X5: break;
        case MENU_FILTER_ID_SMOOTH_MEDIAN_7X7: break;

        // messages from filter->sharpen
        case MENU_FILTER_ID_SHARPEN_UNSHARP_MASK: break;
        case MENU_FILTER_ID_SHARPEN_WEAK: break;
        case MENU_FILTER_ID_SHARPEN_STRONG: break;

        // messages from filter->arithmetics
        case MENU_FILTER_ID_ARITHMETICS_EXP: break;
        case MENU_FILTER_ID_ARITHMETICS_LOG: break;
        case MENU_FILTER_ID_ARITHMETICS_LOG_LIGHT: break;
        case MENU_FILTER_ID_ARITHMETICS_LOG_DARK: break;

        // messages from filter->texturize
        case MENU_FILTER_ID_TEXTURIZE_BASIC: break;
        case MENU_FILTER_ID_TEXTURIZE_ICED: break;
        case MENU_FILTER_ID_TEXTURIZE_WHITE: break;
        case MENU_FILTER_ID_TEXTURIZE_PETRO: break;
        case MENU_FILTER_ID_TEXTURIZE_STONIFY: break;
        case MENU_FILTER_ID_TEXTURIZE_ROCK: break;

        // messages from filter->3D
        case MENU_FILTER_ID_3D_BUTTONIZE_WEAK: break;
        case MENU_FILTER_ID_3D_BUTTONIZE_STRONG: break;
        case MENU_FILTER_3D_BUTTONIZE_VERYSTRONG: break;

        // messages from filter->other
        case MENU_FILTER_ID_OTHER_MESS: break;
        case MENU_FILTER_ID_OTHER_SQUARE_DEPTH: break;
        case MENU_FILTER_ID_OTHER_XDEPTH: break;
        case MENU_FILTER_ID_OTHER_UBER: break;
        case MENU_FILTER_ID_OTHER_UNFOCUS: break;
        case MENU_FILTER_ID_OTHER_UNDERLINE: break;

        // messages from view
        case MENU_VIEW_ID_ZOOM_IN: break;
        case MENU_VIEW_ID_ZOOM_OUT: break;
        case MENU_VIEW_ID_PREVIEW: break;
        case MENU_VIEW_ID_SHOW_CENTER: break;
        case MENU_VIEW_ID_SHOW_GRID: break;

        // messages from options
        case MENU_OPTIONS_ID_PREFERENCES: break;

        // messages from help
        case MENU_HELP_ID_HELP: break;
        case MENU_HELP_ID_REPORT_BUG: break;
        case MENU_HELP_ID_ABOUT: break;

        // messages from the main tool bar
        case TOOLBAR_ID_PREVIOUS_FRAME: break;
        case TOOLBAR_ID_NEXT_FRAME: break;

    }
}

void SHPoidProc::OnClose(HWND hwnd)
{
    int msgBoxID = MessageBox(m_hwnd,
    (LPSTR)"Save changes to the SHPoid document DOCUMENT_NAME_HERE before quitting?",
    (LPSTR)"SHPoid", MB_YESNOCANCEL);

    switch(msgBoxID)
    {
    case IDYES:
        {
            SendMessage(m_hwnd, MENU_FILE_ID_SAVE_AS, 0, 0);
            break;
        }

    case IDNO:
        {
            DestroyWindow(m_hwnd);
        }
    }
}

void SHPoidProc::OnDestroy(HWND hwnd)
{
    PostMessage(m_hwnd, WM_QUIT, 0, 0);
}

LRESULT SHPoidProc::HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        HANDLE_MSG(m_hwnd, WM_CREATE, OnCreate);
        HANDLE_MSG(m_hwnd, WM_SIZE, OnSize);
        HANDLE_MSG(m_hwnd, WM_PAINT, OnPaint);
        HANDLE_MSG(m_hwnd, WM_COMMAND, OnCommand);
        HANDLE_MSG(m_hwnd, WM_CLOSE, OnClose);
        HANDLE_MSG(m_hwnd, WM_DESTROY, OnDestroy);
        default: return DefWindowProc(m_hwnd, uMsg, wParam, lParam);
    }
    return TRUE;
}
