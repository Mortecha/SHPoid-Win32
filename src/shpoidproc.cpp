#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>

#include "shpoidproc.h"
#include "fileproc.h"
#include "resource.h"

BOOL SHPoidProc::OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct)
{
    m_SHPoidGUI.Create(m_hwnd, lpCreateStruct->hInstance);
    return TRUE;
}

void SHPoidProc::OnSize(HWND hWnd, UINT state, int cx, int cy)
{
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
        case MENU_FILE_ID_NEW:              m_FileProc.New(); break;
        case MENU_FILE_ID_OPEN:             m_FileProc.Open(); break;
        case MENU_FILE_ID_OPEN_RECENT:      break;
        case MENU_FILE_ID_CLOSE:            m_FileProc.Close(); break;
        case MENU_FILE_ID_CLOSE_ALL:        break;
        case MENU_FILE_ID_SAVE:             m_FileProc.Save(); break;
        case MENU_FILE_ID_SAVE_AS:          m_FileProc.SaveAs(); break;
        case MENU_FILE_ID_SAVE_ALL:         m_FileProc.SaveAll(); break;
        case MENU_FILE_ID_BATCH_CONVERT:    break;
        case MENU_FILE_ID_IMPORT:           m_FileProc.Import(); break;
        case MENU_FILE_ID_EXPORT:           m_FileProc.Export(); break;
        case MENU_FILE_ID_EXIT:             m_FileProc.Exit(hwnd); break;

        // messages from edit
        case MENU_EDIT_ID_UNDO:             m_EditProc.Undo(); break;
        case MENU_EDIT_ID_REDO:             m_EditProc.Redo(); break;
        case MENU_EDIT_ID_CUT:              m_EditProc.Cut(); break;
        case MENU_EDIT_ID_COPY:             m_EditProc.Copy(); break;
        case MENU_EDIT_ID_PASTE:            m_EditProc.Paste(); break;
        case MENU_EDIT_ID_CLEAR:            m_EditProc.Clear(); break;
        case MENU_EDIT_ID_SHP_SIZE:         m_EditProc.ResizeShp(); break;
        case MENU_EDIT_ID_CANVAS_SIZE:      m_EditProc.ResizeCanvas(); break;
        case MENU_EDIT_ID_SHP_ROT_180:      m_EditProc.Rot180(); break;
        case MENU_EDIT_ID_SHP_ROT_90CW:     m_EditProc.Rot90CW(); break;
        case MENU_EDIT_ID_SHP_ROT_90CCW:    m_EditProc.Rot90CCW(); break;
        case MENU_EDIT_ID_SHP_ROT_ARB:      m_EditProc.RotArb(); break;
        case MENU_EDIT_ID_TRANSFORM:        m_EditProc.Transform(); break;

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
    int msgBoxID = MessageBox(hwnd,
    (LPSTR)"Save changes to the SHPoid document DOCUMENT_NAME_HERE before quitting?",
    (LPSTR)"SHPoid", MB_YESNOCANCEL);

    switch(msgBoxID)
    {
    case IDYES:
        {
            SendMessage(hwnd, MENU_FILE_ID_SAVE_AS, 0, 0);
            break;
        }

    case IDNO:
        {
            DestroyWindow(hwnd);
        }
    }
}

void SHPoidProc::OnDestroy(HWND hwnd)
{
    PostMessage(hwnd, WM_QUIT, 0, 0);
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
