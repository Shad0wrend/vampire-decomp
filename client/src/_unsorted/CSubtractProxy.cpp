// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010ca00 size=0x1e
#include "CSubtractProxy.h"

// VC6 writes CSubtractProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSubtractProxy *pcd_emit_1010ca00() { return new CSubtractProxy; }

// TARGET: ??_GCSubtractProxy@@UAEPAXI@Z
// END FUNCTION
