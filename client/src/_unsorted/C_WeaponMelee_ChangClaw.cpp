// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000ac00 size=0x6
#include "C_WeaponMelee_ChangClaw.h"
namespace lifted {
extern char g_10272a98;
}
int C_WeaponMelee_ChangClaw::vfunc17()
{
    return (int)&lifted::g_10272a98;
}
// END FUNCTION

// FUNCTION: 0x1000ac90 size=0x1e
#include "C_WeaponMelee_ChangClaw.h"

// VC6 writes C_WeaponMelee_ChangClaw's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_ChangClaw *pcd_emit_1000ac90() { return new C_WeaponMelee_ChangClaw; }

// TARGET: ??_GC_WeaponMelee_ChangClaw@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000acc0 size=0x3
#include "C_WeaponMelee_ChangClaw.h"
int C_WeaponMelee_ChangClaw::vfunc15()
{
    return 0;
}
// END FUNCTION
