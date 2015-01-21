#define WIN32_LEAN_AND_MEAN
#include <windows.h>
//#include <windowsx.h>
#include <Commdlg.h>

#include "resource.h"
#include "processors/fileproc.h"
#include "dialogboxes/newdialog.h"
#include "dialogboxes/batchdialog.h"
#include "dialogboxes/importdialog.h"
#include "dialogboxes/exportdialog.h"

FileProc::FileProc()
{
    //ctor
}

FileProc::~FileProc()
{
    //dtor
}

void FileProc::New(HWND hwnd)
{
    NewDialog newDialog;
    newDialog.Create(IDD_NEW, hwnd);
}

void FileProc::Open(HWND hwnd)
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

void FileProc::OpenRecent()
{

}

void FileProc::Close()
{

}

void FileProc::CloseAll()
{

}

void FileProc::Save()
{

}

void FileProc::SaveAs()
{

}

void FileProc::SaveAll()
{

}

void FileProc::Batch(HWND hwnd)
{
    BatchDialog batchDialog;
    batchDialog.Create(IDD_BATCH, hwnd);
}

void FileProc::Import(HWND hwnd)
{
    ImportDialog importDialog;
    importDialog.Create(IDD_IMPORT, hwnd);
}

void FileProc::Export(HWND hwnd)
{
    ExportDialog exportDialog;
    exportDialog.Create(IDD_EXPORT, hwnd);
}

void FileProc::Exit(HWND hwnd)
{
    PostMessage(hwnd, WM_CLOSE, 0, 0);
}

