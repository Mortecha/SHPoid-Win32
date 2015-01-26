#include "dialogboxes/batchdialog.h"

INT_PTR BatchDialog::HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    //handle messages normally
    switch(uMsg)
    {
    case WM_INITDIALOG:
        CenterDialogToParent();
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
