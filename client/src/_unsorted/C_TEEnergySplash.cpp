// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10036540 size=0x1e
#include "C_TEEnergySplash.h"

// VC6 writes C_TEEnergySplash's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEEnergySplash *pcd_emit_10036540() { return new C_TEEnergySplash; }

// TARGET: ??_GC_TEEnergySplash@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10036580 size=0x1
#include "C_TEEnergySplash.h"
void C_TEEnergySplash::vfunc13()
{
}
// END FUNCTION

// FUNCTION: 0x100365d0 size=0x6
#include "C_TEEnergySplash.h"
namespace lifted {
extern char g_1027efc4;
}
int C_TEEnergySplash::vfunc9()
{
    return (int)&lifted::g_1027efc4;
}
// END FUNCTION

// FUNCTION: 0x100365e0 size=0x3
#include "C_TEEnergySplash.h"
int C_TEEnergySplash::vfunc8()
{
    return 0;
}
// END FUNCTION
