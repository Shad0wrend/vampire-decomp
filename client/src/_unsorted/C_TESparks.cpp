// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003f120 size=0x1e
#include "C_TESparks.h"

// VC6 writes C_TESparks's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TESparks *pcd_emit_1003f120() { return new C_TESparks; }

// TARGET: ??_GC_TESparks@@UAEPAXI@Z
// END FUNCTION
