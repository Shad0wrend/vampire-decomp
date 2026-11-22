// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000b880 size=0x6
#include "C_WeaponMelee_Tzimisce3Claw.h"
namespace lifted {
extern char g_10272b24;
}
int C_WeaponMelee_Tzimisce3Claw::vfunc17()
{
    return (int)&lifted::g_10272b24;
}
// END FUNCTION

// FUNCTION: 0x1000b910 size=0x1e
#include "C_WeaponMelee_Tzimisce3Claw.h"

// VC6 writes C_WeaponMelee_Tzimisce3Claw's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Tzimisce3Claw *pcd_emit_1000b910() { return new C_WeaponMelee_Tzimisce3Claw; }

// TARGET: ??_GC_WeaponMelee_Tzimisce3Claw@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000b930 size=0x6
#include "C_WeaponMelee_Tzimisce3Claw.h"
namespace lifted {
extern char g_10274e80;
}
int C_WeaponMelee_Tzimisce3Claw::vfunc16()
{
    return (int)&lifted::g_10274e80;
}
// END FUNCTION

// FUNCTION: 0x1000b940 size=0x3
#include "C_WeaponMelee_Tzimisce3Claw.h"
int C_WeaponMelee_Tzimisce3Claw::vfunc15()
{
    return 0;
}
// END FUNCTION
