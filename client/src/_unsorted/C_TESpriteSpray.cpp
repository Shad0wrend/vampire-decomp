// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003f830 size=0x1e
#include "C_TESpriteSpray.h"

// VC6 writes C_TESpriteSpray's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TESpriteSpray *pcd_emit_1003f830() { return new C_TESpriteSpray; }

// TARGET: ??_GC_TESpriteSpray@@UAEPAXI@Z
// END FUNCTION
