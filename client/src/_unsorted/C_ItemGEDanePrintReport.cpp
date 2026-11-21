// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1001b090 size=0x1e
#include "C_ItemGEDanePrintReport.h"

// VC6 writes C_ItemGEDanePrintReport's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGEDanePrintReport *pcd_emit_1001b090() { return new C_ItemGEDanePrintReport; }

// TARGET: ??_GC_ItemGEDanePrintReport@@UAEPAXI@Z
// END FUNCTION
