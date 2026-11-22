// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10015600 size=0x6
#include "C_WeaponIArmor_Hvy_Cloth.h"
namespace lifted {
extern char g_10273208;
}
int C_WeaponIArmor_Hvy_Cloth::vfunc17()
{
    return (int)&lifted::g_10273208;
}
// END FUNCTION

// FUNCTION: 0x10015690 size=0x1e
#include "C_WeaponIArmor_Hvy_Cloth.h"

// VC6 writes C_WeaponIArmor_Hvy_Cloth's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIArmor_Hvy_Cloth *pcd_emit_10015690() { return new C_WeaponIArmor_Hvy_Cloth; }

// TARGET: ??_GC_WeaponIArmor_Hvy_Cloth@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100156b0 size=0x6
#include "C_WeaponIArmor_Hvy_Cloth.h"
namespace lifted {
extern char g_1027487c;
}
int C_WeaponIArmor_Hvy_Cloth::vfunc16()
{
    return (int)&lifted::g_1027487c;
}
// END FUNCTION

// FUNCTION: 0x100156c0 size=0x3
#include "C_WeaponIArmor_Hvy_Cloth.h"
int C_WeaponIArmor_Hvy_Cloth::vfunc15()
{
    return 0;
}
// END FUNCTION
