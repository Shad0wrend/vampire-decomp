// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000e110 size=0x1e
#include "C_WeaponRanged_Pistol_Glock.h"

// VC6 writes C_WeaponRanged_Pistol_Glock's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Pistol_Glock *pcd_emit_1000e110() { return new C_WeaponRanged_Pistol_Glock; }

// TARGET: ??_GC_WeaponRanged_Pistol_Glock@@UAEPAXI@Z
// END FUNCTION
