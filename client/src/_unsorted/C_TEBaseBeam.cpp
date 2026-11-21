// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100326a0 size=0x1e
#include "C_TEBaseBeam.h"

// VC6 writes C_TEBaseBeam's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBaseBeam *pcd_emit_100326a0() { return new C_TEBaseBeam; }

// TARGET: ??_GC_TEBaseBeam@@UAEPAXI@Z
// END FUNCTION
