// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 19 blocks
#include "vampire.h"

// FUNCTION: 0x101297e0 size=0x6
#include "datamap.h"
#include "CGib.h"
namespace lifted {
extern char g_10572f18;
}
datamap_t * CGib::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10572f18);
}
// END FUNCTION

// FUNCTION: 0x10129800 size=0x5
int sub_10129840(void);
int g_1070ba20 = ((int (*)(int))sub_10129840)(0);
// END FUNCTION

// FUNCTION: 0x10129840 size=0x1a
namespace lifted {
extern int g_10572f18;
extern int g_10572f1c;
extern char g_10572f5c;
}
int sub_10129840()
{
    lifted::g_10572f1c = 3;
    lifted::g_10572f18 = (int)&lifted::g_10572f5c;
    return (int)&lifted::g_10572f18;
}
// END FUNCTION

// FUNCTION: 0x10129870 size=0xb5
#include "CBaseEntity.h"
#include "TestBit.h"

struct VelClampView
{
    char pad0000[0x268];
    unsigned int m_flags268;
    char pad026c[0x3bc - 0x26c];
    Vector m_vecAbsVelocity;	// 0x3bc

    void sub_100b1d10();	// CBaseEntity::CalcAbsoluteVelocity (stub 0x1000d486)
    void sub_100b2e30(const float *pVelocity);	// the absolute velocity setter (stub 0x10013728)
};

// TARGET: sub_10129870
void __fastcall sub_10129870(VelClampView *pThis)
{
    if (TestBit(pThis->m_flags268, 12))
        pThis->sub_100b1d10();
    Vector vecVelocity = pThis->m_vecAbsVelocity;
    float flSpeed = FastSqrt(vecVelocity.x * vecVelocity.x + vecVelocity.z * vecVelocity.z + vecVelocity.y * vecVelocity.y);
    if (flSpeed > 1500.0)
    {
        VectorNormalize(vecVelocity);
        vecVelocity *= 1500.0f;
        pThis->sub_100b2e30(&vecVelocity.x);
    }
}
// END FUNCTION

// FUNCTION: 0x10129960 size=0x380
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGib.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "QAngle.h"

extern int g_1070ba34;
extern Vector g_1070ba40;
extern Vector g_1070d1b0;
extern char g_10566070[];
void *sub_10136580(void *pName);
void sub_101cf600(CBaseEntity *pEnt);

void sub_10129960(CBaseEntity *pVictim, Vector vecOrigin, int cGibs)
{
	int i;

	if (g_1070ba34 == 1)
		return;

	for (i = 0; i < cGibs; i++) {
		CGib *pGib = (CGib *)sub_10136580(g_10566070);
		pGib->sub_1012b080("models/stickygib.mdl");
		pGib->m_nBody = enginerandom->vfunc2(0, 2);

		if (pVictim) {
			Vector vecPos(vecOrigin.x + enginerandom->vfunc1(-3.0f, 3.0f),
				vecOrigin.y + enginerandom->vfunc1(-3.0f, 3.0f),
				vecOrigin.z + enginerandom->vfunc1(-3.0f, 3.0f));
			pGib->vfunc62(&vecPos.x);

			Vector vecNewVelocity = g_1070ba40 * -1.0f;
			vecNewVelocity.x += enginerandom->vfunc1(-0.15f, 0.15f);
			vecNewVelocity.y += enginerandom->vfunc1(-0.15f, 0.15f);
			vecNewVelocity.z += enginerandom->vfunc1(-0.15f, 0.15f);
			vecNewVelocity = vecNewVelocity * 900.0f;

			QAngle vecAngVelocity = *(const QAngle *)pGib->m_angVel3c8;
			vecAngVelocity.x = enginerandom->vfunc1(250.0f, 400.0f);
			vecAngVelocity.y = enginerandom->vfunc1(250.0f, 400.0f);

			pGib->m_n730 = ((CAI_BaseNPC *)pVictim)->vfunc145();

			if (pVictim->m_iHealth > -50)
				vecNewVelocity = vecNewVelocity * 0.7f;
			else if (pVictim->m_iHealth > -200)
				vecNewVelocity = vecNewVelocity * 2.0f;
			else
				vecNewVelocity = vecNewVelocity * 4.0f;

			pGib->sub_100b2f50(&vecAngVelocity.x);
			pGib->sub_100b2e30(&vecNewVelocity.x);
			pGib->vfunc93(6, 0);
			{
				ScopeTrace trace("CBaseEntity::RemoveSolidFlags", pGib->m_name26c ? pGib->m_name26c : g_106b8540);
				((CCollisionProperty *)((char *)pGib + 0x270))->RemoveSolidFlags(4);
			}
			pGib->sub_1009edc0(&g_1070d1b0.x, &g_1070d1b0.x);
			sub_101cf600(pGib);
			pGib->m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CGib::sub_10009a48;
			pGib->sub_100ac4e0(0, 0, 0);
		}
		pGib->sub_10129870();
	}
}
// END FUNCTION

// FUNCTION: 0x10129dc0 size=0x33c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGib.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "engineiface.h"

__declspec(dllimport) void Warning(const char *pszFormat, ...);
extern "C" void *__cdecl __RTDynamicCast(void *pObj, long nVfDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_10566070[];
extern char g_10538764[];	// ??_R0?AVCBaseEntity@@@8, the CBaseEntity type descriptor
extern char g_10566074[];	// the CGib type descriptor
extern int g_1070ba34;
CBaseEntity *sub_10136580(const char *pszClass);
CBaseEntity *sub_100ab250(int index);
int sub_101d1800(int edict);
int sub_101cf600(int);

struct CGibEyeView
{
	EVS10(a) EVS10(b) EVS10(c) EVS10(d) EVS10(e) EVS10(f) EVS10(g) EVS10(h) EVS10(i) EVS10(j)
	EVS10(k) EVS10(l) EVS10(m) EVS10(n) EVS10(o) EVS10(p) EVS10(q) EVS10(r) EVS10(s)
	EVS(z0) EVS(z1) EVS(z2)
	virtual Vector slot193();	// EyePosition, returned by value
};

struct CGibOriginView
{
	EVS10(a) EVS10(b) EVS10(c) EVS10(d) EVS10(e) EVS10(f)
	EVS(z0) EVS(z1)
	virtual void slot62(const Vector &vecOrigin);	// SetLocalOrigin
};

struct CGibFlags
{
	unsigned int m_flags;
	bool Test() { return ((m_flags >> 12) & 1) != 0; }
};

inline void AdjustVelocityBasedOnHealth(int nHealth, Vector &vecVelocity)
{
	if (nHealth > -50)
		vecVelocity = vecVelocity * 0.7f;
	else if (nHealth > -200)
		vecVelocity = vecVelocity * 2.0f;
	else
		vecVelocity = vecVelocity * 4.0f;
}

inline CBaseEntity *Instance(int nEdict)
{
	ScopeTrace st("CBaseEntity::Instance", g_106b8540, g_106b8540);
	return sub_100ab250(nEdict);
}

inline int UTIL_FindClientInPVS(int pEdict) { return sub_101d1800(pEdict); }

// TARGET: sub_10129dc0
// CGib::SpawnHeadGib(pVictim) of the SDK's gib.cpp, as Troika changed it.
void sub_10129dc0(CBaseEntity *pEntity)
{
	CGib *pGib = (CGib *)__RTDynamicCast(sub_10136580(g_10566070), 0, g_10538764, g_10566074, 0);
	if (!pGib)
		Warning("classname %s used to create wrong class type\n");
	if (((CGibFlags *)&pEntity->m_flags268)->Test())
		pEntity->sub_100b1d10();
	Vector vecVel = pEntity->m_vecVelocity3bc;
	Vector vecAng = *(Vector *)pEntity->m_angVel3c8;
	if (g_1070ba34 == 1)
	{
		pGib->sub_1012b080("models/germangibs.mdl");
		pGib->m_nBody = 0;
	}
	else
	{
		pGib->sub_1012b080("models/gibs/hgibs.mdl");
		pGib->m_nBody = 0;
	}
	((CGibOriginView *)pGib)->slot62(((CGibEyeView *)pEntity)->slot193());
	int nEdict = UTIL_FindClientInPVS(pGib->m_pEdict2e0);
	if (enginerandom->vfunc2(0, 100) <= 5 && nEdict)
	{
		CBaseEntity *pOther = Instance(nEdict);
		if (pOther)
		{
			vecVel = ((CGibEyeView *)pOther)->slot193() - *((CEntityVSlots *)pGib)->slot220();
			VectorNormalize(vecVel);
			vecVel *= 300.0f;
			vecVel.z += 100.0f;
		}
	}
	else
	{
		vecVel = Vector(enginerandom->vfunc1(-100.0f, 100.0f), enginerandom->vfunc1(-100.0f, 100.0f), enginerandom->vfunc1(200.0f, 300.0f));
	}
	vecAng.x = enginerandom->vfunc1(100.0f, 200.0f);
	vecAng.y = enginerandom->vfunc1(100.0f, 300.0f);
	pGib->m_n730 = ((CEntityVSlots *)pEntity)->slot145();
	AdjustVelocityBasedOnHealth(pEntity->m_iHealth, vecVel);
	pGib->sub_100b2e30(&vecVel.x);
	pGib->sub_100b2f50(&vecAng.x);
	pGib->sub_10129870();
	sub_101cf600((int)pGib);
}
// END FUNCTION

// FUNCTION: 0x1012a1d0 size=0x352
#include "CWeaponThrown_Grenade_Frag.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGib.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern Vector g_1070ba40;
extern float g_1070d1b0[3];

struct GibCollView { char m_pad[0x270]; CCollisionProperty m_Collision; };
#define COLL(p) (((GibCollView *)(p))->m_Collision)

// TARGET: CGib::sub_1012a1d0
void CGib::sub_1012a1d0(CBaseEntity *pOwner, float flSpeedMin, float flSpeedMax)
{
	if (pOwner) {
		CEntityVSlots *po = (CEntityVSlots *)pOwner;
		Vector mins, maxs;
		COLL(pOwner).vfunc15(&mins, &maxs);
		{
			Vector *pSize;
			Vector spot(mins.x + (enginerandom->vfunc1(0, 1.0f)) * (pSize = po->slot214())->x,
				enginerandom->vfunc1(0, 1.0f) * po->slot214()->y + mins.y,
				(mins.z + (enginerandom->vfunc1(0, 1.0f) * po->slot214()->z)) + 1.0f);
			vfunc62(&spot.x);
		}
		Vector dir = g_1070ba40 * -1.0f;
		dir.x += enginerandom->vfunc1(-0.25f, 0.25f);
		dir.y += enginerandom->vfunc1(-0.25f, 0.25f);
		dir.z += enginerandom->vfunc1(-0.25f, 0.25f);
		dir = enginerandom->vfunc1(flSpeedMax, flSpeedMin) * dir;
		Vector ang = *(Vector *)g_1070d9d0;
		ang.x = enginerandom->vfunc1(100.0f, 200.0f);
		ang.y = enginerandom->vfunc1(100.0f, 300.0f);
		m_n730 = po->slot145();
		int health = pOwner->m_iHealth;
		if (-50 < health)
			dir = 0.7f * dir;
		else if (health > -200)
			dir = dir + dir;
		else
			dir = 4.0f * dir;
		sub_100b2e30(&dir.x);
		sub_100b2f50(&ang.x);
		sub_100aaa40(1);
		{
			ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
			COLL(this).sub_100dc480(2);
		}
		sub_1009edc0(g_1070d1b0, g_1070d1b0);
	}
	sub_100b3b00();
	sub_10129870();
}
// END FUNCTION

// FUNCTION: 0x1012a610 size=0x99
#include "CGib.h"

#define U1(n) virtual void u##n();
#define U10(n) U1(n##0) U1(n##1) U1(n##2) U1(n##3) U1(n##4) U1(n##5) U1(n##6) U1(n##7) U1(n##8) U1(n##9)

struct CGibSlots : CGib	// slots 134..201 are placeholders, then the owner notification
{
	U1(134) U1(135) U1(136) U1(137) U1(138) U1(139)
	U10(14) U10(15) U10(16) U10(17) U10(18) U10(19)
	U1(200) U1(201)
	virtual void vfunc202(CBaseEntity *pOwner);	// slot 202 (+0x328)
};

extern "C" void *__cdecl __RTDynamicCast(void *pObject, long nVfDelta, void *pSrcType, void *pTargetType, int bReference);
extern "C" __declspec(dllimport) void Warning(const char *pMsg, ...);
extern char g_10538764[];	// type descriptor of CBaseEntity
extern char g_10566074[];	// type descriptor of CGib
CBaseEntity *__cdecl sub_10136580(const char *pszClassname);

void __cdecl sub_1012a610(CBaseEntity *pOwner, int nGibs, void *a, void *b, const char *pszModel, float flLife)
{
	for (int i = 0; i < nGibs; i++) {
		CGibSlots *pGib = (CGibSlots *)__RTDynamicCast(sub_10136580("gib"), 0, g_10538764, g_10566074, 0);
		if (!pGib)
			Warning("classname %s used to create wrong class type\n");
		pGib->sub_1012b080(pszModel);
		pGib->m_nBody = i;
		pGib->sub_1012a1d0(pOwner, a, b);
		pGib->m_flLife73c = flLife;
		if (pOwner)
			pGib->vfunc202(pOwner);
	}
}
// END FUNCTION

// FUNCTION: 0x1012a6e0 size=0xd3
#include "CGib.h"

__declspec(dllimport) void Warning(const char *, ...);
CBaseEntity *sub_10136580(const char *pszClassname);	// CreateEntityByName
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long nVfDelta, void *pSrcType, void *pTargetType, int bIsReference);
extern char g_10538764[];	// CBaseEntity type descriptor
extern char g_10566074[];	// CGib type descriptor

// the object at 0x1070b244: slot 2 answers a random number in a range
struct CRandom_1012a6e0
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int vfunc2(int nMin, int nMax);
};
extern CRandom_1012a6e0 *g_1070b244;
extern int g_1070ba34;

void sub_1012a6e0(CBaseEntity *pOwner, int nCount, int nType)
{
	for (int i = nCount; i > 0; i--) {
		CGib *pGib = (CGib *)__RTDynamicCast(sub_10136580("gib"), 0, g_10538764, g_10566074, 0);
		if (!pGib)
			Warning("classname %s used to create wrong class type\n");
		if (g_1070ba34 == 1) {
			pGib->sub_1012b080("models/germangibs.mdl");
			pGib->m_nBody = g_1070b244->vfunc2(0, 3);
		} else {
			switch (nType) {
			case 0:
				pGib->sub_1012b080("models/gibs/hgibs.mdl");
				pGib->m_nBody = g_1070b244->vfunc2(1, 5);
				break;
			case 1:
				pGib->sub_1012b080("models/gibs/agibs.mdl");
				pGib->m_nBody = g_1070b244->vfunc2(0, 3);
				break;
			}
		}
		pGib->sub_1012a1d0(pOwner, 300.0f, 400.0f);
	}
}
// END FUNCTION

// FUNCTION: 0x1012a800 size=0x14f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGib.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "TestBit.h"

extern Vector g_1070d1b0;
extern Vector g_1070d9d0;
void sub_101cd940(CBaseEntity *);
void sub_100152b2();

inline const Vector &GetAbsVelocity1012a800(CBaseEntity *p)
{
	if (TestBit(p->m_flags268, 12))
		p->sub_100b1d10();
	return p->m_vecVelocity3bc;
}

// TARGET: CGib::sub_1012a800
void CGib::sub_1012a800()
{
	if (!IsInWorld()) {
		sub_101cd940(this);
		return;
	}
	if (GetAbsVelocity1012a800(this) == g_1070d1b0) {
		m_bAlpha1a3 = 0xff;
		m_n16c = 2;
		{
			ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
			CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
			pCol->sub_100dc580(pCol->m_usSolidFlags | 4);
		}
		sub_100b2f50(&g_1070d9d0.x);
		sub_100b3b00();
		m_flNextThink = gpGlobals->curtime + m_flLife73c;
		sub_100ac4e0((int)sub_100152b2, 0, 0);
	} else {
		m_flNextThink = gpGlobals->curtime + 0.5;
	}
}
// END FUNCTION

// FUNCTION: 0x1012a9b0 size=0x2b8
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"
#include "engineiface.h"

struct S1012a9b0Fields
{
	char m_pad[0x730];
	int m_n730;
	int m_n734;
	int m_n738;
};
extern int g_1070ba34;
void sub_101cfe10(CGameTrace *pTrace, int a, int b);

// TARGET: sub_1012a9b0
void __fastcall sub_1012a9b0(CBaseEntity *self, int, int unused)
{
	CEntityVSlots *pSelf = (CEntityVSlots *)self;
	S1012a9b0Fields *f = (S1012a9b0Fields *)self;
	if (self->sub_100b3700() & 1)
	{
		if ((unsigned char)(self->m_flags268 >> 12) & 1)
			self->sub_100b1d10();
		Vector vecVelocity = self->m_vecVelocity3bc * 0.9f;
		self->sub_100b2e30(&vecVelocity.x);
		Vector ang = *(Vector *)pSelf->slot221();
		ang.x = 0;
		ang.z = 0;
		pSelf->slot64(&ang.x);
		Vector angVel = *(Vector *)&self->m_angVel3c8;
		angVel.x = 0;
		angVel.z = 0;
		self->sub_100b2f50(&angVel.x);
		return;
	}
	if (g_1070ba34 != 1 && f->m_n734 > 0 && f->m_n730 != -1)
	{
		const Vector *o = (const Vector *)pSelf->slot220();
		Vector start(o->x, o->y, o->z + 8.0f);
		Vector end(start.x, start.y, start.z - 24.0f);
		CGameTrace tr;
		UTIL_TraceLine_DebugCall(start, end, 0x400b, self, 0, &tr);
		sub_101cfe10(&tr, f->m_n730, 1);
		f->m_n734--;
	}
	if (f->m_n738 != 9 && enginerandom->vfunc2(0, 2) == 0 && ((unsigned char)(self->m_flags268 >> 12) & 1))
		self->sub_100b1d10();
}
// END FUNCTION

// FUNCTION: 0x1012ad20 size=0x2a4
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWeaponThrown_Grenade_Frag.h"
#include "ScopeTrace.h"
#include "UTIL_Trace.h"
#include "CEntityVSlots.h"
#include <string.h>

void sub_101c0b10();
void sub_101cfe10(CGameTrace *pTrace, int decalIndex, int bFlag);
void sub_10139970(const Vector *pNormal, Vector *pAngles);
extern Vector g_1070d1b0;

static inline bool FlagBit12(unsigned int f) { return (f >> 12) & 1; }

void CBaseEntity::sub_1012ad20(CBaseEntity *pOther)
{
	sub_100ac4e0((int)sub_101c0b10, 0, 0);
	m_flNextThink = gpGlobals->curtime + 10.0f;
	if (strcmpi(pOther->m_classname11c ? pOther->m_classname11c : g_106b8540, "worldspawn"))
	{
		m_flNextThink = gpGlobals->curtime;
		return;
	}
	if (FlagBit12(m_flags268))
		sub_100b1d10();
	CGameTrace tr;
	UTIL_TraceLine_DebugCall(*(Vector *)((CEntityVSlots *)this)->slot220(),
		m_vecVelocity3bc * 32.0f + *(Vector *)((CEntityVSlots *)this)->slot220(), 0x400b, this, 0, &tr);
	sub_101cfe10(&tr, *(int *)((char *)this + 0x730), 1);
	Vector vecNormal = *(Vector *)tr.m_planeNormal * -1.0f;
	Vector vecAngles;
	sub_10139970(&vecNormal, &vecAngles);
	((CEntityVSlots *)this)->slot64(&vecAngles.x);
	sub_100b2e30(&g_1070d1b0.x);
	sub_100b2f50(g_1070d9d0);
	((CEntityVSlots *)this)->slot93(0, 0);
}
// END FUNCTION

// FUNCTION: 0x1012b080 size=0x1a0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGib.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern float g_1070d1b0[3];
void sub_101cf390(CBaseEntity *pEnt, const float *pMins, const float *pMaxs);
void sub_10011c5c();
void sub_10013868();

void CGib::sub_1012b080(const char *pszModel)
{
	CCollisionProperty *pCol;
	vfunc93(6, 1);
	m_flFriction3f0 = 0.55f;
	m_bAlpha1a3 = 0xff;
	m_n16c = 0;
	m_n168 = 0;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc480(2);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		pCol->AddSolidFlags(0x10);
	}
	sub_100aaa40(1);
	vfunc105(pszModel);
	sub_101cf390(this, g_1070d1b0, g_1070d1b0);
	m_flNextThink = gpGlobals->curtime + 4.0f;
	m_flLife73c = 25.0f;
	sub_100ac4e0((int)sub_10011c5c, 0, 0);
	*(int *)&m_pfnTouch = (int)sub_10013868;
	m_n738 = 9;
	m_n734 = 5;
}
// END FUNCTION

// FUNCTION: 0x1012b290 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_10462b8c;
extern char g_10566070[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: gib
DLL_EXPORT GP *gib()
{
	GP *p = (GP *)sub_1000db89(0x740);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_10462b8c;
	} else {
		p = 0;
	}
	p->name(g_10566070);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1012b300 size=0xd
#include "CGib.h"

// TARGET: CGib::vfunc117
int CGib::vfunc117()
{
	unsigned int flags = CBaseEntity::vfunc117();
	return (flags & 0xfffffffd) | 0x80000000;
}
// END FUNCTION

// FUNCTION: 0x1012b320 size=0x39
#include "CRagGib.h"
#include "CBaseEntity.h"

CRagGib *sub_10002e32(const char *pszName);

// TARGET: sub_1012b320
CRagGib *sub_1012b320(int a, int b, int c, int d)
{
    CRagGib *pGib = sub_10002e32("raggib");
    ((CBaseEntity *)pGib)->vfunc64((const float *)c);
    pGib->sub_10015c17(a, b, d);
    return pGib;
}
// END FUNCTION

// FUNCTION: 0x1012b370 size=0x232
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern char g_1070d1b0[];
void sub_101cf390(CBaseEntity *pEnt, const void *a, const void *b);
void sub_101cf5c0(CBaseEntity *pEnt, int a, int b);

#define ENTNAME(p) ((p) ? ((p)->m_name26c ? (p)->m_name26c : g_106b8540) : g_105387dc)
#define COL(p) ((CCollisionProperty *)((char *)(p) + 0x270))

// TARGET: CBaseEntity::sub_1012b370
void CBaseEntity::sub_1012b370(const char *pszModel, int b, int c)
{
	CCollisionProperty *pCol;
	{
		ScopeTrace t("CBaseEntity::SetSolid", ENTNAME(this));
		pCol = COL(this);
		pCol->sub_100dc480(2);
	}
	{
		ScopeTrace t("CBaseEntity::AddSolidFlags", ENTNAME(this));
		pCol->AddSolidFlags(4);
	}
	vfunc105(pszModel);
	sub_101cf390(this, g_1070d1b0, g_1070d1b0);
	sub_101cf5c0(this, b, 0);
	if (!sub_10090180(c, -1, 0)) {
		{
			ScopeTrace t("CBaseEntity::AddSolidFlags", ENTNAME(this));
			pCol->AddSolidFlags(0x10);
		}
		{
			ScopeTrace t("CBaseEntity::RemoveSolidFlags", ENTNAME(this));
			pCol->sub_100dc580(pCol->m_usSolidFlags & ~4);
		}
		sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x1012b640 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_1046308c;
extern char g_105730ec[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: raggib
DLL_EXPORT GP *raggib()
{
	GP *p = (GP *)sub_1000db89(0x730);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_1046308c;
	} else {
		p = 0;
	}
	p->name(g_105730ec);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1012b6b0 size=0x1e
#include "CGib.h"

void sub_100aa7b0(void *p);

// TARGET: CGib::vfunc5
CBaseEntity *CGib::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
