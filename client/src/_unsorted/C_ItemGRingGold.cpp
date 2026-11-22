// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10018390 size=0x1e
#include "C_ItemGRingGold.h"

// VC6 writes C_ItemGRingGold's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGRingGold *pcd_emit_10018390() { return new C_ItemGRingGold; }

// TARGET: ??_GC_ItemGRingGold@@UAEPAXI@Z
// END FUNCTION
