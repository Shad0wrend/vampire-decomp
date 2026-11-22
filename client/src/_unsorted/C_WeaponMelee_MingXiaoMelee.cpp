// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000c280 size=0x6
#include "C_WeaponMelee_MingXiaoMelee.h"
namespace lifted {
extern char g_10272b94;
}
int C_WeaponMelee_MingXiaoMelee::vfunc17()
{
    return (int)&lifted::g_10272b94;
}
// END FUNCTION

// FUNCTION: 0x1000c310 size=0x1e
#include "C_WeaponMelee_MingXiaoMelee.h"

// VC6 writes C_WeaponMelee_MingXiaoMelee's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_MingXiaoMelee *pcd_emit_1000c310() { return new C_WeaponMelee_MingXiaoMelee; }

// TARGET: ??_GC_WeaponMelee_MingXiaoMelee@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000c330 size=0x6
#include "C_WeaponMelee_MingXiaoMelee.h"
namespace lifted {
extern char g_10274e0c;
}
int C_WeaponMelee_MingXiaoMelee::vfunc16()
{
    return (int)&lifted::g_10274e0c;
}
// END FUNCTION

// FUNCTION: 0x1000c340 size=0x3
#include "C_WeaponMelee_MingXiaoMelee.h"
int C_WeaponMelee_MingXiaoMelee::vfunc15()
{
    return 0;
}
// END FUNCTION
