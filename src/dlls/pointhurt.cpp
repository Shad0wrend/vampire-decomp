// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 12 blocks
#include "vampire.h"

// FUNCTION: 0x1018d3d0 size=0x6
#include "datamap.h"
#include "CPointHurt.h"
namespace lifted {
extern char g_1058c6f0;
}
datamap_t * CPointHurt::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058c6f0);
}
// END FUNCTION

// FUNCTION: 0x1018d3f0 size=0x5
int sub_1018d430(void);
int g_1072b010 = ((int (*)(int))sub_1018d430)(0);
// END FUNCTION

// FUNCTION: 0x1018d430 size=0x1a
namespace lifted {
extern int g_1058c6f0;
extern int g_1058c6f4;
extern char g_1058c734;
}
int sub_1018d430()
{
    lifted::g_1058c6f4 = 0xb;
    lifted::g_1058c6f0 = (int)&lifted::g_1058c734;
    return (int)&lifted::g_1058c6f0;
}
// END FUNCTION

// FUNCTION: 0x1018d460 size=0x55
#include "platform.h"
#include "CConstraintAnchor.h"

void *sub_100aa720(unsigned int size);
extern int vt_10472a04;
extern char g_1058ca9c[];

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();

struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};

// TARGET: point_hurt
DLL_EXPORT GP *point_hurt()
{
	GP *p = (GP *)sub_100aa720(0x468);
	if (p) {
		((CConstraintAnchorBase *)p)->sub_1009d980(0);
		*(int *)((char *)p + 0x464) = -1;
		*(int **)p = &vt_10472a04;
	} else {
		p = 0;
	}
	p->name(g_1058ca9c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1018d4e0 size=0xbd
#include "CPointHurt.h"
void sub_100058c6();

void CPointHurt::vfunc103()
{
	sub_100ac4e0(0, 0, 0);
	*(int *)((char *)this + 0x1f0) = 0;
	m_hActivator = (CBaseEntity *)0;
	if (m_flags204 & 1) {
		sub_100ac4e0((int)sub_100058c6, 0, 0);
		*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1f;
	}
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1f;
	if (m_flRadius <= 0.0f)
		m_flRadius = 128.0f;
	if (m_nDamage <= 0)
		m_nDamage = 2;
	if (m_flDelay <= 0.0f)
		m_flDelay = 0.1f;
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1018d5d0 size=0x1
#include "CPointHurt.h"
void CPointHurt::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x1018d5f0 size=0x132
#include "CEntityVSlots.h"
#include "CPointHurt.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "CUnknown101c26d0.h"
extern char g_106b8540[];
extern CGlobalEntityList g_106eb5d8;

static inline const char *StrRef(const char *const &r) { return r ? r : g_106b8540; }

#define HV(n) virtual void h##n();
#define HV10(p) HV(p##0) HV(p##1) HV(p##2) HV(p##3) HV(p##4) HV(p##5) HV(p##6) HV(p##7) HV(p##8) HV(p##9)

struct CRulesView
{
	HV10(r0) HV10(r1) HV10(r2) HV(r30) HV(r31) HV(r32)
	virtual void slot33(CUnknown101c26d0 *info, const Vector &vecSrc, float flRadius, int iClassIgnore, int unk);
};
extern CRulesView *g_1070ba0c;

void CPointHurt::sub_1018d5f0()
{
	if (m_strTarget) {
		CBaseEntity *pTarget = 0;
		while ((pTarget = g_106eb5d8.sub_100f7770(pTarget, StrRef(m_strTarget), (CBaseEntity *)EHandle_Get(m_hActivator), 0)) != 0) {
			CUnknown101c26d0 info;
			pTarget->sub_100a1250(info.sub_101c26d0(this, EHandle_Get(m_hActivator), (float)m_nDamage, m_bitsDamageType, 0, 0, -1));
		}
	} else {
		CUnknown101c26d0 info;
		g_1070ba0c->slot33(info.sub_101c26d0(this, this, (float)m_nDamage, m_bitsDamageType, 0, 0, -1), *(Vector *)((CEntityVSlots *)this)->slot217(), m_flRadius, 0, 0);
	}
	m_flNextThink = m_flDelay + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1018d780 size=0x4e
#include "CBaseEntity.h"
#include "inputdata_t.h"
void sub_100058c6();
struct CUnit1018d780 : public CBaseEntity
{
	char m_pad43c[0x464 - sizeof(CBaseEntity)];
	EHANDLE m_h464;
	void sub_1018d780(inputdata_t *pInput);
};
void CUnit1018d780::sub_1018d780(inputdata_t *pInput)
{
	sub_100ac4e0((int)sub_100058c6, 0, 0);
	m_flNextThink = gpGlobals->curtime + 0.1f;
	m_h464 = (CBaseEntity *)pInput->pActivator;
}
// END FUNCTION

// FUNCTION: 0x1018d7f0 size=0x37
#include "CBaseEntity.h"

struct CUnknown1018d7f0
{
	char m_pad0000[0x464];
	unsigned int m_h464;

	void sub_1018d7f0(CBaseEntity **ppEnt);
};

// TARGET: CUnknown1018d7f0::sub_1018d7f0
void CUnknown1018d7f0::sub_1018d7f0(CBaseEntity **ppEnt)
{
	((CBaseEntity *)this)->sub_100ac4e0(0, 0, 0);
	CBaseEntity *pEnt = *ppEnt;
	if (pEnt != 0)
	{
		m_h464 = *pEnt->vfunc1();
		return;
	}
	m_h464 = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x1018d840 size=0x52
#include "CBaseEntity.h"
struct SInputActivator {
	CBaseEntity *pActivator;
};
struct SThinkView {
	char pad0[0x118];
	int m_pfnThink;
	char pad11c[0x464 - 0x11c];
	EHANDLE m_hActivator;
};
void sub_100058c6();

void __fastcall sub_1018d840(SThinkView *p, int unused, SInputActivator *pData)
{
	p->m_hActivator = pData->pActivator;
	if (p->m_pfnThink == (int)sub_100058c6)
		((CBaseEntity *)p)->sub_100ac4e0(0, 0, 0);
	else
		((CBaseEntity *)p)->sub_100ac4e0((int)sub_100058c6, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1018d8c0 size=0x3a
#include "CUnknown1018d8c0.h"
#include "CBaseEntity.h"

void __fastcall sub_1018d5f0(char *p);

void CUnknown1018d8c0::sub_1018d8c0(inputdata_t *inputdata)
{
	CBaseEntity *pEnt = (CBaseEntity *)inputdata->pActivator;
	if (pEnt)
		m_hEntity = *pEnt->vfunc1();
	else
		m_hEntity = 0xffffffff;
	sub_1018d5f0((char *)this);
}
// END FUNCTION

// FUNCTION: 0x1018d910 size=0x1e
#include "CPointHurt.h"

void sub_100aa7b0(void *p);

// TARGET: CPointHurt::vfunc5
CBaseEntity *CPointHurt::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
