#define _WIN32_IE 0x500
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <commctrl.h>

#include "dialogboxes/filtersettingsdialog.h"

INT_PTR FilterSettingsDialog::HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    //handle messages normally
    switch(uMsg)
    {
    case WM_INITDIALOG:
        CenterDialogToParent();

        INITCOMMONCONTROLSEX ix;
        ix.dwSize = sizeof(INITCOMMONCONTROLSEX);
        ix.dwICC = ICC_TAB_CLASSES;
        InitCommonControlsEx(&ix); // have to run this to use tab control

        m_hTabControl = GetDlgItem(m_hDlg, IDD_FILTERSETTINGS_TAB_MAIN);
        TCITEM ti;

        ti.mask = TCIF_TEXT; // I'm only having text on the tab
        ti.pszText = (LPSTR)"Frames";
        TabCtrl_InsertItem(m_hTabControl,0,&ti);

        ti.pszText = (LPSTR)"Colours";
        TabCtrl_InsertItem(m_hTabControl,1,&ti);

        ti.pszText = (LPSTR)"Background";
        TabCtrl_InsertItem(m_hTabControl,2,&ti);

        TabCtrl_SetCurSel(m_hTabControl, 0);

        m_hCurrentTab = CreateDialog(m_hInstance ,
                                     MAKEINTRESOURCE(IDD_FILTERSETTINGS_TAB_FRAMES),
                                     m_hTabControl, 0); // Setting dialog to tab one by default
        return 1;

    case WM_NOTIFY:
        switch(((LPNMHDR)lParam) ->code)
        {
        case TCN_SELCHANGE:
            EndDialog(m_hCurrentTab, 0);
            switch (TabCtrl_GetCurSel(m_hTabControl))
            {
            case 0:
                m_hCurrentTab = CreateDialog(m_hInstance,
                                             MAKEINTRESOURCE(IDD_FILTERSETTINGS_TAB_FRAMES),
                                             m_hTabControl, 0); // create dialog for tab 2
                break;
            case 1:
                m_hCurrentTab = CreateDialog(m_hInstance,
                                             MAKEINTRESOURCE(IDD_FILTERSETTINGS_TAB_COLOURS),
                                             m_hTabControl, 0); // create dialog for tab 2
                break;
            case 2:
                m_hCurrentTab = CreateDialog(m_hInstance,
                                             MAKEINTRESOURCE(IDD_FILTERSETTINGS_TAB_BACKGROUND),
                                             m_hTabControl, 0); // create dialog for tab 2
                break;
            }
            return TRUE;
        }//End of Switch

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(m_hDlg, LOWORD(wParam));
            return 1;
        }
    }
    return 0;
}

