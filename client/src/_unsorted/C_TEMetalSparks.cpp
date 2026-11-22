// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100321c0 size=0x1e
#include "C_TEMetalSparks.h"

// VC6 writes C_TEMetalSparks's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEMetalSparks *pcd_emit_100321c0() { return new C_TEMetalSparks; }

// TARGET: ??_GC_TEMetalSparks@@UAEPAXI@Z
// END FUNCTION
