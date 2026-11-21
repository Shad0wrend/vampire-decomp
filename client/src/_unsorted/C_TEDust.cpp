// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bb390 size=0x1e
#include "C_TEDust.h"

// VC6 writes C_TEDust's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEDust *pcd_emit_100bb390() { return new C_TEDust; }

// TARGET: ??_GC_TEDust@@UAEPAXI@Z
// END FUNCTION
