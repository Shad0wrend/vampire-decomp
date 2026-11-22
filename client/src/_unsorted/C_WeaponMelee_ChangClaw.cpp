// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000ac90 size=0x1e
#include "C_WeaponMelee_ChangClaw.h"

// VC6 writes C_WeaponMelee_ChangClaw's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_ChangClaw *pcd_emit_1000ac90() { return new C_WeaponMelee_ChangClaw; }

// TARGET: ??_GC_WeaponMelee_ChangClaw@@UAEPAXI@Z
// END FUNCTION
