#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>

#include "shpoidproc.h"
#include "resource.h"

BOOL SHPoidProc::OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct)
{
    m_hInstance = lpCreateStruct->hInstance;
    m_SHPoidGUI.Create(m_hwnd, m_hInstance);

    m_FileProc.Create(m_hwnd, m_hInstance);
    m_EditProc.Create(m_hwnd, m_hInstance);
    m_ShpProc.Create(m_hwnd, m_hInstance);
    m_FilterProc.Create(m_hwnd, m_hInstance);
    m_ViewProc.Create(m_hwnd, m_hInstance);
    m_OptionsProc.Create(m_hwnd, m_hInstance);
    m_HelpProc.Create(m_hwnd, m_hInstance);

    return TRUE;
}

void SHPoidProc::OnSize(HWND hWnd, UINT state, int cx, int cy)
{
    SendMessage(m_SHPoidGUI.GetMainRebarHandle(), TB_AUTOSIZE, 0, 0);
    SendMessage(m_SHPoidGUI.GetToolsToolbarHandle(), TB_AUTOSIZE, 0, 0);
}

void SHPoidProc::OnPaint(HWND hwnd)
{
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(m_hwnd, &ps);

    // all painting occurs here

    FillRect(hdc, &ps.rcPaint, (HBRUSH) (COLOR_WINDOW+1));
    EndPaint(m_hwnd, &ps);
}

void SHPoidProc::OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT code)
{
    switch(id)
    {
        // messages from file
        case MENU_FILE_ID_NEW:                      m_FileProc.New(); break;
        case MENU_FILE_ID_OPEN:                     m_FileProc.Open(); break;
        case MENU_FILE_ID_OPEN_RECENT:              m_FileProc.OpenRecent(); break;
        case MENU_FILE_ID_CLOSE:                    m_FileProc.Close(); break;
        case MENU_FILE_ID_CLOSE_ALL:                m_FileProc.CloseAll(); break;
        case MENU_FILE_ID_SAVE:                     m_FileProc.Save(); break;
        case MENU_FILE_ID_SAVE_AS:                  m_FileProc.SaveAs(); break;
        case MENU_FILE_ID_SAVE_ALL:                 m_FileProc.SaveAll(); break;
        case MENU_FILE_ID_BATCH_CONVERT:            m_FileProc.Batch();break;
        case MENU_FILE_ID_IMPORT:                   m_FileProc.Import(); break;
        case MENU_FILE_ID_EXPORT:                   m_FileProc.Export(); break;
        case MENU_FILE_ID_EXIT:                     m_FileProc.Exit(); break;

        // messages from edit
        case MENU_EDIT_ID_UNDO:                     m_EditProc.Undo(); break;
        case MENU_EDIT_ID_REDO:                     m_EditProc.Redo(); break;
        case MENU_EDIT_ID_CUT:                      m_EditProc.Cut(); break;
        case MENU_EDIT_ID_COPY:                     m_EditProc.Copy(); break;
        case MENU_EDIT_ID_PASTE:                    m_EditProc.Paste(); break;
        case MENU_EDIT_ID_CLEAR:                    m_EditProc.Clear(); break;
        case MENU_EDIT_ID_SHP_SIZE:                 m_EditProc.ResizeShp(); break;
        case MENU_EDIT_ID_CANVAS_SIZE:              m_EditProc.ResizeCanvas(); break;
        case MENU_EDIT_ID_SHP_ROT_180:              m_EditProc.Rot180(); break;
        case MENU_EDIT_ID_SHP_ROT_90CW:             m_EditProc.Rot90CW(); break;
        case MENU_EDIT_ID_SHP_ROT_90CCW:            m_EditProc.Rot90CCW(); break;
        case MENU_EDIT_ID_SHP_ROT_ARB:              m_EditProc.RotArb(); break;
        case MENU_EDIT_ID_TRANSFORM:                m_EditProc.Transform(); break;

        // messages from shp
        case MENU_SHP_ID_TYPE:                      m_ShpProc.ChangeType(); break;
        case MENU_SHP_ID_AUTOSELECT_TYPE:           m_ShpProc.AutoselectType(); break;
        case MENU_SHP_ID_INSERT_FRAME:              m_ShpProc.InsertFrame(); break;
        case MENU_SHP_ID_DELETE_FRAME:              m_ShpProc.DeleteFrame(); break;
        case MENU_SHP_ID_SPLIT_FRAMES:              m_ShpProc.SplitFrames(); break;

        case MENU_SHP_ID_PALETTE_LOAD:              m_ShpProc.LoadPalette(); break;
        case MENU_SHP_ID_PALETTE_CHANGE:            m_ShpProc.ChangePalette(); break;
        case MENU_SHP_ID_PALETTE_UPDATE:            m_ShpProc.UpdatePalettes(); break;

        case MENU_SHP_ID_SEQUENCE:                  m_ShpProc.Sequence(); break;
        case MENU_SHP_ID_SHADOWS_AUTO:              m_ShpProc.AutoShadows(); break;
        case MENU_SHP_ID_SHADOWS_CONVERT:           m_ShpProc.ConvertShadows(); break;
        case MENU_SHP_ID_SHADOWS_FIX:               m_ShpProc.FixShadows(); break;
        case MENU_SHP_ID_GENERATE_CAMEO:            m_ShpProc.GenerateCameo(); break;

        case MENU_FILTER_ID_SETTINGS:               m_FilterProc.EditSettings(); break;
        case MENU_FILTER_ID_COLOURSCHEME:           m_FilterProc.ChangeColourScheme(); break;

        // messages from filter->smooth
        case MENU_FILTER_ID_SMOOTH_CONSERVATIVE:    m_FilterProc.SmoothConservative(); break;
        case MENU_FILTER_ID_SMOOTH_POLYGON_MEAN:    m_FilterProc.SmoothPolyMean(); break;
        case MENU_FILTER_ID_SMOOTH_MEAN_MIN:        m_FilterProc.SmoothMeanMin(); break;

        // messages from filter->smooth(mean)
        case MENU_FILTER_ID_SMOOTH_MEAN_3X3:        m_FilterProc.SmoothMean3x3(); break;
        case MENU_FILTER_ID_SMOOTH_MEAN_5X5:        m_FilterProc.SmoothMean5x5(); break;
        case MENU_FILTER_ID_SMOOTH_MEAN_7X7:        m_FilterProc.SmoothMean7x7(); break;
        case MENU_FILTER_ID_SMOOTH_MEAN_SQRD_3X3:   m_FilterProc.SmoothMeanSqrd3x3(); break;
        case MENU_FILTER_ID_SMOOTH_MEAN_SQRD_5X5:   m_FilterProc.SmoothMeanSqrd5x5(); break;
        case MENU_FILTER_ID_SMOOTH_MEAN_SQRD_7X7:   m_FilterProc.SmoothMeanSqrd7x7(); break;

        // messages from filter->smooth(median)
        case MENU_FILTER_ID_SMOOTH_MEDIAN_MIN:      m_FilterProc.SmoothMedianMin(); break;
        case MENU_FILTER_ID_SMOOTH_MEDIAN_3X3:      m_FilterProc.SmoothMedian3x3(); break;
        case MENU_FILTER_ID_SMOOTH_MEDIAN_5X5:      m_FilterProc.SmoothMedian5x5(); break;
        case MENU_FILTER_ID_SMOOTH_MEDIAN_7X7:      m_FilterProc.SmoothMedian7x7(); break;

        // messages from filter->sharpen
        case MENU_FILTER_ID_SHARPEN_UNSHARP_MASK:   m_FilterProc.ApplyUnsharpMask(); break;
        case MENU_FILTER_ID_SHARPEN_WEAK:           m_FilterProc.SharpenWeak(); break;
        case MENU_FILTER_ID_SHARPEN_STRONG:         m_FilterProc.SharpenStrong(); break;

        // messages from filter->arithmetics
        case MENU_FILTER_ID_ARITHMETICS_EXP:        m_FilterProc.ApplyArithExp(); break;
        case MENU_FILTER_ID_ARITHMETICS_LOG:        m_FilterProc.ApplyArithLog(); break;
        case MENU_FILTER_ID_ARITHMETICS_LOG_LIGHT:  m_FilterProc.ApplyArithLogLight(); break;
        case MENU_FILTER_ID_ARITHMETICS_LOG_DARK:   m_FilterProc.ApplyArithLogDark(); break;

        // messages from filter->texturize
        case MENU_FILTER_ID_TEXTURIZE_BASIC:        m_FilterProc.ApplyBasicTexture(); break;
        case MENU_FILTER_ID_TEXTURIZE_ICED:         m_FilterProc.ApplyIceTexture(); break;
        case MENU_FILTER_ID_TEXTURIZE_WHITE:        m_FilterProc.ApplyWhiteTexture(); break;
        case MENU_FILTER_ID_TEXTURIZE_PETRO:        m_FilterProc.ApplyPetroTexture(); break;
        case MENU_FILTER_ID_TEXTURIZE_STONIFY:      m_FilterProc.ApplyStonifyTexture(); break;
        case MENU_FILTER_ID_TEXTURIZE_ROCK:         m_FilterProc.ApplyRockTexture(); break;

        // messages from filter->3D
        case MENU_FILTER_ID_3D_BUTTONIZE_WEAK:      m_FilterProc.ButtonizeWeak(); break;
        case MENU_FILTER_ID_3D_BUTTONIZE_STRONG:    m_FilterProc.ButtonizeStrong(); break;
        case MENU_FILTER_3D_BUTTONIZE_VERYSTRONG:   m_FilterProc.ButtonizeVeryStrong(); break;

        // messages from filter->other
        case MENU_FILTER_ID_OTHER_MESS:             m_FilterProc.ApplyMess(); break;
        case MENU_FILTER_ID_OTHER_SQUARE_DEPTH:     m_FilterProc.ApplySquareDepth(); break;
        case MENU_FILTER_ID_OTHER_XDEPTH:           m_FilterProc.ApplyXDepth(); break;
        case MENU_FILTER_ID_OTHER_UBER:             m_FilterProc.ApplyUber(); break;
        case MENU_FILTER_ID_OTHER_UNFOCUS:          m_FilterProc.ApplyUnfocus(); break;
        case MENU_FILTER_ID_OTHER_UNDERLINE:        m_FilterProc.ApplyUnderline(); break;

        // messages from view
        case MENU_VIEW_ID_ZOOM_IN:                  m_ViewProc.ZoomIn(); break;
        case MENU_VIEW_ID_ZOOM_OUT:                 m_ViewProc.ZoomOut(); break;
        case MENU_VIEW_ID_PREVIEW:                  m_ViewProc.Preview(); break;
        case MENU_VIEW_ID_SHOW_CENTER:              m_ViewProc.ShowCenter(); break;
        case MENU_VIEW_ID_SHOW_GRID:                m_ViewProc.ShowGrid(); break;

        // messages from options
        case MENU_OPTIONS_ID_PREFERENCES:           m_OptionsProc.ChangePreferences(); break;

        // messages from help
        case MENU_HELP_ID_HELP:                     m_HelpProc.ViewHelp(); break;
        case MENU_HELP_ID_REPORT_BUG:               m_HelpProc.ReportBug(); break;
        case MENU_HELP_ID_ABOUT:                    m_HelpProc.ViewAbout(); break;

        // messages from the main tool bar
        case TOOLBAR_ID_PREVIOUS_FRAME:             m_ShpProc.PrevFrame();break;
        case TOOLBAR_ID_NEXT_FRAME:                 m_ShpProc.NextFrame();break;

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
