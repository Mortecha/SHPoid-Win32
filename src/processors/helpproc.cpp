#include "processors/helpproc.h"
#include "dialogboxes/reportbug.h"
#include "dialogboxes/aboutdialog.h"

HelpProc::HelpProc()
{
    //ctor
}

HelpProc::~HelpProc()
{
    //dtor
}

void HelpProc::ViewHelp()
{

}

void HelpProc::ReportBug(HWND hwnd)
{
    ReportBugDialog dialog;
    dialog.Create(IDD_REPORTBUG, hwnd);
}

void HelpProc::ViewAbout(HWND hwnd, HINSTANCE hInstance)
{
    AboutDialog dialog;
    dialog.Create(IDD_ABOUT, hwnd, hInstance);
}
