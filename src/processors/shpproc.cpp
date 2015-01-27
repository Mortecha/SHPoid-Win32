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

void ShpProc::Create(HWND hwnd, HINSTANCE hInstance)
{
    m_hwnd = hwnd;
    m_hInstance = hInstance;
}

void ShpProc::ChangeType()
{
    ShpTypeDialog shpTypeDialog;
    shpTypeDialog.Create(IDD_SHPTYPE, m_hwnd);
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
    OPENFILENAME ofn;
    char szFileName[MAX_PATH] = "";
    ZeroMemory(&ofn, sizeof(ofn));

    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = m_hwnd;
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


void ShpProc::ChangePalette()
{
    ChangePaletteDialog changePaletteDialog;
    changePaletteDialog.Create(IDD_CHANGEPALETTE, m_hwnd);
}

void ShpProc::UpdatePalettes()
{
    UpdatePaletteDialog updatePaletteDialog;
    updatePaletteDialog.Create(IDD_UPDATEPALETTE, m_hwnd);
}

void ShpProc::Sequence()
{
    EditSequenceDialog editSequenceDialog;
    editSequenceDialog.Create(IDD_EDITSEQUENCE, m_hwnd);
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
    generateCameoDialog.Create(IDD_GENERATECAMEO, m_hwnd);
}
