// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10020810 size=0x1e
#include "C_ItemGVVPhoto.h"

// VC6 writes C_ItemGVVPhoto's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGVVPhoto *pcd_emit_10020810() { return new C_ItemGVVPhoto; }

// TARGET: ??_GC_ItemGVVPhoto@@UAEPAXI@Z
// END FUNCTION
