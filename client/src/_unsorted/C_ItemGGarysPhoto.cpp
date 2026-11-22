// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001f910 size=0x1e
#include "C_ItemGGarysPhoto.h"

// VC6 writes C_ItemGGarysPhoto's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGGarysPhoto *pcd_emit_1001f910() { return new C_ItemGGarysPhoto; }

// TARGET: ??_GC_ItemGGarysPhoto@@UAEPAXI@Z
// END FUNCTION
