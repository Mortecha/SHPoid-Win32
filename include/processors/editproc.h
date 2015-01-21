#ifndef EDITPROC_H
#define EDITPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class EditProc
{
    public:
        EditProc();
        virtual ~EditProc();
        void Undo();
        void Redo();
        void Cut();
        void Copy();
        void Paste();
        void Clear();
        void ResizeShp(HWND hwnd);
        void ResizeCanvas(HWND hwnd);
        void Rot180();
        void Rot90CW();
        void Rot90CCW();
        void RotArb(HWND hwnd);
        void Transform(HWND hwnd);
    protected:
    private:
};

#endif // EDITPROC_H
