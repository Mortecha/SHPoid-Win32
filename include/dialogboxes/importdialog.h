#ifndef IMPORTDIALOG_H
#define IMPORTDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class ImportDialog : public BaseDialog<ImportDialog>
{
    public:
        INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // IMPORTDIALOG_H
