// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010e540 size=0x1e
#include "CHudMessage.h"

// VC6 writes CHudMessage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudMessage *pcd_emit_1010e540() { return new CHudMessage; }

// TARGET: ??_GCHudMessage@@UAEPAXI@Z
// END FUNCTION
