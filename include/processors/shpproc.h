#ifndef SHPPROC_H
#define SHPPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class ShpProc
{
    public:
        ShpProc();
        virtual ~ShpProc();
        void ChangeType(HWND hwnd);
        void AutoselectType();
        void InsertFrame();
        void DeleteFrame();
        void PrevFrame();
        void NextFrame();
        void SplitFrames();
        void LoadPalette(HWND hwnd);
        void ChangePalette(HWND hwnd);
        void UpdatePalettes(HWND hwnd);
        void Sequence(HWND hwnd);
        void AutoShadows();
        void ConvertShadows();
        void FixShadows();
        void GenerateCameo(HWND hwnd);
    protected:
    private:

};

#endif // SHPPROC_H

