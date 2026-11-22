// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10038a00 size=0x1e
#include "C_TEGunshotDecal.h"

// VC6 writes C_TEGunshotDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEGunshotDecal *pcd_emit_10038a00() { return new C_TEGunshotDecal; }

// TARGET: ??_GC_TEGunshotDecal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100396f0 size=0x3
#include "C_TEGunshotDecal.h"
int C_TEGunshotDecal::vfunc8()
{
    return 0;
}
// END FUNCTION
