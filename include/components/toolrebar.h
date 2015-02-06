#ifndef TOOLREBAR_H
#define TOOLREBAR_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class ToolRebar
{
    public:
        void Create(HWND hwnd, HINSTANCE hInstance);
        HWND GetHandle();

    protected:
        HWND m_hRebar;
        HIMAGELIST m_hImageList;
};

#endif //TOOLREBAR_H
