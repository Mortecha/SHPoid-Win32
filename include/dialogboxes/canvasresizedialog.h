#ifndef CANVASRESIZEDIALOG_H
#define CANVASRESIZEDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class CanvasResizeDialog : public BaseDialog<CanvasResizeDialog>
{
public:
    CanvasResizeDialog(HWND hwndParent, HINSTANCE hInstance);
    void CreateDialogComponents();
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // CANVASRESIZEDIALOG_H
