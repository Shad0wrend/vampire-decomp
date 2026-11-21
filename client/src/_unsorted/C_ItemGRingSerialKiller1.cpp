// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020090 size=0x1e
#include "C_ItemGRingSerialKiller1.h"

// VC6 writes C_ItemGRingSerialKiller1's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGRingSerialKiller1 *pcd_emit_10020090() { return new C_ItemGRingSerialKiller1; }

// TARGET: ??_GC_ItemGRingSerialKiller1@@UAEPAXI@Z
// END FUNCTION
