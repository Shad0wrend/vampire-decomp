// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10120e40 size=0x1e
#include "CPrediction.h"

// VC6 writes CPrediction's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPrediction *pcd_emit_10120e40() { return new CPrediction; }

// TARGET: ??_GCPrediction@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10120e90 size=0x31
#include "CPrediction.h"
struct CV_10120e90 { virtual void v0(); virtual bool v1(); char pad[0x2c - 4]; void *m_p2c; };
extern CV_10120e90 *g_104e170c;
struct View_10120e90 { char pad[0x34]; bool m_b34; };
void CPrediction::vfunc1()
{
	((View_10120e90 *)this)->m_b34 = (g_104e170c->v1() ? 0 : g_104e170c->m_p2c) != 0;
}
// END FUNCTION

// FUNCTION: 0x10120ed0 size=0x1
#include "CPrediction.h"
void CPrediction::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x101230c0 size=0x4
#include "CPrediction.h"
bool CPrediction::vfunc12()
{
    return *(bool *)((char *)this + 0x24);
}
// END FUNCTION

// FUNCTION: 0x101230d0 size=0x4
#include "CPrediction.h"
int CPrediction::vfunc13()
{
    return *(int *)((char *)this + 0x28);
}
// END FUNCTION

// FUNCTION: 0x101230e0 size=0x4
#include "CPrediction.h"
bool CPrediction::vfunc14()
{
    return *(bool *)((char *)this + 0x2c);
}
// END FUNCTION

// FUNCTION: 0x101230f0 size=0x11
#include "CPrediction.h"
namespace lifted {
extern int g_104a0d50;
}
int CPrediction::vfunc7()
{
    if (lifted::g_104a0d50 == 0) {
        return lifted::g_104a0d50;
    }
    return *(int *)((char *)lifted::g_104a0d50 + 0x90);
}
// END FUNCTION

// FUNCTION: 0x10123150 size=0x28
#include "CPrediction.h"
namespace lifted {
extern int g_104a0d50;
struct C100a2030 { int sub_100a2030(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual int f44(int); };
}
void CPrediction::vfunc9(int a0)
{
    int t0 = lifted::g_104a0d50;
    if (t0 != 0) {
        ((lifted::C100a2030 *)t0)->sub_100a2030(a0);
        ((lifted::V *)t0)->f44(a0);
    }
}
// END FUNCTION

// FUNCTION: 0x10123200 size=0x4
#include "CPrediction.h"
int CPrediction::vfunc15()
{
    return *(int *)((char *)this + 0x30);
}
// END FUNCTION
