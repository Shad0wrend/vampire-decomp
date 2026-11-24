// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10165950 size=0x2d
#include "CDebugOverlayPanel.h"
void *sub_101ac650(unsigned int);
struct LDPanel { LDPanel *sub_101656a0(int a); };
int CDebugOverlayPanel::vfunc0(int a)
{
	LDPanel *p = (LDPanel *)sub_101ac650(0x5c);
	LDPanel *r;
	if (p)
		r = p->sub_101656a0(a);
	else
		r = 0;
	return (int)(*(LDPanel **)((char *)this + 4) = r);
}
// END FUNCTION

// FUNCTION: 0x10165980 size=0x24
#include "CDebugOverlayPanel.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual int f20(int); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual int f33(int); };
}
void CDebugOverlayPanel::vfunc1()
{
    if ((*(int *)((char *)this + 4)) != 0) {
        int t0 = ((lifted::V *)(*(int *)((char *)this + 4)))->f33(0);
        if ((*(int *)((char *)this + 4)) != 0) {
            ((lifted::V *)(*(int *)((char *)this + 4)))->f20(1);
        }
    }
}
// END FUNCTION
