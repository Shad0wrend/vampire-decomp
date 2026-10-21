// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012d9c0 size=0x1e
#include "CPropClockHand.h"

void sub_100aa7b0(void *p);

// TARGET: CPropClockHand::vfunc5
CPropClockHand *CPropClockHand::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1012d9f0 size=0xc9
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "CPropClockHand.h"

struct CGlobalVarsX { char pad[0xc]; float curtime; };
extern CGlobalVarsX *g_1070b228;

#define CPCH_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CPCH_V100(p) CPCH_V10(p##0) CPCH_V10(p##1) CPCH_V10(p##2) CPCH_V10(p##3) CPCH_V10(p##4) CPCH_V10(p##5) CPCH_V10(p##6) CPCH_V10(p##7) CPCH_V10(p##8) CPCH_V10(p##9)
struct ClockSlots {
	CPCH_V100(a) CPCH_V100(b) CPCH_V10(c0)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5(); virtual void k6(); virtual void k7(); virtual void k8();
	virtual float *vfunc219();
};

void CPropClockHand::vfunc103()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	sub_100b3580(0x40000);
	sub_10011793();
	float *pAngles = ((ClockSlots *)this)->vfunc219();
	*(float *)((char *)this + 0x730) = pAngles[0];
	*(float *)((char *)this + 0x734) = pAngles[1];
	*(float *)((char *)this + 0x738) = pAngles[2];
	*(float *)((char *)this + 0x764) = g_1070b228->curtime;
}
// END FUNCTION

// FUNCTION: 0x1012ddf0 size=0x75
#include "CBaseEntity.h"
#include "CPropClockHand.h"
#include "CUnknown1070b22c.h"
extern CUnknown1070b22c *g_1070b22c;
void sub_101434b0(int index, int line, const char *text, int a, int r, int g, int b, int al);
char *sub_101d3730(const char *fmt, ...);

// TARGET: CPropClockHand::vfunc124
int CPropClockHand::vfunc124()
{
    int line = sub_10096100();
    if (*(unsigned char *)((char *)this + 0x224) & 1) {
        int ed = m_pEdict2e0;
        int idx = g_1070b22c->vfunc35(ed);
        sub_101434b0(idx, line, sub_101d3730("ang: %.2f", (double)m_flAngle[m_iAxis]), 0, 255, 255, 255, 255);
        line++;
    }
    return line;
}
// END FUNCTION
