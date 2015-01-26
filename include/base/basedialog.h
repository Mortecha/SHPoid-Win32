#ifndef BASEDIALOG_H
#define BASEDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>

template <class DERIVED_TYPE>
class BaseDialog
{
public:
    static INT_PTR CALLBACK DialogProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        DERIVED_TYPE *pThis = reinterpret_cast<DERIVED_TYPE*>(GetWindowLongPtr(hDlg, GWLP_USERDATA));

        if (!pThis)
        {
            if (uMsg == WM_INITDIALOG)
            {
                pThis = reinterpret_cast<DERIVED_TYPE*>(lParam);
                pThis->m_hDlg = hDlg;
                SetWindowLongPtr(hDlg,GWLP_USERDATA,lParam);
            }
            else
            {
                return 0; //let system deal with message
            }
        }
        //forward message to member function handler
        return pThis->HandleDialogProc(uMsg, wParam, lParam);
    }

    INT_PTR Create(const int id, const HWND hwndParent = 0, HINSTANCE hInstance = 0)
    {
        m_hInstance = hInstance;
        return DialogBoxParam(GetModuleHandle(0),
                              MAKEINTRESOURCE(id),
                              hwndParent,
                              DialogProc,
                              reinterpret_cast<LPARAM>(this));
    }

    void CenterDialogToParent()
    {
        GetWindowRect(m_hDlg, &m_rect);
        GetWindowRect(GetParent(m_hDlg), &m_rectParent);

        m_parentWidth = (m_rectParent.right - m_rectParent.left);
        m_parentHeight = (m_rectParent.bottom - m_rectParent.top);
        m_dlgWidth = (m_rect.right - m_rect.left);
        m_dlgHeight = (m_rect.bottom - m_rect.top);

        SetWindowPos(m_hDlg,
                     HWND_TOP,
                     m_rectParent.left + m_parentWidth / 2 - m_dlgWidth / 2,
                     m_rectParent.top + m_parentHeight / 2 - m_dlgHeight / 2,
                     0, 0,
                     SWP_NOSIZE);
    };

protected:
    virtual INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam) = 0;
    HWND m_hDlg;
    HINSTANCE m_hInstance;
    RECT m_rect, m_rectParent;
    int m_dlgWidth, m_dlgHeight, m_parentWidth, m_parentHeight;
};
#endif // BASEDIALOG_H
