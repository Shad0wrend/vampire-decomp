// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b3030 size=0x6
#include "C_FuncParticle.h"
namespace lifted {
extern char g_102b2ec8;
}
int C_FuncParticle::vfunc16()
{
    return (int)&lifted::g_102b2ec8;
}
// END FUNCTION

// FUNCTION: 0x100b3040 size=0x3
#include "C_FuncParticle.h"
int C_FuncParticle::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b3110 size=0x1e
#include "C_FuncParticle.h"

// VC6 writes C_FuncParticle's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_FuncParticle *pcd_emit_100b3110() { return new C_FuncParticle; }

// TARGET: ??_GC_FuncParticle@@UAEPAXI@Z
// END FUNCTION
