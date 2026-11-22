// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003dd40 size=0x6
#include "C_TEParticleSystem.h"
namespace lifted {
extern char g_10281120;
}
int C_TEParticleSystem::vfunc9()
{
    return (int)&lifted::g_10281120;
}
// END FUNCTION

// FUNCTION: 0x1003dd50 size=0x3
#include "C_TEParticleSystem.h"
int C_TEParticleSystem::vfunc8()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1003df30 size=0x1e
#include "C_TEParticleSystem.h"

// VC6 writes C_TEParticleSystem's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEParticleSystem *pcd_emit_1003df30() { return new C_TEParticleSystem; }

// TARGET: ??_GC_TEParticleSystem@@UAEPAXI@Z
// END FUNCTION
