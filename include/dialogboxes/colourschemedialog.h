#ifndef COLOURSCHEMEDIALOG_H
#define COLOURSCHEMEDIALOG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "base/basedialog.h"
#include "resource.h"

class ColourSchemeDialog : public BaseDialog<ColourSchemeDialog>
{
public:
    INT_PTR HandleDialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // COLOURSCHEMEDIALOG_H
