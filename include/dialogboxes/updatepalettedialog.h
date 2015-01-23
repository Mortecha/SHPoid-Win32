#ifndef UPDATEPALETTEDIALOG_H
#define UPDATEPALETTEDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class UpdatePaletteDialog : public BaseDialog<UpdatePaletteDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // UPDATEPALETTEDIALOG_H
