// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f1ce0 size=0x3
#include "CDisciplineWeapon.h"
bool CDisciplineWeapon::vfunc281()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103f1d00 size=0x1e
#include "CDisciplineWeapon.h"

void sub_100aa7b0(void *p);

// TARGET: CDisciplineWeapon::vfunc5
CDisciplineWeapon *CDisciplineWeapon::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f1d30 size=0x6
#include "datamap.h"
#include "CDisciplineWeapon.h"
namespace lifted {
extern char g_1067e538;
}
datamap_t *CDisciplineWeapon::vfunc82()
{
    return (datamap_t *)&lifted::g_1067e538;
}
// END FUNCTION

// FUNCTION: 0x103f1dc0 size=0x1d7
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CDisciplineWeapon.h"
#include "CEntityVSlots.h"
#include "CVStatList_t.h"
#include "Ent.h"

extern char g_106b8540[];

struct CDWPlayerView
{
	char m_pad0000[0x1c64];
	CHandle<CEntityVSlots> m_h1c64;
};

struct CDWOwnerView
{
	char m_pad0000[0xa8];
	CDWPlayerView *m_pPlayer;
};

char CDisciplineWeapon::vfunc315()
{
	char *pOwner = (char *)sub_10252240();
	if (!pOwner)
		return 0;
	if (CVStatListSet::Of(pOwner)->Find(3)->sub_102012d0(m_nStatType) < 1)
		return 0;
	CEntityVSlots *pThis = (CEntityVSlots *)this;
	CDWOwnerView *pEnt = (CDWOwnerView *)sub_102521f0();
	CDWPlayerView *pPlayer;
	if (!pEnt)
		pPlayer = 0;
	else
		pPlayer = pEnt->m_pPlayer;
	if (pPlayer || !pThis->slot8()) {
		pThis->slot105(m_pszName754 ? m_pszName754 : g_106b8540);
		if (pPlayer) {
			pPlayer->m_h1c64.Get()->slot105(m_pszName754 ? m_pszName754 : g_106b8540);
			pPlayer->m_h1c64.Get()->slot310(*(int *)&gpGlobals->curtime);
		}
	}
	const char *pszModel;
	if (!((Ent *)pOwner)->sub_10336920())
		pszModel = pThis->slot272();
	else
		pszModel = pThis->slot273();
	if (*pszModel)
		pThis->slot105(pszModel);
	return sub_10253b70(pThis->slot342(0), pThis->slot343(), 0xb4, pThis->slot344()) != 0;
}
// END FUNCTION

// FUNCTION: 0x103f2020 size=0x18b
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CDisciplineWeapon.h"
#include "CVStatList_t.h"

void sub_10003ca1();

char CDisciplineWeapon::vfunc316(int a)
{
	int owner = sub_10252240();
	if (owner) {
		CVStatListSet *set = CVStatListSet::Of((void *)owner);
		for (int n = set->Find(3)->sub_10010609(m_nStatType); n > 0; n--) {
			set->Find(3)->sub_10200ea0(m_nStatType);
			set->Find(0)->sub_10200d60(0xc);
		}
	}
	sub_100ac4e0((int)sub_10003ca1, 0, 0);
	m_f17c = gpGlobals->curtime + 0.5f;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x103f2220 size=0xf7
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"
#include "CDisciplineWeapon.h"
#include "CVStatList_t.h"
#include "CEHandleGet.h"

#define S(n) virtual void n();
#define S10(p) S(p##0) S(p##1) S(p##2) S(p##3) S(p##4) S(p##5) S(p##6) S(p##7) S(p##8) S(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct DWOwnerObj
{
	S100(a) S100(b) S100(c) S100(d) S10(e0) S10(e1) S10(e2) S10(e3)
	S(f0) S(f1) S(f2) S(f3) S(f4) S(f5) S(f6) S(f7) S(f8)
	virtual void slot449(int a, int b);
};

struct DWOwnerSlots
{
	S100(a) S100(b) S100(c) S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6) S10(d7)
	S(e0) S(e1) S(e2) S(e3) S(e4) S(e5) S(e6) S(e7)
	virtual void slot388(void *pWeapon, int a);
};

void CDisciplineWeapon::vfunc326()
{
	CBaseCombatCharacter *pOwner = (CBaseCombatCharacter *)((CAI_BaseNPCTroika *)this)->sub_10252240();
	if (pOwner) {
		DWOwnerObj *pObj = *(DWOwnerObj **)((char *)pOwner + 0xa8);
		if (pObj)
			pObj->slot449(5, 0);
		CVStatListSet::Of(pOwner)->Find(3)->sub_102008e0(m_nStatType, 0);
		pOwner->vfunc111();
		((DWOwnerSlots *)pOwner)->slot388(EHandle_Get(*(unsigned int *)((char *)pOwner + 0xea4)), 0);
	}
}
// END FUNCTION

// FUNCTION: 0x103f2360 size=0x8
#include "CDisciplineWeapon.h"
void CDisciplineWeapon::vfunc327() { vfunc326(); }
// END FUNCTION

// FUNCTION: 0x103f2380 size=0x4c4
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CDisciplineWeapon.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "UTIL_Trace.h"
#include <math.h>

struct CUnknown1004f860 { void *sub_1004f860(); };
extern CGlobalEntityList g_106eb5d8;
void sub_10139610(void *pAngles, Vector *fwd, Vector *right, Vector *up);

struct CDiscOwnerView { char m_pad0000[0xa8]; CEntityVSlots *m_pPlayer; };
struct CDiscEntView { char m_pad0000[0x9c]; int m_n9c; };

inline void TraceLineCtorRayCall(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	((CUnknown1004f860 *)&ray)->sub_1004f860();
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// TARGET: CDisciplineWeapon::vfunc285
int CDisciplineWeapon::vfunc285()
{
	float flMinDot = (float)cos(0.17453292519943295);
	CBaseEntity *pBest = 0;
	CDiscOwnerView *pOwner = (CDiscOwnerView *)sub_102521f0();
	CEntityVSlots *pPlayer = pOwner ? pOwner->m_pPlayer : 0;
	if (!pPlayer)
		return 0;
	Vector fwd, right;
	sub_10139610((char *)pPlayer + 0x206c, &fwd, &right, 0);
	Vector eye;
	eye = pPlayer->slot389(*pPlayer->slot220());
	CGameTrace tr;
	Vector end = eye + fwd * 4096.0f;
	TraceLineCtorRayCall(eye, end, 0x46004003, pPlayer, 0, &tr);
	if (tr.m_fraction < 1.0f && tr.m_pEnt && ((CDiscEntView *)tr.m_pEnt)->m_n9c)
		return (int)tr.m_pEnt;
	float flBest = flMinDot;
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0); pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt))
	{
		if (!((CDiscEntView *)pEnt)->m_n9c)
			continue;
		Vector vmins, vmaxs;
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pEnt + 0x270);
		pCol->sub_100dcd90((const float *)((char *)pCol + 4), (const float *)((char *)pCol + 0x10), &vmins.x, &vmaxs.x);
		Vector dir = (vmins + vmaxs) * 0.5f - eye;
		if (dir.LengthSqr() > 16777216.0f)
			continue;
		VectorNormalize(dir);
		float dot = DotProduct(dir, fwd);
		if (dot > flBest)
		{
			for (int i = 0; i < 4; i++)
			{
				end.x = (vmins.x + vmaxs.x) * 0.5f;
				end.y = vmins.y + (vmaxs.y - vmins.y) * (i * (1.0 / 3.0));
				end.z = (vmins.z + vmaxs.z) * 0.5f;
				UTIL_TraceLine(eye, end, 0x46004003, pPlayer, 0, &tr);
				if (tr.m_fraction < 1.0f && tr.m_pEnt && (CBaseEntity *)tr.m_pEnt == pEnt)
				{
					flBest = dot;
					pBest = pEnt;
					break;
				}
			}
		}
	}
	return (int)pBest;
}
// END FUNCTION
