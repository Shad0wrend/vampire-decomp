// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003f120 size=0x1e
#include "C_TESparks.h"

// VC6 writes C_TESparks's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TESparks *pcd_emit_1003f120() { return new C_TESparks; }

// TARGET: ??_GC_TESparks@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003f160 size=0x1
#include "C_TESparks.h"
void C_TESparks::vfunc13()
{
}
// END FUNCTION

// FUNCTION: 0x1003f1c0 size=0x6
#include "C_TESparks.h"
namespace lifted {
extern char g_10281800;
}
int C_TESparks::vfunc9()
{
    return (int)&lifted::g_10281800;
}
// END FUNCTION

// FUNCTION: 0x1003f1d0 size=0x3
#include "C_TESparks.h"
int C_TESparks::vfunc8()
{
    return 0;
}
// END FUNCTION
