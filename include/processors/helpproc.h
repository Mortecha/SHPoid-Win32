#ifndef HELPPROC_H
#define HELPPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class HelpProc
{
    public:
        HelpProc();
        virtual ~HelpProc();
        void Create(HWND hwnd, HINSTANCE hInstance);
        void ViewHelp();
        void ReportBug();
        void ViewAbout();
    protected:
    private:
        HWND m_hwnd;
        HINSTANCE m_hInstance;
};

#endif // HELPPROC_H
