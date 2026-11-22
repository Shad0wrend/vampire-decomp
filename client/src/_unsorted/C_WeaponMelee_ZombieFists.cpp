// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000c810 size=0x1e
#include "C_WeaponMelee_ZombieFists.h"

// VC6 writes C_WeaponMelee_ZombieFists's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_ZombieFists *pcd_emit_1000c810() { return new C_WeaponMelee_ZombieFists; }

// TARGET: ??_GC_WeaponMelee_ZombieFists@@UAEPAXI@Z
// END FUNCTION
