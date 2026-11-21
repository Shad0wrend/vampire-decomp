// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100eea60 size=0x1e
#include "GlobalWetnessProxy.h"

// VC6 writes GlobalWetnessProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
GlobalWetnessProxy *pcd_emit_100eea60() { return new GlobalWetnessProxy; }

// TARGET: ??_GGlobalWetnessProxy@@UAEPAXI@Z
// END FUNCTION
