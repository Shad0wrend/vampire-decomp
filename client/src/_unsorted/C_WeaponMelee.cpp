// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10007c80 size=0x6
#include "C_WeaponMelee.h"
namespace lifted {
extern char g_10272884;
}
int C_WeaponMelee::vfunc17()
{
    return (int)&lifted::g_10272884;
}
// END FUNCTION

// FUNCTION: 0x10007d10 size=0x1e
#include "C_WeaponMelee.h"

// VC6 writes C_WeaponMelee's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponMelee *pcd_emit_10007d10() { return new C_WeaponMelee; }

// TARGET: ??_GC_WeaponMelee@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10007d30 size=0x6
#include "C_WeaponMelee.h"
namespace lifted {
extern char g_102750fc;
}
int C_WeaponMelee::vfunc16()
{
    return (int)&lifted::g_102750fc;
}
// END FUNCTION

// FUNCTION: 0x10007d40 size=0x3
#include "C_WeaponMelee.h"
int C_WeaponMelee::vfunc15()
{
    return 0;
}
// END FUNCTION
