// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010da60 size=0x1e
#include "CExponentialProxy.h"

// VC6 writes CExponentialProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CExponentialProxy *pcd_emit_1010da60() { return new CExponentialProxy; }

// TARGET: ??_GCExponentialProxy@@UAEPAXI@Z
// END FUNCTION
