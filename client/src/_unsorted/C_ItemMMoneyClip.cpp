// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10010410 size=0x1e
#include "C_ItemMMoneyClip.h"

// VC6 writes C_ItemMMoneyClip's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemMMoneyClip *pcd_emit_10010410() { return new C_ItemMMoneyClip; }

// TARGET: ??_GC_ItemMMoneyClip@@UAEPAXI@Z
// END FUNCTION
