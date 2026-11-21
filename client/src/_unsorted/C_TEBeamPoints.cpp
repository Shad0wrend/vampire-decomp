// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100334b0 size=0x1e
#include "C_TEBeamPoints.h"

// VC6 writes C_TEBeamPoints's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBeamPoints *pcd_emit_100334b0() { return new C_TEBeamPoints; }

// TARGET: ??_GC_TEBeamPoints@@UAEPAXI@Z
// END FUNCTION
