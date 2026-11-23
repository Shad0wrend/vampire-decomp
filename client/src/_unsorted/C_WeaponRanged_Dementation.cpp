// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007020 size=0x1e
#include "C_WeaponRanged_Dementation.h"

// VC6 writes C_WeaponRanged_Dementation's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Dementation *pcd_emit_10007020(const C_WeaponRanged_Dementation &other) { return new C_WeaponRanged_Dementation(other); }

// TARGET: ??_GC_WeaponRanged_Dementation@@UAEPAXI@Z
// END FUNCTION
