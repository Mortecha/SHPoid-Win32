#ifndef SHPRESIZEDIALOG_H
#define SHPRESIZEDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class ShpResizeDialog : public BaseDialog<ShpResizeDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // SHPRESIZEDIALOG_H
