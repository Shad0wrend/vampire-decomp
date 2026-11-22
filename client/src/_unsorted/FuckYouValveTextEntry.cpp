// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10170e00 size=0x1e
#include "FuckYouValveTextEntry.h"

// VC6 writes FuckYouValveTextEntry's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
FuckYouValveTextEntry *pcd_emit_10170e00() { return new FuckYouValveTextEntry; }

// TARGET: ??_GFuckYouValveTextEntry@@UAEPAXI@Z
// END FUNCTION
