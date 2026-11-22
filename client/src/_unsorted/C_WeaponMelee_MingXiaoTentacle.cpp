// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000c500 size=0x6
#include "C_WeaponMelee_MingXiaoTentacle.h"
namespace lifted {
extern char g_10272bb0;
}
int C_WeaponMelee_MingXiaoTentacle::vfunc17()
{
    return (int)&lifted::g_10272bb0;
}
// END FUNCTION

// FUNCTION: 0x1000c590 size=0x1e
#include "C_WeaponMelee_MingXiaoTentacle.h"

// VC6 writes C_WeaponMelee_MingXiaoTentacle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_MingXiaoTentacle *pcd_emit_1000c590() { return new C_WeaponMelee_MingXiaoTentacle; }

// TARGET: ??_GC_WeaponMelee_MingXiaoTentacle@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000c5c0 size=0x3
#include "C_WeaponMelee_MingXiaoTentacle.h"
int C_WeaponMelee_MingXiaoTentacle::vfunc15()
{
    return 0;
}
// END FUNCTION
