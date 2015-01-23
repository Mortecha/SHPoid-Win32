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
        HWND GetMainToolbarHandle()
        {
            return m_hMainToolbar;
        }

        HWND GetDrawControlsToolbarHandle()
        {
            return m_hDrawToolbar;
        }

    protected:
    private:
        HWND m_hMainToolbar;
        HWND m_hDrawToolbar;

        void AddDrawButtons(HWND hToolbar, HINSTANCE hInstance);
        void AddMainButtons(HWND hToolbar, HINSTANCE hInstance);
        void CreateToolbar(HWND hwnd, HINSTANCE hInstance);
        void CreateDrawToolbar(HWND hwnd, HINSTANCE hInstance);
};

#endif // SHPOIDGUI_H
