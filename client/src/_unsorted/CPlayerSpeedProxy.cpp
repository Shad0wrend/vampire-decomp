// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10124eb0 size=0x1e
#include "CPlayerSpeedProxy.h"

// VC6 writes CPlayerSpeedProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPlayerSpeedProxy *pcd_emit_10124eb0() { return new CPlayerSpeedProxy; }

// TARGET: ??_GCPlayerSpeedProxy@@UAEPAXI@Z
// END FUNCTION
