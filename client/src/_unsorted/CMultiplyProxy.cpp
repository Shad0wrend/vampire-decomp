// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010cbb0 size=0x1e
#include "CMultiplyProxy.h"

// VC6 writes CMultiplyProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMultiplyProxy *pcd_emit_1010cbb0() { return new CMultiplyProxy; }

// TARGET: ??_GCMultiplyProxy@@UAEPAXI@Z
// END FUNCTION
