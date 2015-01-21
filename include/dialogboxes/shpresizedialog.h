#ifndef SHPRESIZEDIALOG_H
#define SHPRESIZEDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <tchar.h>
#include "resource.h"

class ShpResizeDialog
{
public:
    static INT_PTR CALLBACK ShpResizeDialogProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        ShpResizeDialog *pThis = reinterpret_cast<ShpResizeDialog*>(GetWindowLongPtr(hwnd, GWLP_USERDATA));

        if (!pThis)
        {
            if (uMsg == WM_INITDIALOG)
            {
                pThis = reinterpret_cast<ShpResizeDialog*>(lParam);
                pThis->m_hwnd = hwnd;
                SetWindowLongPtr(hwnd, GWLP_USERDATA, lParam);
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
                              ShpResizeDialogProc,
                              reinterpret_cast<LPARAM>(this));
    }

    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        //handle messages normally
        switch(uMsg)
        {
        case WM_INITDIALOG:

            GetWindowRect(m_hwnd, &m_rect);
            GetWindowRect(GetParent(m_hwnd), &m_rectParent);

            m_parentWidth = (m_rectParent.right - m_rectParent.left);
            m_parentHeight = (m_rectParent.bottom - m_rectParent.top);
            m_dlgWidth = (m_rect.right - m_rect.left);
            m_dlgHeight = (m_rect.bottom - m_rect.top);

            SetWindowPos(m_hwnd,
                         HWND_TOP,
                         m_rectParent.left + m_parentWidth / 2 - m_dlgWidth / 2,
                         m_rectParent.top + m_parentHeight / 2 - m_dlgHeight / 2,
                         0, 0,
                         SWP_NOSIZE);
            return 1;

        case WM_COMMAND:
            if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
            {
                EndDialog(m_hwnd,LOWORD(wParam));
                return 1;
            }
        }
        return 0;
    }

private:
    HWND m_hwnd;
    RECT m_rect, m_rectParent;
    int m_dlgWidth, m_dlgHeight, m_parentWidth, m_parentHeight;
};

#endif // SHPRESIZEDIALOG_H
