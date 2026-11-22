// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101250b0 size=0x1e
#include "CEntitySpeedProxy.h"

// VC6 writes CEntitySpeedProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEntitySpeedProxy *pcd_emit_101250b0() { return new CEntitySpeedProxy; }

// TARGET: ??_GCEntitySpeedProxy@@UAEPAXI@Z
// END FUNCTION
