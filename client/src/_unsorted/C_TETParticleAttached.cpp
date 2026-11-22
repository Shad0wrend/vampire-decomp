// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10040370 size=0x1e
#include "C_TETParticleAttached.h"

// VC6 writes C_TETParticleAttached's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TETParticleAttached *pcd_emit_10040370() { return new C_TETParticleAttached; }

// TARGET: ??_GC_TETParticleAttached@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10040410 size=0x6
#include "C_TETParticleAttached.h"
namespace lifted {
extern char g_1028201c;
}
int C_TETParticleAttached::vfunc9()
{
    return (int)&lifted::g_1028201c;
}
// END FUNCTION

// FUNCTION: 0x10040420 size=0x3
#include "C_TETParticleAttached.h"
int C_TETParticleAttached::vfunc8()
{
    return 0;
}
// END FUNCTION
