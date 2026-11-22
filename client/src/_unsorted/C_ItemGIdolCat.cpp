// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001ea10 size=0x1e
#include "C_ItemGIdolCat.h"

// VC6 writes C_ItemGIdolCat's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGIdolCat *pcd_emit_1001ea10() { return new C_ItemGIdolCat; }

// TARGET: ??_GC_ItemGIdolCat@@UAEPAXI@Z
// END FUNCTION
