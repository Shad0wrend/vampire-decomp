// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100f19d0 size=0x1e
#include "CHudChat.h"

// VC6 writes CHudChat's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudChat *pcd_emit_100f19d0() { return new CHudChat; }

// TARGET: ??_GCHudChat@@UAEPAXI@Z
// END FUNCTION
