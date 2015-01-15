#ifndef SHPOIDPROC_H
#define SHPOIDPROC_H

#include "SHPoidBaseWindow.h"
#include "SHPoidGUI.h"

class SHPoidProc : public SHPoidBaseWindow<SHPoidProc>
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
};

#endif // SHPOIDPROC_H
