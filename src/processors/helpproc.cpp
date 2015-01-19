#include "processors/helpproc.h"
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

}

void HelpProc::ViewAbout()
{
    AboutDialog aboutDialog;
    aboutDialog.Create(IDD_ABOUT);
}
