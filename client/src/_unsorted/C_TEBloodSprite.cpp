// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100341e0 size=0x1e
#include "C_TEBloodSprite.h"

// VC6 writes C_TEBloodSprite's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBloodSprite *pcd_emit_100341e0() { return new C_TEBloodSprite; }

// TARGET: ??_GC_TEBloodSprite@@UAEPAXI@Z
// END FUNCTION
