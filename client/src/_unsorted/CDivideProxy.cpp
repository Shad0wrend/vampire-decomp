// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010cd90 size=0x1e
#include "CDivideProxy.h"

// VC6 writes CDivideProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDivideProxy *pcd_emit_1010cd90() { return new CDivideProxy; }

// TARGET: ??_GCDivideProxy@@UAEPAXI@Z
// END FUNCTION
