// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000f700 size=0x6
#include "C_WeaponIGeneric.h"
namespace lifted {
extern char g_10272de0;
}
int C_WeaponIGeneric::vfunc17()
{
    return (int)&lifted::g_10272de0;
}
// END FUNCTION

// FUNCTION: 0x1000f790 size=0x1e
#include "C_WeaponIGeneric.h"

// VC6 writes C_WeaponIGeneric's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIGeneric *pcd_emit_1000f790() { return new C_WeaponIGeneric; }

// TARGET: ??_GC_WeaponIGeneric@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000f7b0 size=0x6
#include "C_WeaponIGeneric.h"
namespace lifted {
extern char g_10274b9c;
}
int C_WeaponIGeneric::vfunc16()
{
    return (int)&lifted::g_10274b9c;
}
// END FUNCTION

// FUNCTION: 0x1000f7c0 size=0x3
#include "C_WeaponIGeneric.h"
int C_WeaponIGeneric::vfunc15()
{
    return 0;
}
// END FUNCTION
