// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10009580 size=0x6
#include "C_WeaponMelee_Sledgehammer.h"
namespace lifted {
extern char g_1027299c;
}
int C_WeaponMelee_Sledgehammer::vfunc17()
{
    return (int)&lifted::g_1027299c;
}
// END FUNCTION

// FUNCTION: 0x10009610 size=0x1e
#include "C_WeaponMelee_Sledgehammer.h"

// VC6 writes C_WeaponMelee_Sledgehammer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Sledgehammer *pcd_emit_10009610() { return new C_WeaponMelee_Sledgehammer; }

// TARGET: ??_GC_WeaponMelee_Sledgehammer@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10009640 size=0x3
#include "C_WeaponMelee_Sledgehammer.h"
int C_WeaponMelee_Sledgehammer::vfunc15()
{
    return 0;
}
// END FUNCTION
