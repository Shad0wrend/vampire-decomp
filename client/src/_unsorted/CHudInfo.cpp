// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10055a00 size=0x1e
#include "CHudInfo.h"

// VC6 writes CHudInfo's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudInfo *pcd_emit_10055a00() { return new CHudInfo; }

// TARGET: ??_GCHudInfo@@UAEPAXI@Z
// END FUNCTION
