// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ae5b0 size=0x6
#include "C_EnvParticle.h"
namespace lifted {
extern char g_102b2c20;
}
int C_EnvParticle::vfunc16()
{
    return (int)&lifted::g_102b2c20;
}
// END FUNCTION

// FUNCTION: 0x100ae5c0 size=0x3
#include "C_EnvParticle.h"
int C_EnvParticle::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100aeac0 size=0x1e
#include "C_EnvParticle.h"

// VC6 writes C_EnvParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_EnvParticle *pcd_emit_100aeac0() { return new C_EnvParticle; }

// TARGET: ??_GC_EnvParticle@@UAEPAXI@Z
// END FUNCTION
