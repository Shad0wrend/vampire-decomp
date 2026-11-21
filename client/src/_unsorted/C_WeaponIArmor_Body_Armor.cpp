// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10015e10 size=0x1e
#include "C_WeaponIArmor_Body_Armor.h"

// VC6 writes C_WeaponIArmor_Body_Armor's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIArmor_Body_Armor *pcd_emit_10015e10() { return new C_WeaponIArmor_Body_Armor; }

// TARGET: ??_GC_WeaponIArmor_Body_Armor@@UAEPAXI@Z
// END FUNCTION
