#ifndef BATCHDIALOG_H
#define BATCHDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class BatchDialog : public BaseDialog<BatchDialog>
{
    public:
        INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // BATCHDIALOG_H
