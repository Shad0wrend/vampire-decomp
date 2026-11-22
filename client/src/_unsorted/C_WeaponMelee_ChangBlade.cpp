// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000ae80 size=0x6
#include "C_WeaponMelee_ChangBlade.h"
namespace lifted {
extern char g_10272ab4;
}
int C_WeaponMelee_ChangBlade::vfunc17()
{
    return (int)&lifted::g_10272ab4;
}
// END FUNCTION

// FUNCTION: 0x1000af10 size=0x1e
#include "C_WeaponMelee_ChangBlade.h"

// VC6 writes C_WeaponMelee_ChangBlade's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_ChangBlade *pcd_emit_1000af10() { return new C_WeaponMelee_ChangBlade; }

// TARGET: ??_GC_WeaponMelee_ChangBlade@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000af40 size=0x3
#include "C_WeaponMelee_ChangBlade.h"
int C_WeaponMelee_ChangBlade::vfunc15()
{
    return 0;
}
// END FUNCTION
