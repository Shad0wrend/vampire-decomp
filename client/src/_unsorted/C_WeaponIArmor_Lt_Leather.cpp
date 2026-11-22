// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10015910 size=0x1e
#include "C_WeaponIArmor_Lt_Leather.h"

// VC6 writes C_WeaponIArmor_Lt_Leather's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIArmor_Lt_Leather *pcd_emit_10015910() { return new C_WeaponIArmor_Lt_Leather; }

// TARGET: ??_GC_WeaponIArmor_Lt_Leather@@UAEPAXI@Z
// END FUNCTION
