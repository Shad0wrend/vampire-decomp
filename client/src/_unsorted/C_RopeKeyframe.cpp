// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100be2c0 size=0x3
#include "C_RopeKeyframe.h"
int C_RopeKeyframe::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bf130 size=0x1e
#include "C_RopeKeyframe.h"

// VC6 writes C_RopeKeyframe's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_RopeKeyframe *pcd_emit_100bf130() { return new C_RopeKeyframe; }

// TARGET: ??_GC_RopeKeyframe@@UAEPAXI@Z
// END FUNCTION
