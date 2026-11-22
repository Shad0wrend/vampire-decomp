// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013b10 size=0x1e
#include "C_OccultBloodBuff.h"

// VC6 writes C_OccultBloodBuff's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultBloodBuff *pcd_emit_10013b10() { return new C_OccultBloodBuff; }

// TARGET: ??_GC_OccultBloodBuff@@UAEPAXI@Z
// END FUNCTION
