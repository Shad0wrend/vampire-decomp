// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b7760 size=0x1e
#include "C_BreakableSurface.h"

// VC6 writes C_BreakableSurface's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BreakableSurface *pcd_emit_100b7760() { return new C_BreakableSurface; }

// TARGET: ??_GC_BreakableSurface@@UAEPAXI@Z
// END FUNCTION
