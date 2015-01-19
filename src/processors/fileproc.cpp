#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "resource.h"
#include "processors/fileproc.h"

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

}

void FileProc::Import()
{

}

void FileProc::Export()
{

}

void FileProc::Exit(HWND hwnd)
{
    PostMessage(hwnd, WM_CLOSE, 0, 0);
}

