// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001db10 size=0x1e
#include "C_ItemGWarrClipboard.h"

// VC6 writes C_ItemGWarrClipboard's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGWarrClipboard *pcd_emit_1001db10() { return new C_ItemGWarrClipboard; }

// TARGET: ??_GC_ItemGWarrClipboard@@UAEPAXI@Z
// END FUNCTION
