// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100561d0 size=0x1e
#include "CHudInfoBar.h"

// VC6 writes CHudInfoBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudInfoBar *pcd_emit_100561d0() { return new CHudInfoBar; }

// TARGET: ??_GCHudInfoBar@@UAEPAXI@Z
// END FUNCTION
