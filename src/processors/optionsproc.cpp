#include "processors/optionsproc.h"
#include "dialogboxes/preferencesdialog.h"

OptionsProc::OptionsProc()
{
    //ctor
}

OptionsProc::~OptionsProc()
{
    //dtor
}

void OptionsProc::ChangePreferences(HWND hwnd)
{
    PreferencesDialog preferencesDialog;
    preferencesDialog.Create(IDD_PREFERENCES, hwnd);

}
