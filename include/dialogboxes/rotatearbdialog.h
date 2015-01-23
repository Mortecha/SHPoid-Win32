#ifndef ROTATEARBDIALOG_H
#define ROTATEARBDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class RotateArbDialog : public BaseDialog<RotateArbDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // ROTATEARBDIALOG_H
