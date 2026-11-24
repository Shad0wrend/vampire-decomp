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

// FUNCTION: 0x10123110 size=0x37
#include "CPrediction.h"
#include "C_BasePlayer.h"
#include "Vector.h"
extern C_BasePlayer *g_104a0d50;
// TARGET: CPrediction::vfunc8
void CPrediction::vfunc8(Vector *v)
{
    if (g_104a0d50 == 0) {
        v->x = 0;
        v->y = 0;
        v->z = 0;
    } else {
        *v = g_104a0d50->GetAbsOrigin();
    }
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

// FUNCTION: 0x101231c0 size=0x32
#include "CPrediction.h"
#include "Vector.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
struct PlayerView {
 V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
 V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6)
 virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5();
 virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9(); virtual void d0(); virtual void d1();
 virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
 virtual void d8(); virtual void d9(); virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3();
 virtual void e4(); virtual void e5();
 virtual void vfunc196(Vector v);
};
extern PlayerView *g_104a0d50;
// TARGET: CPrediction::vfunc11
void CPrediction::vfunc11(const Vector *v)
{
    if (g_104a0d50)
        g_104a0d50->vfunc196(*v);
}
// END FUNCTION

// FUNCTION: 0x10123200 size=0x4
#include "CPrediction.h"
int CPrediction::vfunc15()
{
    return *(int *)((char *)this + 0x30);
}
// END FUNCTION
