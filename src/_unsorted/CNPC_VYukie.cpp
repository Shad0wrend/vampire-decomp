// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103dd090 size=0x1e
#include "CNPC_VYukie.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VYukie::vfunc5
CNPC_VYukie *CNPC_VYukie::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103dd1f0 size=0x1d
#include "CNPC_VYukie.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_10940314;
extern B g_10936c74;
int CNPC_VYukie::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_10940314.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103dd6b0 size=0x67
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CNPC_VYukie.h"

#define D(x) virtual void x();
#define T(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)

struct CYukieSlots604
{
	H(a0) H(b0) H(c0) H(d0) H(e0) H(f0)
	D(g0) D(g1) D(g2) D(g3)
	virtual int slot604(unsigned int flags);
	virtual int slot605(unsigned int flags);
};

int CNPC_VYukie::vfunc438()
{
	*(int *)((char *)this + 0x1b2c) = 0x2a;
	switch (*(int *)((char *)this + 0x5cc0)) {
	case 2: {
		*((char *)this + 0x5b80) = 0;
		unsigned int flags;
		if (sub_1032e7b0())
			flags = sub_1032e7b0()->slot360();
		else
			flags = 0;
		int result;
		if (flags & 0x18000) {
			result = ((CYukieSlots604 *)this)->slot604(flags);
			if (result)
				return result;
		} else {
			result = ((CYukieSlots604 *)this)->slot605(flags);
			if (result)
				return result;
		}
		break;
	}
	}
	return sub_103872d0();
}
// END FUNCTION

// FUNCTION: 0x103dd900 size=0x74
#include "CNPC_VYukie.h"
#include "CEntityVSlots.h"
struct S1070b228 { char pad[0xc]; float curtime; };
struct IRandomLike { virtual void v0(); virtual float RandomFloat(float lo, float hi); };
struct ISlot1 { virtual void v0(); virtual void vfunc1(); };
extern S1070b228 *g_1070b228;
extern IRandomLike *g_1070b244;
extern ISlot1 *g_10924edc;
char CNPC_VYukie::vfunc600(int unused)
{
    unsigned int flags = sub_1032e7b0() ? sub_1032e7b0()->slot360() : 0;
    if ((flags & 0x18000) && !*((char *)this + 0x6078)) {
        *((char *)this + 0x6078) = 1;
        *(float *)((char *)this + 0x6074) = g_1070b244->RandomFloat(22.5f, 45.0f) + g_1070b228->curtime;
        g_10924edc->vfunc1();
        return 1;
    }
    return 0;
}
// END FUNCTION
