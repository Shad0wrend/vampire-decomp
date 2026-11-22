// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10063980 size=0x1e
#include "CTargeted.h"

// VC6 writes CTargeted's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTargeted *pcd_emit_10063980() { return new CTargeted; }

// TARGET: ??_GCTargeted@@UAEPAXI@Z
// END FUNCTION
