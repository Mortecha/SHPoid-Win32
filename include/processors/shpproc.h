#ifndef SHPPROC_H
#define SHPPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class ShpProc
{
    public:
        ShpProc();
        virtual ~ShpProc();
        void Create(HWND hwnd, HINSTANCE hInstance);
        void ChangeType();
        void AutoselectType();
        void InsertFrame();
        void DeleteFrame();
        void PrevFrame();
        void NextFrame();
        void SplitFrames();
        void LoadPalette();
        void ChangePalette();
        void UpdatePalettes();
        void Sequence();
        void AutoShadows();
        void ConvertShadows();
        void FixShadows();
        void GenerateCameo();
    protected:
    private:
        HWND m_hwnd;
        HINSTANCE m_hInstance;

};

#endif // SHPPROC_H

