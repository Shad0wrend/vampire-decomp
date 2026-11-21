// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010c850 size=0x1e
#include "CAddProxy.h"

// VC6 writes CAddProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CAddProxy *pcd_emit_1010c850() { return new CAddProxy; }

// TARGET: ??_GCAddProxy@@UAEPAXI@Z
// END FUNCTION
