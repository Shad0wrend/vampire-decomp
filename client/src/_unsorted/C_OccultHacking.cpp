// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10012710 size=0x1e
#include "C_OccultHacking.h"

// VC6 writes C_OccultHacking's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultHacking *pcd_emit_10012710() { return new C_OccultHacking; }

// TARGET: ??_GC_OccultHacking@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10012740 size=0x3
#include "C_OccultHacking.h"
int C_OccultHacking::vfunc15()
{
    return 0;
}
// END FUNCTION
