// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016b740 size=0x48
#include "VBarterUI.h"
struct VBarterChild { virtual ~VBarterChild(); };
// TARGET: ??1VBarterUI@@UAE@XZ
VBarterUI::~VBarterUI()
{
    sub_1016cdc0();
    VBarterChild *a = *(VBarterChild **)((char *)this + 0x4e0);
    if (a)
        delete a;
    VBarterChild *b = *(VBarterChild **)((char *)this + 0x4e4);
    if (b)
        delete b;
}
// END FUNCTION
