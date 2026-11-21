// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010dda0 size=0x1e
#include "CLessOrEqualProxy.h"

// VC6 writes CLessOrEqualProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLessOrEqualProxy *pcd_emit_1010dda0() { return new CLessOrEqualProxy; }

// TARGET: ??_GCLessOrEqualProxy@@UAEPAXI@Z
// END FUNCTION
