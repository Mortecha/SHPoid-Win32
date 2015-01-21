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

void ViewProc::ZoomIn()
{

}

void ViewProc::ZoomOut()
{

}

void ViewProc::Preview(HWND hwnd)
{
    PreviewDialog previewDialog;
    previewDialog.Create(IDD_PREVIEW, hwnd);
}

void ViewProc::ShowCenter()
{

}

void ViewProc::ShowGrid()
{

}
