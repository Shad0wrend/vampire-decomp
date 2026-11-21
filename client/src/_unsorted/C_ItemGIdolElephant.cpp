// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001f190 size=0x1e
#include "C_ItemGIdolElephant.h"

// VC6 writes C_ItemGIdolElephant's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGIdolElephant *pcd_emit_1001f190() { return new C_ItemGIdolElephant; }

// TARGET: ??_GC_ItemGIdolElephant@@UAEPAXI@Z
// END FUNCTION
