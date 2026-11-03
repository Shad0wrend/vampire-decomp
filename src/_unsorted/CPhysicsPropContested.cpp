// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101929d0 size=0x6
#include "datamap.h"
#include "CPhysicsPropContested.h"
namespace lifted {
extern char g_1058da80;
}
datamap_t * CPhysicsPropContested::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058da80);
}
// END FUNCTION

// FUNCTION: 0x10192ab0 size=0x39
#include "CPhysicsPropContested.h"
#include "IPhysicsObject.h"

void sub_10013782();

// TARGET: CPhysicsPropContested::vfunc103
void CPhysicsPropContested::vfunc103()
{
    sub_10013782();
    vfunc93(0, 0);
    if (m_obj36c != 0)
        ((IPhysicsObject *)m_obj36c)->vfunc24(0);
    sub_100b3840(2);
    m_b7ac = 0;
}
// END FUNCTION

// FUNCTION: 0x10192b00 size=0x3a
#include "CPhysicsPropContested.h"
#include "CUnknown1070b248.h"

void sub_1000978c();
extern char g_106b8540[];
extern CUnknown1070b248 *g_1070b248;

// TARGET: CPhysicsPropContested::vfunc104
void CPhysicsPropContested::vfunc104()
{
	sub_1000978c();
	char *p = *(char * volatile *)&m_p7a8;
	if (p == 0)
		p = g_106b8540;
	if (*p != 0)
		g_1070b248->vfunc0(m_p7a8 ? m_p7a8 : g_106b8540, 0);
}
// END FUNCTION

// FUNCTION: 0x10192e60 size=0xeb
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CPhysicsPropContested.h"
#include "CEntityVSlots.h"
#include "CVStatList_t.h"


struct CContestedCharView
{
	void sub_10167fd0();	// stub 0x10014a6a
};

void sub_101cebc0(void *pPlayer, int nMessage, int a);

void CPhysicsPropContested::vfunc39(CBaseEntity *pOther)
{
	if (!m_b7ac)
	{
		if (pOther && ((CEntityVSlots *)this)->slot94() != 7)
		{
			if (CVStatListSet::Of(pOther)->Find(0)->sub_102012d0(1) >= m_n78c)
			{
				sub_10192b50(pOther);
				sub_101917f0(pOther);
				m_flTime7b0 = gpGlobals->curtime;
			}
			else
			{
				sub_101cebc0(pOther, 0x2f, 0);
				((CContestedCharView *)pOther)->sub_10167fd0();
			}
		}
	}
	else
		sub_101917f0(pOther);
}
// END FUNCTION

// FUNCTION: 0x10192f90 size=0xde
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CPhysicsPropContested.h"
#include "CVStatList_t.h"

#define SLA(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SLB(p) SLA(p##0) SLA(p##1) SLA(p##2) SLA(p##3) SLA(p##4) SLA(p##5) SLA(p##6) SLA(p##7) SLA(p##8) SLA(p##9)
struct ThisVT10192f90 {
	SLA(a0) SLA(a1) SLA(a2) SLA(a3) SLA(a4) SLA(a5) SLA(a6) SLA(a7) SLA(a8)
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93();
	virtual int v94();
};
struct AiVT10192f90 {
	SLB(a) SLB(b) SLB(c)
	virtual void s300(); virtual void s301(); virtual void s302(); virtual void s303(); virtual void s304(); virtual void s305();
	virtual void v306(CBaseEntity *pOther, int b);
};
struct CharView10192f90 {
	char pad[0xa8];
	AiVT10192f90 *m_pAi;
};
struct CMsgPlayerView;
void sub_101cebc0(CMsgPlayerView *pPlayer, int a, int b);

void CPhysicsPropContested::vfunc41(CBaseEntity *pOther)
{
	if (m_b7ac) {
		sub_10191810(pOther);
		return;
	}
	if (pOther && ((ThisVT10192f90 *)this)->v94() != 7) {
		int nValue = CVStatListSet::Of(pOther)->Find(0)->sub_10010609(1);
		if (nValue >= m_n78c) {
			sub_10192b50(pOther);
			return;
		}
		AiVT10192f90 *pAi = ((CharView10192f90 *)pOther)->m_pAi;
		if (pAi)
			pAi->v306(this, 0);
		sub_101cebc0((CMsgPlayerView *)pOther, 0x2f, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x101930b0 size=0x14
#include "CPhysicsPropContested.h"

bool CPhysicsPropContested::vfunc32(int a)
{
	if (m_b7ac)
		return CPhysicsProp::vfunc32(a);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10193100 size=0x12
struct CContestedFields10193100 {
    char pad0[0x7ac];
    unsigned char field7ac;
    int sub_10193100(int a);
};
int CContestedFields10193100::sub_10193100(int a)
{
    return (field7ac != 0 ? -5 : 0) + 5;
}
// END FUNCTION

// FUNCTION: 0x10193130 size=0x12
struct CContestedFields10193130 {
    char pad0[0x7ac];
    unsigned char field7ac;
    int sub_10193130(int a);
};
int CContestedFields10193130::sub_10193130(int a)
{
    return (field7ac != 0 ? -9 : 0) + 9;
}
// END FUNCTION

// FUNCTION: 0x10194510 size=0x41
#include "CPhysicsPropContested.h"
#include "COutputEvent.h"
#include "CBaseAnimating.h"

void sub_100aa7b0(void *p);

CPhysicsProp *CPhysicsPropContested::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x790))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x748))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x730))->sub_100cd2d0();
	((CBaseAnimating *)this)->sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
