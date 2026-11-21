// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10035260 size=0x1e
#include "C_TEBSPDecal.h"

// VC6 writes C_TEBSPDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBSPDecal *pcd_emit_10035260() { return new C_TEBSPDecal; }

// TARGET: ??_GC_TEBSPDecal@@UAEPAXI@Z
// END FUNCTION
