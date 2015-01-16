#ifndef SHPOIDPROC_H
#define SHPOIDPROC_H

#include "base/basewindow.h"
#include "shpoidgui.h"
#include "processors/fileproc.h"
#include "processors/editproc.h"
#include "processors/shpproc.h"
#include "processors/filterproc.h"
#include "processors/viewproc.h"
#include "processors/optionsproc.h"
#include "processors/helpproc.h"

class SHPoidProc : public BaseWindow<SHPoidProc>
{
public:
    LPSTR ClassName() const { return (LPSTR)"SHPoidClass"; }
    BOOL OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct);
    void OnSize(HWND hWnd, UINT state, int cx, int cy);
    void OnPaint(HWND hwnd);
    void OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT code);
    void OnClose(HWND hwnd);
    void OnDestroy(HWND hwnd);
    LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
    SHPoidGUI m_SHPoidGUI;
    FileProc m_FileProc;
    EditProc m_EditProc;
    ShpProc m_ShpProc;
    FilterProc m_FilterProc;
    ViewProc m_ViewProc;
    OptionsProc m_OptionsProc;
    HelpProc m_HelpProc;
};

#endif // SHPOIDPROC_H
