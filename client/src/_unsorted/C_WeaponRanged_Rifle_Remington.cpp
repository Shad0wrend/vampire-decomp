// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000e800 size=0x6
#include "C_WeaponRanged_Rifle_Remington.h"
namespace lifted {
extern char g_10272d38;
}
int C_WeaponRanged_Rifle_Remington::vfunc17()
{
    return (int)&lifted::g_10272d38;
}
// END FUNCTION

// FUNCTION: 0x1000e890 size=0x1e
#include "C_WeaponRanged_Rifle_Remington.h"

// VC6 writes C_WeaponRanged_Rifle_Remington's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_Remington *pcd_emit_1000e890() { return new C_WeaponRanged_Rifle_Remington; }

// TARGET: ??_GC_WeaponRanged_Rifle_Remington@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000e8c0 size=0x3
#include "C_WeaponRanged_Rifle_Remington.h"
int C_WeaponRanged_Rifle_Remington::vfunc15()
{
    return 0;
}
// END FUNCTION
