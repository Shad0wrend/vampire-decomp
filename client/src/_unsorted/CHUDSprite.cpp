// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10059330 size=0x1e
#include "CHUDSprite.h"

// VC6 writes CHUDSprite's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHUDSprite *pcd_emit_10059330() { return new CHUDSprite; }

// TARGET: ??_GCHUDSprite@@UAEPAXI@Z
// END FUNCTION
