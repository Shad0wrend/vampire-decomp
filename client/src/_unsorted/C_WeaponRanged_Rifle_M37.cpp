// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000e300 size=0x6
#include "C_WeaponRanged_Rifle_M37.h"
namespace lifted {
extern char g_10272d00;
}
int C_WeaponRanged_Rifle_M37::vfunc17()
{
    return (int)&lifted::g_10272d00;
}
// END FUNCTION

// FUNCTION: 0x1000e390 size=0x1e
#include "C_WeaponRanged_Rifle_M37.h"

// VC6 writes C_WeaponRanged_Rifle_M37's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_M37 *pcd_emit_1000e390() { return new C_WeaponRanged_Rifle_M37; }

// TARGET: ??_GC_WeaponRanged_Rifle_M37@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000e3b0 size=0x6
#include "C_WeaponRanged_Rifle_M37.h"
namespace lifted {
extern char g_10274c80;
}
int C_WeaponRanged_Rifle_M37::vfunc16()
{
    return (int)&lifted::g_10274c80;
}
// END FUNCTION

// FUNCTION: 0x1000e3c0 size=0x3
#include "C_WeaponRanged_Rifle_M37.h"
int C_WeaponRanged_Rifle_M37::vfunc15()
{
    return 0;
}
// END FUNCTION
