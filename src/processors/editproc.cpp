#include "processors/editproc.h"
#include "dialogboxes/shpresizedialog.h"
#include "dialogboxes/canvasresizedialog.h"
#include "dialogboxes/rotatearbdialog.h"
#include "dialogboxes/transformdialog.h"

EditProc::EditProc()
{
    //ctor
}

EditProc::~EditProc()
{
    //dtor
}

void EditProc::Create(HWND hwnd, HINSTANCE hInstance)
{
    m_hwnd = hwnd;
    m_hInstance = hInstance;
}

void EditProc::Undo()
{

}

void EditProc::Redo()
{

}

void EditProc::Cut()
{

}

void EditProc::Copy()
{

}

void EditProc::Paste()
{

}

void EditProc::Clear()
{

}

void EditProc::ResizeShp()
{
    ShpResizeDialog dialog;
    dialog.Create(IDD_SHPRESIZE, m_hwnd);
}

void EditProc::ResizeCanvas()
{
    CanvasResizeDialog dialog(m_hwnd, m_hInstance);
    dialog.Create(IDD_CANVASRESIZE, m_hwnd);
}

void EditProc::Rot180()
{

}

void EditProc::Rot90CW()
{

}

void EditProc::Rot90CCW()
{

}

void EditProc::RotArb()
{
    RotateArbDialog dialog;
    dialog.Create(IDD_ROTATEARB, m_hwnd);
}

void EditProc::Transform()
{
    TransformDialog dialog;
    dialog.Create(IDD_ROTATEARB, m_hwnd);
}
