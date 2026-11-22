// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100400a0 size=0x1e
#include "C_TETParticle.h"

// VC6 writes C_TETParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TETParticle *pcd_emit_100400a0() { return new C_TETParticle; }

// TARGET: ??_GC_TETParticle@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10040130 size=0x6
#include "C_TETParticle.h"
namespace lifted {
extern char g_10281fa8;
}
int C_TETParticle::vfunc9()
{
    return (int)&lifted::g_10281fa8;
}
// END FUNCTION
