// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100410e0 size=0x1e
#include "C_TEWorldDecal.h"

// VC6 writes C_TEWorldDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEWorldDecal *pcd_emit_100410e0() { return new C_TEWorldDecal; }

// TARGET: ??_GC_TEWorldDecal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10041250 size=0x6
#include "C_TEWorldDecal.h"
namespace lifted {
extern char g_102825c4;
}
int C_TEWorldDecal::vfunc9()
{
    return (int)&lifted::g_102825c4;
}
// END FUNCTION

// FUNCTION: 0x10041260 size=0x3
#include "C_TEWorldDecal.h"
int C_TEWorldDecal::vfunc8()
{
    return 0;
}
// END FUNCTION
