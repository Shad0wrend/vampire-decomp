// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10124da0 size=0x1e
#include "CPlayerViewProxy.h"

// VC6 writes CPlayerViewProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPlayerViewProxy *pcd_emit_10124da0() { return new CPlayerViewProxy; }

// TARGET: ??_GCPlayerViewProxy@@UAEPAXI@Z
// END FUNCTION
