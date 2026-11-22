// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005e100 size=0x1e
#include "CHudUseIcon.h"

// VC6 writes CHudUseIcon's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudUseIcon *pcd_emit_1005e100() { return new CHudUseIcon; }

// TARGET: ??_GCHudUseIcon@@UAEPAXI@Z
// END FUNCTION
