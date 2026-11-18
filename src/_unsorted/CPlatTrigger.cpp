// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101592f0 size=0xd
#include "CPlatTrigger.h"
// TARGET: CPlatTrigger::vfunc117
int CPlatTrigger::vfunc117() { int c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return (c & (char)0xfd) | 0x80000000; }
// END FUNCTION

// FUNCTION: 0x10159660 size=0x7d
#include "CPlatTrigger.h"

#define PV1(p) virtual void p();
#define PV10(p) PV1(p##0) PV1(p##1) PV1(p##2) PV1(p##3) PV1(p##4) PV1(p##5) PV1(p##6) PV1(p##7) PV1(p##8) PV1(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CTouchOtherView
{
	PV100(oa) PV10(ob) PV10(oc) PV10(od) PV10(oe) PV10(of)
	PV1(og0) PV1(og1) PV1(og2) PV1(og3) PV1(og4) PV1(og5) PV1(og6) PV1(og7)
	virtual char vfunc158();
	char pad[0xa8 - 4];
	void *m_pEdict;
};

inline float GetLocalTime(CFuncPlat *p)
{
	return p->m_flLocalTime;
}

inline void SetMoveDoneTime(CFuncPlat *p, float flDelay)
{
	if (flDelay >= 0)
		p->m_flMoveDoneTime = GetLocalTime(p) + flDelay;
	else
		p->m_flMoveDoneTime = -1;
}

// TARGET: CPlatTrigger::vfunc175
void CPlatTrigger::vfunc175(CBaseEntity *pOther)
{
	CTouchOtherView *p = (CTouchOtherView *)pOther;
	if (p->m_pEdict && p->vfunc158()) {
		if (m_pPlatform->m_nToggleState == 1)
			m_pPlatform->vfunc242();
		else if (m_pPlatform->m_nToggleState == 0)
			SetMoveDoneTime(m_pPlatform, GetLocalTime(m_pPlatform) + 1);
	}
}
// END FUNCTION

// FUNCTION: 0x1015a520 size=0x1e
#include "CPlatTrigger.h"

void sub_100aa7b0(void *p);

// TARGET: CPlatTrigger::vfunc5
CBaseEntity *CPlatTrigger::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
