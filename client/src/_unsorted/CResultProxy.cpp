// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e32e0 size=0x1e
#include "CResultProxy.h"

// VC6 writes CResultProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CResultProxy *pcd_emit_100e32e0() { return new CResultProxy; }

// TARGET: ??_GCResultProxy@@UAEPAXI@Z
// END FUNCTION
