// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10040d00 size=0x33
#include "C_TEUserTracer.h"
C_TEUserTracer::C_TEUserTracer()
{
	m_vecOrigin.Init(); m_vecEnd.Init(); m_unk28 = 0; m_unk2c = 0;
}
// END FUNCTION

// FUNCTION: 0x10040d40 size=0x1e
#include "C_TEUserTracer.h"

// VC6 writes C_TEUserTracer's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEUserTracer *pcd_emit_10040d40(const C_TEUserTracer &other) { return new C_TEUserTracer(other); }

// TARGET: ??_GC_TEUserTracer@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10040e70 size=0x6
#include "C_TEUserTracer.h"
namespace lifted {
extern char g_10282414;
}
int C_TEUserTracer::vfunc9()
{
    return (int)&lifted::g_10282414;
}
// END FUNCTION

// FUNCTION: 0x10040e80 size=0x3
#include "C_TEUserTracer.h"
int C_TEUserTracer::vfunc8()
{
    return 0;
}
// END FUNCTION
