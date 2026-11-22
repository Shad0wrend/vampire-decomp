// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000ed00 size=0x6
#include "C_WeaponRanged_Rifle_SuperShotgun.h"
namespace lifted {
extern char g_10272d70;
}
int C_WeaponRanged_Rifle_SuperShotgun::vfunc17()
{
    return (int)&lifted::g_10272d70;
}
// END FUNCTION

// FUNCTION: 0x1000ed90 size=0x1e
#include "C_WeaponRanged_Rifle_SuperShotgun.h"

// VC6 writes C_WeaponRanged_Rifle_SuperShotgun's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_SuperShotgun *pcd_emit_1000ed90() { return new C_WeaponRanged_Rifle_SuperShotgun; }

// TARGET: ??_GC_WeaponRanged_Rifle_SuperShotgun@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000edb0 size=0x6
#include "C_WeaponRanged_Rifle_SuperShotgun.h"
namespace lifted {
extern char g_10274c00;
}
int C_WeaponRanged_Rifle_SuperShotgun::vfunc16()
{
    return (int)&lifted::g_10274c00;
}
// END FUNCTION

// FUNCTION: 0x1000edc0 size=0x3
#include "C_WeaponRanged_Rifle_SuperShotgun.h"
int C_WeaponRanged_Rifle_SuperShotgun::vfunc15()
{
    return 0;
}
// END FUNCTION
