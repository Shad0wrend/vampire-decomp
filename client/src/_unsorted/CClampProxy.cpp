// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010cff0 size=0x1e
#include "CClampProxy.h"

// VC6 writes CClampProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CClampProxy *pcd_emit_1010cff0() { return new CClampProxy; }

// TARGET: ??_GCClampProxy@@UAEPAXI@Z
// END FUNCTION
