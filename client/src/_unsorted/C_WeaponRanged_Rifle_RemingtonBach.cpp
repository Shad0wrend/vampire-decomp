// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000cf00 size=0x6
#include "C_WeaponRanged_Rifle_RemingtonBach.h"
namespace lifted {
extern char g_10272c20;
}
int C_WeaponRanged_Rifle_RemingtonBach::vfunc17()
{
    return (int)&lifted::g_10272c20;
}
// END FUNCTION

// FUNCTION: 0x1000cf90 size=0x1e
#include "C_WeaponRanged_Rifle_RemingtonBach.h"

// VC6 writes C_WeaponRanged_Rifle_RemingtonBach's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Rifle_RemingtonBach *pcd_emit_1000cf90() { return new C_WeaponRanged_Rifle_RemingtonBach; }

// TARGET: ??_GC_WeaponRanged_Rifle_RemingtonBach@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000cfc0 size=0x3
#include "C_WeaponRanged_Rifle_RemingtonBach.h"
int C_WeaponRanged_Rifle_RemingtonBach::vfunc15()
{
    return 0;
}
// END FUNCTION
