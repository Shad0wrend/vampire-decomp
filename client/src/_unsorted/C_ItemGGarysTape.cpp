// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001fb90 size=0x1e
#include "C_ItemGGarysTape.h"

// VC6 writes C_ItemGGarysTape's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGarysTape *pcd_emit_1001fb90() { return new C_ItemGGarysTape; }

// TARGET: ??_GC_ItemGGarysTape@@UAEPAXI@Z
// END FUNCTION
