#ifndef FILTERPROC_H
#define FILTERPROC_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

class FilterProc
{
    public:
        FilterProc();
        virtual ~FilterProc();
        void EditSettings(HWND hwnd);
        void ChangeColourScheme(HWND hwnd);
        void SmoothConservative();
        void SmoothPolyMean();
        void SmoothMeanMin();
        void SmoothMean3x3();
        void SmoothMean5x5();
        void SmoothMean7x7();
        void SmoothMeanSqrd3x3();
        void SmoothMeanSqrd5x5();
        void SmoothMeanSqrd7x7();
        void SmoothMedianMin();
        void SmoothMedian3x3();
        void SmoothMedian5x5();
        void SmoothMedian7x7();
        void ApplyUnsharpMask();
        void SharpenWeak();
        void SharpenStrong();
        void ApplyArithExp();
        void ApplyArithLog();
        void ApplyArithLogLight();
        void ApplyArithLogDark();
        void ApplyBasicTexture();
        void ApplyIceTexture();
        void ApplyWhiteTexture();
        void ApplyPetroTexture();
        void ApplyStonifyTexture();
        void ApplyRockTexture();
        void ButtonizeWeak();
        void ButtonizeStrong();
        void ButtonizeVeryStrong();
        void ApplyMess();
        void ApplySquareDepth();
        void ApplyXDepth();
        void ApplyUber();
        void ApplyUnfocus();
        void ApplyUnderline();
    protected:
    private:
};

#endif // FILTERPROC_H

