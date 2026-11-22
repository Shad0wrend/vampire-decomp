// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10008680 size=0x6
#include "C_WeaponMelee_Fists.h"
namespace lifted {
extern char g_102728f4;
}
int C_WeaponMelee_Fists::vfunc17()
{
    return (int)&lifted::g_102728f4;
}
// END FUNCTION

// FUNCTION: 0x10008710 size=0x1e
#include "C_WeaponMelee_Fists.h"

// VC6 writes C_WeaponMelee_Fists's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Fists *pcd_emit_10008710() { return new C_WeaponMelee_Fists; }

// TARGET: ??_GC_WeaponMelee_Fists@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10008730 size=0x6
#include "C_WeaponMelee_Fists.h"
namespace lifted {
extern char g_102750a0;
}
int C_WeaponMelee_Fists::vfunc16()
{
    return (int)&lifted::g_102750a0;
}
// END FUNCTION

// FUNCTION: 0x10008740 size=0x3
#include "C_WeaponMelee_Fists.h"
int C_WeaponMelee_Fists::vfunc15()
{
    return 0;
}
// END FUNCTION
