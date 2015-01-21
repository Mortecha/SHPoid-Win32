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

void EditProc::ResizeShp(HWND hwnd)
{
    ShpResizeDialog shpResizeDialog;
    shpResizeDialog.Create(IDD_SHPRESIZE, hwnd);
}

void EditProc::ResizeCanvas(HWND hwnd)
{
    CanvasResizeDialog canvasResizeDialog;
    canvasResizeDialog.Create(IDD_CANVASRESIZE, hwnd);
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

void EditProc::RotArb(HWND hwnd)
{
    RotateArbDialog rotateArbDialog;
    rotateArbDialog.Create(IDD_ROTATEARB, hwnd);
}

void EditProc::Transform(HWND hwnd)
{
    TransformDialog transformDialog;
    transformDialog.Create(IDD_ROTATEARB, hwnd);
}
