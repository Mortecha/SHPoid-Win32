#ifndef TOOLSTOOLBAR_H
#define TOOLSTOOLBAR_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class ToolsToolbar
{
    public:
        void Create(HWND hwnd, HINSTANCE hInstance);
        HWND GetHandle();

    protected:
        HWND m_hToolbar;
        HIMAGELIST m_hImageList;
};

#endif // TOOLSTOOLBAR_H
