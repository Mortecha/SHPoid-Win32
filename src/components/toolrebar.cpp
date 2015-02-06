#define _WIN32_IE   0x0500

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>

#include "components/toolrebar.h"
#include "components/toolstoolbar.h"
#include "resource.h"

// hwnd - handle to the parent window
// hInstance - handle to the current instance of the application
void ToolRebar::Create(HWND hWnd, HINSTANCE hInstance)
{
    const int imageWidth = 16;
    const int imageHeight = 16;
    const int numImages = 1;

    // Used to set initial width of rebar to parent window width.
    RECT parentRect = { 0, 0, 0, 0 };
    GetWindowRect(hWnd, &parentRect);

    // Load and register rebar control class.
    INITCOMMONCONTROLSEX iccx;
    iccx.dwSize = sizeof(INITCOMMONCONTROLSEX);
    iccx.dwICC = ICC_BAR_CLASSES | ICC_COOL_CLASSES;
    if (!InitCommonControlsEx(&iccx))
        return;

    // Create the image list, load the bitmap and add it to the image list.
    m_hImageList = ImageList_Create(imageWidth, imageHeight, 0, numImages, 0);
    HBITMAP hBitmap = LoadBitmap(hInstance, MAKEINTRESOURCE(TOOLBAR_ID_NEW));
    ImageList_Add(m_hImageList, hBitmap, NULL);

    // Create rebar control.
    m_hRebar = CreateWindowEx(0, REBARCLASSNAME, NULL,
                              WS_VISIBLE | WS_CHILD | WS_CLIPCHILDREN |
                              CCS_NODIVIDER | CCS_NOPARENTALIGN | CCS_VERT | RBS_VERTICALGRIPPER,
                              0, 25, parentRect.right, parentRect.bottom,
                              hWnd, NULL, hInstance, NULL);

    if (!m_hRebar)
        return;

    // Set the image list for the rebar.
    REBARINFO rebarInfo = {0};
    rebarInfo.cbSize = sizeof(rebarInfo);
    rebarInfo.fMask = RBIM_IMAGELIST;
    rebarInfo.himl = m_hImageList;
    SendMessage(m_hRebar, RB_SETBARINFO, 0, (LPARAM)&rebarInfo);

    REBARBANDINFO rbBand;

    // Create main toolbar.
    ToolsToolbar hToolbar;
    hToolbar.Create(hWnd, hInstance);

    // Initialize REBARBANDINFO.
    rbBand.cbSize = sizeof(REBARBANDINFO);
    rbBand.fMask = RBBIM_COLORS | RBBIM_CHILD | RBBIM_CHILDSIZE | RBBIM_STYLE |
                   RBBIM_ID | RBBIM_TEXT | RBBIM_IMAGE;
    rbBand.clrFore = GetSysColor(COLOR_BTNTEXT);
    rbBand.clrBack = GetSysColor(COLOR_BTNFACE);
    rbBand.fStyle = RBBS_CHILDEDGE;
    rbBand.hbmBack = NULL,
    rbBand.hwndChild = hToolbar.GetHandle();
    //rbBand.cxMinChild = 100;
    rbBand.cyMinChild = 16;

    SendMessage(m_hRebar, RB_INSERTBAND, 0, (LPARAM)&rbBand);
}

HWND ToolRebar::GetHandle()
{
    return m_hRebar;
}
