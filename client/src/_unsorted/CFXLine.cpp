// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10045740 size=0x1e
#include "CFXLine.h"

// VC6 writes CFXLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFXLine *pcd_emit_10045740() { return new CFXLine; }

// TARGET: ??_GCFXLine@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10045c50 size=0x18
#include "CFXLine.h"
bool CFXLine::vfunc3()
{
	if (m_flUnk2c > 0.0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10045c70 size=0x1a
#include "CFXLine.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual int f13(int); };
}
void CFXLine::vfunc4()
{
    if ((*(int *)((char *)this + 0xc)) != 0) {
        int t0 = ((lifted::V *)(*(int *)((char *)this + 0xc)))->f13(0);
        *(int *)((char *)this + 0xc) = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10045c90 size=0x3d
#include "CFXLine.h"
void sub_10108fd0(const float *a, float s, const float *b, float *c);
void CFXLine::vfunc5(double dt)
{
	m_flUnk2c -= dt;
	float f = (float)dt;
	float *p = (float *)((char *)this + 0x10);
	float *d = (float *)((char *)this + 0x34);
	sub_10108fd0(p, f, d, p);
	float *q = (float *)((char *)this + 0x1c);
	sub_10108fd0(q, f, d, q);
}
// END FUNCTION
