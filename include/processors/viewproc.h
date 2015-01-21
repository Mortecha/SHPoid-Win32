#ifndef VIEWPROC_H
#define VIEWPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class ViewProc
{
    public:
        ViewProc();
        virtual ~ViewProc();
        void ZoomIn();
        void ZoomOut();
        void Preview(HWND hwnd);
        void ShowCenter();
        void ShowGrid();
    protected:
    private:
};

#endif // VIEWPROC_H
