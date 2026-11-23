// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004c690 size=0x1e
#include "CBloodBar.h"

// VC6 writes CBloodBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CBloodBar *pcd_emit_1004c690() { return new CBloodBar; }

// TARGET: ??_GCBloodBar@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1004c770 size=0xb
#include "CBloodBar.h"
void CBloodBar::vfunc112()
{
    *(int *)((char *)this + 0x1d4) = 0;
}
// END FUNCTION

// FUNCTION: 0x1004d2f0 size=0x1
#include "CBloodBar.h"
void CBloodBar::vfunc97()
{
}
// END FUNCTION

// FUNCTION: 0x1004d390 size=0x27
#include "CBloodBar.h"
namespace lifted {
struct C1004d300 { int sub_1004d300(); };
struct C1004d460 { int sub_1004d460(); };
}
int CBloodBar::vfunc114(int a0)
{
    if ((*(int *)((char *)this + 0x190)) > a0) {
        ((lifted::C1004d460 *)this)->sub_1004d460();
    }
    *(int *)((char *)this + 0x190) = a0;
    return ((lifted::C1004d300 *)this)->sub_1004d300();
}
// END FUNCTION

// FUNCTION: 0x1004d3c0 size=0x27
#include "CBloodBar.h"
namespace lifted {
struct C1004d300 { int sub_1004d300(); };
struct C1004d460 { int sub_1004d460(); };
}
int CBloodBar::vfunc115(int a0)
{
    if ((*(int *)((char *)this + 0x194)) > a0) {
        ((lifted::C1004d460 *)this)->sub_1004d460();
    }
    *(int *)((char *)this + 0x194) = a0;
    return ((lifted::C1004d300 *)this)->sub_1004d300();
}
// END FUNCTION
