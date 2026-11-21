// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10017c10 size=0x1e
#include "C_ItemGCarStereo.h"

// VC6 writes C_ItemGCarStereo's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ItemGCarStereo *pcd_emit_10017c10() { return new C_ItemGCarStereo; }

// TARGET: ??_GC_ItemGCarStereo@@UAEPAXI@Z
// END FUNCTION
