#include "processors/viewproc.h"
#include "dialogboxes/previewdialog.h"

ViewProc::ViewProc()
{
    //ctor
}

ViewProc::~ViewProc()
{
    //dtor
}

void ViewProc::Create(HWND hwnd, HINSTANCE hInstance)
{
    m_hwnd = hwnd;
    m_hInstance = hInstance;
}

void ViewProc::ZoomIn()
{

}

void ViewProc::ZoomOut()
{

}

void ViewProc::Preview()
{
    PreviewDialog previewDialog;
    previewDialog.Create(IDD_PREVIEW, m_hwnd);
}

void ViewProc::ShowCenter()
{

}

void ViewProc::ShowGrid()
{

}
