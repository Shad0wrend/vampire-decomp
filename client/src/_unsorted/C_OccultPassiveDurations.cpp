// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10014290 size=0x1e
#include "C_OccultPassiveDurations.h"

// VC6 writes C_OccultPassiveDurations's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultPassiveDurations *pcd_emit_10014290() { return new C_OccultPassiveDurations; }

// TARGET: ??_GC_OccultPassiveDurations@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100142c0 size=0x3
#include "C_OccultPassiveDurations.h"
int C_OccultPassiveDurations::vfunc15()
{
    return 0;
}
// END FUNCTION
