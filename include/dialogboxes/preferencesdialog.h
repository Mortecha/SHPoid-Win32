#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class PreferencesDialog : public BaseDialog<PreferencesDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // PREFERENCESDIALOG_H
