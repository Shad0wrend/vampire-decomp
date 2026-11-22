// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013d90 size=0x1e
#include "C_OccultDodge.h"

// VC6 writes C_OccultDodge's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultDodge *pcd_emit_10013d90() { return new C_OccultDodge; }

// TARGET: ??_GC_OccultDodge@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10013dc0 size=0x3
#include "C_OccultDodge.h"
int C_OccultDodge::vfunc15()
{
    return 0;
}
// END FUNCTION
