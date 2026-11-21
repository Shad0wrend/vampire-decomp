// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10152010 size=0x1e
#include "C_VampireProjectile.h"

// VC6 writes C_VampireProjectile's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_VampireProjectile *pcd_emit_10152010() { return new C_VampireProjectile; }

// TARGET: ??_GC_VampireProjectile@@UAEPAXI@Z
// END FUNCTION
