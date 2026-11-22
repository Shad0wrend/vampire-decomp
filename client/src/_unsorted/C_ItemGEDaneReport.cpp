// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001b310 size=0x1e
#include "C_ItemGEDaneReport.h"

// VC6 writes C_ItemGEDaneReport's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGEDaneReport *pcd_emit_1001b310() { return new C_ItemGEDaneReport; }

// TARGET: ??_GC_ItemGEDaneReport@@UAEPAXI@Z
// END FUNCTION
