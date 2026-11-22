// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017e90 size=0x1e
#include "C_ItemGGhostPendant.h"

// VC6 writes C_ItemGGhostPendant's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGhostPendant *pcd_emit_10017e90() { return new C_ItemGGhostPendant; }

// TARGET: ??_GC_ItemGGhostPendant@@UAEPAXI@Z
// END FUNCTION
