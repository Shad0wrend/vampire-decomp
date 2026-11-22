// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10015d80 size=0x6
#include "C_WeaponIArmor_Body_Armor.h"
namespace lifted {
extern char g_1027325c;
}
int C_WeaponIArmor_Body_Armor::vfunc17()
{
    return (int)&lifted::g_1027325c;
}
// END FUNCTION

// FUNCTION: 0x10015e10 size=0x1e
#include "C_WeaponIArmor_Body_Armor.h"

// VC6 writes C_WeaponIArmor_Body_Armor's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIArmor_Body_Armor *pcd_emit_10015e10() { return new C_WeaponIArmor_Body_Armor; }

// TARGET: ??_GC_WeaponIArmor_Body_Armor@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10015e30 size=0x6
#include "C_WeaponIArmor_Body_Armor.h"
namespace lifted {
extern char g_10274828;
}
int C_WeaponIArmor_Body_Armor::vfunc16()
{
    return (int)&lifted::g_10274828;
}
// END FUNCTION

// FUNCTION: 0x10015e40 size=0x3
#include "C_WeaponIArmor_Body_Armor.h"
int C_WeaponIArmor_Body_Armor::vfunc15()
{
    return 0;
}
// END FUNCTION
