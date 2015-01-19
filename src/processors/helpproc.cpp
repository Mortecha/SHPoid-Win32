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

void HelpProc::ReportBug()
{
    ReportBugDialog reportBugDialog;
    reportBugDialog.Create(IDD_REPORTBUG);
}

void HelpProc::ViewAbout()
{
    AboutDialog aboutDialog;
    aboutDialog.Create(IDD_ABOUT);
}
