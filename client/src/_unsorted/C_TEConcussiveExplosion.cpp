// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007330 size=0x1e
#include "C_TEConcussiveExplosion.h"

// VC6 writes C_TEConcussiveExplosion's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEConcussiveExplosion *pcd_emit_10007330() { return new C_TEConcussiveExplosion; }

// TARGET: ??_GC_TEConcussiveExplosion@@UAEPAXI@Z
// END FUNCTION
