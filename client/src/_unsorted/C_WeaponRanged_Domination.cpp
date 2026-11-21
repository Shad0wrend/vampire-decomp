// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100070b0 size=0x1e
#include "C_WeaponRanged_Domination.h"

// VC6 writes C_WeaponRanged_Domination's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Domination *pcd_emit_100070b0() { return new C_WeaponRanged_Domination; }

// TARGET: ??_GC_WeaponRanged_Domination@@UAEPAXI@Z
// END FUNCTION
