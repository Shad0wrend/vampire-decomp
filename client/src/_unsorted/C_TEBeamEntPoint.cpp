// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10032a20 size=0x1e
#include "C_TEBeamEntPoint.h"

// VC6 writes C_TEBeamEntPoint's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBeamEntPoint *pcd_emit_10032a20() { return new C_TEBeamEntPoint; }

// TARGET: ??_GC_TEBeamEntPoint@@UAEPAXI@Z
// END FUNCTION
