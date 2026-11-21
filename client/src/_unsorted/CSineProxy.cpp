// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010d1b0 size=0x1e
#include "CSineProxy.h"

// VC6 writes CSineProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSineProxy *pcd_emit_1010d1b0() { return new CSineProxy; }

// TARGET: ??_GCSineProxy@@UAEPAXI@Z
// END FUNCTION
