// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010d570 size=0x1e
#include "CLinearRampProxy.h"

// VC6 writes CLinearRampProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLinearRampProxy *pcd_emit_1010d570() { return new CLinearRampProxy; }

// TARGET: ??_GCLinearRampProxy@@UAEPAXI@Z
// END FUNCTION
