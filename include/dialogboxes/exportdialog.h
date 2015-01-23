#ifndef EXPORTDIALOG_H
#define EXPORTDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class ExportDialog : public BaseDialog<ExportDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // EXPORTDIALOG_H
