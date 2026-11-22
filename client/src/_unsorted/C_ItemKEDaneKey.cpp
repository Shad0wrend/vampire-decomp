// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10023790 size=0x1e
#include "C_ItemKEDaneKey.h"

// VC6 writes C_ItemKEDaneKey's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemKEDaneKey *pcd_emit_10023790() { return new C_ItemKEDaneKey; }

// TARGET: ??_GC_ItemKEDaneKey@@UAEPAXI@Z
// END FUNCTION
