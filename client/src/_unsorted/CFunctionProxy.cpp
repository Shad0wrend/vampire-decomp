// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e3480 size=0x1e
#include "CFunctionProxy.h"

// VC6 writes CFunctionProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFunctionProxy *pcd_emit_100e3480() { return new CFunctionProxy; }

// TARGET: ??_GCFunctionProxy@@UAEPAXI@Z
// END FUNCTION
