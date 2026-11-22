// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000e080 size=0x6
#include "C_WeaponRanged_Pistol_Glock.h"
namespace lifted {
extern char g_10272ce4;
}
int C_WeaponRanged_Pistol_Glock::vfunc17()
{
    return (int)&lifted::g_10272ce4;
}
// END FUNCTION

// FUNCTION: 0x1000e110 size=0x1e
#include "C_WeaponRanged_Pistol_Glock.h"

// VC6 writes C_WeaponRanged_Pistol_Glock's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Pistol_Glock *pcd_emit_1000e110() { return new C_WeaponRanged_Pistol_Glock; }

// TARGET: ??_GC_WeaponRanged_Pistol_Glock@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000e130 size=0x6
#include "C_WeaponRanged_Pistol_Glock.h"
namespace lifted {
extern char g_10274c9c;
}
int C_WeaponRanged_Pistol_Glock::vfunc16()
{
    return (int)&lifted::g_10274c9c;
}
// END FUNCTION

// FUNCTION: 0x1000e140 size=0x3
#include "C_WeaponRanged_Pistol_Glock.h"
int C_WeaponRanged_Pistol_Glock::vfunc15()
{
    return 0;
}
// END FUNCTION
