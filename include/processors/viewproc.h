#ifndef VIEWPROC_H
#define VIEWPROC_H


class ViewProc
{
    public:
        ViewProc();
        virtual ~ViewProc();
        void ZoomIn();
        void ZoomOut();
        void Preview();
        void ShowCenter();
        void ShowGrid();
    protected:
    private:
};

#endif // VIEWPROC_H
