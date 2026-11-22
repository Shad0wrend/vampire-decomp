// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000d900 size=0x6
#include "C_WeaponRanged_Rifle_Crossbow.h"
namespace lifted {
extern char g_10272c90;
}
int C_WeaponRanged_Rifle_Crossbow::vfunc17()
{
    return (int)&lifted::g_10272c90;
}
// END FUNCTION

// FUNCTION: 0x1000d990 size=0x1e
#include "C_WeaponRanged_Rifle_Crossbow.h"

// VC6 writes C_WeaponRanged_Rifle_Crossbow's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_Crossbow *pcd_emit_1000d990() { return new C_WeaponRanged_Rifle_Crossbow; }

// TARGET: ??_GC_WeaponRanged_Rifle_Crossbow@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000d9b0 size=0x6
#include "C_WeaponRanged_Rifle_Crossbow.h"
namespace lifted {
extern char g_10274d04;
}
int C_WeaponRanged_Rifle_Crossbow::vfunc16()
{
    return (int)&lifted::g_10274d04;
}
// END FUNCTION

// FUNCTION: 0x1000d9c0 size=0x3
#include "C_WeaponRanged_Rifle_Crossbow.h"
int C_WeaponRanged_Rifle_Crossbow::vfunc15()
{
    return 0;
}
// END FUNCTION
