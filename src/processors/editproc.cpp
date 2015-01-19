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

void EditProc::ResizeShp()
{
    ShpResizeDialog shpResizeDialog;
    shpResizeDialog.Create(IDD_SHPRESIZE);
}

void EditProc::ResizeCanvas()
{
    CanvasResizeDialog canvasResizeDialog;
    canvasResizeDialog.Create(IDD_CANVASRESIZE);
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
    RotateArbDialog rotateArbDialog;
    rotateArbDialog.Create(IDD_ROTATEARB);
}

void EditProc::Transform()
{
    TransformDialog transformDialog;
    transformDialog.Create(IDD_ROTATEARB);
}
