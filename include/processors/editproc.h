#ifndef EDITPROC_H
#define EDITPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class EditProc
{
    public:
        EditProc();
        virtual ~EditProc();
        void Create(HWND hwnd, HINSTANCE hInstance);
        void Undo();
        void Redo();
        void Cut();
        void Copy();
        void Paste();
        void Clear();
        void ResizeShp();
        void ResizeCanvas();
        void Rot180();
        void Rot90CW();
        void Rot90CCW();
        void RotArb();
        void Transform();
    protected:
    private:
        HWND m_hwnd;
        HINSTANCE m_hInstance;
};

#endif // EDITPROC_H
