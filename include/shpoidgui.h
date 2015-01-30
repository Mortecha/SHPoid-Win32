#ifndef SHPOIDGUI_H
#define SHPOIDGUI_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <commctrl.h>

class SHPoidGUI
{
    public:
        SHPoidGUI();
        virtual ~SHPoidGUI();
        void Create(HWND hwnd, HINSTANCE hInstance);
};

#endif // SHPOIDGUI_H
