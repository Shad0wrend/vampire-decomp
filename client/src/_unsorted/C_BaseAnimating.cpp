// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10002690 size=0x1
#include "C_BaseAnimating.h"
void C_BaseAnimating::vfunc141()
{
}
// END FUNCTION

// FUNCTION: 0x1008edd0 size=0x3
#include "C_BaseAnimating.h"
int C_BaseAnimating::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1008f5a0 size=0x1e
#include "C_BaseAnimating.h"

// VC6 writes C_BaseAnimating's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseAnimating *pcd_emit_1008f5a0() { return new C_BaseAnimating; }

// TARGET: ??_GC_BaseAnimating@@UAEPAXI@Z
// END FUNCTION
