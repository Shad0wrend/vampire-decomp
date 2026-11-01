// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10190040 size=0x6
namespace lifted {
extern char g_1058d4f8;
}
CDynamicProp::Datamap82 CDynamicProp::vfunc82()
{
    return (CDynamicProp::Datamap82)&lifted::g_1058d4f8;
}
// END FUNCTION

// FUNCTION: 0x10190340 size=0x6
namespace lifted {
extern char g_1072b040;
}
int CDynamicProp::vfunc80()
{
    return (int)&lifted::g_1072b040;
}
// END FUNCTION

// FUNCTION: 0x10190360 size=0x3
int CDynamicProp::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10190560 size=0x57
void sub_100aa7b0(void *);
CDynamicProp *CDynamicProp::vfunc5(unsigned int flags)
{
	m_slotE.sub_10015708();
	m_slotD.sub_10015708();
	m_slotC.sub_10015708();
	m_slotB.sub_10015708();
	m_slotA.sub_10015708();
	sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101905e0 size=0xa6
#include "CDynamicProp.h"
#include "CBreakableProp.h"
#include "CUnknown101466e0.h"

#define DP_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define DP_V100(p) DP_V10(p##0) DP_V10(p##1) DP_V10(p##2) DP_V10(p##3) DP_V10(p##4) DP_V10(p##5) DP_V10(p##6) DP_V10(p##7) DP_V10(p##8) DP_V10(p##9)

// the vtable of the entity up to slot 223
struct CPropSlots
{
	DP_V100(a)
	DP_V10(c0) DP_V10(c1) virtual void c20(); virtual void c21();
	virtual void SetClassname(const char *pszClassname);	// slot 122
	DP_V10(d0) DP_V10(d1) DP_V10(d2) DP_V10(d3) DP_V10(d4) DP_V10(d5) DP_V10(d6)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6();
	DP_V10(f0) DP_V10(f1) virtual void g0(); virtual void g1(); virtual void g2();
	virtual void vfunc223();
};

struct IEngineRandom
{
	virtual void v0();
	virtual float RandomFloat(float flMin, float flMax);
};


extern IEngineRandom *g_1070b244;
void sub_1000d2ce();
void __fastcall sub_10012eef(CDynamicProp *self);

void CDynamicProp::vfunc103()
{
	sub_10012eef(this);
	((CPropSlots *)this)->SetClassname("prop_dynamic");
	((CBaseEntity *)this)->sub_100b3580(0x40000);
	((CBaseEntity *)this)->sub_100b3b00();
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
	char bRandom = m_bRandomAnimate;
	m_n07d8 = -1;
	if (bRandom) {
		((CBaseEntity *)this)->sub_100b3640(0x40000);
		((CBreakableProp *)this)->sub_10007fe5((void *)sub_1000d2ce, 0, 0);
		m_flNextAnimTime = g_1070b244->RandomFloat(m_flAnimDelayMin, m_flAnimDelayMax) + gpGlobals->curtime;
		*(float *)((char *)this + 0x17c) = m_flNextAnimTime + 0.1;
	}
	((CPropSlots *)this)->vfunc223();
}
// END FUNCTION
