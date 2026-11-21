// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10019510 size=0x1e
#include "C_ItemGBailbondReceipt.h"

// VC6 writes C_ItemGBailbondReceipt's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGBailbondReceipt *pcd_emit_10019510() { return new C_ItemGBailbondReceipt; }

// TARGET: ??_GC_ItemGBailbondReceipt@@UAEPAXI@Z
// END FUNCTION
