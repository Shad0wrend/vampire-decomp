// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10124c30 size=0x1e
#include "CPlayerProximityProxy.h"

// VC6 writes CPlayerProximityProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPlayerProximityProxy *pcd_emit_10124c30() { return new CPlayerProximityProxy; }

// TARGET: ??_GCPlayerProximityProxy@@UAEPAXI@Z
// END FUNCTION
