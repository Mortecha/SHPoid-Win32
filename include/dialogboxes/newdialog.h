#ifndef NEWDIALOG_H
#define NEWDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class NewDialog : public BaseDialog<NewDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // NEWDIALOG_H
