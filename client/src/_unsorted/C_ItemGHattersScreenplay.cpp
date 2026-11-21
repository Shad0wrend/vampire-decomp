// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001d610 size=0x1e
#include "C_ItemGHattersScreenplay.h"

// VC6 writes C_ItemGHattersScreenplay's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGHattersScreenplay *pcd_emit_1001d610() { return new C_ItemGHattersScreenplay; }

// TARGET: ??_GC_ItemGHattersScreenplay@@UAEPAXI@Z
// END FUNCTION
