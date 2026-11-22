// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000db80 size=0x6
#include "C_WeaponRanged_Rifle_Crossbow_Flaming.h"
namespace lifted {
extern char g_10272cac;
}
int C_WeaponRanged_Rifle_Crossbow_Flaming::vfunc17()
{
    return (int)&lifted::g_10272cac;
}
// END FUNCTION

// FUNCTION: 0x1000dc10 size=0x1e
#include "C_WeaponRanged_Rifle_Crossbow_Flaming.h"

// VC6 writes C_WeaponRanged_Rifle_Crossbow_Flaming's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_Crossbow_Flaming *pcd_emit_1000dc10() { return new C_WeaponRanged_Rifle_Crossbow_Flaming; }

// TARGET: ??_GC_WeaponRanged_Rifle_Crossbow_Flaming@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000dc30 size=0x6
#include "C_WeaponRanged_Rifle_Crossbow_Flaming.h"
namespace lifted {
extern char g_10274cdc;
}
int C_WeaponRanged_Rifle_Crossbow_Flaming::vfunc16()
{
    return (int)&lifted::g_10274cdc;
}
// END FUNCTION

// FUNCTION: 0x1000dc40 size=0x3
#include "C_WeaponRanged_Rifle_Crossbow_Flaming.h"
int C_WeaponRanged_Rifle_Crossbow_Flaming::vfunc15()
{
    return 0;
}
// END FUNCTION
