// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 163 blocks
#include "vampire.h"

// FUNCTION: 0x1004fc90 size=0x3
#include "CBaseProp.h"
bool CBaseProp::vfunc158()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1018df70 size=0x107
#include "CBaseAnimating.h"
#include "CBaseProp.h"

extern "C" __declspec(dllimport) void __cdecl Warning(const char *pszFormat, ...);
extern char g_106b8540[];


void sub_101cd940(CBaseEntity *pEnt);

#define HV1(p) virtual void p();
#define HV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct PropProbe	// the prop as seen through its vtable: slots 92 (solid type), 220 (origin) are typed
{
	HV10(pa0) HV10(pa1) HV10(pa2) HV10(pa3) HV10(pa4) HV10(pa5) HV10(pa6) HV10(pa7) HV10(pa8)
	HV1(pb0) HV1(pb1)
	virtual int vfunc92();
	HV10(pc0) HV10(pc1) HV10(pc2) HV10(pc3) HV10(pc4) HV10(pc5) HV10(pc6) HV10(pc7) HV10(pc8) HV10(pc9) HV10(pd0) HV10(pd1)
	HV1(pe0) HV1(pe1) HV1(pe2) HV1(pe3) HV1(pe4) HV1(pe5) HV1(pe6)
	virtual float *vfunc220();
};

void CBaseProp::vfunc103()
{
	CBaseAnimating *pAnim = (CBaseAnimating *)this;
	int nUnused;
	const char *pszModel = *pAnim->vfunc9(&nUnused);
	if (!pszModel)
		pszModel = g_106b8540;
	if (*pszModel) {
		pAnim->vfunc104();
		pAnim->vfunc105(pszModel);
		pAnim->vfunc93(0, 0);
		pAnim->m_nTakeDamage = 0;
		*(int *)((char *)this + 0x17c) = 0;
		*(float *)((char *)this + 0x174) = gpGlobals->curtime;
		*(int *)((char *)this + 0x6f4) = 0;
		*(int *)((char *)this + 0x6f8) = 0;
		int nSequence = pAnim->sub_1008dc40(1, -1);
		*(int *)((char *)this + 0x6f0) = nSequence;
		if (nSequence < 0)
			*(int *)((char *)this + 0x6f0) = 0;
		pAnim->sub_100b3b00();
		int nSolid = ((PropProbe *)this)->vfunc92();
		if (nSolid > 0 && (nSolid <= 2 || nSolid == 6))
			pAnim->sub_100a9470(1);
	} else {
		Warning("prop at %.0f %.0f %0.f missing modelname\n", ((PropProbe *)this)->vfunc220()[0], ((PropProbe *)this)->vfunc220()[1], ((PropProbe *)this)->vfunc220()[2]);
		sub_101cd940(pAnim);
	}
}
// END FUNCTION

// FUNCTION: 0x1018e0d0 size=0x26
#include "CBaseProp.h"
#include "CBaseEntity.h"
#include "IVEngineServerFull.h"

extern char g_106b8540[];

void CBaseProp::vfunc104()
{
	int unused;
	const char *name = *((CBaseEntity *)this)->vfunc9(&unused);
	if (!name)
		name = g_106b8540;
	engine->vfunc13(name, 0);
}
// END FUNCTION

// FUNCTION: 0x1018e110 size=0x6
#include "CActivityCopyProp.h"
namespace lifted {
extern char g_1058d008;
}
datamap_t * CActivityCopyProp::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058d008);
}
// END FUNCTION

// FUNCTION: 0x1018e130 size=0x5
int sub_1018e170(void);
int g_1072b060 = ((int (*)(int))sub_1018e170)(0);
// END FUNCTION

// FUNCTION: 0x1018e170 size=0x1a
namespace lifted {
extern int g_1058d008;
extern int g_1058d00c;
extern char g_1058d04c;
}
int sub_1018e170()
{
    lifted::g_1058d00c = 8;
    lifted::g_1058d008 = (int)&lifted::g_1058d04c;
    return (int)&lifted::g_1058d008;
}
// END FUNCTION

// FUNCTION: 0x1018e1a0 size=0x1
#include "CActivityCopyProp.h"
void CActivityCopyProp::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x1018e1c0 size=0x38
#include "CActivityCopyProp.h"

void sub_100103fc();
extern char vt_1047382c[];

// TARGET: CActivityCopyProp::sub_1018e1c0
CActivityCopyProp *CActivityCopyProp::sub_1018e1c0()
{
    sub_100103fc();
    *(unsigned int *)((char *)this + 0x730) = 0xffffffff;
    *((char *)this + 0x734) = 0;
    *((char *)this + 0x735) = 0;
    *(void **)this = (void *)vt_1047382c;
    m_nEffectFlags |= 0xb0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1018e210 size=0x1e
#include "CActivityCopyProp.h"

void sub_100aa7b0(void *p);

// TARGET: CActivityCopyProp::vfunc5
CBaseEntity *CActivityCopyProp::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1018e240 size=0x1e
#include "CBaseProp.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseProp::vfunc5
CBaseEntity *CBaseProp::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1018e270 size=0x13
#include "CActivityCopyProp.h"
#include "CBaseEntitySlots.h"

struct CActivityCopyPropView2
{
	void sub_1018df70();
};

void CActivityCopyProp::vfunc103()
{
	((CBaseEntitySlots *)this)->slot66();
	((CActivityCopyPropView2 *)this)->sub_1018df70();
}
// END FUNCTION

// FUNCTION: 0x1018e2a0 size=0x67
#include "CUnknown1018e2a0.h"

void CUnknown1018e2a0::sub_1018e2a0(CBaseEntity *pTarget)
{
    if (pTarget) {
        *(unsigned int *)((char *)this + 0x730) = *pTarget->vfunc1();
        sub_100ac4e0(&CUnknown1018e2a0::sub_10006177, 0, 0);
        *(float *)((char *)this + 0x17c) = gpGlobals->curtime;
        *(int *)((char *)this + 0x73c) = *(int *)((char *)pTarget + 0xfec);
    } else {
        *(unsigned int *)((char *)this + 0x730) = 0xffffffff;
        sub_100ac4e0(0, 0, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x1018e330 size=0x37c
#include "vampire.h"
#include "CActivityCopyProp.h"
#include "CBaseAnimating.h"
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include <stdlib.h>

extern float (__cdecl *g_109f385c)(float, float);
float sub_102283a0(float cur, float target, float step, float dt);
void sub_101cd940(void *p);
extern unsigned char g_1058d1ac[];

struct CActivityCopyClrView
{
	char m_pad[0x1a0];
	unsigned char clr[4];
};

// TARGET: CActivityCopyProp::sub_1018e330
void CActivityCopyProp::sub_1018e330()
{
	if (!EHandle_Get(m_hTarget))
	{
		sub_100ac4e0(0, 0, 0);
		sub_101cd940(this);
		return;
	}
	int act = *(int *)((char *)EHandle_Get(m_hTarget) + 0xfec);
	if (act != m_n73c)
	{
		m_n73c = -1;
		int seq = ((CBaseAnimating *)this)->sub_1008dc40(act, -1);
		if (seq != -1)
		{
			if (seq != *(int *)((char *)this + 0x6f0))
			{
				((CAI_BaseNPC *)this)->sub_10260a50(seq);
				if (m_b734)
					*(float *)(0x6f8 + (char *)this) = g_109f385c(0.0f, 0.45f);
				else
					*(float *)((char *)this + 0x6f8) = 0.0f;
			}
			((CEntityVSlots *)this)->slot250(0.0f);
		}
		((CEntityVSlots *)this)->slot67();
		if (m_nEffectFlags & 0x10)
			m_nEffectFlags &= ~0x10;
	}
	if (m_n16c == 2)
	{
		float dt = gpGlobals->curtime - *(float *)((char *)this + 0x178);
		unsigned int step = m_n738;
		if (step)
		{
			if (step < 5)
			{
				CActivityCopyClrView *c = (CActivityCopyClrView *)this;
				float flStep = (m_f740) * 0.25f;
				float flRate = 1.0f / flStep;
				int toR = g_1058d1ac[4 + step];
				int toG = g_1058d1ac[0xc + step];
				int toB = g_1058d1ac[0x14 + step];
				int dR = abs(g_1058d1ac[3 + step] - toR);
				int dG = abs(g_1058d1ac[0xb + step] - toG);
				int dB = abs(g_1058d1ac[0x13 + step] - toB);
				float stR = (float)dR * flRate;
				float stG = (float)dG * flRate;
				float stB = (float)dB * flRate;
				float stB2 = stB;
				c->clr[0] = sub_102283a0(c->clr[0], toR, stR, dt);
				c->clr[1] = sub_102283a0(c->clr[1], toG, stG, dt);
				c->clr[2] = sub_102283a0(c->clr[2], toB, stB2, dt);
				m_f744 = m_f744 + dt;
				dt = m_f744;
				if (c->clr[0] == toR && c->clr[1] == toG && c->clr[2] == toB)
				{
					if ((float)m_n738 * flStep <= dt)
						m_n738++;
				}
			}
		}
		else
		{
			m_n16c = 2;
			float flFade = 255.0 / m_f740;
			unsigned char a = (unsigned char)(int)sub_102283a0((float)m_bAlpha1a3, 0.0f, flFade, dt);
			m_bAlpha1a3 = a;
			if (a == 0 && m_bActive == 1)
				sub_101cd940(this);
		}
	}
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x1018e790 size=0x12e
#include "CActivityCopyProp.h"
#include "CBaseAnimating.h"
#include "CUnknown1018e2a0.h"
#include "CEntityVSlots.h"

extern int g_1058d1ac;
extern char g_106b8540[];
extern char g_10538764[];
extern char g_1058ed4c[];

void sub_1018e910(CBaseEntity *pEnt);
CEntityVSlots *sub_100a9ab0(const char *pszClassname, const float *pOrigin, const float *pAngles, CEntityVSlots *pOwner);
int sub_101d1280(CBaseEntity *pEnt);
void sub_1042bff0(unsigned int *pOut, const char *psz);
void *sub_10430b64(void *p, long vfDelta, void *pSrcType, void *pTargetType, int isReference);

// TARGET: sub_1018e790
void sub_1018e790(CBaseEntity *pEnt, const char *pszActivity)
{
	if (pEnt) {
		sub_1018e910(pEnt);
		if (g_1058d1ac < 0 || g_1058d1ac > 5)
			g_1058d1ac = 1;
		for (int i = 0; i < g_1058d1ac; i++) {
			Vector ang = *((CEntityVSlots *)pEnt)->slot219();
			ang.y = (float)(360 / g_1058d1ac * i) + ang.y;
			CEntityVSlots *pProp = sub_100a9ab0("activity_copy_prop", (const float *)((CEntityVSlots *)pEnt)->slot217(), &ang.x, 0);
			if (pProp) {
				((CBaseEntity *)pProp)->vfunc11(g_106b8540);
				((CBaseEntity *)pProp)->vfunc13("activity_copy_prop");
			}
			CActivityCopyProp *pCopy = (CActivityCopyProp *)sub_10430b64(pProp, 0, g_10538764, g_1058ed4c, 0);
			unsigned int str;
			sub_1042bff0(&str, pszActivity);
			((CEntityVSlots *)pCopy)->slot212(str);
			sub_101d1280((CBaseEntity *)pProp);
			((CUnknown1018e2a0 *)pCopy)->sub_1018e2a0(pEnt);
			((CBaseAnimating *)pEnt)->sub_100976e0();
			((CBaseAnimating *)pCopy)->sub_100976e0();
		}
	}
	g_1058d1ac = 1;
}
// END FUNCTION

// FUNCTION: 0x1018e910 size=0x84
#include "CGlobalEntityList.h"
#include "CActivityCopyProp.h"
#include "CUnknown1018e2a0.h"
extern CGlobalEntityList g_106eb5d8;
extern CGlobalEntityList *g_10566458;
extern char g_10538764[];	// type descriptor of CBaseEntity
extern char g_1058ed4c[];	// type descriptor of CActivityCopyProp
extern "C" void *__RTDynamicCast(void *pObject, long nVfDelta, void *pSrcType, void *pTargetType, int bIsReference);
void sub_101cd940(CBaseEntity *pEnt);
void sub_1018e910(CBaseEntity *pTarget)
{
	CBaseEntity *pEnt = 0;
	do {
		pEnt = g_106eb5d8.sub_100f7380(pEnt, "activity_copy_prop");
		CActivityCopyProp *pProp = (CActivityCopyProp *)__RTDynamicCast(pEnt, 0, g_10538764, g_1058ed4c, 0);
		if (pProp) {
			CGlobalEntityList_Ent *pCurrent;
			unsigned int h = pProp->m_hTarget;
			if (h != 0xffffffff) {
				CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
				pCurrent = (pSlot->m_Serial == (int)(h >> 13)) ? pSlot->m_pEntity : 0;
			} else {
				pCurrent = 0;
			}
			if (pCurrent == (CGlobalEntityList_Ent *)pTarget) {
				((CUnknown1018e2a0 *)pProp)->sub_1018e2a0(0);
				sub_101cd940(pProp);
			}
		}
	} while (pEnt);
}
// END FUNCTION

// FUNCTION: 0x1018e9d0 size=0xa
extern int g_1058d1ac;
// TARGET: sub_1018e9d0
void sub_1018e9d0(int a, int b) { g_1058d1ac = b; }
// END FUNCTION

// FUNCTION: 0x1018e9f0 size=0x86
#include "CBaseEntity.h"
#include "CActivityCopyProp.h"
#include "CGlobalEntityList.h"

struct HandleEntry_t
{
	CBaseEntity *m_pEnt;
	unsigned int m_nSerial;
	int pad;
};
struct HandleTable_t
{
	int pad;
	HandleEntry_t m_Entries[1];
};
extern HandleTable_t *g_10566458;
extern CGlobalEntityList g_106eb5d8;
extern char g_10538764[];	// CBaseEntity type descriptor
extern char g_1058ed4c[];	// CActivityCopyProp type descriptor
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long vfDelta, void *pSrcType, void *pTargetType, int isReference);

static inline CBaseEntity *HandleGet(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	HandleEntry_t *e = &g_10566458->m_Entries[h & 0x1fff];
	if (e->m_nSerial == (h >> 13))
		return e->m_pEnt;
	return 0;
}

int sub_1018e9f0(CBaseEntity *pTarget, CActivityCopyProp **ppOut, int nMax)
{
	int n = 0;
	CBaseEntity *pEnt = 0;
	do {
		pEnt = g_106eb5d8.sub_100f7380(pEnt, "activity_copy_prop");
		CActivityCopyProp *pProp = (CActivityCopyProp *)__RTDynamicCast(pEnt, 0, g_10538764, g_1058ed4c, 0);
		if (pProp) {
			if (HandleGet(pProp->m_hTarget) == pTarget) {
				if (ppOut)
					ppOut[n] = pProp;
				n++;
			}
		}
	} while (pEnt && n < nMax);
	return n;
}
// END FUNCTION

// FUNCTION: 0x1018eab0 size=0x7c
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern CGlobalEntityList *g_10566458;
extern char g_10538764[];
extern char g_1058ed4c[];

struct SCopyProp {
	char pad[0x730];
	unsigned int m_hTarget;
	char m_bFlag;
};

inline CBaseEntity *ResolveHandle(const unsigned int &h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return (CBaseEntity *)s->m_pEntity;
	}
	return 0;
}

void sub_1018eab0(CBaseEntity *pTarget, char flag)
{
	CBaseEntity *pEnt = 0;
	do {
		pEnt = g_106eb5d8.sub_100f7380(pEnt, "activity_copy_prop");
		SCopyProp *pProp = (SCopyProp *)__RTDynamicCast(pEnt, 0, g_10538764, g_1058ed4c, 0);
		if (pProp) {
			if (ResolveHandle(pProp->m_hTarget) == pTarget)
				pProp->m_bFlag = flag;
		}
	} while (pEnt);
}
// END FUNCTION

// FUNCTION: 0x1018eb50 size=0x9e
#include "CActivityCopyProp.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_10538764[];
extern char g_1058ed4c[];

int sub_1018eb50(CBaseEntity *pTarget, volatile int nActivity)
{
    CBaseEntity *pEnt = 0;
    do {
        pEnt = g_106eb5d8.sub_100f7380(pEnt, "activity_copy_prop");
        CActivityCopyProp *pProp = (CActivityCopyProp *)__RTDynamicCast(pEnt, 0, g_10538764, g_1058ed4c, 0);
        if (pProp && (CBaseEntity *)EHandle_Get(pProp->m_hTarget) == pTarget && *(int *)((char *)pProp + 0x16c) == 0) {
            *((unsigned char *)pProp + 0x1a3) = 0xff;
            *(int *)((char *)pProp + 0x740) = nActivity;
            *(int *)((char *)pProp + 0x16c) = 2;
        }
    } while (pEnt);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1018ec20 size=0x98
#include "CActivityCopyProp.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern CGlobalEntityList *g_10566458;
extern char g_10538764[];	// type descriptor of CBaseEntity
extern char g_1058ed4c[];	// type descriptor of CActivityCopyProp
extern const char g_1058ed74[];	// "activity_copy_prop"

static inline void *HandleGet(const unsigned int *ph)
{
	if (*ph != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[*ph & 0x1fff];
		if (s->m_Serial == (int)(*ph >> 13))
			return s->m_pEntity;
	}
	return 0;
}

void sub_1018ec20(CBaseEntity *pTarget, float value)
{
	CBaseEntity *pEnt = 0;
	do {
		pEnt = g_106eb5d8.sub_100f7380(pEnt, g_1058ed74);
		CActivityCopyProp *pProp = (CActivityCopyProp *)__RTDynamicCast(pEnt, 0, g_10538764, g_1058ed4c, 0);
		if (pProp) {
			if (HandleGet(&pProp->m_hTarget) == (void *)pTarget) {
				*(int *)((char *)pProp + 0x738) = 1;
				*(int *)((char *)pProp + 0x744) = 0;
				*(float *)((char *)pProp + 0x740) = value;
				*(int *)((char *)pProp + 0x16c) = 2;
			}
		}
	} while (pEnt);
}
// END FUNCTION

// FUNCTION: 0x1018ecf0 size=0x116
#include "CBaseEntity.h"
#include "CActivityCopyProp.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_10538764[];	// type descriptor of CBaseEntity
extern char g_1058ed4c[];	// type descriptor of CActivityCopyProp
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long lVfDelta, void *pSrcType, void *pTargetType, int bReference);
void sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);
void sub_101cf5c0(CBaseEntity *pEnt, const Vector *pOrigin, int a);

// TARGET: sub_1018ecf0
void sub_1018ecf0(CBaseEntity *pOwner, float flScale)
{
    CBaseEntity *pEnt = 0;
    do
    {
        pEnt = g_106eb5d8.sub_100f7380(pEnt, "activity_copy_prop");
        CActivityCopyProp *pProp = (CActivityCopyProp *)__RTDynamicCast(pEnt, 0, g_10538764, g_1058ed4c, 0);
        if (pProp && (CBaseEntity *)EHandle_Get(pProp->m_hTarget) == pOwner)
        {
            Vector forward;
            sub_10139610(((CEntityVSlots *)pProp)->slot221(), &forward, 0, 0);
            Vector vecOffset = forward * flScale;
            Vector vecNew = vecOffset + *((CEntityVSlots *)pProp)->slot220();
            sub_101cf5c0(pProp, &vecNew, 0);
        }
    } while (pEnt);
}
// END FUNCTION

// FUNCTION: 0x1018ee60 size=0x9c
#include "CGlobalEntityList.h"
#include "CActivityCopyProp.h"

extern CGlobalEntityList g_106eb5d8;
extern CGlobalEntityList *g_10566458;
extern char g_1058ed74[];
extern char g_10538764[];
extern char g_1058ed4c[];

struct HandleSlot { CBaseEntity *m_pEntity; int m_Serial; };

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	HandleSlot *s = (HandleSlot *)&g_10566458->m_Slots[h & 0x1fff].m_pEntity;
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

void sub_1018ee60(CBaseEntity *pOwner, int activity)
{
	volatile int *pActivity = &activity;
	CBaseEntity *pEnt = 0;
	do {
		pEnt = g_106eb5d8.sub_100f7380(pEnt, g_1058ed74);
		CActivityCopyProp *pProp = (CActivityCopyProp *)__RTDynamicCast(pEnt, 0, g_10538764, g_1058ed4c, 0);
		if (pProp) {
			if (ResolveHandle(pProp->m_hTarget) == pOwner && *(int *)((char *)pProp + 0x16c) == 0) {
				pProp->m_bActive = 1;
				pProp->m_nActivity = *pActivity;
				*(unsigned char *)((char *)pProp + 0x1a3) = 0xff;
				*(int *)((char *)pProp + 0x16c) = 2;
			}
		}
	} while (pEnt);
}
// END FUNCTION

// FUNCTION: 0x1018ef30 size=0x43
#include "platform.h"
#include "CActivityCopyProp.h"
void *sub_100aa720(int size);
extern char g_1058ed74[];

// TARGET: activity_copy_prop
DLL_EXPORT CBaseEntity *activity_copy_prop()
{
	void *mem = sub_100aa720(0x748);
	CActivityCopyProp *p;
	if (mem)
		p = ((CActivityCopyProp *)mem)->sub_1018e1c0();
	else
		p = 0;
	p->vfunc106(g_1058ed74);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1018efa0 size=0x6
#include "datamap.h"
#include "CBreakableProp.h"
namespace lifted {
extern char g_1058d1c8;
}
datamap_t *CBreakableProp::vfunc82()
{
    return (datamap_t *)&lifted::g_1058d1c8;
}
// END FUNCTION

// FUNCTION: 0x1018efc0 size=0x5
int * sub_1018f000(void);
int * g_1072b058 = ((int * (*)(int))sub_1018f000)(0);
// END FUNCTION

// FUNCTION: 0x1018f000 size=0x157
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1058d1c8[2];
void sub_10013589();
void sub_10007135();
void sub_10002770();
void sub_100011ea();
void sub_100132be();
void sub_10006857();
void sub_10014e25();
void sub_1000a8c6();

int *sub_1018f000()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_impactEnergyScale", {0xdc, 0}, 1, 0xe, "physdamagescale" },
        { 4, "m_createFrame", {0x760, 0}, 1, 2 },
        { 2, "m_iszExplosionParamEnt", {0x764, 0}, 1, 6, "explosion_params" },
        { 4, "m_CollideableGibs", {0x76c, 0}, 1, 6, "collideable_gibs" },
        { 0xc, "m_hBreaker", {0x768, 0}, 1, 2 },
        { 1, "m_flFadeTime", {0x770, 0}, 1, 2 },
        { 5, "m_bForceGibsFade", {0x778, 0}, 1, 2 },
        { 0, "InputBreak", {0, 0}, 1, 8, "Break", 0, (void *)sub_10013589 },
        { 4, "InputSetHealth", {0, 0}, 1, 8, "SetHealth", 0, (void *)sub_10007135 },
        { 4, "InputAddHealth", {0, 0}, 1, 8, "AddHealth", 0, (void *)sub_10002770 },
        { 4, "InputRemoveHealth", {0, 0}, 1, 8, "RemoveHealth", 0, (void *)sub_100011ea },
        { 1, "InputFadeOutKill", {0, 0}, 1, 8, "FadeOutKill", 0, (void *)sub_100132be },
        { 4, "InputSetDebris", {0, 0}, 1, 8, "SetDebris", 0, (void *)sub_10006857 },
        { 0xa, "m_OnBreak", {0x730, 0}, 1, 0x16, "OnBreak", g_1055dc70 },
        { 0xa, "m_OnHealthChanged", {0x748, 0}, 1, 0x16, "OnHealthChanged", g_1055dc70 },
        { 0, "CBreakablePropBreakThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10014e25 },
        { 0, "CBreakablePropFadeOut", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000a8c6 },
    };
    g_1058d1c8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1058d1c8[0] = (int)&dataDesc[1];
    return g_1058d1c8;
}
// END FUNCTION

// FUNCTION: 0x1018f1c0 size=0x49
#include "CBreakableProp.h"
#include "CBaseAnimating.h"
#include "COutputEvent.h"

extern int g_1047332c;	// CBaseProp vftable
extern int g_10473d2c;	// CBreakableProp vftable

struct CBreakablePropView
{
	void *m_pVtable;
	char m_pad0004[0x730 - 4];
	COutputEvent m_Output730;
	COutputEvent m_Output748;
	int m_n760;
	int m_n764;
	int m_h768;
	int m_nBreakMode;
	char m_pad770[8];
	char m_b778;
};

CBreakableProp *CBreakableProp::sub_1018f1c0()
{
	CBreakablePropView *p = (CBreakablePropView *)this;
	((CBaseAnimating *)this)->sub_1008b230();
	*(void **)&p->m_pVtable = &g_1047332c;
	p->m_Output730.sub_100cd2a0();
	p->m_Output748.sub_100cd2a0();
	p->m_h768 = -1;
	*(void **)&p->m_pVtable = &g_10473d2c;
	p->m_nBreakMode = 2;
	p->m_b778 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1018f230 size=0x36
#include "CBreakableProp.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CBreakableProp::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1018f280 size=0x85
#include "CBreakableProp.h"

struct CListNode100cd940;
int __fastcall sub_100cd940(CListNode100cd940 *p);
extern void (__cdecl *g_109f3658)(int level, const char *fmt, ...);

void CBreakableProp::vfunc265()
{
	if (*(int *)((char *)this + 0x210) == 5) {
		if (!sub_100cd940((CListNode100cd940 *)((char *)this + 0x748)) && !sub_100cd940((CListNode100cd940 *)((char *)this + 0x730))) {
			void (__cdecl *warn)(int level, const char *fmt, ...) = g_109f3658;
			*(int *)((char *)this + 0x210) = 0;
			warn(2, "\n**** HACK DESTRUCTABLE PROP HEALTH HACK ****\n");
			int edict = *(int *)((char *)this + 0x2e0);
			int idx = engine->vfunc35(edict);
			warn(2, "\nSetting entity %-4d's health to 0,  (%s, %s)\n", idx, sub_100ab4f0(), sub_1009f200());
			warn(2, "\n**** HACK DESTRUCTABLE PROP HEALTH HACK ****\n\n");
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1018f340 size=0x73
#include "CBaseEntity.h"
#include "CBreakableProp.h"

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SlotProp {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23) SV10(24) SV10(25)
	SV(260) SV(261) SV(262) SV(263) SV(264)
	virtual void v265();
};

extern int g_1070ba38;

void CBreakableProp::vfunc103()
{
	sub_10011793();
	((SlotProp *)this)->v265();
	if (*(int *)((char *)this + 0x210) == 0)
		*(int *)((char *)this + 0x1fc) = 1;
	else
		*(int *)((char *)this + 0x1fc) = 2;
	*(int *)((char *)this + 0x760) = g_1070ba38;
	if (*(float *)((char *)this + 0xdc) == 0.0f)
		*(float *)((char *)this + 0xdc) = 0.1f;
	((CBaseEntity *)this)->sub_100b3580(0x20000000);
	*(int *)((char *)this + 0x774) = 0;
}
// END FUNCTION

// FUNCTION: 0x1018f3e0 size=0x5
#include "CBreakableProp.h"
#include "CBaseEntity.h"

// TARGET: CBreakableProp::vfunc113
// the game's 0x1018f3e0: a tail call (jmp) of CBaseEntity::vfunc113
void CBreakableProp::vfunc113()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x1018f400 size=0x12e
#include "CBreakableProp.h"
#include "CBaseEntity.h"
#include "CTakeDamageInfo.h"
#include "COutputEvent.h"
#include "CVariantCopy.h"

extern int g_1070ba38;

#define S_V(n) virtual void v##n();
#define S_V10(p) S_V(p##0) S_V(p##1) S_V(p##2) S_V(p##3) S_V(p##4) S_V(p##5) S_V(p##6) S_V(p##7) S_V(p##8) S_V(p##9)
struct CBreakablePropSlots
{
	S_V(0) S_V(1) S_V(2) S_V(3) S_V(4) S_V(5) S_V(6) S_V(7) S_V(8) S_V(9)
	S_V10(1) S_V10(2) S_V10(3) S_V10(4) S_V10(5) S_V10(6) S_V10(7) S_V10(8) S_V10(9)
	S_V10(10) S_V10(11) S_V10(12) S_V10(13)
	virtual char vfunc140(void *pAttacker);
};

// TARGET: CBreakableProp::vfunc142
int CBreakableProp::vfunc142(CTakeDamageInfo *pInfo)
{
	CTakeDamageInfo info = *pInfo;
	if (!((CBreakablePropSlots *)this)->vfunc140(info.m_pInflictor))
		return 1;
	unsigned int *pVDmg = (unsigned int *)info.m_pVDmg00;
	unsigned int nBits = info.m_nFlags38;
	if ((pVDmg ? (pVDmg[4] | nBits) : nBits) & 0x2000000)
		info.m_flDamage *= 5.0f;
	if ((pVDmg ? (pVDmg[4] | nBits) : nBits) & 0x80)
		info.m_flDamage += info.m_flDamage;
	if ((pVDmg ? (pVDmg[4] | nBits) : nBits) & 0x20000)
		info.m_flDamage *= 0.1f;
	if (m_createFrame == g_1070ba38) {
		int nOld = m_nTakeDamage;
		m_nTakeDamage = 1;
		int r = ((CBaseEntity *)this)->CBaseEntity::vfunc142(&info);
		m_nTakeDamage = nOld;
		return r;
	}
	int r = ((CBaseEntity *)this)->CBaseEntity::vfunc142(&info);
	void *pAttacker = info.m_pInflictor;
	int nHealth = m_iHealth;
	((CVariantCopy *)m_OnHealthChanged748)->sub_1000b320(4, &nHealth);
	((COutputEvent *)m_OnHealthChanged748)->sub_100cd300(*(CVariantCopy *)m_OnHealthChanged748, pAttacker, this, 0.0f);
	return r;
}
// END FUNCTION

// FUNCTION: 0x1018f580 size=0x7d
#include "CBaseEntity.h"
#include "CBreakableProp.h"


void sub_10014e25();

void CBreakableProp::vfunc144(void *pInfo)
{
	*(unsigned int *)((char *)this + 0x204) &= 0xffffdfff;
	((CBaseEntity *)this)->sub_100b3640(0x40000);
	CBaseEntity *pAttacker = *(CBaseEntity **)((char *)pInfo + 0x28);
	if (pAttacker)
		*(unsigned int *)((char *)this + 0x768) = *pAttacker->vfunc1();
	else
		*(unsigned int *)((char *)this + 0x768) = 0xffffffff;
	sub_10007fe5((void *)sub_10014e25, 0, 0);
	float fNext = gpGlobals->curtime + 0.001;
	*(int *)((char *)this + 0x1fc) = 0;
	*(int *)((char *)this + 0x200) = 1;
	*(float *)((char *)this + 0x17c) = fNext;
}
// END FUNCTION

// FUNCTION: 0x1018f620 size=0x4b
#include "CBreakableProp.h"
#include "CBaseEntity.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct SBreakableSlots {
    V100(a0) V100(a1) V10(a20) V10(a21) V10(a22) V10(a23) V10(a24) V10(a25)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5();
    virtual void vfunc266(CBaseEntity *pActivator);
};
// TARGET: CBreakableProp::sub_1018f620
void CBreakableProp::sub_1018f620()
{
    ((SBreakableSlots *)this)->vfunc266(m_hAttacker768.Get());
    sub_10007fe5(0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1018f690 size=0x43
#include "CBreakableProp.h"
__declspec(dllimport) void DevWarning(const char *, ...);
void CBreakableProp::sub_1018f690(int mode)
{
	if (mode < 0 || mode > 2) {
		DevWarning("Invalid collision type %d set on : %s\n", mode, sub_100ab4f0());
		mode = 2;
	}
	m_nBreakMode = mode;
}
// END FUNCTION

// FUNCTION: 0x1018f700 size=0xd
#include "CUnknown1018f700.h"
void CUnknown1018f700::sub_1018f700(char value)
{
	m_unk778 = value;
}
// END FUNCTION

// FUNCTION: 0x1018f720 size=0x12
struct CFoo1018f720 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
	virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
	virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89();
	virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94(); virtual void v95(); virtual void v96(); virtual void v97(); virtual void v98(); virtual void v99();
	virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103(); virtual void v104(); virtual void v105(); virtual void v106(); virtual void v107(); virtual void v108(); virtual void v109();
	virtual void v110(); virtual void v111(); virtual void v112(); virtual void v113(); virtual void v114(); virtual void v115(); virtual void v116(); virtual void v117(); virtual void v118(); virtual void v119();
	virtual void v120(); virtual void v121(); virtual void v122(); virtual void v123(); virtual void v124(); virtual void v125(); virtual void v126(); virtual void v127(); virtual void v128(); virtual void v129();
	virtual void v130(); virtual void v131(); virtual void v132(); virtual void v133(); virtual void v134(); virtual void v135(); virtual void v136(); virtual void v137(); virtual void v138(); virtual void v139();
	virtual void v140(); virtual void v141(); virtual void v142(); virtual void v143(); virtual void v144(); virtual void v145(); virtual void v146(); virtual void v147(); virtual void v148(); virtual void v149();
	virtual void v150(); virtual void v151(); virtual void v152(); virtual void v153(); virtual void v154(); virtual void v155(); virtual void v156(); virtual void v157(); virtual void v158(); virtual void v159();
	virtual void v160(); virtual void v161(); virtual void v162(); virtual void v163(); virtual void v164(); virtual void v165(); virtual void v166(); virtual void v167(); virtual void v168(); virtual void v169();
	virtual void v170(); virtual void v171(); virtual void v172(); virtual void v173(); virtual void v174(); virtual void v175(); virtual void v176(); virtual void v177(); virtual void v178(); virtual void v179();
	virtual void v180(); virtual void v181(); virtual void v182(); virtual void v183(); virtual void v184(); virtual void v185(); virtual void v186(); virtual void v187(); virtual void v188(); virtual void v189();
	virtual void v190(); virtual void v191(); virtual void v192(); virtual void v193(); virtual void v194(); virtual void v195(); virtual void v196(); virtual void v197(); virtual void v198(); virtual void v199();
	virtual void v200(); virtual void v201(); virtual void v202(); virtual void v203(); virtual void v204(); virtual void v205(); virtual void v206(); virtual void v207(); virtual void v208(); virtual void v209();
	virtual void v210(); virtual void v211(); virtual void v212(); virtual void v213(); virtual void v214(); virtual void v215(); virtual void v216(); virtual void v217(); virtual void v218(); virtual void v219();
	virtual void v220(); virtual void v221(); virtual void v222(); virtual void v223(); virtual void v224(); virtual void v225(); virtual void v226(); virtual void v227(); virtual void v228(); virtual void v229();
	virtual void v230(); virtual void v231(); virtual void v232(); virtual void v233(); virtual void v234(); virtual void v235(); virtual void v236(); virtual void v237(); virtual void v238(); virtual void v239();
	virtual void v240(); virtual void v241(); virtual void v242(); virtual void v243(); virtual void v244(); virtual void v245(); virtual void v246(); virtual void v247(); virtual void v248(); virtual void v249();
	virtual void v250(); virtual void v251(); virtual void v252(); virtual void v253(); virtual void v254(); virtual void v255(); virtual void v256(); virtual void v257(); virtual void v258(); virtual void v259();
	virtual void v260(); virtual void v261(); virtual void v262(); virtual void v263(); virtual void v264(); virtual void v265(); virtual void vfunc266(int a);
	void sub_1018f720(int a);
};

// TARGET: sub_1018f720
void CFoo1018f720::sub_1018f720(int a)
{
	this->vfunc266(*(int *)a);
}
// END FUNCTION

// FUNCTION: 0x1018f750 size=0x77
#include "CBreakableProp.h"
#include "inputdata_t.h"
#include "COutputEvent.h"

#define S4(n) virtual void s##n##a(); virtual void s##n##b(); virtual void s##n##c(); virtual void s##n##d();
#define S16(n) S4(n##0) S4(n##1) S4(n##2) S4(n##3)
#define S64(n) S16(n##0) S16(n##1) S16(n##2) S16(n##3)
struct CSlotView266
{
	S64(a) S64(b) S64(c) S64(d)
	virtual void s256a(); virtual void s256b(); virtual void s256c(); virtual void s256d();
	virtual void s260a(); virtual void s260b(); virtual void s260c(); virtual void s260d();
	virtual void s264a(); virtual void s264b();
	virtual void slot266(void *pActivator);
};

struct CBreakablePropView
{
	char m_pad0000[0x748];
	COutputEvent m_OnHealthChanged;
};

// TARGET: CBreakableProp::sub_1018f750
void CBreakableProp::sub_1018f750(inputdata_t *pInput)
{
	CBreakablePropView *v = (CBreakablePropView *)this;
	m_iHealth += pInput->value.fieldType == 4 ? pInput->value.iValue : 0;
	void *pActivator = pInput->pActivator;
	int nHealth = m_iHealth;
	((CVariantCopy *)&v->m_OnHealthChanged)->sub_1000b320(4, &nHealth);
	v->m_OnHealthChanged.sub_100cd300(*(CVariantCopy *)&v->m_OnHealthChanged, pActivator, (void *)this, 0);
	if (m_iHealth <= 0)
		((CSlotView266 *)this)->slot266(pInput->pActivator);
}
// END FUNCTION

// FUNCTION: 0x1018f7f0 size=0x77
#include "CUnknown1018f960.h"
#include "COutputEvent.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CSlot266Ent {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
	S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5)
	virtual void a260(); virtual void a261(); virtual void a262(); virtual void a263(); virtual void a264(); virtual void a265();
	virtual void vfunc266(void *pActivator);
};

void CUnknown1018f960::sub_1018f7f0(inputdata_t &data)
{
	m_iHealth -= data.value.fieldType == 4 ? data.value.iValue : 0;
	void *pActivator = data.pActivator;
	int value = m_iHealth;
	((CVariantCopy *)m_out0748)->sub_1000b320(4, &value);
	((COutputEvent *)m_out0748)->sub_100cd300(*(CVariantCopy *)m_out0748, pActivator, this, 0.0f);
	if (m_iHealth <= 0)
		((CSlot266Ent *)this)->vfunc266(data.pActivator);
}
// END FUNCTION

// FUNCTION: 0x1018f890 size=0x68
#include "CBreakableProp.h"
#include "inputdata_t.h"

extern float g_104454c4;

inline float VariantFloat(const variant_t &v)
{
	float f = (v.fieldType == 1) ? v.flValue : g_104454c4;
	return f;
}

void CBreakableProp::sub_1018f890(inputdata_t *pInput)
{
	float flDelay;
	if (VariantFloat(pInput->value) < g_104454c4)
		flDelay = 0;
	else
		flDelay = VariantFloat(pInput->value);
	sub_10002d1f(flDelay);
}
// END FUNCTION

// FUNCTION: 0x1018f920 size=0x26
#include "CBaseEntity.h"

namespace block_1018f920 {
struct CBaseEntityUnit : CBaseEntity {
	void sub_1018f920(int *p);
};
void CBaseEntityUnit::sub_1018f920(int *p)
{
	if (p[6] == 4 && p[2] != 0)
		sub_100aaa40(1);
	else
		sub_100aaa40(0);
}
}
using namespace block_1018f920;
// END FUNCTION

// FUNCTION: 0x1018f960 size=0x6d
#include "CUnknown1018f960.h"
#include "COutputEvent.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CSlot266Ent {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
	S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5)
	virtual void a260(); virtual void a261(); virtual void a262(); virtual void a263(); virtual void a264(); virtual void a265();
	virtual void vfunc266(void *pActivator);
};

void CUnknown1018f960::sub_1018f960(inputdata_t &data)
{
	m_iHealth = data.value.fieldType == 4 ? data.value.iValue : 0;
	void *pActivator = data.pActivator;
	int value = m_iHealth;
	((CVariantCopy *)m_out0748)->sub_1000b320(4, &value);
	((COutputEvent *)m_out0748)->sub_100cd300(*(CVariantCopy *)m_out0748, pActivator, this, 0.0f);
	if (m_iHealth <= 0)
		((CSlot266Ent *)this)->vfunc266(data.pActivator);
}
// END FUNCTION

// FUNCTION: 0x1018f9f0 size=0x5f
#include "CBreakableProp.h"
extern float (__cdecl *g_109f385c)(float, float);
void sub_1000a8c6();
void CBreakableProp::sub_10002d1f(float flDelay)
{
    float flNext = flDelay + gpGlobals->curtime;
    m_bAlpha1a3 = 0xff;
    m_n16c = 0;
    m_flNextThink = flNext;
    m_flFadeTime770 = g_109f385c(1.0f, 2.0f);
    sub_1001457e(0x40000);
    sub_10007fe5((void *)sub_1000a8c6, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1018fa70 size=0xaf
#include "CBreakableProp.h"

struct CGlobalVarsView
{
	char m_pad0000[0xc];
	float m_curtime;
};
extern CGlobalVarsView *g_1070b228;

float sub_102283a0(float flCurrent, float flTarget, float flAmount, float flTime);
void sub_10014614(CBreakableProp *pEntity);

// TARGET: CBreakableProp::sub_1018fa70
void CBreakableProp::sub_1018fa70()
{
	if (m_field368 == 0)
		sub_100aaa40(1);
	float flElapsed = g_1070b228->m_curtime - *(float *)((char *)this + 0x178);
	m_n16c = 2;
	float flRate = 255.0 / m_flFadeTime770;
	m_bAlpha1a3 = (unsigned char)sub_102283a0(m_bAlpha1a3, 0, flRate, flElapsed);
	*(volatile char *)&m_bChanged1b1 = 1;
	if (*(volatile unsigned char *)&m_bAlpha1a3 <= 0)
	{
		sub_10014614(this);
		return;
	}
	m_flNextThink = g_1070b228->m_curtime + 0.05;
}
// END FUNCTION

// FUNCTION: 0x1018fb50 size=0x25
#include "CBreakableProp.h"

void sub_10191ac0(const char *pszModel);

void CBreakableProp::vfunc104()
{
	int unused;
	sub_10191ac0(*vfunc9(&unused));
	CBaseProp::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1018fb90 size=0x224
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBreakableProp.h"
#include "COutputEvent.h"
#include "CParamsExplosion.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"

__declspec(dllimport) void Warning(const char *pszFormat, ...);
extern "C" void *__cdecl __RTDynamicCast(void *pObj, long nVfDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_10538764[];
extern char g_1056b4b8[];
extern CGlobalEntityList g_106eb5d8;
void sub_101cd940(CBreakableProp *pEnt);
void sub_101cf600(CBreakableProp *pEnt);
void sub_10192130(int modelIndex, void *pPhysics, const float *pOrigin, const float *pAngles, const float *pVelocity, const float *pAngVelocity, int a, int b, int c, char d);
void sub_10104730(const Vector &vecCenter, const float *pAngles, int *pParams, CBreakableProp *pOwner);

struct CBreakPhysView
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3)
	virtual void slot40(float *pVelocity, float *pAngVelocity);
};

struct CBreakVirt
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7)
	virtual int slot8();
	EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18)
	EVS(190) EVS(191)
	virtual Vector slot192();
	EVS(193) EVS(194) EVS(195) EVS(196) EVS(197) EVS(198) EVS(199)
	EVS10(20)
	EVS(210) EVS(211) EVS(212) EVS(213) EVS(214) EVS(215) EVS(216)
	virtual float *slot217();
	EVS(218)
	virtual float *slot219();
};

struct CBreakNamed : CBreakableProp
{
	const char *sub_100ab4f0();
};

struct CBreakFlags
{
	unsigned int m_flags;
	bool Test() { return ((m_flags >> 12) & 1) != 0; }
};

// TARGET: CBreakableProp::vfunc266
void CBreakableProp::vfunc266(CBaseEntity *pAttacker)
{
	m_hAttacker768 = pAttacker;
	m_field200 = 2;
	m_nTakeDamage = 0;
	((COutputEvent *)m_OnBreak730)->sub_100cd660(pAttacker, this, 0);
	CBreakPhysView *pPhysics = (CBreakPhysView *)m_obj36c;
	Vector vecVelocity;
	Vector vecAngVelocity;
	if (pPhysics) {
		pPhysics->slot40(&vecVelocity.x, &vecAngVelocity.x);
	} else {
		if (((CBreakFlags *)&m_flags268)->Test())
			sub_100b1d10();
		vecVelocity.x = m_vecVelocity3bc.x;
		vecVelocity.y = m_vecVelocity3bc.y;
		vecVelocity.z = m_vecVelocity3bc.z;
		vecAngVelocity.x = m_angVel3c8[2];
		vecAngVelocity.y = m_angVel3c8[0];
		vecAngVelocity.z = m_angVel3c8[1];
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}
	sub_101cf600(this);
	CBreakVirt *pVirt = (CBreakVirt *)this;
	if (m_pszExplosion764) {
		CParamsExplosion *pExplosion = (CParamsExplosion *)__RTDynamicCast(g_106eb5d8.sub_100f7770(0, m_pszExplosion764, pAttacker, 0), 0, g_10538764, g_1056b4b8, 0);
		if (pExplosion)
			sub_10104730(pVirt->slot192(), pVirt->slot219(), pExplosion->sub_10104510(), this);
		else
			Warning("%s could not find explosion parameters: %s\n", ((CBreakNamed *)this)->sub_100ab4f0(), m_pszExplosion764 ? m_pszExplosion764 : g_106b8540);
	}
	sub_10192130(pVirt->slot8(), pPhysics, pVirt->slot217(), pVirt->slot219(), &vecVelocity.x, &vecAngVelocity.x, m_nDC, m_nBreakMode, m_n774, m_b778);
	sub_101cd940(this);
}
// END FUNCTION

// FUNCTION: 0x1018fe50 size=0x11
#include "CBreakableProp.h"

bool CBreakableProp::vfunc74(int a)
{
    return m_nTakeDamage == 2;
}
// END FUNCTION

// FUNCTION: 0x1018fe80 size=0x26
#include "CBreakableProp.h"

void sub_10006d61();

// TARGET: CBreakableProp::vfunc230
void CBreakableProp::vfunc230(int a, void *b)
{
#define b ((int)b)
    void (CBreakableProp::*pBase)(int, int);
    *(void **)&pBase = (void *)sub_10006d61;
    (this->*pBase)(a, b);

    void (CBreakableProp::*pSlot75)(int, int);
    void **vt = *(void ***)this;
    *(void **)&pSlot75 = vt[0x12c / 4];
    (this->*pSlot75)(a, b);
#undef b
}
// END FUNCTION

// FUNCTION: 0x1018fec0 size=0x77
#include "CBreakableProp.h"

extern int (__cdecl *g_109f388c)(char *buffer, int count, const char *format, ...);
void __cdecl sub_101434b0(int entIndex, int lineOffset, const char *text, int duration, int r, int g, int b, int a);

int CBreakableProp::vfunc124()
{
	int lineOffset = sub_10096100();
	if (m_bDebugOverlays224 & 1) {
		char text[32];
		g_109f388c(text, 32, "Health: %d", m_iHealth);
		int edict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(edict), lineOffset, text, 0, 255, 255, 255, 255);
		lineOffset++;
	}
	return lineOffset;
}
// END FUNCTION

// FUNCTION: 0x1018ff60 size=0x43
#include "platform.h"
#include "CBaseEntity.h"
#include "CDynamicProp.h"

void *sub_100aa720(int size);
extern char g_1054f3e0[];

// TARGET: dynamic_prop
DLL_EXPORT CBaseEntity *dynamic_prop()
{
	void *mem = sub_100aa720(0x7dc);
	CDynamicProp *p;
	if (mem)
		p = ((CDynamicProp *)mem)->sub_10190510();
	else
		p = 0;
	p->vfunc106(g_1054f3e0);
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x1018ffd0 size=0x43
#include "platform.h"
#include "CBaseEntity.h"
#include "CDynamicProp.h"
void *sub_100aa720(int size);
extern char g_1058eed8[];

// TARGET: prop_dynamic
DLL_EXPORT CBaseEntity *prop_dynamic()
{
	void *mem = sub_100aa720(0x7dc);
	CDynamicProp *p;
	if (mem)
		p = ((CDynamicProp *)mem)->sub_10190510();
	else
		p = 0;
	((CBaseEntity *)p)->vfunc106(g_1058eed8);
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x10190040 size=0x6
#include "CDynamicProp.h"
#include "datamap.h"
namespace lifted {
extern char g_1058d4f8;
}
datamap_t *CDynamicProp::vfunc82()
{
    return (datamap_t *)&lifted::g_1058d4f8;
}
// END FUNCTION

// FUNCTION: 0x10190060 size=0x5
int * sub_101900a0(void);
int * g_1072b084 = ((int * (*)(int))sub_101900a0)(0);
// END FUNCTION

// FUNCTION: 0x101900a0 size=0x1b7
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1058d4f8[2];
void sub_100019ec();
void sub_10014646();
void sub_1000d2ce();
void sub_10009395();

int *sub_101900a0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bRandomAnimator", {0x7c4, 0}, 1, 6, "RandomAnimation" },
        { 15, "m_flNextRandAnim", {0x7c8, 0}, 1, 2 },
        { 1, "m_flMinRandAnimTime", {0x7cc, 0}, 1, 6, "MinAnimTime" },
        { 1, "m_flMaxRandAnimTime", {0x7d0, 0}, 1, 6, "MaxAnimTime" },
        { 2, "m_iszSequenceName", {0x7d4, 0}, 1, 6, "LoopSequence" },
        { 2, "InputSetAnimation", {0, 0}, 1, 8, "SetAnimation", 0, (void *)sub_100019ec },
        { 4, "InputSetSkin", {0, 0}, 1, 8, "SetSkin", 0, (void *)sub_10014646 },
        { 10, "m_pOutputAnimBegun", {0x77c, 0}, 1, 0x16, "OnAnimationBegun", g_1055dc70 },
        { 10, "m_pOutputAnimOver", {0x794, 0}, 1, 0x16, "OnAnimationDone", g_1055dc70 },
        { 10, "m_pOutputAnimLoop", {0x7ac, 0}, 1, 0x16, "OnAnimationLoop", g_1055dc70 },
        { 0, "CDynamicPropAnimThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000d2ce },
        { 0, "CDynamicPropStartAnimThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10009395 },
    };
    g_1058d4f8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1058d4f8[0] = (int)&dataDesc[1];
    return g_1058d4f8;
}
// END FUNCTION

// FUNCTION: 0x101902d0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1072b094;
extern char g_1058d74c[];
ServerClassReg g_1072b040("CDynamicProp", &g_1072b094, g_1058d74c);
// END FUNCTION

// FUNCTION: 0x10190340 size=0x6
#include "CDynamicProp.h"
namespace lifted {
extern char g_1072b040;
}
int CDynamicProp::vfunc80()
{
    return (int)&lifted::g_1072b040;
}
// END FUNCTION

// FUNCTION: 0x10190360 size=0x3
#include "CDynamicProp.h"
int CDynamicProp::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10190380 size=0xa
#include "SendTable.h"
SendTable g_1072b094;
// END FUNCTION

// FUNCTION: 0x10190400 size=0x5
int sub_10190440(void);
int g_1072b090 = ((int (*)(int))sub_10190440)(0);
// END FUNCTION

// FUNCTION: 0x10190440 size=0x72
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_1000bf2d(const char *pVarName, int offset, SendTable *pTable, void *proxy);	// SendPropDataTable
void sub_10009539();

extern SendTable g_1072b094;
extern SendTable *g_1054d524;

// TARGET: sub_10190440
int sub_10190440()
{
	static const char *pTableName = "DT_DynamicProp";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1054d524, (void *)sub_10009539),
	};
	g_1072b094.sub_1000e8fe(props + 1, 1, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10190510 size=0x3a
#include "CDynamicProp.h"
#include "CBreakableProp.h"
#include "COutputEvent.h"

extern void *vt_10474234[];

CDynamicProp *CDynamicProp::sub_10190510()
{
	((CBreakableProp *)this)->sub_1018f1c0();
	((COutputEvent *)&m_slotC)->sub_100cd2a0();
	((COutputEvent *)&m_slotD)->sub_100cd2a0();
	((COutputEvent *)&m_slotE)->sub_100cd2a0();
	*(void **)this = vt_10474234;
	sub_1008b490();
	return this;
}
// END FUNCTION

// FUNCTION: 0x10190560 size=0x57
#include "CDynamicProp.h"
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
#include "CBaseEntity.h"
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

// FUNCTION: 0x101906c0 size=0x6c
#include "CDynamicProp.h"
#include "engineiface.h"

void sub_10009395();
extern char g_106b8540[];

// TARGET: CDynamicProp::vfunc113
void CDynamicProp::vfunc113()
{
	sub_1018f3e0();
	const char *pszName = m_pszSequenceName;
	if (!pszName)
		pszName = g_106b8540;
	m_n07d8 = sub_1008f7b0(pszName);
	if (m_n07d8 > -1) {
		sub_100b3640(0x40000);
		sub_100ac4e0((void *)sub_10009395, 0, 0);
		m_flNextThink17c = EngineGlobals::g_1070b244->vfunc1(0.1f, 0.99f) + EngineGlobals::g_1070b228->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x10190750 size=0x62
#include "CDynamicProp.h"
void sub_1000d2ce();
// TARGET: CDynamicProp::sub_10190750
void CDynamicProp::sub_10190750()
{
	if (m_n07d8 > -1) {
		m_nSequence = m_n07d8;
		sub_10090950();
		sub_100963d0();
		m_slotC.sub_100cd660(0, (CCineNPC *)this, 0);
		sub_100b3640(0x40000);
		sub_100ac4e0((void *)sub_1000d2ce, 0, 0);
		m_flNextThink17c = gpGlobals->curtime + 0.1;
	}
}
// END FUNCTION

// FUNCTION: 0x101907e0 size=0x1a
#include "CDynamicProp.h"
#include "CBaseEntity.h"

bool CDynamicProp::vfunc223()
{
	if (((CBaseEntity *)this)->vfunc92())
		((CBaseEntity *)this)->sub_100a5bb0();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10190810 size=0x21
// TARGET: sub_10190810
void __fastcall sub_10190810(char *self, int dummy, char *data)
{
    int v;
    if (*(int *)(data + 0x18) == 4)
        v = *(int *)(data + 8);
    else
        v = 0;
    *(int *)(self + 0x670) = v;
}
// END FUNCTION

// FUNCTION: 0x10190850 size=0x145
#include "CBaseEntity.h"
#include "CCineNPC.h"
#include "CDynamicProp.h"
#include "CEntityVSlots.h"
void CDynamicProp::sub_10190850()
{
	if ( m_bRandomAnimate && m_flNextAnimTime < gpGlobals->curtime )
	{
		m_nSequence = sub_1008dc40( 1, -1 );
		sub_10090950();
		sub_100963d0();
		m_slotC.sub_100cd660( 0, (CCineNPC *)this, 0 );
		m_flNextAnimTime = enginerandom->vfunc1( m_flAnimDelayMin, m_flAnimDelayMax ) + gpGlobals->curtime;
	}
	else if ( m_n07d8 > -1 && m_bSequenceFinished && !m_bSequenceLoops )
	{
		m_nSequence = m_n07d8;
		sub_10090950();
		sub_100963d0();
	}

	((CEntityVSlots *)this)->slot250( 0 );

	if ( m_bSequenceFinished )
	{
		if ( !m_bSequenceLoops )
		{
			m_slotD.sub_100cd660( (CBaseEntity *)this, (CCineNPC *)this, 0 );
			if ( m_bRandomAnimate )
				m_flNextThink17c = m_flNextAnimTime + 0.1;
			return;
		}
	}
	if ( m_bSequenceFinished && m_bSequenceLoops )
	{
		m_slotE.sub_100cd660( (CBaseEntity *)this, (CCineNPC *)this, 0 );
		m_flNextThink17c = gpGlobals->curtime + 0.1;
		return;
	}
	m_flNextThink17c = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x10190a00 size=0xd0
#include "CDynamicProp.h"
#include "CBaseAnimating.h"
#include "COutputEvent.h"
#include "inputdata_t.h"

struct CGlobalVarsDyn	// gpGlobals
{
	char m_pad0000[0xc];
	float curtime;	// 0x0c
};

struct CAnimResetX
{
	void sub_10090950();	// ResetSequenceInfo (stub 0x100117b1)
};

extern void (__cdecl *g_109f3628)(const char *fmt, ...);	// Msg
extern char g_106b8540[];
extern CGlobalVarsDyn *g_1070b228;
void sub_1000d2ce();	// the think function of the dynamic prop (stub)

static inline const char *InputString(variant_t &v)
{
	if (v.fieldType == 2)
		return v.iszValue ? v.iszValue : g_106b8540;
	return v.sub_10008805();
}

void CDynamicProp::sub_10190a00(inputdata_t *pInput)
{
	variant_t *pValue = &pInput->value;
	int nSequence = ((CBaseAnimating *)this)->sub_1008f7b0(InputString(*pValue));
	if (nSequence > -1) {
		m_nSequence = nSequence;
		m_flCycle = 0;
		((CAnimResetX *)this)->sub_10090950();
		((CBaseAnimating *)this)->sub_100963d0();
		((COutputEvent *)&m_slotC)->sub_100cd660(0, this, 0);
		((CBaseEntity *)this)->sub_100b3640(0x40000);
		((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000d2ce, 0, 0);
		*(float *)((char *)this + 0x17c) = g_1070b228->curtime + 0.1;
		return;
	}
	g_109f3628("Dynamic prop no sequence named:%s\n", InputString(*pValue));
	m_nSequence = 0;
}
// END FUNCTION

// FUNCTION: 0x10190b10 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10001eba(GP *);
extern int vt_1047473c;
extern char g_1058efcc[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: prop_dynamic_ornament
DLL_EXPORT GP *prop_dynamic_ornament()
{
	GP *p = (GP *)sub_1000db89(0x8e4);
	if (p) {
		sub_10001eba(p);
		*(int **)p = &vt_1047473c;
	} else {
		p = 0;
	}
	p->name(g_1058efcc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10190b80 size=0x6
#include "datamap.h"
#include "COrnamentProp.h"
namespace lifted {
extern char g_1058d75c;
}
datamap_t * COrnamentProp::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058d75c);
}
// END FUNCTION

// FUNCTION: 0x10190ba0 size=0x5
int sub_10190be0(void);
int g_1072b160 = ((int (*)(int))sub_10190be0)(0);
// END FUNCTION

// FUNCTION: 0x10190be0 size=0x1a
namespace lifted {
extern int g_1058d75c;
extern int g_1058d760;
extern char g_1058d7a4;
}
int sub_10190be0()
{
    lifted::g_1058d760 = 4;
    lifted::g_1058d75c = (int)&lifted::g_1058d7a4;
    return (int)&lifted::g_1058d75c;
}
// END FUNCTION

// FUNCTION: 0x10190c10 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1072b214;
extern char g_1058d854[];
ServerClassReg g_1072b068("COrnamentProp", &g_1072b214, g_1058d854);
// END FUNCTION

// FUNCTION: 0x10190c80 size=0x6
#include "COrnamentProp.h"
namespace lifted {
extern char g_1072b068;
}
int COrnamentProp::vfunc80()
{
    return (int)&lifted::g_1072b068;
}
// END FUNCTION

// FUNCTION: 0x10190ca0 size=0x3
#include "COrnamentProp.h"
int COrnamentProp::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10190cc0 size=0xa
#include "SendTable.h"
SendTable g_1072b214;
// END FUNCTION

// FUNCTION: 0x10190d40 size=0x5
int sub_10190d80(void);
int g_1072b210 = ((int (*)(int))sub_10190d80)(0);
// END FUNCTION

// FUNCTION: 0x10190d80 size=0x72
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_1000bf2d(const char *pVarName, int offset, SendTable *pTable, void *proxy);	// SendPropDataTable
void sub_10009539();

extern SendTable g_1072b214;
extern SendTable *g_1058d754;

// TARGET: sub_10190d80
int sub_10190d80()
{
	static const char *pTableName = "DT_OrnamentProp";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1058d754, (void *)sub_10009539),
	};
	g_1072b214.sub_1000e8fe(props + 1, 1, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10190e50 size=0x91
#include <string.h>
#include "COrnamentProp.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "Tier1.h"

extern float g_1070d1b0[3];
extern float g_1070d9d0[3];
CEntityVSlots *sub_100a9ab0(const char *pszClassname, const float *pOrigin, const float *pAngles, CEntityVSlots *pOwner);
int sub_101d1280(CBaseEntity *pEntity);
void sub_101cd940(CBaseEntity *pEntity);

struct ornament_string_t
{
	const char *pszValue;
};
inline ornament_string_t MAKE_STRING(const char *p)
{
	ornament_string_t s;
	s.pszValue = *p ? p : 0;
	return s;
}

// TARGET: sub_10190e50
COrnamentProp *sub_10190e50(const char *pszModel, CBaseEntity *pParent)
{
	COrnamentProp *pProp = (COrnamentProp *)sub_100a9ab0("prop_dynamic_ornament", g_1070d1b0, g_1070d9d0, 0);
	if (pProp) {
		strcpy(pProp->m_szOrnamentModel, pszModel);
		((CEntityVSlots *)pProp)->slot212((int)MAKE_STRING(pProp->m_szOrnamentModel).pszValue);
		sub_101d1280(pProp);
		if (((CBaseAnimating *)pProp)->sub_100952d0(-1)) {
			pProp->sub_10191170(pParent);
		} else {
			g_109f3630("Could not create ornament prop model: %s\n", pszModel);
			sub_101cd940(pProp);
			return 0;
		}
	}
	return pProp;
}
// END FUNCTION

// FUNCTION: 0x10190f20 size=0x51
#include "COrnamentProp.h"
extern char g_106b8540[];
__declspec(dllimport) char *Q_strncpy(char *, const char *, int);
void __fastcall sub_10009cc3(COrnamentProp *p);
struct COrnamentPropView { char pad[0x7e0]; char m_szBuf[0x104]; };
void COrnamentProp::vfunc103()
{
    int dummy;
    const char *p = *vfunc9(&dummy);
    if (!p) p = g_106b8540;
    Q_strncpy(((COrnamentPropView *)this)->m_szBuf, p, 0x104);
    sub_10009cc3(this);
    vfunc122("prop_dynamic_ornament");
    sub_10190fa0();
}
// END FUNCTION

// FUNCTION: 0x10190fa0 size=0xbb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "COrnamentProp.h"
#include "CCollisionProperty.h"

void COrnamentProp::sub_10190fa0()
{
	sub_1009ee80(0);
	vfunc202(0);
	sub_100a0b20();
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}
	vfunc93(0, 0);
	vfunc66();
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x10191090 size=0x1b
#include "COrnamentProp.h"

// TARGET: COrnamentProp::vfunc113
void COrnamentProp::vfunc113()
{
	if (m_name7dc.IsSet())
		sub_10191130(m_name7dc.String(), this);
}
// END FUNCTION

// FUNCTION: 0x101910c0 size=0x43
#include "COrnamentProp.h"
#include "inputdata_t.h"
extern char g_106b8540[];
struct COrnamentPropUnit : COrnamentProp {
    void sub_101910c0(inputdata_t *pInput);
};
void COrnamentPropUnit::sub_101910c0(inputdata_t *pInput)
{
    variant_t *v = &pInput->value;
    const char *psz;
    if (v->fieldType == 2) {
        psz = v->iszValue;
        if (!psz)
            psz = g_106b8540;
    } else {
        psz = v->sub_10008805();
    }
    sub_10191130(psz, (CBaseEntity *)pInput->pActivator);
}
// END FUNCTION

// FUNCTION: 0x10191130 size=0x27
#include "COrnamentProp.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;

// TARGET: COrnamentProp::sub_10191130
void COrnamentProp::sub_10191130(const char *szName, CBaseEntity *pSearching)
{
	sub_10191170(g_106eb5d8.sub_100f7770(0, szName, pSearching, 0));
}
// END FUNCTION

// FUNCTION: 0x10191170 size=0x6a
#include "COrnamentProp.h"

extern void (__cdecl *g_109f364c)(const char *fmt, ...);
void sub_101cd940(CBaseEntity *pEntity);

// TARGET: COrnamentProp::sub_10191170
void COrnamentProp::sub_10191170(CBaseEntity *pParent)
{
	if (pParent)
	{
		vfunc67();
		sub_1009ee80(pParent);
		sub_100a0670(pParent, 0);
		vfunc202(pParent);
		vfunc93(0xb, 0);
		sub_100b3b00();
	}
	else
	{
		g_109f364c("%s could not find entity to attach to, deleting...\n", sub_100ab4f0());
		sub_101cd940(this);
	}
}
// END FUNCTION

// FUNCTION: 0x10191200 size=0x8
namespace lifted {
int sub_1000787e();
}
int __stdcall sub_10191200(int a0)
{
    return lifted::sub_1000787e();
}
// END FUNCTION

// FUNCTION: 0x10191220 size=0x5e
#include "platform.h"
#include "CBaseEntity.h"
#include "CBreakableProp.h"
#include "CUnknown101466e0.h"

void *sub_100aa720(unsigned int size);
extern char vt_10474c44[];

struct SPhysProp {
	void *vt;
	char pad[0x48];
	unsigned int m_flags4c;
	char pad2[0x1b0 - 0x50];
	CUnknown101466e0 m_b1b0;
	char pad3[0x78c - 0x1b1];

	SPhysProp()
	{
		((CBreakableProp *)this)->sub_1018f1c0();
		vt = vt_10474c44;
		m_b1b0.sub_101466e0(1);
		m_flags4c |= 4;
	}
	void *operator new(unsigned int n) { return sub_100aa720(n); }
};

// TARGET: _physics_prop
DLL_EXPORT CBaseEntity *physics_prop()
{
	SPhysProp *p = new SPhysProp;
	((CBaseEntity *)p)->vfunc106("physics_prop");
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x101912a0 size=0x18
#include "CPhysicsProp.h"

void CPhysicsProp::vfunc226(int a)
{
	CBaseEntity::vfunc226(a);
	*((char *)this + 0x1b1) = 1;
}
// END FUNCTION

// FUNCTION: 0x101912d0 size=0x8
#include "CPhysicsProp.h"
// TARGET: CPhysicsProp::sub_101912d0
unsigned char CPhysicsProp::sub_101912d0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x101912f0 size=0x36
#include "CPhysicsProp.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CPhysicsProp::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10191340 size=0x5e
#include "platform.h"
#include "CBaseEntity.h"
#include "CBreakableProp.h"
#include "CUnknown101466e0.h"

void *sub_100aa720(unsigned int size);
extern char vt_10474c44[];

struct SPhysProp {
	void *vt;
	char pad[0x48];
	unsigned int m_flags4c;
	char pad2[0x1b0 - 0x50];
	CUnknown101466e0 m_b1b0;
	char pad3[0x78c - 0x1b1];

	SPhysProp()
	{
		((CBreakableProp *)this)->sub_1018f1c0();
		vt = vt_10474c44;
		m_b1b0.sub_101466e0(1);
		m_flags4c |= 4;
	}
	void *operator new(unsigned int n) { return sub_100aa720(n); }
};

// TARGET: _prop_physics
DLL_EXPORT CBaseEntity *prop_physics()
{
	SPhysProp *p = new SPhysProp;
	((CBaseEntity *)p)->vfunc106("prop_physics");
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x101913c0 size=0x6
#include "datamap.h"
#include "CPhysicsProp.h"
namespace lifted {
extern char g_1058d864;
}
datamap_t * CPhysicsProp::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058d864);
}
// END FUNCTION

// FUNCTION: 0x101913e0 size=0x5
int sub_10191420(void);
int g_1072b230 = ((int (*)(int))sub_10191420)(0);
// END FUNCTION

// FUNCTION: 0x10191420 size=0x1a
namespace lifted {
extern int g_1058d864;
extern int g_1058d868;
extern char g_1058d8ac;
}
int sub_10191420()
{
    lifted::g_1058d868 = 6;
    lifted::g_1058d864 = (int)&lifted::g_1058d8ac;
    return (int)&lifted::g_1058d864;
}
// END FUNCTION

// FUNCTION: 0x10191450 size=0x37
#include "CPhysicsProp.h"
#include "CBreakableProp.h"

// TARGET: CPhysicsProp::vfunc103
void CPhysicsProp::vfunc103()
{
    ((CBreakableProp *)this)->CBreakableProp::vfunc103();
    if (*((unsigned char *)this + 0x204) & 4) {
        ((CBaseEntity *)this)->sub_100aaa40(1);
    }
    if (!(*((unsigned char *)this + 0x204) & 8)) {
        ((CBaseEntity *)this)->sub_100b3840(2);
    }
    ((void (__fastcall *)(void *))(*(int **)this)[223])(this);
}
// END FUNCTION

// FUNCTION: 0x101914a0 size=0x44
#include "CPhysicsProp.h"
bool CPhysicsProp::vfunc68(void *pOther)
{
	if ((*(int *)((char *)pOther + 0x9c) && (*(unsigned char *)((char *)this + 0x204) & 4)) ||
		(*(int *)((char *)pOther + 0xa8) && (sub_100b39c0() & 1)))
		return true;
	return sub_1008bfe0(pOther);
}
// END FUNCTION

// FUNCTION: 0x10191510 size=0x17a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsProp.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

__declspec(dllimport) void Warning(const char *fmt, ...);
extern float g_104454c4;
void sub_1002e0a0(void *pObj, int a);

struct CPhysObjView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
	virtual void SetValue(float f);
	virtual float GetValue();
};

struct CPhysObjView2
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
	virtual void SetValue(int f);
};

struct CByteArg { char b; };

struct CPhysicsPropUnit : CPhysicsProp
{
	CPhysObjView *sub_100a5ea0(int a, int b, CByteArg c, int d);
};

#define FLD(type, off) (*(type *)((char *)this + (off)))

// TARGET: CPhysicsProp::vfunc223
bool CPhysicsProp::vfunc223()
{
	CPhysicsPropUnit *self = (CPhysicsPropUnit *)this;
	CByteArg flag;
	flag.b = FLD(char, 0x204) & 1;
	CPhysObjView *pObj = self->sub_100a5ea0(6, 0, flag, 0);
	if (!pObj)
	{
		{
			ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
		}
		vfunc93(0, 0);
		int out;
		const char **pName = vfunc9(&out);
		Warning("ERROR!: Can't create physics object for %s\n", *pName ? *pName : g_106b8540);
		sub_100b3b00();
		return true;
	}
	if (FLD(int, 0x784) == 1)
		sub_1002e0a0(pObj, 1);
	if (FLD(float, 0x77c) > g_104454c4)
	{
		double v = pObj->GetValue() * FLD(float, 0x77c);
		if (v > 1000000.0)
			v = 1000000.0;
		else if (v < 0.5)
			v = 0.5;
		float f = (float)v;
		pObj->SetValue(f);
	}
	if (FLD(float, 0x780) > g_104454c4)
		((CPhysObjView2 *)FLD(int, 0x36c))->SetValue(FLD(int, 0x780));
	return true;
}
// END FUNCTION

// FUNCTION: 0x101916f0 size=0x12
struct CVirtSlots2 {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
};

struct CHolderPtr36c {
    char pad_0000[0x36c];
    CVirtSlots2 *m_p36c;
    void sub_101916f0(int unused);
};

// TARGET: sub_101916f0
void CHolderPtr36c::sub_101916f0(int unused)
{
    if (m_p36c != 0) {
        m_p36c->vfunc2();
    }
}
// END FUNCTION

// FUNCTION: 0x10191720 size=0x33
struct CFlagArgView {
    char pad0[8];
    unsigned char m_b08;
    char pad1[0x18 - 9];
    int m_n18;
};

struct CFlagOwnerView {
    char pad0[0x204];
    unsigned int m_flags204;
    void sub_10191720(CFlagArgView *pArg);
};

// TARGET: CFlagOwnerView::sub_10191720
void CFlagOwnerView::sub_10191720(CFlagArgView *pArg)
{
    if (pArg->m_n18 == 5 && pArg->m_b08) {
        m_flags204 |= 2;
        return;
    }
    m_flags204 &= 0xfffffffd;
}
// END FUNCTION

// FUNCTION: 0x10191770 size=0x15
#include "CPhysicsProp.h"

bool CPhysicsProp::vfunc73(CBaseEntity *pOther)
{
	return (m_flags204 & 2) == 2;
}
// END FUNCTION

// FUNCTION: 0x101917a0 size=0x5
#include "CPhysicsProp.h"
int __cdecl sub_102587f0();
// TARGET: CPhysicsProp::vfunc36
// the game's 0x101917a0: a tail call (jmp) of sub_102587f0
int CPhysicsProp::vfunc36()
{
	return sub_102587f0();
}
// END FUNCTION

// FUNCTION: 0x101917c0 size=0x1f
#include "CPhysicsProp.h"

CBaseEntity *sub_104115b0(int a, int b);

bool CPhysicsProp::vfunc32(int a)
{
	return this == sub_104115b0(a, 0);
}
// END FUNCTION

// FUNCTION: 0x101917f0 size=0xe
#include "CPhysicsProp.h"
namespace lifted {
int sub_10010ec9(int);
}
void CPhysicsProp::vfunc39(CBaseEntity * a0)
{
    lifted::sub_10010ec9(*(int *)&a0);
}
// END FUNCTION

// FUNCTION: 0x10191810 size=0xe
#include "CPhysicsProp.h"

void sub_1040d950(int a);

void CPhysicsProp::vfunc41(int a)
{
	sub_1040d950(a);
}
// END FUNCTION

// FUNCTION: 0x10191830 size=0xe
// TARGET: sub_10191830
void sub_1040d9a0(int x);

void __stdcall sub_10191830(int x)
{
    sub_1040d9a0(x);
}
// END FUNCTION

// FUNCTION: 0x10191850 size=0xa
#define PCD_INITIALIZERS
#include "CBreakModelsPrecached.h"
CBreakModelsPrecached g_1072b018;
// END FUNCTION

// FUNCTION: 0x101918e0 size=0x25
extern char g_106b8540[];

// TARGET: sub_101918e0
bool sub_101918e0(char **pa, char **pb)
{
    char *a = *pa ? *pa : g_106b8540;
    char *b = *pb ? *pb : g_106b8540;
    return a < b;
}
// END FUNCTION

// FUNCTION: 0x10191920 size=0x86
#include "CBreakModelsPrecached.h"
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)

void CBreakModelsPrecached::vfunc5()
{
	CUtlRBTree12 *tree = (CUtlRBTree12 *)&m_Tree;
	unsigned short prev = CUtlRBTree12::InvalidIndex();
	for (int i = (int)tree->m_TotalElements; --i >= 0; ) {
		unsigned short idx = (unsigned short)i;
		((const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)tree)->Links(idx);
		tree->m_pElements[idx].m_Links.m_Right = prev;
		tree->m_pElements[idx].m_Links.m_Left = idx;
		prev = idx;
	}
	tree->m_FirstFree = tree->m_TotalElements ? 0 : CUtlRBTree12::InvalidIndex();
	tree->m_Root = CUtlRBTree12::InvalidIndex();
	tree->m_NumElements = 0;
}
// END FUNCTION

// FUNCTION: 0x101919e0 size=0x45
#include "CBreakModelsPrecached.h"
#include "utlmemory.h"
struct CBaseGameSystemView { void sub_1042c2c0(); };
void *CBreakModelsPrecached::vfunc8(unsigned int flags)
{
	if (m_Tree.m_unkC != -1) {
		if (m_Tree.m_pElements) {
			Plat_Free(m_Tree.m_pElements);
			m_Tree.m_pElements = 0;
		}
		m_Tree.m_unk8 = 0;
	}
	((CBaseGameSystemView *)this)->sub_1042c2c0();
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10191ac0 size=0x18b
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "Tier1.h"
#include "CUtlRBTree12.h"

struct CBreakModelRec { char m_pad[0xc]; char m_Name[0x110]; };
extern char g_106b8540[];
void sub_10194750(int *pMemory, const int *src);
void sub_1042bff0(void *, void *);
void sub_10191cc0(CUtlVector<CBreakModelRec> *, int);
void sub_10001c35(const char *modelName);	// the jump stub of this function

struct CBreakModelKey
{
	const char *m_psz;
	CBreakModelKey(const char *psz) : m_psz(psz) {}
};

struct CBreakModelTree : CUtlRBTree12
{
	void sub_1000f835(unsigned short i, unsigned short parent, bool isLeft);
	unsigned short Find(const CBreakModelKey &search) { return sub_10194330(&search); }
	unsigned short InsertAt(unsigned short parent, bool leftchild)
	{
		unsigned short i = sub_10194780();
		sub_1000f835(i, parent, leftchild);
		++m_NumElements;
		return i;
	}
	unsigned short Insert(const CBreakModelKey &insert)
	{
		unsigned short parent;
		bool leftchild;
		sub_101945f0(&insert, parent, leftchild);
		unsigned short newNode = InsertAt(parent, leftchild);
		sub_10194750((int *)m_pElements[newNode].m_Data, (const int *)&insert);
		return newNode;
	}
};
extern CBreakModelTree g_1072b020;

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: sub_10191ac0
void sub_10191ac0(const char *modelName)
{
	if (!*STRINGR(modelName))
	{
		void (*pMsg)(const char *, ...) = g_109f3630;
		pMsg("******************************************************\n");
		pMsg("WARNING:  Empty model name in PropBreakablePrecacheAll()\n");
		pMsg("******************************************************\n");
		return;
	}
	if (g_1072b020.Find(modelName) != CUtlRBTree12::InvalidIndex())
		return;
	g_1072b020.Insert(modelName);

	int iModel = engine->vfunc13(STRINGR(modelName), 1);
	CUtlVector<CBreakModelRec> list;
	sub_10191cc0(&list, iModel);
	for (int i = 0; i < list.Count(); i++)
	{
		const char *pName;
		sub_1042bff0(&pName, list[i].m_Name);
		sub_10001c35(pName);
	}
}
// END FUNCTION

// FUNCTION: 0x10191cc0 size=0x16c
#include "utlrbtree.h"
#include "utlvector.h"
#include "CBreakParser.h"

struct CBreakModelRec {
	char pad0[0xc];
	char m_bKeep;
	char pad1[0x107];
	float m_flValue;
	char pad2[4];
};

struct CKeyParserView {
	virtual void v0();
	virtual const char *GetCurrentBlockName();
	virtual char Finished();
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void ParseCustom(void *pData, CBreakParser *pHandler);
	virtual void v8();
	virtual void SkipBlock();
};

struct CKeyParserFactoryView {
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
	virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
	virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14();
	virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19();
	virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23(); virtual void f24();
	virtual void f25();
	virtual CKeyParserView *Create(void *pData);
	virtual void Destroy(CKeyParserView *p);
};

extern CKeyParserFactoryView *g_1072393c;
extern "C" int __cdecl _strcmpi(const char *, const char *);

void sub_10191cc0(CUtlVector<CBreakModelRec> *pList, int modelIndex)
{
	void *pVCollide = engine->vfunc58(modelIndex);
	if (pVCollide) {
		CKeyParserView *pParse = g_1072393c->Create(((void **)pVCollide)[2]);
		while (!pParse->Finished()) {
			CBreakParser breakParser;
			const char *pBlock = pParse->GetCurrentBlockName();
			if (!_strcmpi(pBlock, "break")) {
				int index = pList->AddToTail();
				CBreakModelRec &rec = pList->Element(index);
				pParse->ParseCustom(&rec, &breakParser);
				if (!rec.m_bKeep || !(rec.m_flValue > 0.0f))
					pList->Remove(index);
			} else {
				pParse->SkipBlock();
			}
		}
		g_1072393c->Destroy(pParse);
	}
}
// END FUNCTION

// FUNCTION: 0x10191e90 size=0x1cf
#include <string.h>
#include <stdlib.h>
#include "CBreakParser.h"

__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
extern "C" __declspec(dllimport) char *Q_strncat(char *pDest, const char *pSrc, int maxLen, int max_chars_to_copy);
void sub_101d03e0(void *pVector, const char *pszValue);

struct SBreakModel	// the break model record the parser fills
{
	float offset[3];	// 0x00
	char modelName[0x104];	// 0x0c
	float fadeTime;	// 0x110
	float health;	// 0x114
	int bodyIndex;	// 0x118
};

void CBreakParser::vfunc0(void *pData, const char *pszKey, const char *pszValue)
{
	SBreakModel *pModel = (SBreakModel *)pData;
	if (!strcmp(pszKey, "model")) {
		char szModel[0x400];
		Q_strncpy(szModel, pszValue, 0x104);
		if (_strnicmp(szModel, "models/", 7)) {
			Q_strncpy(pModel->modelName, "models/", 0x104);
			Q_strncat(pModel->modelName, szModel, 0x104, -1);
		} else {
			Q_strncpy(pModel->modelName, szModel, 0x104);
		}
		int nLength = strlen(pModel->modelName);
		if (nLength >= 4 && !_strcmpi(pModel->modelName + nLength - 4, ".mdl"))
			return;
		Q_strncat(pModel->modelName, ".mdl", 0x104, -1);
	} else if (!_strcmpi(pszKey, "offset")) {
		sub_101d03e0(pModel, pszValue);
	} else if (!_strcmpi(pszKey, "health")) {
		pModel->health = (float)atof(pszValue);
	} else if (!_strcmpi(pszKey, "fadetime")) {
		pModel->fadeTime = (float)atof(pszValue);
	} else if (!_strcmpi(pszKey, "bodyindex")) {
		pModel->bodyIndex = (int)atof(pszValue);
	}
}
// END FUNCTION

// FUNCTION: 0x101920e0 size=0x3c
#include "CBreakParser.h"

struct breakparams_t {
	float v[3];
	char flag;
	char pad0d[0x110 - 0xd];
	float f110;
	float f114;
	float f118;
};
extern float g_1070d1b0[3];

void CBreakParser::vfunc1(void *pData)
{
	breakparams_t *p = (breakparams_t *)pData;
	p->flag = 0;
	p->v[0] = g_1070d1b0[0];
	p->v[1] = g_1070d1b0[1];
	p->v[2] = g_1070d1b0[2];
	p->f114 = 1.0f;
	p->f110 = 0;
	p->f118 = 0;
}
// END FUNCTION

// FUNCTION: 0x10192130 size=0x3be
#include "CWeaponThrown_Grenade_Frag.h"
#include "utlrbtree.h"
#include "CPropDestructable.h"
#include "QAngle.h"
#include "matrix3x4_t.h"
#include "VMatrix.h"
#include "StudioHdr.h"
#include "engineserver.h"
#include "engineiface.h"
#include "utlvector.h"

struct CBreakModelEntry10192130
{
	Vector m_vecOffset;
	char m_szModel[0x104];
	float m_flFadeTime;
	float m_flHealth;
	int m_nBodyIndex;
};

struct CDebrisPhysView
{
	virtual void v0();
	virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(int a); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(Vector *pPos, Vector *pVel);
};

extern Vector g_1070d1b0;
void sub_10191cc0(CUtlVector<CBreakModelEntry10192130> *pList, int nModel);
void sub_1024cc50(VMatrix *pOut, const void *pOrigin, const void *pAngles);
void sub_10138720(const matrix3x4_t *pMat, int nCol, Vector *pOut);
void sub_10428ed0(void *pStudio, int nBone, matrix3x4_t *pOut);
void sub_101925e0(void *pEntry, Vector *pPos, const void *pAbsAngles, Vector *pVel, Vector *pAngVel, int a6, int a7, char a9);

inline void Vector3DMultiplyPositionX(const VMatrix &src1, const Vector &src2, Vector &dst)
{
	dst.x = src1.m[0][0] * src2.x + src1.m[0][1] * src2.y + src1.m[0][2] * src2.z + src1.m[0][3];
	dst.y = src1.m[1][0] * src2.x + src1.m[1][1] * src2.y + src1.m[1][2] * src2.z + src1.m[1][3];
	dst.z = src1.m[2][0] * src2.x + src1.m[2][1] * src2.y + src1.m[2][2] * src2.z + src1.m[2][3];
}

// TARGET: sub_10192130
void sub_10192130(int nModelIndex, void *pPhys, const void *pOrigin, const void *pAngles, const void *pVel, const void *pAngVel, int nDc, int n76c, int a8, char a9)
{
	if (!engine->vfunc58(nModelIndex))
		return;
	CDebrisPhysView *pPhysics = (CDebrisPhysView *)pPhys;
	if (pPhysics)
		pPhysics->v21(0);
	void *pStudioHdr = engine->vfunc18(nModelIndex);
	Vector parentOrigin = g_1070d1b0;
	matrix3x4_t localToWorld;
	int parentAttachment = sub_100c6350(pStudioHdr, "placementOrigin") + 1;
	if (parentAttachment > 0)
	{
		sub_10428ed0(pStudioHdr, parentAttachment, &localToWorld);
		sub_10138720(&localToWorld, 3, &parentOrigin);
	}
	else
	{
		sub_10139b90(*(QAngle *)g_1070d9d0, localToWorld);
	}
	VMatrix matrix;
	sub_1024cc50(&matrix, pOrigin, pAngles);

	float flRand = *(float *)&a8;
	CUtlVector<CBreakModelEntry10192130> list;
	sub_10191cc0(&list, nModelIndex);
	for (int i = 0; i < list.Count(); i++)
	{
		int modelIndex = engine->vfunc13(list[i].m_szModel, 0);
		if (modelIndex <= 0)
			continue;
		void *pStudio = engine->vfunc18(modelIndex);
		int placementIndex = sub_100c6350(pStudio, "placementOrigin") + 1;
		Vector placementOrigin = parentOrigin;
		if (placementIndex > 0)
		{
			sub_10428ed0(pStudio, placementIndex, &localToWorld);
			sub_10138720(&localToWorld, 3, &placementOrigin);
			placementOrigin -= parentOrigin;
		}
		Vector position;
		Vector3DMultiplyPositionX(matrix, list[i].m_vecOffset - placementOrigin, position);
		Vector objectVelocity = *(const Vector *)pVel;
		Vector objectAngVelocity = *(const Vector *)pAngVel;
		if (flRand > 0.0f)
		{
			objectVelocity.x += enginerandom->vfunc1(-flRand, flRand);
			objectVelocity.z += enginerandom->vfunc1(-flRand, flRand);
			objectAngVelocity.x += enginerandom->vfunc1(-200.0f, 200.0f);
			objectAngVelocity.z += enginerandom->vfunc1(-200.0f, 200.0f);
		}
		if (pPhysics)
			pPhysics->v42(&position, &objectVelocity);
		sub_101925e0(&list[i], &position, pAngles, &objectVelocity, &objectAngVelocity, nDc, n76c, a9);
	}
}
// END FUNCTION

// FUNCTION: 0x101925e0 size=0x17e
#include "CEntityVSlots.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CBreakableProp.h"

#define PVS(n) virtual void pslot##n();
#define PVS10(p) PVS(p##0) PVS(p##1) PVS(p##2) PVS(p##3) PVS(p##4) PVS(p##5) PVS(p##6) PVS(p##7) PVS(p##8) PVS(p##9)

struct CGibPhysObj {
	PVS(0) PVS(1) PVS(2) PVS(3) PVS(4) PVS(5) PVS(6) PVS(7) PVS(8) PVS(9)
	PVS10(1) PVS10(2)
	PVS(30) PVS(31) PVS(32) PVS(33) PVS(34) PVS(35) PVS(36) PVS(37) PVS(38)
	virtual void slot39(int a, int b);
};

struct CGibEntity : CEntityVSlots {
	char m_pad0004[0xdc - 4];
	int m_nField0dc;	// 0xdc
	char m_pad00e0[0x19c - 0xe0];
	unsigned int m_nEffectFlags;	// 0x19c
	char m_pad01a0[0x204 - 0x1a0];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[0x210 - 0x208];
	int m_iHealth;	// 0x210
	char m_pad0214[0x36c - 0x214];
	CGibPhysObj *m_pPhysObj;	// 0x36c
};

struct CGibInfo {
	char m_pad0000[0xc];
	char m_ref0c[4];	// 0xc
	char m_pad0010[0x110 - 0x10];
	float m_flDelay;	// 0x110
	float m_flHealth;	// 0x114
	int m_nBodygroup;	// 0x118
};

extern float g_1047331c;
extern float g_10473320;
extern float g_104454c4;
extern float (*g_109f385c)(float, float);
extern char g_106b8540[];
CEntityVSlots *sub_100a9ab0(const char *name, const float *origin, const float *angles, CEntityVSlots *owner);
int *sub_10002095(int *pOut, const void *p);
void sub_10014614(void *pEnt);

// TARGET: sub_101925e0
void sub_101925e0(CGibInfo *pInfo, const float *pOrigin, const float *pAngles, int a4, int a5, int a6, int mode, char bRandom)
{
	CGibEntity *pGib = (CGibEntity *)sub_100a9ab0("prop_physics", pOrigin, pAngles, 0);
	if (!pGib)
		return;
	int hRef;
	pGib->slot212(*sub_10002095(&hRef, pInfo->m_ref0c));
	const char *pszModel = *pGib->slot9(&hRef);
	if (!pszModel)
		pszModel = g_106b8540;
	pGib->slot105(pszModel);
	pGib->m_iHealth = (int)pInfo->m_flHealth;
	if (pInfo->m_nBodygroup)
		((CBaseAnimating *)pGib)->sub_10093b10(0, pInfo->m_nBodygroup);
	if (mode != 0) {
		if (mode == 1) {
			pGib->m_flags204 = 2;
			goto flagsDone;
		}
		if (!(pInfo->m_flDelay > g_104454c4))
			goto flagsDone;
	}
	pGib->m_flags204 |= 4;
	((CBaseEntity *)pGib)->sub_100b3840(1);
flagsDone:
	pGib->m_nEffectFlags |= 0xa0;
	pGib->m_nField0dc = a6;
	pGib->slot103();
	((CBreakableProp *)pGib)->sub_100124d1(mode);
	if (pInfo->m_flDelay != g_104454c4) {
		((CBreakableProp *)pGib)->sub_10002d1f(pInfo->m_flDelay);
		((CBaseEntity *)pGib)->sub_100b3900(2);
	} else if (bRandom) {
		float flRandom = g_109f385c(g_1047331c, g_10473320);
		((CBreakableProp *)pGib)->sub_10002d1f(flRandom);
		((CBaseEntity *)pGib)->sub_100b3900(2);
	}
	if (pGib->m_pPhysObj)
		pGib->m_pPhysObj->slot39(a4, a5);
	else
		sub_10014614(pGib);
}
// END FUNCTION

// FUNCTION: 0x101927c0 size=0x28
struct CUnk101927c0
{
    float m_fl;
    const char *m_psz;
};

extern CUnk101927c0 g_1058d9b8[24];
extern const char *g_1058da7c;

// TARGET: sub_101927c0
const char *sub_101927c0(float x)
{
    unsigned int i = 0;
    do
    {
        if (x < g_1058d9b8[i].m_fl)
            return g_1058d9b8[i].m_psz;
        i++;
    } while (i < 24);
    return g_1058da7c;
}
// END FUNCTION

// FUNCTION: 0x10192800 size=0x43
#include "platform.h"
#include "CPropMover.h"
void *sub_100aa720(int size);
extern char g_1058f1d4[];

// TARGET: prop_mover
DLL_EXPORT CBaseEntity *prop_mover()
{
	void *mem = sub_100aa720(0x730);
	CPropMover *p;
	if (mem)
		p = ((CPropMover *)mem)->sub_10192870();
	else
		p = 0;
	p->vfunc106(g_1058f1d4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10192870 size=0x12
#include "CPropMover.h"

extern int vt_1047518c[];

struct CPropMoverBaseCtor
{
	void sub_1008b230();
};

// TARGET: CPropMover::sub_10192870
CPropMover *CPropMover::sub_10192870()
{
	((CPropMoverBaseCtor *)this)->sub_1008b230();
	*(int *)this = (int)vt_1047518c;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101928a0 size=0x8
#include "CPropMover.h"
namespace lifted {
int sub_10006703();
}
int CPropMover::vfunc117()
{
    return (lifted::sub_10006703()) | 8;
}
// END FUNCTION

// FUNCTION: 0x101928c0 size=0x1e
#include "CPropMover.h"

void sub_100aa7b0(void *p);

// TARGET: CPropMover::vfunc5
CBaseEntity *CPropMover::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101928f0 size=0x10
#include "CPropMover.h"

void __fastcall sub_10011793(void *pThis);
void __fastcall sub_101c1cb0(void *pThis);

// TARGET: CPropMover::vfunc103
void CPropMover::vfunc103()
{
	sub_10011793(this);
	sub_101c1cb0(this);
}
// END FUNCTION

// FUNCTION: 0x10192910 size=0x14
#include "CPropMover.h"

class CBaseToggleFwd : public CBaseEntity
{
public:
	void sub_101c1dc0(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);
};

void CPropMover::vfunc113()
{
	CBaseEntity::vfunc113();
	m_pfnUse = (void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float))&CBaseToggleFwd::sub_101c1dc0;
}
// END FUNCTION

// FUNCTION: 0x10192940 size=0x6f
#include "platform.h"
#include "CBaseEntity.h"
#include "CUnknown101466e0.h"

void *sub_100aa720(int size);
extern void *vt_10474c44[];
extern void *vt_1047568c[];
extern char g_1058f230[];
void __fastcall sub_100039bd(void *pThis);
void __fastcall sub_10002ddd(void *pThis);

struct CPhysPropContestedView
{
	char m_pad0000[0x4c];
	unsigned int m_nFlags4c;
	char m_pad0050[0x1b0 - 0x50];
	CUnknown101466e0 m_Flag1b0;
};

// TARGET: prop_physics_contested
DLL_EXPORT CBaseEntity *prop_physics_contested()
{
	void *mem = sub_100aa720(0x7b4);
	CBaseEntity *p;
	if (mem)
	{
		p = (CBaseEntity *)mem;
		CPhysPropContestedView *v = (CPhysPropContestedView *)mem;
		sub_100039bd(p);
		*(void ***)p = vt_10474c44;
		v->m_Flag1b0.sub_101466e0(1);
		v->m_nFlags4c |= 4;
		sub_10002ddd((char *)p + 0x790);
		*(void ***)p = vt_1047568c;
	}
	else
		p = 0;
	p->vfunc106(g_1058f230);
	return p;
}
// END FUNCTION

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

// FUNCTION: 0x101929f0 size=0x5
int * sub_10192a30(void);
int * g_1072b038 = ((int * (*)(int))sub_10192a30)(0);
// END FUNCTION

// FUNCTION: 0x10192a30 size=0x52
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1058da80[2];

int *sub_10192a30()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_nRequiredStr", {0x78c, 0}, 1, 6, "required_strength" },
        { 2, "m_sBreakSnd", {0x7a8, 0}, 1, 6, "break_sound" },
        { 2, "m_sBreakSnd", {0x7a8, 0}, 1, 6, "break_sound" },
        { 5, "m_bConstraintBroken", {0x7ac, 0}, 1, 2 },
        { 10, "m_OnBreakConstraint", {0x790, 0}, 1, 0x16, "OnBreakConstraint", g_1055dc70 },
    };
    g_1058da80[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1058da80[0] = (int)&dataDesc[1];
    return g_1058da80;
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

// FUNCTION: 0x10192b50 size=0x267
#include "CPhysicsPropContested.h"
#include "CEntityVSlots.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "engineiface.h"
#include "engineserver.h"

extern char g_106b8540[];

inline const char *STRINGR(char *const &s) { return s ? s : g_106b8540; }

struct CContestedPhysView
{
	EVS(0) EVS(1) virtual void slot2();
	EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS(20) EVS(21) EVS(22) EVS(23)
	virtual void slot24(int a);
};

struct CContestedTargetView
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15)
	EVS(160) EVS(161) EVS(162) EVS(163) EVS(164) EVS(165) EVS(166) EVS(167) EVS(168)
	virtual void slot169(const Vector &angles);
	virtual void slot170(const Vector &force);
	EVS(171) EVS(172) EVS(173) EVS(174) EVS(175) EVS(176) EVS(177) EVS(178) EVS(179)
	EVS10(18) EVS10(19) EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26)
	EVS10(27) EVS10(28) EVS10(29) EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35)
	EVS(360) EVS(361) EVS(362) EVS(363) EVS(364) EVS(365) EVS(366) EVS(367) EVS(368)
	virtual Vector slot369();
};

// TARGET: CPhysicsPropContested::sub_10192b50
void CPhysicsPropContested::sub_10192b50(CBaseEntity *pOther)
{
	((CEntityVSlots *)this)->slot93(7, 0);
	CContestedPhysView *pPhys = (CContestedPhysView *)m_obj36c;
	if (pPhys) {
		pPhys->slot24(1);
		pPhys->slot2();
	}
	float flAmp = m_n78c * 6.0f;
	Vector vecAngles;
	vecAngles.x = enginerandom->vfunc1(-flAmp, flAmp);
	vecAngles.y = enginerandom->vfunc1(-flAmp, flAmp);
	vecAngles.z = enginerandom->vfunc1(-flAmp, flAmp);
	CContestedTargetView *pTarget = (CContestedTargetView *)pOther;
	pTarget->slot169(vecAngles);
	Vector vecForce = pTarget->slot369() * -1.0f * (m_n78c * 60.0f);
	pTarget->slot170(vecForce);
	m_b7ac = 1;
	m_Output790.sub_100cd660(pOther, this, 0);
	const char *pszSound = STRINGR(m_p7a8);
	if (pszSound && *pszSound) {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int edict = m_pEdict2e0;
		enginesound->vfunc3(&filter, engine->vfunc35(edict), 0, pszSound, 1.0f, 0.8f, 0x80, 100, 0, 0, 1, 0);
	}
	sub_100b3900(2);
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

// FUNCTION: 0x101930e0 size=0x5
#include "CPhysicsPropContested.h"
int __cdecl sub_102587f0();
// TARGET: CPhysicsPropContested::vfunc36
// the game's 0x101930e0: a tail call (jmp) of sub_102587f0
int CPhysicsPropContested::vfunc36()
{
	return sub_102587f0();
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

// FUNCTION: 0x10193160 size=0x6
#include "datamap.h"
#include "CPropSlashable.h"
namespace lifted {
extern char g_1058dba0;
}
datamap_t * CPropSlashable::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058dba0);
}
// END FUNCTION

// FUNCTION: 0x10193180 size=0x5
int * sub_101931c0(void);
int * g_1072b08c = ((int * (*)(int))sub_101931c0)(0);
// END FUNCTION

// FUNCTION: 0x101931c0 size=0x52
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1058dba0[2];

int *sub_101931c0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_nDamagedSkin", {0x730, 0}, 1, 6, "damaged_skin" },
        { 10, "m_OnSlashed", {0x734, 0}, 1, 0x16, "OnSlashed", g_1055dc70 },
    };
    g_1058dba0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1058dba0[0] = (int)&dataDesc[1];
    return g_1058dba0;
}
// END FUNCTION

// FUNCTION: 0x10193240 size=0x5a
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
void __fastcall sub_100cd2a0(void *);
extern int vt_1047332c;
extern int vt_10475b94;
extern char g_1058f270[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: prop_slashable
DLL_EXPORT GP *prop_slashable()
{
	GP *p = (GP *)sub_1000db89(0x74c);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_1047332c;
		sub_100cd2a0((char *)p + 0x734);
		*(int **)p = &vt_10475b94;
	} else {
		p = 0;
	}
	p->name(g_1058f270);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101932c0 size=0xa0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropSlashable.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CPropSlashable::vfunc103
void CPropSlashable::vfunc103()
{
    sub_10011793();
    m_nTakeDamage = 2;
    {
        ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
    }
    sub_100b3580(0x20000000);
    sub_100b3b00();
    sub_100a9470(1);
}
// END FUNCTION

// FUNCTION: 0x10193390 size=0xb2
#include "CPropSlashable.h"
#include "COutputEvent.h"
#include "CVDmg_t.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct CKnifeWeaponX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18) PV10(19)
	PV10(20) PV10(21) PV10(22) PV10(23) PV10(24) PV10(25) PV10(26) PV10(27) PV10(28) PV10(29)
	PV10(30) PV10(31) PV10(32) PV10(33)
	PV(340) PV(341) PV(342) PV(343) PV(344) PV(345) PV(346) PV(347)
	virtual const char *vfunc348();
};

struct CCharacterX
{
	CKnifeWeaponX *sub_10007e19();
};

struct CSlashableFields
{
	char m_pad0000[0x210];
	int m_iHealth;
	char m_pad0214[0x670 - 0x214];
	int m_nState;
	char m_pad0674[0x730 - 0x674];
	int m_nBrokenState;
	COutputEvent m_OnBreak;
};

extern int (__cdecl *g_109f3870)(const char *s1, const char *s2, int n);
extern char g_10587630[];	// "item_w_knife"

// TARGET: CPropSlashable::vfunc142
int CPropSlashable::vfunc142(struct CTakeDamageInfo *pInfo)
{
#define pInfo ((CPropSlashableDamageInfo *)pInfo)
	if (pInfo->m_pAttacker) {
		CCharacterX *pAttacker = *(CCharacterX **)(pInfo->m_pAttacker + 0x9c);
		if (pAttacker && pAttacker->sub_10007e19()) {
			if (!g_109f3870(g_10587630, pAttacker->sub_10007e19()->vfunc348(), 0x15)) {
				float flDamage = pInfo->m_pVDmg ? (float)pInfo->m_pVDmg->sub_101faa70() : pInfo->m_flDamage;
				CSlashableFields *p = (CSlashableFields *)this;
				p->m_iHealth = (int)((float)p->m_iHealth - flDamage);
				if (p->m_iHealth <= 0) {
					p->m_nState = p->m_nBrokenState;
					p->m_OnBreak.sub_100cd660(pAttacker, this, 0);
					return 1;
				}
			}
		}
	}
	return 0;
#undef pInfo
}
// END FUNCTION

// FUNCTION: 0x10193480 size=0x6
#include "datamap.h"
#include "CPropDestructable.h"
namespace lifted {
extern char g_1058dc3c;
}
datamap_t * CPropDestructable::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058dc3c);
}
// END FUNCTION

// FUNCTION: 0x101934a0 size=0x5
int * sub_101934e0(void);
int * g_1072b234 = ((int * (*)(int))sub_101934e0)(0);
// END FUNCTION

// FUNCTION: 0x101934e0 size=0x313
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1058dc3c[2];
void sub_10004949();
void sub_10009c46();
void sub_10005b64();

int *sub_101934e0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0x10, "m_DmgModels[0]", {0x794, 0}, 1, 6, "dmg_model_0" },
        { 0x10, "m_DmgModels[1]", {0x798, 0}, 1, 6, "dmg_model_1" },
        { 0x10, "m_DmgModels[2]", {0x79c, 0}, 1, 6, "dmg_model_2" },
        { 0x10, "m_DmgModels[3]", {0x7a0, 0}, 1, 6, "dmg_model_3" },
        { 0x10, "m_DmgModels[4]", {0x7a4, 0}, 1, 6, "dmg_model_4" },
        { 0x10, "m_DmgModels[5]", {0x7a8, 0}, 1, 6, "dmg_model_5" },
        { 0x10, "m_DmgModels[6]", {0x7ac, 0}, 1, 6, "dmg_model_6" },
        { 0x10, "m_DmgModels[7]", {0x7b0, 0}, 1, 6, "dmg_model_7" },
        { 4, "m_nPhysicsMoveOnLevel", {0x788, 0}, 1, 6, "physics_level" },
        { 4, "m_nDamageAbsorbtion", {0x78c, 0}, 1, 6, "damage_absorption" },
        { 5, "m_bBreakOnEnd", {0x790, 0}, 1, 6, "break_on_end" },
        { 5, "m_bOnlyDmgOnInput", {0x791, 0}, 1, 6, "only_dmg_on_input" },
        { 4, "m_nCurrentLevel", {0x784, 0}, 1, 2 },
        { 4, "InputRemoveHealth", {0, 0}, 1, 8, "RemoveHealth", 0, (void *)sub_10004949 },
        { 4, "InputSetToDamageLevel", {0, 0}, 1, 8, "SetToDamageLevel", 0, (void *)sub_10009c46 },
        { 2, "InputPlayAnimation", {0, 0}, 1, 8, "PlayAnimation", 0, (void *)sub_10005b64 },
        { 10, "m_OnBreakLevel[0]", {0x7b4, 0}, 1, 0x16, "OnBreakLevel1", g_1055dc70 },
        { 10, "m_OnBreakLevel[1]", {0x7cc, 0}, 1, 0x16, "OnBreakLevel2", g_1055dc70 },
        { 10, "m_OnBreakLevel[2]", {0x7e4, 0}, 1, 0x16, "OnBreakLevel3", g_1055dc70 },
        { 10, "m_OnBreakLevel[3]", {0x7fc, 0}, 1, 0x16, "OnBreakLevel4", g_1055dc70 },
        { 10, "m_OnBreakLevel[4]", {0x814, 0}, 1, 0x16, "OnBreakLevel5", g_1055dc70 },
        { 10, "m_OnBreakLevel[5]", {0x82c, 0}, 1, 0x16, "OnBreakLevel6", g_1055dc70 },
        { 10, "m_OnBreakLevel[6]", {0x844, 0}, 1, 0x16, "OnBreakLevel7", g_1055dc70 },
        { 10, "m_OnBreakLevel[7]", {0x85c, 0}, 1, 0x16, "OnBreakLevel8", g_1055dc70 },
        { 10, "m_OnBreakLastLevel", {0x874, 0}, 1, 0x16, "OnBreakLastLevel", g_1055dc70 },
    };
    g_1058dc3c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1058dc3c[0] = (int)&dataDesc[1];
    return g_1058dc3c;
}
// END FUNCTION

// FUNCTION: 0x101938d0 size=0x43
#include "platform.h"
#include "CPropDestructable.h"
void *sub_100aa720(int size);
extern char g_1058f3c8[];

// TARGET: prop_destructable
DLL_EXPORT CBaseEntity *prop_destructable()
{
	void *mem = sub_100aa720(0x88c);
	CPropDestructable *p;
	if (mem)
		p = ((CPropDestructable *)mem)->sub_10193940();
	else
		p = 0;
	p->vfunc106(g_1058f3c8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10193940 size=0x47
#include "CPropDestructable.h"
#include "CBreakableProp.h"
#include "COutputEvent.h"

extern int g_10476094;	// CPropDestructable vftable

struct CPropDestructableCtorView
{
	void *m_pVtable;
	char m_pad0004[0x791 - 4];
	char m_b791;
	char m_pad792[0x7b4 - 0x792];
	COutputEvent m_Outputs7b4[8];
	COutputEvent m_Output874;
	void sub_1008b490();
};

CPropDestructable *CPropDestructable::sub_10193940()
{
	CPropDestructableCtorView *p = (CPropDestructableCtorView *)this;
	((CBreakableProp *)this)->sub_1018f1c0();
	for (int i = 0; i < 8; i++)
		p->m_Outputs7b4[i].sub_100cd2a0();
	p->m_Output874.sub_100cd2a0();
	*(void **)&p->m_pVtable = &g_10476094;
	p->sub_1008b490();
	p->m_b791 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101939b0 size=0x5d
#include "CPropDestructable.h"

void sub_100aa7b0(void *p);

struct CPropDestructableOutputsView
{
	char m_pad[0x730];
	COutputEvent m_Output730;
	COutputEvent m_OnHealthChanged748;
	char m_pad0760[0x7b4 - 0x760];
	COutputEvent m_Outputs7b4[8];
	COutputEvent m_Output874;
};

CBaseEntity *CPropDestructable::vfunc5(unsigned int flags)
{
	((CPropDestructableOutputsView *)this)->~CPropDestructableOutputsView();
	sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x10193a30 size=0x1
#include "CPropDestructable.h"
void CPropDestructable::vfunc265()
{
}
// END FUNCTION

// FUNCTION: 0x10193a50 size=0xf7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropDestructable.h"
#include "CBreakableProp.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void CPropDestructable::vfunc103()
{
	*(const char **)((char *)this + 0x794) = *(const char **)((char *)this + 0x388);
	((CBreakableProp *)this)->CBreakableProp::vfunc103();
	const char *pszModel = *(const char **)((char *)this + 0x794);
	if (!pszModel)
		pszModel = g_106b8540;
	vfunc105(pszModel);
	*(int *)((char *)this + 0x784) = 0;
	*(int *)((char *)this + 0x780) = m_iHealth;
	sub_100b3580(0x40000);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
	}
	if (*(int *)((char *)this + 0x788))
		sub_100a5bb0();
	else
		sub_100a5ea0(6, 0, 0, 0);
	sub_100a9470(0);
}
// END FUNCTION

// FUNCTION: 0x10193b90 size=0x3b
#include "CPropDestructable.h"

void sub_1000978c();

// TARGET: ?vfunc104@CPropDestructable@@UAEXXZ
void CPropDestructable::vfunc104()
{
    sub_1000978c();
    int i = m_nStage784;
    if (i < 8) {
        int *p = &m_hModels794[i];
        do {
            if (*p == 0) {
                return;
            }
            engine->vfunc13((const char *)*p, 0);
            i = i + 1;
            p = p + 1;
        } while (i < 8);
    }
}
// END FUNCTION

// FUNCTION: 0x10193be0 size=0x36
#include "CPropDestructable.h"

void sub_10004dbd();

// TARGET: CPropDestructable::vfunc113
void CPropDestructable::vfunc113()
{
	sub_10004dbd();
	int i = 0;
	int *pModel = m_hModels794;
	do
	{
		if (*pModel == 0)
		{
			break;
		}
		m_n77c = i;
		i++;
		pModel++;
	} while (i < 8);
	sub_10193cc0(m_nStage784, 0);
}
// END FUNCTION

// FUNCTION: 0x10193c30 size=0x6d
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CPropDestructable.h"
#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))
struct S10193c30 {
    int m_v0;
    int m_pad4;
    int m_n;
    char m_pad0c[0x18 - 0xc];
    volatile int m_type;
    int Count() { return m_type == 4 ? m_n : 0; }
};
struct CPDV : CPropDestructable
{
	void sub_10193c30(S10193c30 *s);
};

// TARGET: sub_10193c30
void CPDV::sub_10193c30(S10193c30 *s)
{
	sub_10193cc0(clamp(s->Count() - 1, 0, 7), s->m_v0);
}
// END FUNCTION

// FUNCTION: 0x10193cc0 size=0x174
#include "CPropDestructable.h"
#include "CEntityVSlots.h"
#include "IPhysicsObject.h"
#include "QAngle.h"
#include "Tier1.h"

struct CPropDestructableVel : CBaseEntity
{
	const Vector &GetAbsVelocity()
	{
		if (IsEFlagSet(12))
			sub_100b1d10();
		return m_vecVelocity3bc;
	}
	bool IsEFlagSet(int bit) const { return (m_flags268 >> bit) & 1; }
	const QAngle &GetLocalAngularVelocity() { return *(const QAngle *)m_angVel3c8; }
};

inline void QAngleToAngularImpulse(const QAngle &angles, Vector &impulse)
{
	impulse.x = angles.z;
	impulse.y = angles.x;
	impulse.z = angles.y;
}

void CPropDestructable::sub_10193cc0(int stage, int a)
{
	if (m_nStage784 == stage)
		return;
	g_109f3630("%s set to damage level: %d\n", sub_1000b5cd(), stage);

	Vector velocity;
	Vector angVelocity;
	IPhysicsObject *pPhysics = (IPhysicsObject *)m_obj36c;
	if (pPhysics)
	{
		pPhysics->vfunc40(&velocity.x, &angVelocity.x);
	}
	else
	{
		velocity = ((CPropDestructableVel *)this)->GetAbsVelocity();
		QAngleToAngularImpulse(((CPropDestructableVel *)this)->GetLocalAngularVelocity(), angVelocity);
	}
	CEntityVSlots *slots = (CEntityVSlots *)this;
	sub_10192130(vfunc8(), pPhysics, slots->slot217(), slots->slot219(), &velocity, &angVelocity, m_nDC, *(int *)((char *)this + 0x76c), 0, 0);
	m_Outputs7b4[m_nStage784].sub_100cd660((void *)a, this, 0);
	const char *pszModel = (const char *)m_hModels794[stage];
	if (!pszModel)
		pszModel = "";
	slots->slot105(pszModel);
	m_nStage784 = stage;
	if (m_nPhysicsMoveOnLevel > stage)
		slots->slot93(7, 0);
	slots->slot225();
	if (slots->slot94() != 7)
		sub_100a5ea0(6, 0, 0, 0);
	else
		sub_100a5bb0();
}
// END FUNCTION

// FUNCTION: 0x10193ea0 size=0xc6
#include "CPropDestructable.h"
#include "inputdata_t.h"

void CPropDestructable::sub_10193ea0(inputdata_t *pInput)
{
	int n = (pInput->value.fieldType == 4) ? pInput->value.iValue : 0;
	if (n > m_nStageHealth78c)
	{
		m_iHealth += m_nStageHealth78c - n;
		void *pActivator = pInput->pActivator;
		n = m_iHealth;
		((CVariantCopy *)&m_OnHealthChanged748)->sub_1000b320(4, &n);
		m_OnHealthChanged748.sub_100cd300(*(CVariantCopy *)&m_OnHealthChanged748, pActivator, this, 0.0f);
		if (m_iHealth <= 0)
		{
			CPropDestructableDamage info;
			info.sub_101c2690();
			info.m_data[11] = (int)pInput->pActivator;
			info.m_data[10] = (int)pInput->pCaller;
			n = (pInput->value.fieldType == 4) ? pInput->value.iValue : 0;
			*(float *)&info.m_data[12] = (float)n;
			vfunc144(&info);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10193fb0 size=0x9f
#include "CPropDestructable.h"
#include "CVDmg_t.h"

struct DmgView {
	CVDmg_t *m_pDmg;
	char m_pad04[0x30 - 4];
	float m_flDamage;
	char m_pad34[0x4c - 0x34];
};

struct PropView {
	char m_pad[0x78c];
	int m_iStageHealth;
	char m_pad790;
	char m_bDone;
};

int CPropDestructable::vfunc142(struct CTakeDamageInfo *pInfo)
{
#define pInfo ((const void *)pInfo)
	PropView *p = (PropView *)this;
	if (p->m_bDone)
		return 0;
	DmgView info = *(const DmgView *)pInfo;
	CVDmg_t *pDmg = *(CVDmg_t *volatile *)&info.m_pDmg;
	if ((pDmg ? (float)pDmg->sub_101faa70() : info.m_flDamage) <= (float)p->m_iStageHealth)
		return 0;
	info.m_flDamage = (pDmg ? (float)pDmg->sub_101faa70() : info.m_flDamage) - (float)p->m_iStageHealth;
	return sub_10008a1c(&info);
#undef pInfo
}
// END FUNCTION

// FUNCTION: 0x10194080 size=0xa8
#include "CPropDestructable.h"
#include "COutputEvent.h"

void CPropDestructable::vfunc144(void *pInfo)
{
#define pInfo ((const CPropDestructableDamage *)pInfo)
	CPropDestructableDamage info = *pInfo;
	int nStages = *(int *)((char *)this + 0x77c);
	if (*(int *)((char *)this + 0x784) == nStages) {
		((COutputEvent *)((char *)this + 0x874))->sub_100cd660((void *)pInfo->m_data[10], this, 0);
		if (*((char *)this + 0x790)) {
			sub_10007c57(&info);
			return;
		}
		m_nTakeDamage = 0;
		m_flags204 &= ~0x2000;
		m_field200 = 2;
	} else {
		sub_10193cc0(*(int *)((char *)this + 0x784) + 1, pInfo->m_data[11]);
		m_iHealth = *(int *)((char *)this + 0x780);
	}
#undef pInfo
}
// END FUNCTION

// FUNCTION: 0x10194160 size=0x4c
#include "CAI_BaseNPC.h"
#include "inputdata_t.h"
extern char g_106b8540[];
struct CNPCUnit : CAI_BaseNPC {
    int sub_1008f7b0(const char *);
    void sub_10194160(inputdata_t *pInput);
};
void CNPCUnit::sub_10194160(inputdata_t *pInput)
{
    variant_t *v = &pInput->value;
    const char *psz;
    if (v->fieldType == 2) {
        psz = v->iszValue;
        if (!psz)
            psz = g_106b8540;
    } else {
        psz = v->sub_10008805();
    }
    int n = sub_1008f7b0(psz);
    if (n >= 0) {
        sub_100b3640(0x40000);
        sub_10260a50(n);
    }
}
// END FUNCTION

// FUNCTION: 0x101941d0 size=0x77
#include "CPropDestructable.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CEngineSlot35View {
    S10(a0) S10(a1) S10(a2)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
    virtual int vfunc35(int edict);
};
extern CEngineSlot35View *g_1070b22c;
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int entindex, int line, const char *text, int duration, int r, int g, int b, int a);

struct CPropDestructableUnit : CPropDestructable {
    int sub_10013ab1();
    int sub_101941d0();
};

int CPropDestructableUnit::sub_101941d0()
{
    int nLine = sub_10013ab1();
    if (*(unsigned char *)((char *)this + 0x224) & 1) {
        char szText[32];
        Q_snprintf(szText, 32, "Damage Level: %d", *(int *)((char *)this + 0x784));
        int nEdict = *(int *)((char *)this + 0x2e0);
        sub_101434b0(g_1070b22c->vfunc35(nEdict), nLine, szText, 0, 0xff, 0xff, 0xff, 0xff);
        nLine++;
    }
    return nLine;
}
// END FUNCTION

// FUNCTION: 0x10194270 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_1047659c;
extern char g_1058f46c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: prop_largehull_ignore
DLL_EXPORT GP *prop_largehull_ignore()
{
	GP *p = (GP *)sub_1000db89(0x730);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_1047659c;
	} else {
		p = 0;
	}
	p->name(g_1058f46c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101942e0 size=0x3e
#include "vampire.h"
#include "CBaseEntity.h"
#include "CBaseProp.h"
#include "CUnknown101466e0.h"
#include "CPropLargeHullIgnore.h"

// TARGET: CPropLargeHullIgnore::vfunc103
void CPropLargeHullIgnore::vfunc103()
{
    CBaseProp::vfunc103();
    ((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
    ((CBaseEntity *)this)->sub_100a9470(0);
    ((CBaseEntity *)this)->sub_100a9290(1);
    ((CBaseEntity *)this)->sub_100b3580(0x40000);
    ((CBaseEntity *)this)->sub_100b3840(8);
}
// END FUNCTION

// FUNCTION: 0x10194330 size=0x109
#include "CUtlRBTree12.h"
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)

unsigned short CUtlRBTree12::sub_10194330(const void *search) const
{
	const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *tree = (const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)this;
	unsigned short i = m_Root;
	while (i != InvalidIndex()) {
		if (m_LessFunc(search, m_pElements[i].m_Data)) {
			i = tree->Links(i).m_Left;
		} else if (m_LessFunc(m_pElements[i].m_Data, search)) {
			i = tree->Links(i).m_Right;
		} else {
			break;
		}
	}
	return i;
}
// END FUNCTION

// FUNCTION: 0x10194490 size=0x57
#include "CCineNPC.h"
#include "CBaseAnimating.h"

void sub_100aa7b0(void *);

struct Helper
{
	void *sub_10194490(unsigned int flags);
};

// TARGET: Helper::sub_10194490
void *Helper::sub_10194490(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x7ac))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x794))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x77c))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x748))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x730))->sub_10015708();
	((CBaseAnimating *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
