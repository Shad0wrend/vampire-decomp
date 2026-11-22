// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003e7a0 size=0x1e
#include "C_TEPlayerDecal.h"

// VC6 writes C_TEPlayerDecal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEPlayerDecal *pcd_emit_1003e7a0() { return new C_TEPlayerDecal; }

// TARGET: ??_GC_TEPlayerDecal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003e840 size=0x6
#include "C_TEPlayerDecal.h"
namespace lifted {
extern char g_1028132c;
}
int C_TEPlayerDecal::vfunc9()
{
    return (int)&lifted::g_1028132c;
}
// END FUNCTION

// FUNCTION: 0x1003e850 size=0x3
#include "C_TEPlayerDecal.h"
int C_TEPlayerDecal::vfunc8()
{
    return 0;
}
// END FUNCTION
