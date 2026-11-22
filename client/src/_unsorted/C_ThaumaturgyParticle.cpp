// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b2a20 size=0x6
#include "C_ThaumaturgyParticle.h"
namespace lifted {
extern char g_102b2e3c;
}
int C_ThaumaturgyParticle::vfunc16()
{
    return (int)&lifted::g_102b2e3c;
}
// END FUNCTION

// FUNCTION: 0x100b2a30 size=0x3
#include "C_ThaumaturgyParticle.h"
int C_ThaumaturgyParticle::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b2b00 size=0x1e
#include "C_ThaumaturgyParticle.h"

// VC6 writes C_ThaumaturgyParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_ThaumaturgyParticle *pcd_emit_100b2b00() { return new C_ThaumaturgyParticle; }

// TARGET: ??_GC_ThaumaturgyParticle@@UAEPAXI@Z
// END FUNCTION
