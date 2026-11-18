// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

CBreakableProp *CBreakableProp::vfunc5(unsigned int flags)
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
		int nOld = m_nTakeDamage1fc;
		m_nTakeDamage1fc = 1;
		int r = ((CBaseEntity *)this)->CBaseEntity::vfunc142(&info);
		m_nTakeDamage1fc = nOld;
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
	m_nTakeDamage1fc = 0;
	((COutputEvent *)m_OnBreak730)->sub_100cd660(pAttacker, this, 0);
	CBreakPhysView *pPhysics = (CBreakPhysView *)m_pPhysObj36c;
	Vector vecVelocity;
	Vector vecAngVelocity;
	if (pPhysics) {
		pPhysics->slot40(&vecVelocity.x, &vecAngVelocity.x);
	} else {
		if (((CBreakFlags *)&m_flags268)->Test())
			sub_100b1d10();
		vecVelocity.x = m_vecVelocity3bc[0];
		vecVelocity.y = m_vecVelocity3bc[1];
		vecVelocity.z = m_vecVelocity3bc[2];
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
struct CBreakablePropFields1018fe50 {
    char pad0[0x1fc];
    int field1fc;
    bool sub_1018fe50(int a);
};
bool CBreakablePropFields1018fe50::sub_1018fe50(int a)
{
    return field1fc == 2;
}
// END FUNCTION

// FUNCTION: 0x1018fe80 size=0x26
#include "CBreakableProp.h"

void sub_10006d61();

// TARGET: CBreakableProp::vfunc230
void CBreakableProp::vfunc230(int a, int b)
{
    void (CBreakableProp::*pBase)(int, int);
    *(void **)&pBase = (void *)sub_10006d61;
    (this->*pBase)(a, b);

    void (CBreakableProp::*pSlot75)(int, int);
    void **vt = *(void ***)this;
    *(void **)&pSlot75 = vt[0x12c / 4];
    (this->*pSlot75)(a, b);
}
// END FUNCTION

// FUNCTION: 0x1018fec0 size=0x77
#include "CBreakableProp.h"

extern int (__cdecl *g_109f388c)(char *buffer, int count, const char *format, ...);
void __cdecl sub_101434b0(int entIndex, int lineOffset, const char *text, int duration, int r, int g, int b, int a);

int CBreakableProp::vfunc124()
{
	int lineOffset = sub_10096100();
	if (m_fTextOverlayFlags & 1) {
		char text[32];
		g_109f388c(text, 32, "Health: %d", m_iHealth);
		int edict = m_pEdict;
		sub_101434b0(engine->vfunc35(edict), lineOffset, text, 0, 255, 255, 255, 255);
		lineOffset++;
	}
	return lineOffset;
}
// END FUNCTION
