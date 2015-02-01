#ifndef PREVIEWDIALOG_H
#define PREVIEWDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class PreviewDialog : public BaseDialog<PreviewDialog>
{
    public:
        INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // PREVIEWDIALOG_H
