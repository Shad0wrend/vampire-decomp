// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007f00 size=0x6
#include "C_WeaponMelee_BaseballBat.h"
namespace lifted {
extern char g_102728a0;
}
int C_WeaponMelee_BaseballBat::vfunc17()
{
    return (int)&lifted::g_102728a0;
}
// END FUNCTION

// FUNCTION: 0x10007f90 size=0x1e
#include "C_WeaponMelee_BaseballBat.h"

// VC6 writes C_WeaponMelee_BaseballBat's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_BaseballBat *pcd_emit_10007f90() { return new C_WeaponMelee_BaseballBat; }

// TARGET: ??_GC_WeaponMelee_BaseballBat@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10007fb0 size=0x6
#include "C_WeaponMelee_BaseballBat.h"
namespace lifted {
extern char g_102750e0;
}
int C_WeaponMelee_BaseballBat::vfunc16()
{
    return (int)&lifted::g_102750e0;
}
// END FUNCTION

// FUNCTION: 0x10007fc0 size=0x3
#include "C_WeaponMelee_BaseballBat.h"
int C_WeaponMelee_BaseballBat::vfunc15()
{
    return 0;
}
// END FUNCTION
