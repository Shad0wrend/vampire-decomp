// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017b510 size=0x16
#define V8(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7();
struct O_1017b510 {
V8(a) V8(b) V8(c) V8(d) V8(e) V8(f) V8(g) V8(h) V8(i) V8(j)
virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5(); virtual void k6();
virtual void v87(int); };
O_1017b510 *sub_10170f70();
struct CUnknown1017b510 { void sub_1017b510(int a); };
void CUnknown1017b510::sub_1017b510(int a)
{
	O_1017b510 *p = sub_10170f70();
	if (p)
		p->v87(a);
}
// END FUNCTION

// FUNCTION: 0x1017b530 size=0x1e
#include "CharEditInfoPanel.h"

// VC6 writes CharEditInfoPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditInfoPanel *pcd_emit_1017b530(const CharEditInfoPanel &other) { return new CharEditInfoPanel(other); }

// TARGET: ??_GCharEditInfoPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017c3a0 size=0x3
#include "CharEditInfoPanel.h"
void CharEditInfoPanel::vfunc124(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1017c530 size=0x6
#include "CharEditInfoPanel.h"
namespace lifted {
extern char g_102d1340;
}
int CharEditInfoPanel::vfunc102()
{
    return (int)&lifted::g_102d1340;
}
// END FUNCTION

// FUNCTION: 0x1017c560 size=0x1
#include "CharEditInfoPanel.h"
void CharEditInfoPanel::vfunc119()
{
}
// END FUNCTION

// FUNCTION: 0x1017c600 size=0x28
#include "CharEditInfoPanel.h"
namespace lifted {
struct C1017c650 { int sub_1017c650(); };
struct C1017c660 { int sub_1017c660(); };
struct C101a99f0 { int sub_101a99f0(int); };
}
int CharEditInfoPanel::vfunc21(int a0)
{
    int t0 = ((lifted::C101a99f0 *)this)->sub_101a99f0(a0);
    if (((char)a0) != 0) {
        return ((lifted::C1017c660 *)this)->sub_1017c660();
    }
    return ((lifted::C1017c650 *)this)->sub_1017c650();
}
// END FUNCTION

// FUNCTION: 0x1017c640 size=0xe
#include "CharEditInfoPanel.h"
namespace lifted {
extern int g_104a57d4;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(); };
}
void CharEditInfoPanel::vfunc3()
{
    ((lifted::V *)lifted::g_104a57d4)->f57();
}
// END FUNCTION
