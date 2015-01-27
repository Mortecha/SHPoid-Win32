#define WIN32_LEAN_AND_MEAN
#include <windows.h>
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

void FileProc::Create(HWND hwnd, HINSTANCE hInstance)
{
    m_hwnd = hwnd;
    m_hInstance = hInstance;
}

void FileProc::New()
{
    NewDialog newDialog;
    newDialog.Create(IDD_NEW, m_hwnd);
}

void FileProc::Open()
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

void FileProc::Batch()
{
    BatchDialog dialog;
    dialog.Create(IDD_BATCH, m_hwnd);
}

void FileProc::Import()
{
    ImportDialog dialog;
    dialog.Create(IDD_IMPORT, m_hwnd);
}

void FileProc::Export()
{
    ExportDialog dialog;
    dialog.Create(IDD_EXPORT, m_hwnd);
}

void FileProc::Exit()
{
    PostMessage(m_hwnd, WM_CLOSE, 0, 0);
}

