// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10124fd0 size=0x1e
#include "CPlayerPositionProxy.h"

// VC6 writes CPlayerPositionProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPlayerPositionProxy *pcd_emit_10124fd0() { return new CPlayerPositionProxy; }

// TARGET: ??_GCPlayerPositionProxy@@UAEPAXI@Z
// END FUNCTION
