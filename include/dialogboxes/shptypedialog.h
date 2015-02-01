#ifndef SHPTYPEDIALOG_H
#define SHPTYPEDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class ShpTypeDialog : public BaseDialog<ShpTypeDialog>
{
    public:
        INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // SHPTYPEDIALOG_H
