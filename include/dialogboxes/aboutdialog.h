#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winuser.h>
#include <tchar.h>
#include "resource.h"

class AboutDialog
{
public:
    static INT_PTR CALLBACK AboutDialogProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        AboutDialog *pThis = reinterpret_cast<AboutDialog*>(GetWindowLongPtr(hwnd, GWLP_USERDATA));

        if (!pThis)
        {
            if (uMsg == WM_INITDIALOG)
            {
                pThis = reinterpret_cast<AboutDialog*>(lParam);
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

    INT_PTR Create(const int id, const HWND hwndParent = 0)
    {
        return DialogBoxParam(GetModuleHandle(0),
                              MAKEINTRESOURCE(id),
                              hwndParent,
                              AboutDialogProc,
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

            SetWindowPos(m_hwnd,
                         HWND_TOP,
                         m_rectParent.left + (m_rectParent.right - m_rectParent.left) / 2 - (m_rect.right - m_rect.left) / 2,
                         m_rectParent.top + (m_rectParent.bottom - m_rectParent.top) / 2 - (m_rect.bottom - m_rect.top) / 2,
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
};

#endif // ABOUTDIALOG_H
