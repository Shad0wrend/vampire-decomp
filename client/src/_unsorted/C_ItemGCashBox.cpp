// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017990 size=0x1e
#include "C_ItemGCashBox.h"

// VC6 writes C_ItemGCashBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGCashBox *pcd_emit_10017990() { return new C_ItemGCashBox; }

// TARGET: ??_GC_ItemGCashBox@@UAEPAXI@Z
// END FUNCTION
