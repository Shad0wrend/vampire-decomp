// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000bb00 size=0x6
#include "C_WeaponMelee_GargoyleFist.h"
namespace lifted {
extern char g_10272b40;
}
int C_WeaponMelee_GargoyleFist::vfunc17()
{
    return (int)&lifted::g_10272b40;
}
// END FUNCTION

// FUNCTION: 0x1000bb90 size=0x1e
#include "C_WeaponMelee_GargoyleFist.h"

// VC6 writes C_WeaponMelee_GargoyleFist's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_GargoyleFist *pcd_emit_1000bb90() { return new C_WeaponMelee_GargoyleFist; }

// TARGET: ??_GC_WeaponMelee_GargoyleFist@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000bbb0 size=0x6
#include "C_WeaponMelee_GargoyleFist.h"
namespace lifted {
extern char g_10274e64;
}
int C_WeaponMelee_GargoyleFist::vfunc16()
{
    return (int)&lifted::g_10274e64;
}
// END FUNCTION

// FUNCTION: 0x1000bbc0 size=0x3
#include "C_WeaponMelee_GargoyleFist.h"
int C_WeaponMelee_GargoyleFist::vfunc15()
{
    return 0;
}
// END FUNCTION
