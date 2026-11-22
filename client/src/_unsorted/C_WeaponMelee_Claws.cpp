// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10008400 size=0x6
#include "C_WeaponMelee_Claws.h"
namespace lifted {
extern char g_102728d8;
}
int C_WeaponMelee_Claws::vfunc17()
{
    return (int)&lifted::g_102728d8;
}
// END FUNCTION

// FUNCTION: 0x10008490 size=0x1e
#include "C_WeaponMelee_Claws.h"

// VC6 writes C_WeaponMelee_Claws's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Claws *pcd_emit_10008490() { return new C_WeaponMelee_Claws; }

// TARGET: ??_GC_WeaponMelee_Claws@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100084b0 size=0x6
#include "C_WeaponMelee_Claws.h"
namespace lifted {
extern char g_102750b4;
}
int C_WeaponMelee_Claws::vfunc16()
{
    return (int)&lifted::g_102750b4;
}
// END FUNCTION

// FUNCTION: 0x100084c0 size=0x3
#include "C_WeaponMelee_Claws.h"
int C_WeaponMelee_Claws::vfunc15()
{
    return 0;
}
// END FUNCTION
