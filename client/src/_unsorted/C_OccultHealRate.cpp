// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10014510 size=0x1e
#include "C_OccultHealRate.h"

// VC6 writes C_OccultHealRate's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultHealRate *pcd_emit_10014510() { return new C_OccultHealRate; }

// TARGET: ??_GC_OccultHealRate@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10014540 size=0x3
#include "C_OccultHealRate.h"
int C_OccultHealRate::vfunc15()
{
    return 0;
}
// END FUNCTION
