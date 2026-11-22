// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000ef80 size=0x6
#include "C_WeaponRanged_Smg_Uzi.h"
namespace lifted {
extern char g_10272d8c;
}
int C_WeaponRanged_Smg_Uzi::vfunc17()
{
    return (int)&lifted::g_10272d8c;
}
// END FUNCTION

// FUNCTION: 0x1000f010 size=0x1e
#include "C_WeaponRanged_Smg_Uzi.h"

// VC6 writes C_WeaponRanged_Smg_Uzi's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Smg_Uzi *pcd_emit_1000f010() { return new C_WeaponRanged_Smg_Uzi; }

// TARGET: ??_GC_WeaponRanged_Smg_Uzi@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000f040 size=0x3
#include "C_WeaponRanged_Smg_Uzi.h"
int C_WeaponRanged_Smg_Uzi::vfunc15()
{
    return 0;
}
// END FUNCTION
