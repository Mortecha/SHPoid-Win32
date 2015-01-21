#ifndef FILEPROC_H
#define FILEPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>

class FileProc
{
public:
    FileProc();
    virtual ~FileProc();
    void New(HWND hwnd);
    void Open(HWND hwnd);
    void OpenRecent();
    void Close();
    void CloseAll();
    void Save();
    void SaveAs();
    void Batch(HWND hwnd);
    void SaveAll();
    void Import(HWND hwnd);
    void Export(HWND hwnd);
    void Exit(HWND hwnd);
protected:
private:
};

#endif // FILEPROC_H
