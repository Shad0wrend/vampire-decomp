// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100f0550 size=0x1e
#include "CHudElement.h"

// VC6 writes CHudElement's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudElement *pcd_emit_100f0550() { return new CHudElement; }

// TARGET: ??_GCHudElement@@UAEPAXI@Z
// END FUNCTION
