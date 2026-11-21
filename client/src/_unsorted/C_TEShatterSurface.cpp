// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10037d20 size=0x1e
#include "C_TEShatterSurface.h"

// VC6 writes C_TEShatterSurface's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEShatterSurface *pcd_emit_10037d20() { return new C_TEShatterSurface; }

// TARGET: ??_GC_TEShatterSurface@@UAEPAXI@Z
// END FUNCTION
