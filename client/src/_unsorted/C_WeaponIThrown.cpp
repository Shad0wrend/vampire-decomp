// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10016000 size=0x6
#include "C_WeaponIThrown.h"
namespace lifted {
extern char g_10273278;
}
int C_WeaponIThrown::vfunc17()
{
    return (int)&lifted::g_10273278;
}
// END FUNCTION

// FUNCTION: 0x10016090 size=0x1e
#include "C_WeaponIThrown.h"

// VC6 writes C_WeaponIThrown's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponIThrown *pcd_emit_10016090() { return new C_WeaponIThrown; }

// TARGET: ??_GC_WeaponIThrown@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100160b0 size=0x6
#include "C_WeaponIThrown.h"
namespace lifted {
extern char g_10274818;
}
int C_WeaponIThrown::vfunc16()
{
    return (int)&lifted::g_10274818;
}
// END FUNCTION

// FUNCTION: 0x100160c0 size=0x3
#include "C_WeaponIThrown.h"
int C_WeaponIThrown::vfunc15()
{
    return 0;
}
// END FUNCTION
