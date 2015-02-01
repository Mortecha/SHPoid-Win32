#ifndef GENERATECAMEODIALOG_H
#define GENERATECAMEODIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class GenerateCameoDialog : public BaseDialog<GenerateCameoDialog>
{
    public:
        INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // GENERATECAMEODIALOG_H
