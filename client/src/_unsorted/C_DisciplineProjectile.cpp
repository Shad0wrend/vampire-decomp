// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10146550 size=0x1e
#include "C_DisciplineProjectile.h"

// VC6 writes C_DisciplineProjectile's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_DisciplineProjectile *pcd_emit_10146550() { return new C_DisciplineProjectile; }

// TARGET: ??_GC_DisciplineProjectile@@UAEPAXI@Z
// END FUNCTION
