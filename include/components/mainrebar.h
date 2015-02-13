#ifndef MAINREBAR_H
#define MAINREBAR_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class MainRebar
{
    public:
        void Create(HWND hwnd, HINSTANCE hInstance);
        HWND GetHandle();

    protected:
        HWND m_hRebar;
        //HIMAGELIST m_hImageList;
};

#endif //MAINREBAR_H
