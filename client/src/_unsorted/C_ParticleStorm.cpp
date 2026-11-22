// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10003fa0 size=0x6
#include "C_ParticleStorm.h"
namespace lifted {
extern char g_10271a44;
}
int C_ParticleStorm::vfunc16()
{
    return (int)&lifted::g_10271a44;
}
// END FUNCTION

// FUNCTION: 0x10003fb0 size=0x3
#include "C_ParticleStorm.h"
int C_ParticleStorm::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10004400 size=0x1e
#include "C_ParticleStorm.h"

// VC6 writes C_ParticleStorm's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ParticleStorm *pcd_emit_10004400() { return new C_ParticleStorm; }

// TARGET: ??_GC_ParticleStorm@@UAEPAXI@Z
// END FUNCTION
