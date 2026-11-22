// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000ca00 size=0x6
#include "C_WeaponRanged_MingXiao_Spit.h"
namespace lifted {
extern char g_10272be8;
}
int C_WeaponRanged_MingXiao_Spit::vfunc17()
{
    return (int)&lifted::g_10272be8;
}
// END FUNCTION

// FUNCTION: 0x1000ca90 size=0x1e
#include "C_WeaponRanged_MingXiao_Spit.h"

// VC6 writes C_WeaponRanged_MingXiao_Spit's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_MingXiao_Spit *pcd_emit_1000ca90() { return new C_WeaponRanged_MingXiao_Spit; }

// TARGET: ??_GC_WeaponRanged_MingXiao_Spit@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000cac0 size=0x3
#include "C_WeaponRanged_MingXiao_Spit.h"
int C_WeaponRanged_MingXiao_Spit::vfunc15()
{
    return 0;
}
// END FUNCTION
