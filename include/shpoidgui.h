#ifndef SHPOIDGUI_H
#define SHPOIDGUI_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <commctrl.h>
#include "components/mainrebar.h"
#include "components/toolrebar.h"
#include "components/maintoolbar.h"
#include "components/toolstoolbar.h"

class SHPoidGUI
{
    public:
        SHPoidGUI();
        virtual ~SHPoidGUI();
        void Create(HWND hwnd, HINSTANCE hInstance);

        // Used for redrawing toolbars during window resize.
        HWND GetMainRebarHandle();
        HWND GetToolsToolbarHandle();

    private:
        MainRebar m_mainRebar;
        ToolRebar m_toolRebar;
        MainToolbar m_mainToolbar;
        ToolsToolbar m_toolsToolbar;
};

#endif // SHPOIDGUI_H
