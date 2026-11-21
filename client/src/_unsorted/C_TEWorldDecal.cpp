// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100410e0 size=0x1e
#include "C_TEWorldDecal.h"

// VC6 writes C_TEWorldDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEWorldDecal *pcd_emit_100410e0() { return new C_TEWorldDecal; }

// TARGET: ??_GC_TEWorldDecal@@UAEPAXI@Z
// END FUNCTION
