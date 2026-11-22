// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010db00 size=0x1e
#include "CAbsProxy.h"

// VC6 writes CAbsProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CAbsProxy *pcd_emit_1010db00() { return new CAbsProxy; }

// TARGET: ??_GCAbsProxy@@UAEPAXI@Z
// END FUNCTION
