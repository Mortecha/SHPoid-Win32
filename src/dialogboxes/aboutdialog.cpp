#include "dialogboxes/aboutdialog.h"

void AboutDialog::CreateDialogComponents()
{
    HWND hAboutTitle = CreateWindow("Static",
                                    "SHPoid",
                                    WS_CHILD | WS_VISIBLE | SS_LEFT,
                                    10, 10, 140, 40,
                                    m_hDlg, NULL, m_hInstance, NULL);

    HWND hVersionText = CreateWindow("Static",
                                     "Version: 0.001",
                                     WS_CHILD | WS_VISIBLE | SS_LEFT,
                                     10, 30, 250, 20,
                                     m_hDlg, NULL, m_hInstance, NULL);

    HWND hAuthorText = CreateWindow("Static",
                                    "Created By: Sam Keightley - Mortecha",
                                    WS_CHILD | WS_VISIBLE | SS_LEFT,
                                    10, 80, 300, 20,
                                    m_hDlg, NULL, m_hInstance, NULL);

    HFONT hFontTitle = CreateFont(20, 0, 0, 0,
                                  600, FALSE, FALSE, FALSE,
                                  ANSI_CHARSET, OUT_DEVICE_PRECIS, CLIP_MASK,
                                  ANTIALIASED_QUALITY, DEFAULT_PITCH,
                                  NULL);

    HFONT hFont = CreateFont(15, 0, 0, 0,
                             400, FALSE, FALSE, FALSE,
                             ANSI_CHARSET, OUT_DEVICE_PRECIS, CLIP_MASK,
                             ANTIALIASED_QUALITY, DEFAULT_PITCH,
                             NULL);

    SendMessage(hAboutTitle, WM_SETFONT, WPARAM(hFontTitle), TRUE);
    SendMessage(hVersionText, WM_SETFONT, WPARAM(hFont), TRUE);
    SendMessage(hAuthorText, WM_SETFONT, WPARAM(hFont), TRUE);
}

INT_PTR AboutDialog::HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    //handle messages normally
    switch(uMsg)
    {
    case WM_INITDIALOG:
        CenterDialogToParent();
        CreateDialogComponents();
        return 1;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(m_hDlg, LOWORD(wParam));
            return 1;
        }
    }
    return 0;
}
