#ifndef OPTIONSPROC_H
#define OPTIONSPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class OptionsProc
{
    public:
        OptionsProc();
        virtual ~OptionsProc();
        void Create(HWND hwnd, HINSTANCE hInstance);
        void ChangePreferences();
    protected:
    private:
        HWND m_hwnd;
        HINSTANCE m_hInstance;
};

#endif // OPTIONSPROC_H
