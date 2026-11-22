// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10009d00 size=0x6
#include "C_WeaponMelee_SeveredArm.h"
namespace lifted {
extern char g_102729f0;
}
int C_WeaponMelee_SeveredArm::vfunc17()
{
    return (int)&lifted::g_102729f0;
}
// END FUNCTION

// FUNCTION: 0x10009d90 size=0x1e
#include "C_WeaponMelee_SeveredArm.h"

// VC6 writes C_WeaponMelee_SeveredArm's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_SeveredArm *pcd_emit_10009d90() { return new C_WeaponMelee_SeveredArm; }

// TARGET: ??_GC_WeaponMelee_SeveredArm@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10009dc0 size=0x3
#include "C_WeaponMelee_SeveredArm.h"
int C_WeaponMelee_SeveredArm::vfunc15()
{
    return 0;
}
// END FUNCTION
