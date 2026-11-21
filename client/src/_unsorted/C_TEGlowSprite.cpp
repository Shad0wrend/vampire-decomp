// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10038650 size=0x1e
#include "C_TEGlowSprite.h"

// VC6 writes C_TEGlowSprite's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEGlowSprite *pcd_emit_10038650() { return new C_TEGlowSprite; }

// TARGET: ??_GC_TEGlowSprite@@UAEPAXI@Z
// END FUNCTION
