// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10015190 size=0x1e
#include "C_WeaponIArmor.h"

// VC6 writes C_WeaponIArmor's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIArmor *pcd_emit_10015190() { return new C_WeaponIArmor; }

// TARGET: ??_GC_WeaponIArmor@@UAEPAXI@Z
// END FUNCTION
