#include "processors/filterproc.h"
#include "dialogboxes/filtersettingsdialog.h"
#include "dialogboxes/colourschemedialog.h"

FilterProc::FilterProc()
{
    //ctor
}

FilterProc::~FilterProc()
{
    //dtor
}

void FilterProc::Create(HWND hwnd, HINSTANCE hInstance)
{
    m_hwnd = hwnd;
    m_hInstance = hInstance;
}

void FilterProc::EditSettings()
{
    FilterSettingsDialog filterSettingsDialog;
    filterSettingsDialog.Create(IDD_FILTERSETTINGS, m_hwnd);
}

void FilterProc::ChangeColourScheme()
{
    ColourSchemeDialog colourSchemeDialog;
    colourSchemeDialog.Create(IDD_COLOURSCHEME, m_hwnd);
}

void FilterProc::SmoothConservative()
{

}

void FilterProc::SmoothPolyMean()
{

}

void FilterProc::SmoothMeanMin()
{

}

void FilterProc::SmoothMean3x3()
{

}

void FilterProc::SmoothMean5x5()
{

}

void FilterProc::SmoothMean7x7()
{

}

void FilterProc::SmoothMeanSqrd3x3()
{

}

void FilterProc::SmoothMeanSqrd5x5()
{

}

void FilterProc::SmoothMeanSqrd7x7()
{

}

void FilterProc::SmoothMedianMin()
{

}

void FilterProc::SmoothMedian3x3()
{

}

void FilterProc::SmoothMedian5x5()
{

}

void FilterProc::SmoothMedian7x7()
{

}

void FilterProc::ApplyUnsharpMask()
{

}

void FilterProc::SharpenWeak()
{

}

void FilterProc::SharpenStrong()
{

}

void FilterProc::ApplyArithExp()
{

}

void FilterProc::ApplyArithLog()
{

}

void FilterProc::ApplyArithLogLight()
{

}

void FilterProc::ApplyArithLogDark()
{

}

void FilterProc::ApplyBasicTexture()
{

}

void FilterProc::ApplyIceTexture()
{

}

void FilterProc::ApplyWhiteTexture()
{

}

void FilterProc::ApplyPetroTexture()
{

}

void FilterProc::ApplyStonifyTexture()
{

}

void FilterProc::ApplyRockTexture()
{

}

void FilterProc::ButtonizeWeak()
{

}

void FilterProc::ButtonizeStrong()
{

}

void FilterProc::ButtonizeVeryStrong()
{

}

void FilterProc::ApplyMess()
{

}

void FilterProc::ApplySquareDepth()
{

}

void FilterProc::ApplyXDepth()
{

}

void FilterProc::ApplyUber()
{

}

void FilterProc::ApplyUnfocus()
{

}

void FilterProc::ApplyUnderline()
{

}
