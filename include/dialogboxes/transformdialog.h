#ifndef TRANSFORMDIALOG_H
#define TRANSFORMDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class TransformDialog : public BaseDialog<TransformDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // TRANSFORMDIALOG_H
