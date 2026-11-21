// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013610 size=0x1e
#include "C_OccultStrength.h"

// VC6 writes C_OccultStrength's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultStrength *pcd_emit_10013610() { return new C_OccultStrength; }

// TARGET: ??_GC_OccultStrength@@UAEPAXI@Z
// END FUNCTION
