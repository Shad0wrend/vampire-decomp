// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013390 size=0x1e
#include "C_OccultDexterity.h"

// VC6 writes C_OccultDexterity's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultDexterity *pcd_emit_10013390() { return new C_OccultDexterity; }

// TARGET: ??_GC_OccultDexterity@@UAEPAXI@Z
// END FUNCTION
