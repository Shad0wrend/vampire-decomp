// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10035cd0 size=0x1e
#include "C_TEDecal.h"

// VC6 writes C_TEDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEDecal *pcd_emit_10035cd0() { return new C_TEDecal; }

// TARGET: ??_GC_TEDecal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10035e70 size=0x6
#include "C_TEDecal.h"
namespace lifted {
extern char g_1027ec44;
}
int C_TEDecal::vfunc9()
{
    return (int)&lifted::g_1027ec44;
}
// END FUNCTION
