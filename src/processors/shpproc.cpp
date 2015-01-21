#include "processors/shpproc.h"
#include "dialogboxes/shptypedialog.h"
#include "dialogboxes/changepalettedialog.h"
#include "dialogboxes/updatepalettedialog.h"
#include "dialogboxes/editsequencedialog.h"
#include "dialogboxes/generatecameodialog.h"

ShpProc::ShpProc()
{
    //ctor
}

ShpProc::~ShpProc()
{
    //dtor
}

void ShpProc::ChangeType(HWND hwnd)
{
    ShpTypeDialog shpTypeDialog;
    shpTypeDialog.Create(IDD_SHPTYPE, hwnd);
}

void ShpProc::AutoselectType()
{

}

void ShpProc::InsertFrame()
{

}

void ShpProc::DeleteFrame()
{

}

void ShpProc::PrevFrame()
{

}

void ShpProc::NextFrame()
{

}

void ShpProc::SplitFrames()
{

}

void ShpProc::LoadPalette()
{

}


void ShpProc::ChangePalette(HWND hwnd)
{
    ChangePaletteDialog changePaletteDialog;
    changePaletteDialog.Create(IDD_CHANGEPALETTE, hwnd);
}

void ShpProc::UpdatePalettes(HWND hwnd)
{
    UpdatePaletteDialog updatePaletteDialog;
    updatePaletteDialog.Create(IDD_UPDATEPALETTE, hwnd);
}

void ShpProc::Sequence(HWND hwnd)
{
    EditSequenceDialog editSequenceDialog;
    editSequenceDialog.Create(IDD_EDITSEQUENCE, hwnd);
}

void ShpProc::AutoShadows()
{

}

void ShpProc::ConvertShadows()
{

}

void ShpProc::FixShadows()
{

}

void ShpProc::GenerateCameo(HWND hwnd)
{
    GenerateCameoDialog generateCameoDialog;
    generateCameoDialog.Create(IDD_GENERATECAMEO, hwnd);
}
