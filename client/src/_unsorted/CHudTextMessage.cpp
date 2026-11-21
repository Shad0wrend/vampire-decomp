// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10139d20 size=0x1e
#include "CHudTextMessage.h"

// VC6 writes CHudTextMessage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudTextMessage *pcd_emit_10139d20() { return new CHudTextMessage; }

// TARGET: ??_GCHudTextMessage@@UAEPAXI@Z
// END FUNCTION
