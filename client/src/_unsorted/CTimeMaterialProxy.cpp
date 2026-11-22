// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1013bae0 size=0x1e
#include "CTimeMaterialProxy.h"

// VC6 writes CTimeMaterialProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTimeMaterialProxy *pcd_emit_1013bae0() { return new CTimeMaterialProxy; }

// TARGET: ??_GCTimeMaterialProxy@@UAEPAXI@Z
// END FUNCTION
