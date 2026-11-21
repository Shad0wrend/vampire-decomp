// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10015410 size=0x1e
#include "C_WeaponIArmor_Lt_Cloth.h"

// VC6 writes C_WeaponIArmor_Lt_Cloth's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIArmor_Lt_Cloth *pcd_emit_10015410() { return new C_WeaponIArmor_Lt_Cloth; }

// TARGET: ??_GC_WeaponIArmor_Lt_Cloth@@UAEPAXI@Z
// END FUNCTION
