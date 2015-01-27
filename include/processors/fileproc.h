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
    void Create(HWND hwnd, HINSTANCE hInstance);
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
    void Exit();
protected:
private:
    HWND m_hwnd;
    HINSTANCE m_hInstance;
};

#endif // FILEPROC_H
