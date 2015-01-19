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

void OptionsProc::ChangePreferences()
{
    PreferencesDialog preferencesDialog;
    preferencesDialog.Create(IDD_PREFERENCES);

}
