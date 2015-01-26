#ifndef HELPPROC_H
#define HELPPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class HelpProc
{
    public:
        HelpProc();
        virtual ~HelpProc();
        void ViewHelp();
        void ReportBug(HWND hwnd);
        void ViewAbout(HWND hwnd, HINSTANCE hInstance);
    protected:
    private:
};

#endif // HELPPROC_H
