#ifndef EDITPROC_H
#define EDITPROC_H

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
        void ResizeShp();
        void ResizeCanvas();
        void Rot180();
        void Rot90CW();
        void Rot90CCW();
        void RotArb();
        void Transform();
    protected:
    private:
};

#endif // EDITPROC_H
