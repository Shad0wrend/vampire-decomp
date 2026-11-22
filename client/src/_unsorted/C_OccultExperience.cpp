// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10013890 size=0x1e
#include "C_OccultExperience.h"

// VC6 writes C_OccultExperience's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_OccultExperience *pcd_emit_10013890() { return new C_OccultExperience; }

// TARGET: ??_GC_OccultExperience@@UAEPAXI@Z
// END FUNCTION
