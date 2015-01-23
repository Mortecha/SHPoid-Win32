#ifndef EDITSEQUENCEDIALOG_H
#define EDITSEQUENCEDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class EditSequenceDialog : public BaseDialog<EditSequenceDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // EDITSEQUENCEDIALOG_H
