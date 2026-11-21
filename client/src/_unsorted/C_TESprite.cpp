// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003f410 size=0x1e
#include "C_TESprite.h"

// VC6 writes C_TESprite's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TESprite *pcd_emit_1003f410() { return new C_TESprite; }

// TARGET: ??_GC_TESprite@@UAEPAXI@Z
// END FUNCTION
