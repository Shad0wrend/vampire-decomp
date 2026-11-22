// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10008b80 size=0x6
#include "C_WeaponMelee_Katana.h"
namespace lifted {
extern char g_1027292c;
}
int C_WeaponMelee_Katana::vfunc17()
{
    return (int)&lifted::g_1027292c;
}
// END FUNCTION

// FUNCTION: 0x10008c10 size=0x1e
#include "C_WeaponMelee_Katana.h"

// VC6 writes C_WeaponMelee_Katana's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee_Katana *pcd_emit_10008c10() { return new C_WeaponMelee_Katana; }

// TARGET: ??_GC_WeaponMelee_Katana@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10008c30 size=0x6
#include "C_WeaponMelee_Katana.h"
namespace lifted {
extern char g_10275070;
}
int C_WeaponMelee_Katana::vfunc16()
{
    return (int)&lifted::g_10275070;
}
// END FUNCTION

// FUNCTION: 0x10008c40 size=0x3
#include "C_WeaponMelee_Katana.h"
int C_WeaponMelee_Katana::vfunc15()
{
    return 0;
}
// END FUNCTION
