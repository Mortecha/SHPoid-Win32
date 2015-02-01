#define _WIN32_IE   0x0500

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>

#include "shpoidgui.h"
#include "resource.h"

SHPoidGUI::SHPoidGUI()
{
    //ctor
}

SHPoidGUI::~SHPoidGUI()
{
    //dtor
}

void SHPoidGUI::Create(HWND hwnd, HINSTANCE hInstance)
{
    SetMenu(hwnd, LoadMenu(hInstance, MAKEINTRESOURCE(MENU_ID_MAIN)));
    m_mainToolbar.Create(hwnd, hInstance);
}
