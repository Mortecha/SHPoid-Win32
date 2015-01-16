#include "fileproc.h"

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

void FileProc::Close()
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
