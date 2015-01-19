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
    void New();
    void Open();
    void OpenRecent();
    void Close();
    void CloseAll();
    void Save();
    void SaveAs();
    void Batch();
    void SaveAll();
    void Import();
    void Export();
    void Exit(HWND hwnd);
protected:
private:
};

#endif // FILEPROC_H
