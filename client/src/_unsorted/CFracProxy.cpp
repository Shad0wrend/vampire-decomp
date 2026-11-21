// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010d440 size=0x1e
#include "CFracProxy.h"

// VC6 writes CFracProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFracProxy *pcd_emit_1010d440() { return new CFracProxy; }

// TARGET: ??_GCFracProxy@@UAEPAXI@Z
// END FUNCTION
