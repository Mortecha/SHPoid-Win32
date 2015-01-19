#ifndef CHANGEPALETTEDIALOG_H
#define CHANGEPALETTEDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <tchar.h>
#include "resource.h"

class ChangePaletteDialog
{
public:
    static INT_PTR CALLBACK ChangePaletteDialogProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        ChangePaletteDialog *pThis = reinterpret_cast<ChangePaletteDialog*>(GetWindowLongPtr(hwnd, GWLP_USERDATA));

        if (!pThis)
        {
            if (uMsg == WM_INITDIALOG)
            {
                pThis = reinterpret_cast<ChangePaletteDialog*>(lParam);
                pThis->m_hwnd = hwnd;
                SetWindowLongPtr(hwnd,GWLP_USERDATA,lParam);
            }
            else
            {
                return 0; //let system deal with message
            }
        }
        //forward message to member function handler
        return pThis->HandleDialogProc(uMsg, wParam, lParam);
    }

    INT_PTR Create(const int id, const HWND hParent = 0)
    {
        return DialogBoxParam(GetModuleHandle(0),
                              MAKEINTRESOURCE(id),
                              hParent,
                              ChangePaletteDialogProc,
                              reinterpret_cast<LPARAM>(this));
    }

    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wp, LPARAM lp)
    {
        //handle messages normally
        if (uMsg == WM_COMMAND)
        {
            if (LOWORD(wp) == IDOK || LOWORD(wp) == IDCANCEL)
            {
                EndDialog(m_hwnd,LOWORD(wp));
                return 1;
            }
        }
        return 0;
    }

protected:
    HWND m_hwnd;
};

#endif // CHANGEPALETTEDIALOG_H
