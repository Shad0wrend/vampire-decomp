// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101721c0 size=0x68
#include "CTextImage2.h"

struct IImageSize
{
	virtual void d00() = 0;
	virtual void d01() = 0;
	virtual void d02() = 0;
	virtual void d03() = 0;
	virtual void d04() = 0;
	virtual void d05() = 0;
	virtual void d06() = 0;
	virtual void d07() = 0;
	virtual void d08() = 0;
	virtual void d09() = 0;
	virtual void d10() = 0;
	virtual void d11() = 0;
	virtual void d12() = 0;
	virtual void d13() = 0;
	virtual void d14() = 0;
	virtual void d15() = 0;
	virtual void d16() = 0;
	virtual void d17() = 0;
	virtual void d18() = 0;
	virtual void d19() = 0;
	virtual void d20() = 0;
	virtual void d21() = 0;
	virtual void d22() = 0;
	virtual void d23() = 0;
	virtual void d24() = 0;
	virtual void d25() = 0;
	virtual void d26() = 0;
	virtual void d27() = 0;
	virtual void d28() = 0;
	virtual void d29() = 0;
	virtual void d30() = 0;
	virtual void d31() = 0;
	virtual void GetContentSize(int *w, int *h) = 0;
};

int CTextImage2::vfunc2(int *w, int *h)
{
	int w1, w2, h1, h2;
	((IImageSize *)m_p1c)->GetContentSize(&w1, &h1);
	((IImageSize *)m_p20)->GetContentSize(&w2, &h2);
	*w = w1 + w2;
	*h = (h1 > h2) ? h1 : h2;
	return vfunc9(*w, *h);
}
// END FUNCTION

// FUNCTION: 0x10172230 size=0x12
#include "CTextImage2.h"
namespace lifted {
struct V { virtual int f0(); };
}
int CTextImage2::vfunc0()
{
    ((lifted::V *)(*(int *)((char *)this + 0x1c)))->f0();
    return ((lifted::V *)(*(int *)((char *)this + 0x20)))->f0();
}
// END FUNCTION

// FUNCTION: 0x101722c0 size=0x8
#include "CTextImage2.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(); };
}
void CTextImage2::vfunc3()
{
    ((lifted::V *)(*(int *)((char *)this + 0x1c)))->f3();
}
// END FUNCTION

// FUNCTION: 0x101722d0 size=0x42
#include "CTextImage2.h"
CTextImage2 *pcd_emit_101722d0() { return new CTextImage2; }
// TARGET: ??_GCTextImage2@@UAEPAXI@Z
// END FUNCTION
