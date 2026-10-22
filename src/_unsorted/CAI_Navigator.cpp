// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ecb20 size=0x1e
#include "CAI_Navigator.h"

// TARGET: CAI_Navigator::vfunc0
CAI_Navigator *CAI_Navigator::vfunc0(unsigned int flags)
{
	sub_10011c98();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102eeb50 size=0xd
#include "CAI_Navigator.h"

void CAI_Navigator::vfunc9(int a, float b)
{
	vfunc10(a, b);
}
// END FUNCTION

// FUNCTION: 0x102eece0 size=0x10a
#include "CBaseEntity.h"
#include "CAI_Navigator.h"
#include "CUnknown1030bc20.h"
#include "CUnknown1070b22c.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
struct NavResult { int v[14]; };
struct CNavQuery { int sub_10012b43(int a, int b, void *c, int d, int e, float f, int g, NavResult *h, int i, int j); };
struct CNavMotorV { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void v6(void *p); virtual void v7(); virtual void v8(); };
struct CNavOwnerV {
	U22C_SLOTS10(a0) U22C_SLOTS10(a1) U22C_SLOTS10(a2) U22C_SLOTS10(a3) U22C_SLOTS10(a4)
	U22C_SLOTS10(a5) U22C_SLOTS10(a6) U22C_SLOTS10(a7) U22C_SLOTS10(a8) U22C_SLOTS10(a9)
	U22C_SLOTS10(b0) U22C_SLOTS10(b1) U22C_SLOTS10(b2) U22C_SLOTS10(b3) U22C_SLOTS10(b4)
	U22C_SLOTS10(b5) U22C_SLOTS10(b6) U22C_SLOTS10(b7) U22C_SLOTS10(b8) U22C_SLOTS10(b9)
	U22C_SLOTS10(c0) U22C_SLOTS10(c1)
	virtual void *v220();
};
struct CNavUnit : CAI_Navigator { int sub_10009322(); void sub_10006744(); };
bool sub_100147a4();
int CAI_Navigator::vfunc14(int param)
{
	int one = 1;
	if (m_i18 != one) {
		if (((CBaseEntity *)m_pOuter)->sub_100b3700() & 1) {
			NavResult r;
			memset(&r, 0, sizeof(r));
			CUnknown1030bc20 *route = (CUnknown1030bc20 *)m_p30;
			void *ent = ((CNavOwnerV *)m_pOuter)->v220();
			CNavQuery *q = (CNavQuery *)m_i24;
			int t = ((CNavUnit *)this)->sub_10009322();
			CUnknown1030bc20_Record *rec = route->sub_1030b7c0();
			q->sub_10012b43(1, (int)ent, rec, 0x202400b, t, 100.0f, 0, &r, param, 0);
			if (r.v[0] < 0)
				return r.v[0];
			sub_10008832(1);
			((CNavMotorV *)m_i20)->v6(&r.v[10]);
			return 0;
		}
		if (m_i18 != one)
			goto L1;
	}
	if (((CBaseEntity *)m_pOuter)->sub_100b3700() & 1) {
		((CNavMotorV *)m_i20)->v8();
		sub_10008832(0);
		if (sub_100147a4()) {
			vfunc8();
			return 0;
		}
		((CNavUnit *)this)->sub_10006744();
		return one;
	}
L1:
	((CNavMotorV *)m_i20)->v7();
	return 0;
}
// END FUNCTION
