// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10015100 size=0x6
#include "C_WeaponIArmor.h"
namespace lifted {
extern char g_102731d0;
}
int C_WeaponIArmor::vfunc17()
{
    return (int)&lifted::g_102731d0;
}
// END FUNCTION

// FUNCTION: 0x10015190 size=0x1e
#include "C_WeaponIArmor.h"

// VC6 writes C_WeaponIArmor's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIArmor *pcd_emit_10015190() { return new C_WeaponIArmor; }

// TARGET: ??_GC_WeaponIArmor@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100151c0 size=0x3
#include "C_WeaponIArmor.h"
int C_WeaponIArmor::vfunc15()
{
    return 0;
}
// END FUNCTION
