// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000c090 size=0x1e
#include "C_WeaponMelee_ManBatClaw.h"

// VC6 writes C_WeaponMelee_ManBatClaw's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_ManBatClaw *pcd_emit_1000c090() { return new C_WeaponMelee_ManBatClaw; }

// TARGET: ??_GC_WeaponMelee_ManBatClaw@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000c0c0 size=0x3
#include "C_WeaponMelee_ManBatClaw.h"
int C_WeaponMelee_ManBatClaw::vfunc15()
{
    return 0;
}
// END FUNCTION
