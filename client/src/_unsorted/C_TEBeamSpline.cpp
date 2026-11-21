// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10033f30 size=0x1e
#include "C_TEBeamSpline.h"

// VC6 writes C_TEBeamSpline's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBeamSpline *pcd_emit_10033f30() { return new C_TEBeamSpline; }

// TARGET: ??_GC_TEBeamSpline@@UAEPAXI@Z
// END FUNCTION
