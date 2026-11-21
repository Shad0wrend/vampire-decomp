// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010d2c0 size=0x1e
#include "CEqualsProxy.h"

// VC6 writes CEqualsProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEqualsProxy *pcd_emit_1010d2c0() { return new CEqualsProxy; }

// TARGET: ??_GCEqualsProxy@@UAEPAXI@Z
// END FUNCTION
