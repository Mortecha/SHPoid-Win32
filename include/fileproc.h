#ifndef FILEPROC_H
#define FILEPROC_H

#include <windows.h>
#include <windowsx.h>

class FileProc
{
    public:
        FileProc();
        virtual ~FileProc();
        void New();
        void Open();
        void Close();
        void Save();
        void SaveAs();
        void SaveAll();
        void Import();
        void Export();
        void Exit(HWND hwnd);
    protected:
    private:
};

#endif // FILEPROC_H
