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

void HelpProc::Create(HWND hwnd, HINSTANCE hInstance)
{
    m_hwnd = hwnd;
    m_hInstance = hInstance;
}

void HelpProc::ViewHelp()
{

}

void HelpProc::ReportBug()
{
    ReportBugDialog dialog;
    dialog.Create(IDD_REPORTBUG, m_hwnd);
}

void HelpProc::ViewAbout()
{
    AboutDialog dialog;
    dialog.Create(IDD_ABOUT, m_hwnd, m_hInstance);
}
