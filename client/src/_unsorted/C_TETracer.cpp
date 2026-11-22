// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10040950 size=0x1e
#include "C_TETracer.h"

// VC6 writes C_TETracer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TETracer *pcd_emit_10040950() { return new C_TETracer; }

// TARGET: ??_GC_TETracer@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10040af0 size=0x6
#include "C_TETracer.h"
namespace lifted {
extern char g_10282270;
}
int C_TETracer::vfunc9()
{
    return (int)&lifted::g_10282270;
}
// END FUNCTION
