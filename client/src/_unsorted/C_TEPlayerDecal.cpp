// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003e7a0 size=0x1e
#include "C_TEPlayerDecal.h"

// VC6 writes C_TEPlayerDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEPlayerDecal *pcd_emit_1003e7a0() { return new C_TEPlayerDecal; }

// TARGET: ??_GC_TEPlayerDecal@@UAEPAXI@Z
// END FUNCTION
