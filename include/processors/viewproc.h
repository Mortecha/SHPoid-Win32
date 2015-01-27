#ifndef VIEWPROC_H
#define VIEWPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class ViewProc
{
    public:
        ViewProc();
        virtual ~ViewProc();
        void Create(HWND hwnd, HINSTANCE hInstance);
        void ZoomIn();
        void ZoomOut();
        void Preview();
        void ShowCenter();
        void ShowGrid();
    protected:
    private:
        HWND m_hwnd;
        HINSTANCE m_hInstance;
};

#endif // VIEWPROC_H
