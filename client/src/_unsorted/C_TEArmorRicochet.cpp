// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10032460 size=0x6
#include "C_TEArmorRicochet.h"
namespace lifted {
extern char g_1027d0c4;
}
int C_TEArmorRicochet::vfunc9()
{
    return (int)&lifted::g_1027d0c4;
}
// END FUNCTION

// FUNCTION: 0x10032470 size=0x3
#include "C_TEArmorRicochet.h"
int C_TEArmorRicochet::vfunc8()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100324e0 size=0x1e
#include "C_TEArmorRicochet.h"

// VC6 writes C_TEArmorRicochet's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEArmorRicochet *pcd_emit_100324e0() { return new C_TEArmorRicochet; }

// TARGET: ??_GC_TEArmorRicochet@@UAEPAXI@Z
// END FUNCTION
