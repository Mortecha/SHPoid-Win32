#ifndef FILTERSETTINGSDIALOG_H
#define FILTERSETTINGSDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class FilterSettingsDialog : public BaseDialog<FilterSettingsDialog>
{
    public:
        INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
    private:
        HWND m_hTabControl;
        HWND m_hCurrentTab;
};

#endif // FILTERSETTINGSDIALOG_H
