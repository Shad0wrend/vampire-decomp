// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10015880 size=0x6
#include "C_WeaponIArmor_Lt_Leather.h"
namespace lifted {
extern char g_10273224;
}
int C_WeaponIArmor_Lt_Leather::vfunc17()
{
    return (int)&lifted::g_10273224;
}
// END FUNCTION

// FUNCTION: 0x10015910 size=0x1e
#include "C_WeaponIArmor_Lt_Leather.h"

// VC6 writes C_WeaponIArmor_Lt_Leather's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIArmor_Lt_Leather *pcd_emit_10015910() { return new C_WeaponIArmor_Lt_Leather; }

// TARGET: ??_GC_WeaponIArmor_Lt_Leather@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10015940 size=0x3
#include "C_WeaponIArmor_Lt_Leather.h"
int C_WeaponIArmor_Lt_Leather::vfunc15()
{
    return 0;
}
// END FUNCTION
