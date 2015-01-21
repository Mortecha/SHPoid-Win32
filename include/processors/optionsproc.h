#ifndef OPTIONSPROC_H
#define OPTIONSPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class OptionsProc
{
    public:
        OptionsProc();
        virtual ~OptionsProc();
        void ChangePreferences(HWND hwnd);
    protected:
    private:
};

#endif // OPTIONSPROC_H
