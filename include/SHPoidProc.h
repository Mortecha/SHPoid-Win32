#ifndef SHPOIDPROC_H
#define SHPOIDPROC_H

#include "SHPoidBaseWindow.h"

class SHPoidProc : public SHPoidBaseWindow<SHPoidProc>
{
public:
    LPSTR ClassName() const { return (LPSTR)"SHPoidClass"; }
    LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // SHPOIDPROC_H
