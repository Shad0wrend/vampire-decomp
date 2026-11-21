// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003da90 size=0x1e
#include "C_TEMuzzleFlash.h"

// VC6 writes C_TEMuzzleFlash's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEMuzzleFlash *pcd_emit_1003da90() { return new C_TEMuzzleFlash; }

// TARGET: ??_GC_TEMuzzleFlash@@UAEPAXI@Z
// END FUNCTION
