// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000d210 size=0x1e
#include "C_WeaponMelee_Sheriff_Sword.h"

// VC6 writes C_WeaponMelee_Sheriff_Sword's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Sheriff_Sword *pcd_emit_1000d210() { return new C_WeaponMelee_Sheriff_Sword; }

// TARGET: ??_GC_WeaponMelee_Sheriff_Sword@@UAEPAXI@Z
// END FUNCTION
