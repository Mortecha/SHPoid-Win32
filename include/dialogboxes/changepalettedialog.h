#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class ChangePaletteDialog : public BaseDialog<ChangePaletteDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // ABOUTDIALOG_H
