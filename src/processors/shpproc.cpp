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

void ShpProc::ChangeType()
{
    ShpTypeDialog shpTypeDialog;
    shpTypeDialog.Create(IDD_SHPTYPE);
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


void ShpProc::ChangePalette()
{
    ChangePaletteDialog changePaletteDialog;
    changePaletteDialog.Create(IDD_CHANGEPALETTE);
}

void ShpProc::UpdatePalettes()
{
    UpdatePaletteDialog updatePaletteDialog;
    updatePaletteDialog.Create(IDD_UPDATEPALETTE);
}

void ShpProc::Sequence()
{
    EditSequenceDialog editSequenceDialog;
    editSequenceDialog.Create(IDD_EDITSEQUENCE);
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

void ShpProc::GenerateCameo()
{
    GenerateCameoDialog generateCameoDialog;
    generateCameoDialog.Create(IDD_GENERATECAMEO);
}
