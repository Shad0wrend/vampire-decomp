// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10033820 size=0x1e
#include "C_TEBeamRing.h"

// VC6 writes C_TEBeamRing's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBeamRing *pcd_emit_10033820() { return new C_TEBeamRing; }

// TARGET: ??_GC_TEBeamRing@@UAEPAXI@Z
// END FUNCTION
