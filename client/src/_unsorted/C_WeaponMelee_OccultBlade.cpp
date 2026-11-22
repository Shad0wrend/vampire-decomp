// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10009080 size=0x6
#include "C_WeaponMelee_OccultBlade.h"
namespace lifted {
extern char g_10272964;
}
int C_WeaponMelee_OccultBlade::vfunc17()
{
    return (int)&lifted::g_10272964;
}
// END FUNCTION

// FUNCTION: 0x10009110 size=0x1e
#include "C_WeaponMelee_OccultBlade.h"

// VC6 writes C_WeaponMelee_OccultBlade's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_OccultBlade *pcd_emit_10009110() { return new C_WeaponMelee_OccultBlade; }

// TARGET: ??_GC_WeaponMelee_OccultBlade@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10009130 size=0x6
#include "C_WeaponMelee_OccultBlade.h"
namespace lifted {
extern char g_10275040;
}
int C_WeaponMelee_OccultBlade::vfunc16()
{
    return (int)&lifted::g_10275040;
}
// END FUNCTION

// FUNCTION: 0x10009140 size=0x3
#include "C_WeaponMelee_OccultBlade.h"
int C_WeaponMelee_OccultBlade::vfunc15()
{
    return 0;
}
// END FUNCTION
