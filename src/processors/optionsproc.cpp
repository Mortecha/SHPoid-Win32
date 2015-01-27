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

void OptionsProc::Create(HWND hwnd, HINSTANCE hInstance)
{
    m_hwnd = hwnd;
    m_hInstance = hInstance;
}

void OptionsProc::ChangePreferences()
{
    PreferencesDialog preferencesDialog;
    preferencesDialog.Create(IDD_PREFERENCES, m_hwnd);
}
