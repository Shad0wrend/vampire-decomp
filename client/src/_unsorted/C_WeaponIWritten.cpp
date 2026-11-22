// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1000f480 size=0x6
#include "C_WeaponIWritten.h"
namespace lifted {
extern char g_10272dc4;
}
int C_WeaponIWritten::vfunc17()
{
    return (int)&lifted::g_10272dc4;
}
// END FUNCTION

// FUNCTION: 0x1000f510 size=0x1e
#include "C_WeaponIWritten.h"

// VC6 writes C_WeaponIWritten's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIWritten *pcd_emit_1000f510() { return new C_WeaponIWritten; }

// TARGET: ??_GC_WeaponIWritten@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1000f530 size=0x6
#include "C_WeaponIWritten.h"
namespace lifted {
extern char g_10274bb0;
}
int C_WeaponIWritten::vfunc16()
{
    return (int)&lifted::g_10274bb0;
}
// END FUNCTION

// FUNCTION: 0x1000f540 size=0x3
#include "C_WeaponIWritten.h"
int C_WeaponIWritten::vfunc15()
{
    return 0;
}
// END FUNCTION
