// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000d990 size=0x1e
#include "C_WeaponRanged_Rifle_Crossbow.h"

// VC6 writes C_WeaponRanged_Rifle_Crossbow's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_Crossbow *pcd_emit_1000d990() { return new C_WeaponRanged_Rifle_Crossbow; }

// TARGET: ??_GC_WeaponRanged_Rifle_Crossbow@@UAEPAXI@Z
// END FUNCTION
