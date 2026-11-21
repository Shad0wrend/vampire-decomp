// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10026210 size=0x1e
#include "C_ItemKHitmanJiKey.h"

// VC6 writes C_ItemKHitmanJiKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKHitmanJiKey *pcd_emit_10026210() { return new C_ItemKHitmanJiKey; }

// TARGET: ??_GC_ItemKHitmanJiKey@@UAEPAXI@Z
// END FUNCTION
