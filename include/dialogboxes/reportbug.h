#ifndef REPORTBUGDIALOG_H
#define REPORTBUGDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class ReportBugDialog : public BaseDialog<ReportBugDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // REPORTBUGDIALOG_H
