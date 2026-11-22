// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bc0b0 size=0x1e
#include "C_HudCounter.h"

// VC6 writes C_HudCounter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_HudCounter *pcd_emit_100bc0b0() { return new C_HudCounter; }

// TARGET: ??_GC_HudCounter@@UAEPAXI@Z
// END FUNCTION
