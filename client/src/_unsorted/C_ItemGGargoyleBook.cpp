// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020590 size=0x1e
#include "C_ItemGGargoyleBook.h"

// VC6 writes C_ItemGGargoyleBook's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGargoyleBook *pcd_emit_10020590() { return new C_ItemGGargoyleBook; }

// TARGET: ??_GC_ItemGGargoyleBook@@UAEPAXI@Z
// END FUNCTION
