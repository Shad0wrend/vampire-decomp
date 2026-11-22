// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000de00 size=0x6
#include "C_WeaponRanged_Pistol_DesertEagle.h"
namespace lifted {
extern char g_10272cc8;
}
int C_WeaponRanged_Pistol_DesertEagle::vfunc17()
{
    return (int)&lifted::g_10272cc8;
}
// END FUNCTION

// FUNCTION: 0x1000de90 size=0x1e
#include "C_WeaponRanged_Pistol_DesertEagle.h"

// VC6 writes C_WeaponRanged_Pistol_DesertEagle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Pistol_DesertEagle *pcd_emit_1000de90() { return new C_WeaponRanged_Pistol_DesertEagle; }

// TARGET: ??_GC_WeaponRanged_Pistol_DesertEagle@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000deb0 size=0x6
#include "C_WeaponRanged_Pistol_DesertEagle.h"
namespace lifted {
extern char g_10274cb8;
}
int C_WeaponRanged_Pistol_DesertEagle::vfunc16()
{
    return (int)&lifted::g_10274cb8;
}
// END FUNCTION

// FUNCTION: 0x1000dec0 size=0x3
#include "C_WeaponRanged_Pistol_DesertEagle.h"
int C_WeaponRanged_Pistol_DesertEagle::vfunc15()
{
    return 0;
}
// END FUNCTION
