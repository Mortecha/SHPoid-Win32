#define WIN32_LEAN_AND_MEAN
#include <windows.h>
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

void FileProc::New()
{
    NewDialog newDialog;
    newDialog.Create(IDD_NEW);
}

void FileProc::Open()
{

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
    BatchDialog batchDialog;
    batchDialog.Create(IDD_BATCH);
}

void FileProc::Import()
{
    ImportDialog importDialog;
    importDialog.Create(IDD_IMPORT);
}

void FileProc::Export()
{
    ExportDialog exportDialog;
    exportDialog.Create(IDD_EXPORT);
}

void FileProc::Exit(HWND hwnd)
{
    PostMessage(hwnd, WM_CLOSE, 0, 0);
}

