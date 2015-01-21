#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <Commdlg.h>

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

void ShpProc::LoadPalette(HWND hwnd)
{
    OPENFILENAME ofn;
    char szFileName[MAX_PATH] = "";
    ZeroMemory(&ofn, sizeof(ofn));

    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = hwnd;
    ofn.lpstrFilter = "Shp Files (*.shp)\0*.shp\0All Files (*.*)\0*.*\0";
    ofn.lpstrFile = szFileName;
    ofn.nMaxFile = MAX_PATH;
    ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
    ofn.lpstrDefExt = "shp";
    //ofn.

    if(GetOpenFileName(&ofn))
    {
         //do something with file
    }
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
