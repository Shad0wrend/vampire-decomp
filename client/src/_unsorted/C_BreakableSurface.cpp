// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b6e70 size=0x6
#include "C_BreakableSurface.h"
namespace lifted {
extern char g_102b41b4;
}
int C_BreakableSurface::vfunc16()
{
    return (int)&lifted::g_102b41b4;
}
// END FUNCTION

// FUNCTION: 0x100b6e80 size=0x3
#include "C_BreakableSurface.h"
int C_BreakableSurface::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b7760 size=0x1e
#include "C_BreakableSurface.h"

// VC6 writes C_BreakableSurface's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BreakableSurface *pcd_emit_100b7760() { return new C_BreakableSurface; }

// TARGET: ??_GC_BreakableSurface@@UAEPAXI@Z
// END FUNCTION
