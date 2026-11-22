// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10008900 size=0x6
#include "C_WeaponMelee_FireAxe.h"
namespace lifted {
extern char g_10272910;
}
int C_WeaponMelee_FireAxe::vfunc17()
{
    return (int)&lifted::g_10272910;
}
// END FUNCTION

// FUNCTION: 0x10008990 size=0x1e
#include "C_WeaponMelee_FireAxe.h"

// VC6 writes C_WeaponMelee_FireAxe's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_FireAxe *pcd_emit_10008990() { return new C_WeaponMelee_FireAxe; }

// TARGET: ??_GC_WeaponMelee_FireAxe@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100089b0 size=0x6
#include "C_WeaponMelee_FireAxe.h"
namespace lifted {
extern char g_10275088;
}
int C_WeaponMelee_FireAxe::vfunc16()
{
    return (int)&lifted::g_10275088;
}
// END FUNCTION

// FUNCTION: 0x100089c0 size=0x3
#include "C_WeaponMelee_FireAxe.h"
int C_WeaponMelee_FireAxe::vfunc15()
{
    return 0;
}
// END FUNCTION
