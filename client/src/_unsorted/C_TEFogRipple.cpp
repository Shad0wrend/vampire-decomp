// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10037310 size=0x1e
#include "C_TEFogRipple.h"

// VC6 writes C_TEFogRipple's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEFogRipple *pcd_emit_10037310() { return new C_TEFogRipple; }

// TARGET: ??_GC_TEFogRipple@@UAEPAXI@Z
// END FUNCTION
