// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10032dd0 size=0x1e
#include "C_TEBeamEnts.h"

// VC6 writes C_TEBeamEnts's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBeamEnts *pcd_emit_10032dd0() { return new C_TEBeamEnts; }

// TARGET: ??_GC_TEBeamEnts@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10032f20 size=0x6
#include "C_TEBeamEnts.h"
namespace lifted {
extern char g_1027d6a0;
}
int C_TEBeamEnts::vfunc9()
{
    return (int)&lifted::g_1027d6a0;
}
// END FUNCTION

// FUNCTION: 0x10032f30 size=0x3
#include "C_TEBeamEnts.h"
int C_TEBeamEnts::vfunc8()
{
    return 0;
}
// END FUNCTION
