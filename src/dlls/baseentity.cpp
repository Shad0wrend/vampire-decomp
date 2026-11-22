// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 136 blocks
#include "vampire.h"

// FUNCTION: 0x100a68f0 size=0xb6
#include "CBaseEntity.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern void (__cdecl *g_109f362c)(const char *fmt, ...);
void sub_1002ee60(CBaseEntity *pEnt);

void CBaseEntity::sub_100a68f0(int pObject)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::VPhysicsSwapObject";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	if (!pObject)
		sub_1002ee60(this);
	if (!m_obj36c)
		g_109f362c("Bad vphysics swap for %s\n", m_classname11c ? m_classname11c : "");
	m_obj36c = pObject;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100a69e0 size=0xb9
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "IPhysicsObject.h"
extern char g_106b8540[];
extern char g_105387dc[];

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CShadowPosView {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
    V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
    V10(c0)
    virtual void c10(); virtual void c11(); virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15(); virtual void c16();
    virtual const float *GetAbsOrigin();
    virtual void c18();
    virtual const float *GetAbsAngles();
};

void CBaseEntity::vfunc232(int deltaTime)
{
    ScopeTrace trace("CBaseEntity::UpdatePhysicsShadowToCurrentPosition", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (vfunc94() != 7) {
        IPhysicsObject *pPhys = (IPhysicsObject *)m_obj36c;
        if (pPhys) {
            pPhys->vfunc46(((CShadowPosView *)this)->GetAbsOrigin(), ((CShadowPosView *)this)->GetAbsAngles(), 0, deltaTime);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100a6ad0 size=0xa3
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseEntity::vfunc233(int *pList, int maxObjects)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::VPhysicsGetObjectList";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	int pObj = *(int *)((char *)this + 0x36c);
	if (pObj && maxObjects > 0)
	{
		*pList = pObj;
		--*g_109f3680;
		return 1;
	}
	--*g_109f3680;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100a6bb0 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100a6bb0(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Intersects";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a6c50 size=0x296
#include "utlrbtree.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CGameTrace.h"
#include "CPASFilter.h"
#include "CBroadcastRecipientFilter.h"
#include "UTIL_BloodStream.h"
#include "IPhysicsSurfaceProps.h"
#include "ScopeTrace.h"

template <> inline void CUtlVector<int, CUtlMemory<int> >::RemoveAll() { m_Size = 0; }
extern IPhysicsSurfaceProps *g_10723944;

struct DecalTableEntry { int m_nValue; int m_pad; };
extern DecalTableEntry g_105c230c[];

int __fastcall sub_102517b0(void *p);

template <class E> inline int ENTINDEX_DT(E pEdict)
{
	return engine->vfunc35(pEdict);
}

__forceinline void DecalPAS(CGameTrace *pTrace, int tableEntry, int decalIndex, char material, int a4,
                     CBasePlayer *pPlayer, int nType)
{
	CPASFilter filter(pTrace->m_endpos);

	int field740 = 0;
	int info = -1;
	if (pPlayer)
	{
		field740 = *(int *)((char *)pPlayer + 0x740);
		info = ((signed char *)sub_102517b0(pPlayer))[0x2418];
	}

	g_10540528->vfunc25(filter, 0, (const Vector *)pTrace->m_endpos, pTrace,
	                    ENTINDEX_DT(pTrace->m_pEnt->m_pEdict2e0), pTrace->m_hitbox,
	                    tableEntry, decalIndex, material, a4, field740, info, nType);
}

__forceinline void DecalMaterialPAS(CGameTrace *pTrace, int tableEntry, int decalIndex, int a4,
                     CBasePlayer *pPlayer, int nType)
{
	char material = g_10723944->vfunc5(pTrace->m_surfaceProps)->m_nMaterial70;
	if (nType == 1)
	{
		if (material == 'F')
		{
			material = 'K';
			if (pTrace->m_pEnt && pTrace->m_pEnt->m_p9c)
			{
				CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)pTrace->m_pEnt->m_p9c;
				if (pChar->sub_103300c0())
					material = 'R';
				else if (pChar->sub_10330220())
					material = 'Z';
				else if (pChar->sub_1033c900(0x400))
					material = 'Q';
			}
		}
		else if (material == 'A')
		{
			material = 'B';
		}
	}
	else if (material == 'F' && pTrace->m_pEnt && pTrace->m_pEnt->m_p9c &&
	         ((CBaseCombatCharacter *)pTrace->m_pEnt->m_p9c)->sub_1033c900(0x400))
	{
		material = 'Q';
	}

	DecalPAS(pTrace, tableEntry, decalIndex, material, a4, pPlayer, nType);
}

// TARGET: CBaseEntity::vfunc155
void CBaseEntity::vfunc155(CGameTrace *pTrace, int decalIndex, char bFlag, int a4,
                           CBasePlayer *pPlayer, int nType, char bTrace)
{
	ScopeTrace scope("CBaseEntity::DecalTrace",
	                 this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (decalIndex < 0)
		return;

	int tableEntry = g_105c230c[decalIndex].m_nValue;
	if (tableEntry < 0)
		return;

	if (bFlag)
	{
		DecalMaterialPAS(pTrace, tableEntry, decalIndex, a4, pPlayer, nType);
	}
	else
	{
		CBroadcastRecipientFilter filter;
		g_10540528->vfunc19(filter, 0, (const Vector *)pTrace->m_endpos, pTrace,
		                    ENTINDEX_DT(pTrace->m_pEnt->m_pEdict2e0), pTrace->m_hitbox, tableEntry,
		                    bTrace || pPlayer);
	}
}
// END FUNCTION

// FUNCTION: 0x100a6fa0 size=0x283
#include "CTraceFilterNoCharacterCollide.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBaseEntitySlots.h"
#include "ScopeTrace.h"
#include "CTraceFilterFVisible.h"
#include "CTraceFilterSimple.h"
#include "CGameTrace.h"
#include "Ray_t.h"
#include "CUnknown1070b254.h"
#include "AITrace.h"
#include "Tier1.h"

class CFoo1005f190 { public: int sub_1005f190(); };
extern CFoo1005f190 g_10738960;

struct CWaterLevelView { char pad[0x3e0]; int m_nWaterLevel; };

bool CBaseEntity::vfunc201(CBaseEntity *pEntity, int traceMask, CBaseEntity **ppBlocker, int nOrigin)
{
	ScopeTrace trace( "CBaseEntity::FVisible", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc );

	if ( pEntity->sub_100b3700() & 0x8000 )
		return false;

	if ( (((CWaterLevelView *)this)->m_nWaterLevel != 3 && ((CWaterLevelView *)pEntity)->m_nWaterLevel == 3)
		|| (((CWaterLevelView *)this)->m_nWaterLevel == 3 && ((CWaterLevelView *)pEntity)->m_nWaterLevel == 0) )
		return false;

	Vector eye;
	((CBaseEntitySlots *)this)->slot193( (int)&eye );

	Vector target;
	sub_100a72e0( pEntity, nOrigin, &target );

	CTraceFilterFVisible filter( this, 0 );

	Ray_t ray;
	ray.Init( eye, target );

	CGameTrace traceResult;
	g_1070b254->vfunc4( &ray, traceMask, (CTraceFilterNoCharacterCollide *)&filter, &traceResult );

	if ( g_10738960.sub_1005f190() )
		sub_10146570( (const Vector *)&traceResult, (const Vector *)traceResult.m_endpos, 0xff, 0, 0, 1, -1.0f );

	if ( traceResult.m_fraction != 1.0 )
	{
		CBaseEntity *pHit = traceResult.m_pEnt;
		if ( pHit != pEntity )
		{
			if ( pHit && *(void **)((char *)pHit + 0x94) )
				g_109f3630( "DOH!" );
			if ( ppBlocker )
				*ppBlocker = pHit;
			return false;
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x100a72e0 size=0x610
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"

#define CORNER(CX, CY, CZ, OX, OY, OZ) \
	{ float mx = ((CX) + (OX)) * 0.5f; float my = ((CY) + (OY)) * 0.5f; float mz = ((CZ) + (OZ)) * 0.5f; \
	pt.x = ((CX) - mx) + mx; pt.y = ((CY) - my) + my; pt.z = ((CZ) - mz) * 0.9f + mz; \
	*pOut = pt + *((CEntityVSlots *)pTarget)->slot220(); return; }

// TARGET: CBaseEntity::sub_100a72e0
void CBaseEntity::sub_100a72e0(CBaseEntity *pTarget, int nOrigin, Vector *pOut)
{
	ScopeTrace trace("CBaseEntity::FVisibleTargetOrigin", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY", g_106b8540);
	Vector pt;
	switch (nOrigin)
	{
	case 1:
	{
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pTarget + 0x270);
		const Vector &mins = *(Vector *)pCol->vfunc1();
		const Vector &maxs = *(Vector *)pCol->vfunc2();
		Vector vecCenter = (maxs + mins) * 0.5f;
		*pOut = vecCenter + *((CEntityVSlots *)pTarget)->slot220();
		return;
	}
	case 2:
	{
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pTarget + 0x270);
		Vector mins = *(Vector *)pCol->vfunc1();
		Vector maxs = *(Vector *)pCol->vfunc2();
		CORNER(mins.x, mins.y, maxs.z, maxs.x, maxs.y, mins.z)
	}
	case 3:
	{
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pTarget + 0x270);
		Vector mins = *(Vector *)pCol->vfunc1();
		Vector maxs = *(Vector *)pCol->vfunc2();
		CORNER(mins.x, maxs.y, maxs.z, maxs.x, mins.y, mins.z)
	}
	case 4:
	{
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pTarget + 0x270);
		Vector mins = *(Vector *)pCol->vfunc1();
		Vector maxs = *(Vector *)pCol->vfunc2();
		CORNER(maxs.x, mins.y, maxs.z, mins.x, maxs.y, mins.z)
	}
	case 5:
	{
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pTarget + 0x270);
		Vector mins = *(Vector *)pCol->vfunc1();
		Vector maxs = *(Vector *)pCol->vfunc2();
		CORNER(maxs.x, maxs.y, maxs.z, mins.x, mins.y, mins.z)
	}
	case 6:
	{
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pTarget + 0x270);
		Vector mins = *(Vector *)pCol->vfunc1();
		Vector maxs = *(Vector *)pCol->vfunc2();
		CORNER(mins.x, mins.y, mins.z, maxs.x, maxs.y, maxs.z)
	}
	case 7:
	{
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pTarget + 0x270);
		Vector mins = *(Vector *)pCol->vfunc1();
		Vector maxs = *(Vector *)pCol->vfunc2();
		CORNER(mins.x, maxs.y, mins.z, maxs.x, mins.y, maxs.z)
	}
	case 8:
	{
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pTarget + 0x270);
		Vector mins = *(Vector *)pCol->vfunc1();
		Vector maxs = *(Vector *)pCol->vfunc2();
		CORNER(maxs.x, mins.y, mins.z, mins.x, maxs.y, maxs.z)
	}
	case 9:
	{
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pTarget + 0x270);
		Vector mins = *(Vector *)pCol->vfunc1();
		Vector maxs = *(Vector *)pCol->vfunc2();
		CORNER(maxs.x, maxs.y, mins.z, mins.x, mins.y, maxs.z)
	}

	case 0:
		nOrigin = 0;
		break;
	case 10:
		nOrigin = 10;
		break;
	}
	Vector vecTmp;
	*pOut = *((CEntityVSlots *)pTarget)->slot193(&vecTmp);
}
// END FUNCTION

// FUNCTION: 0x100a7a80 size=0x3
// TARGET: sub_100a7a80
int __cdecl sub_100a7a80() { return 0; }
// END FUNCTION

// FUNCTION: 0x100a7aa0 size=0xef
#include "CBaseEntity.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
struct EntInfo { CBaseEntity *ent; int serial; int pad; };
extern char *g_10566458;
typedef bool (__fastcall *SlotFn)(CBaseEntity *, void **, CBaseEntity *);

bool CBaseEntity::vfunc140(CBaseEntity *pAttacker)
{
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::PassesDamageFilter", ent, g_106b8540);
    unsigned int h = m_hDamageFilter;
    if (h != 0xffffffff) {
        EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
        if (e->serial == (h >> 13) && e->ent) {
            unsigned int h2 = *(volatile unsigned int *)&m_hDamageFilter;
            CBaseEntity *pFilter;
            if (h2 != 0xffffffff) {
                EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
                if (e2->serial == (h2 >> 13))
                    pFilter = e2->ent;
                else
                    pFilter = 0;
            } else
                pFilter = 0;
            void **vt = *(void ***)pFilter;
            return ((SlotFn)vt[241])(pFilter, vt, pAttacker);
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x100a7bd0 size=0xef
#include "CBaseEntity.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
struct EntInfo { CBaseEntity *ent; int serial; int pad; };
extern char *g_10566458;
typedef bool (__fastcall *SlotFn)(CBaseEntity *, void **, CBaseEntity *);

bool CBaseEntity::sub_100a7bd0(CBaseEntity *pActivator)
{
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::PassesuseFilter", ent, g_106b8540);
    unsigned int h = m_hUseFilter;
    if (h != 0xffffffff) {
        EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
        if (e->serial == (h >> 13) && e->ent) {
            unsigned int h2 = *(volatile unsigned int *)&m_hUseFilter;
            CBaseEntity *pFilter;
            if (h2 != 0xffffffff) {
                EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
                if (e2->serial == (h2 >> 13))
                    pFilter = e2->ent;
                else
                    pFilter = 0;
            } else
                pFilter = 0;
            void **vt = *(void ***)pFilter;
            return ((SlotFn)vt[241])(pFilter, vt, pActivator);
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x100a7d00 size=0xa2
#include "CBaseEntity.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CEntSlots {
	S100(c0)
	S10(d0) S10(d1) S10(d2) S10(d3)
	virtual bool Slot140(int a);
	virtual void Slot141(void *info, int a, int b);
};
struct DInfo { char pad[0x2c]; int m_field; };
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::sub_100a7d00(int info, int a, int b)
{
    DInfo *p = (DInfo *)info;
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::DispatchTraceAttack";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int f = p->m_field;
    bool r = ((CEntSlots *)this)->Slot140(f);
    if (r)
        ((CEntSlots *)this)->Slot141(p, a, b);
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100a7de0 size=0x200
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CVDmg_t.h"
#include "CGameTrace.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CTakeDamageInfo.h"

struct CPhysSlot31 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(const Vector *p, const float *q); };

// TARGET: CBaseEntity::vfunc141
void CBaseEntity::vfunc141(CVDmg_t *pInfo, const Vector *pDir, CGameTrace *pTrace)
{
	CTakeDamageInfo *pDmg = (CTakeDamageInfo *)pInfo;
	ScopeTrace trace("CBaseEntity::TraceAttack", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	const Vector *pEnd = (const Vector *)&pTrace->m_endpos[0];
	Vector vecDelta = *pEnd - *pDir * 4.0f;
	float flDmg4 = 0;
	if (pDmg->m_pVDmg00)
		flDmg4 = (float)pDmg->m_pVDmg00->m_field04;
	if (m_obj36c) {
		float flDmg = pDmg->m_pVDmg00 ? (float)pDmg->m_pVDmg00->sub_101faa70() : pDmg->m_flDamage;
		Vector vecForce = *pDir * flDmg * 10.0f;
		((CPhysSlot31 *)m_obj36c)->s31(&vecForce, &pEnd->x);
	}
	if (m_nTakeDamage) {
		pDmg->m_pVDmg00->m_field04 = (int)flDmg4;
		sub_101c2d20(pDmg, this);
		int id = ((CEntityVSlots *)this)->slot145();
		if (id != -1) {
			float flDmg2 = pDmg->m_pVDmg00 ? (float)pDmg->m_pVDmg00->sub_101faa70() : pDmg->m_flDamage;
			sub_102699e0(vecDelta, id, flDmg2);
			((CEntityVSlots *)this)->slot146(pDmg->m_pVDmg00, pDir, pTrace);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100a8060 size=0x154
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

extern char g_10556790[];
extern char g_1053dbfc[];

void CBaseEntity::sub_100a8060()
{
	ScopeTrace trace(g_10556790, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	m_flags268 |= 2;
	sub_100ac4e0(0, 0, 0);
	if (m_pEdict2e0) {
		m_flags268 |= 2;
		{
			ScopeTrace trace2(g_1053dbfc, m_name26c ? m_name26c : g_106b8540);
			CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
			pCollision->sub_100dc580(*(unsigned short *)((char *)pCollision + 0x44) | 4);
		}
		vfunc93(0, 0);
		*(int *)((char *)this + 0x17c) = 0;
		*(unsigned int *)((char *)this + 0x19c) |= 0x40;
		sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x100a8220 size=0xa
#include "CUnknown100a8220.h"
unsigned int CUnknown100a8220::sub_100a8220()
{
	return m_nFlags & 2;
}
// END FUNCTION

// FUNCTION: 0x100a8240 size=0x59
#include "CUnknown100a8340.h"
#include "globalvars.h"
CBaseEntity *CUnknown100a8340::sub_100a8240()
{
	if (gpGlobals->curtime > m_flCC) {
		m_hC8 = EHANDLE();
		m_flCC = 0;
	}
	return m_hC8.Get();
}
// END FUNCTION

// FUNCTION: 0x100a82c0 size=0x59
#include "CBaseEntity.h"
CBaseEntity *CBaseEntity::sub_100a82c0()
{
	if (gpGlobals->curtime > m_flD8) {
		m_hD0 = EHANDLE();
		m_flD8 = 0;
	}
	return m_hD0.Get();
}
// END FUNCTION

// FUNCTION: 0x100a8340 size=0x3b
#include "CUnknown100a8340.h"


void CUnknown100a8340::sub_100a8340(CBaseEntity *pEnt, float flTime)
{
    if (pEnt) {
        *(unsigned int *)((char *)this + 0xc8) = *pEnt->vfunc1();
    } else {
        *(int *)((char *)this + 0xc8) = -1;
    }
    *(float *)((char *)this + 0xcc) = flTime + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100a8390 size=0x4e
#include "CBaseEntity.h"
void CBaseEntity::sub_100a8390(CBaseEntity *pEnt, float flDelay)
{
	m_hD0 = pEnt;
	m_nD4 = engine->vfunc120();
	m_flD8 = gpGlobals->curtime + flDelay;
}
// END FUNCTION

// FUNCTION: 0x100a8400 size=0x265
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CUnknown100a8340.h"
#include "CTakeDamageInfo.h"
#include "ScopeTrace.h"

struct CollisionEventView {
	char m_pad0000[0x68];
	CBaseEntity *m_pEntities[2];	// 0x68
};
extern char g_1057d268[];
extern char g_1057d360[];
extern float g_104454c4;
CBaseEntity *sub_1023bd00();
float sub_10151c00(int index, void *pEvent, const void *pTable, int energyScale, int allowStatic, int *pDamageType);
float sub_10152060(int index, void *pEvent, int energyScale, int allowStatic, int *pDamageType);
void sub_101520a0(void *pEvent, int index, Vector *pPos, Vector *pForce);
void sub_10032720(CBaseEntity *pEnt, CTakeDamageInfo *pInfo);

static inline CBaseEntity *LookupD0(const CBaseHandle &h)
{
	EHandleDetail::EntityList *pList = EHandleDetail::g_10566458;
	if (h.m_Index == 0xffffffff)
		return 0;
	const EHandleEntInfo *pInfo = &pList->m_EntPtrArray[h.GetEntryIndex()];
	if (pInfo->m_SerialNumber == h.GetSerialNumber())
		return (CBaseEntity *)pInfo->m_pEntity;
	return 0;
}

// TARGET: CBaseEntity::vfunc75
void CBaseEntity::vfunc75(int index, void *pEvent)
{
	ScopeTrace trace("CBaseEntity::TakeDamageFromCollision", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseEntity *pOther = ((CollisionEventView *)pEvent)->m_pEntities[index == 0];
	if (!pOther)
		pOther = sub_1023bd00();
	if (engine->vfunc35(pcd_stage(pOther->m_pEdict2e0))) {
		if (LookupD0(pOther->m_hD0) == this && pOther->m_nD4 == engine->vfunc120())
			return;
		pOther->sub_100a8390(this, 10.0f);
	}
	if (pOther->vfunc73(this) && vfunc74((int)pOther)) {
		float damage;
		int damageType = 0;
		if (sub_100b3700() & 0x80) {
			damage = sub_10151c00(index, pEvent, g_1057d268, m_nDC, 1, &damageType);
		} else if (sub_100b3700() & 0x2000) {
			damage = sub_10151c00(index, pEvent, g_1057d360, m_nDC, 1, &damageType);
		} else {
			damage = sub_10152060(index, pEvent, m_nDC, 1, &damageType);
		}
		if (damage > g_104454c4) {
			if (!damageType)
				damageType = 1;
			Vector vecPos, vecForce;
			sub_101520a0(pEvent, index, &vecPos, &vecForce);
			if (m_iMaxHealth > 0)
				damage = (float)m_iMaxHealth * damage * 0.01f;
			CUnknown100a8340 *pView = (CUnknown100a8340 *)pOther;
			CBaseEntity *pAttacker = pView->sub_100a8240();
			if (!pAttacker)
				pAttacker = pOther;
			else
				pAttacker = pView->sub_100a8240();
			CTakeDamageInfo info;
			info.sub_101c2720(pOther, pAttacker, &vecForce.x, &vecPos.x, damage, damageType, 0);
			sub_10032720(this, &info);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100a8710 size=0x1fe
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

void CBaseEntity::vfunc77()
{
	ScopeTrace trace("CBaseEntity::ScriptHide", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	if (!m_bHidden00f4) {
		m_pfnSavedThink00e4 = m_pfnThink;
		sub_100ac4e0(0, 0, 0);
		m_flNextThink = 3.402823466e+38f;
		m_nSavedSolid00e8 = vfunc92();
		m_nSavedMoveType00ec = m_nMoveType35c;
		m_nSavedMoveCollide00f0 = m_nMoveCollide360;
		m_nSavedSlot211_00f6 = ((CEntityVSlots *)this)->slot211();
		m_nSavedEffects00f8 = m_nEffectFlags;
		vfunc93(0, 0);
		{
			ScopeTrace solidTrace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
		}
		{
			ScopeTrace flagsTrace("CBaseEntity::SetSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc580(4);
		}
		m_nEffectFlags = 0xe0;
		sub_100b3b00();
		sub_1009d1e0();
		m_bHidden00f4 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100a8990 size=0x1d8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"

struct SHiddenEntityView	// the members the unhide path restores
{
	char m_pad0000[0xe4];
	int m_pfnStoredThink;	// 0xe4
	int m_nStoredSolid;	// 0xe8
	int m_nStoredMoveType;	// 0xec
	int m_nStoredMoveCollide;	// 0xf0
	char m_bHidden;	// 0xf4
	char m_pad00f5;
	unsigned short m_nStoredSolidFlags;	// 0xf6
	unsigned int m_nStoredEffects;	// 0xf8
};

static inline void SetSolid(CBaseEntity *pEntity, int nSolid)
{
	ScopeTrace trace("CBaseEntity::SetSolid", pEntity ? (pEntity->m_name26c ? pEntity->m_name26c : g_106b8540) : g_105387dc);
	((CCollisionProperty *)((char *)pEntity + 0x270))->sub_100dc480(nSolid);
}

static inline void SetSolidFlags(CBaseEntity *pEntity, int nFlags)
{
	ScopeTrace trace("CBaseEntity::SetSolidFlags", pEntity ? (pEntity->m_name26c ? pEntity->m_name26c : g_106b8540) : g_105387dc);
	((CCollisionProperty *)((char *)pEntity + 0x270))->sub_100dc580(nFlags);
}

void CBaseEntity::vfunc78()
{
	ScopeTrace trace("CBaseEntity::ScriptUnhide", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	SHiddenEntityView *p = (SHiddenEntityView *)this;
	if (p->m_bHidden) {
		sub_100ac4e0(p->m_pfnStoredThink, 0, 0);
		m_flNextThink = gpGlobals->curtime;
		SetSolid(this, p->m_nStoredSolid);
		vfunc93(p->m_nStoredMoveType, p->m_nStoredMoveCollide);
		SetSolidFlags(this, p->m_nStoredSolidFlags);
		m_nEffectFlags = p->m_nStoredEffects;
		sub_100b3b00();
		sub_1009d1e0();
		p->m_bHidden = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100a8bf0 size=0x7c
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100a8bf0(int a)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::InputScriptHide";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    vfunc77();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a8c90 size=0x7c
#include "CBaseEntity.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1055683c[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseEntity::sub_100a8c90(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1055683c;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    vfunc78();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a8d30 size=0x9f
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::sub_100a8d30(CBaseEntity *pEnt)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::SetSoundOverrideEnt";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (pEnt)
        *(unsigned int *)((char *)this + 0x100) = *pEnt->vfunc1();
    else
        *(unsigned int *)((char *)this + 0x100) = 0xffffffff;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100a8e00 size=0xbb
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "inputdata_t.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct castable_string_t
{
	castable_string_t() { pszValue = 0; }
	const char *pszValue;
};

inline castable_string_t StringID_X(const variant_t &v)
{
	return (v.fieldType == 2) ? *(const castable_string_t *)&v.iszValue : castable_string_t();
}

extern CGlobalEntityList g_106eb5d8;

// TARGET: CBaseEntity::sub_100a8e00
void CBaseEntity::sub_100a8e00(inputdata_t *pInput)
{
	ScopeTrace trace("CBaseEntity::InputSetSoundOverrideEnt", this ? (STRINGR_F(m_name26c)) : g_105387dc);

	const char *pszName = StringID_X(pInput->value).pszValue;
	*(const char **)((char *)this + 0x108) = pszName;
	CBaseEntity *pActivator = (CBaseEntity *)pInput->pActivator;
	sub_100a8d30(g_106eb5d8.sub_100f7770(0, pszName ? pszName : g_106b8540, pActivator, 0));
}
// END FUNCTION

// FUNCTION: 0x100a8ef0 size=0x95
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

struct CSoundOverrideMgr {
	CBaseEntity *sub_100f7770(int a, int b, CBaseEntity *pOwner, CBaseEntity *c);
};
extern CSoundOverrideMgr g_106eb5d8;

void CBaseEntity::sub_100a8ef0()
{
	ScopeTrace trace("CBaseEntity::ResetScriptedSoundOverrideEnt", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int h = *(int *)((char *)this + 0x108);
	if (h)
		sub_100a8d30(g_106eb5d8.sub_100f7770(0, h, this, 0));
	else
		sub_100a8d30(0);
}
// END FUNCTION

// FUNCTION: 0x100a8fc0 size=0x83
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::sub_100a8fc0(char value)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::SetFakeSilence";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    *((char *)this + 0x104) = value;
    sub_1009d1e0();
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100a9080 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100a9080(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetFakeSilence";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0x104);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100a9120 size=0x9d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "inputdata_t.h"
#include "ScopeTrace.h"

void CBaseEntity::sub_100a9120(inputdata_t *pInput)
{
	ScopeTrace trace("CBaseEntity::InputSetFakeSilence", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY", g_106b8540);
	if (!pInput->value.IntOrZero())
		sub_100a8fc0(0);
	else
		sub_100a8fc0(1);
}
// END FUNCTION

// FUNCTION: 0x100a91f0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100a91f0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::IsNPCTransparent";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0xfc);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100a9290 size=0x7e
#include "CBaseEntity.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10556984[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseEntity::sub_100a9290(char value)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10556984;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *((char *)this + 0xfc) = value;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a9330 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100a9330(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::BlocksTraces";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0xfd);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100a93d0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100a93d0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::OccludesSound";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0xfe);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100a9470 size=0x7e
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100a9470(char value)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::SetOccludesSound";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *((char *)this + 0xfe) = value;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a9510 size=0x246
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CBaseEntity.h"

bool CBaseEntity::IsInWorld()
{
	ScopeTrace trace("CBaseEntity::IsInWorld", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	if (m_pEdict2e0)
	{
		if (((CEntityVSlots *)this)->slot217()->x >= 16384.0f)
			return false;
		if (((CEntityVSlots *)this)->slot217()->y >= 16384.0f)
			return false;
		if (((CEntityVSlots *)this)->slot217()->z >= 16384.0f)
			return false;
		if (((CEntityVSlots *)this)->slot217()->x <= -16384.0f)
			return false;
		if (((CEntityVSlots *)this)->slot217()->y <= -16384.0f)
			return false;
		if (((CEntityVSlots *)this)->slot217()->z <= -16384.0f)
			return false;

		if (m_vel3d4[0] >= 2000.0f)
			return false;
		if (m_vel3d4[1] >= 2000.0f)
			return false;
		if (m_vel3d4[2] >= 2000.0f)
			return false;
		if (m_vel3d4[0] <= -2000.0f)
			return false;
		if (m_vel3d4[1] <= -2000.0f)
			return false;
		if (m_vel3d4[2] <= -2000.0f)
			return false;
	}

	return true;
}
// END FUNCTION

// FUNCTION: 0x100a9800 size=0xc0
#include "CBaseEntity.h"
#include "CBCCSlotViews.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

class CViewableSlotView	// slot 94 of the entity
{
public:
	VIEW_SLOT10(0) VIEW_SLOT10(1) VIEW_SLOT10(2) VIEW_SLOT10(3) VIEW_SLOT10(4) VIEW_SLOT10(5) VIEW_SLOT10(6) VIEW_SLOT10(7) VIEW_SLOT10(8)
	VIEW_SLOT(90) VIEW_SLOT(91) VIEW_SLOT(92) VIEW_SLOT(93)
	virtual int vfunc94();
};

struct CViewableHelper	// the "is this entity rendered" helper (stub 0x100117d9 for 0x100b5110)
{
	char sub_100b5110();
};

char __fastcall sub_100a9800(CBaseEntity *self)
{
	const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::IsViewable";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if ((*(unsigned char *)((char *)self + 0x19c) & 0x40) == 0) {
		if (((CViewableHelper *)self)->sub_100b5110()) {
			if (((CViewableSlotView *)self)->vfunc94()) {
				(*g_109f3680)--;
				return 1;
			}
		} else {
			if (self->vfunc8()) {
				(*g_109f3680)--;
				return 1;
			}
		}
	}
	(*g_109f3680)--;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100a98f0 size=0xa7
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseEntity::sub_100a98f0(int useType, int currentState)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::ShouldToggle";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (useType != 3 && useType != 2) {
        if ((currentState && useType == 1) || (!currentState && useType == 0)) {
            (*g_109f3680)--;
            return 0;
        }
    }
    (*g_109f3680)--;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100a99d0 size=0xa1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

extern char g_10556a68[];
CBaseEntity *sub_100a9ab0(const char *pszClassname, const float *pOrigin, const float *pAngles, CBaseEntity *pOwner);
void sub_101d1280(CBaseEntity *pEnt);

CBaseEntity *sub_100a99d0(const char *pszClassname, const float *pOrigin, const float *pAngles, CBaseEntity *pOwner)
{
	ScopeTrace trace(g_10556a68, g_106b8540);
	CBaseEntity *pEnt = sub_100a9ab0(pszClassname, pOrigin, pAngles, pOwner);
	if (pEnt) {
		pEnt->vfunc11(g_106b8540);
		pEnt->vfunc13(pszClassname);
	}
	sub_101d1280(pEnt);
	return pEnt;
}
// END FUNCTION

// FUNCTION: 0x100a9ab0 size=0xbc
#include "CEntityVSlots.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern void (__cdecl *g_109f3650)(int, const char *, ...);
CEntityVSlots *sub_10002e32(const char *pszClassName);

CEntityVSlots *sub_100a9ab0(const char *pszClassName, const float *pOrigin, const float *pAngles, CEntityVSlots *pOwner)
{
	g_109f3620[*g_109f3680].a = "CBaseEntity::CreateNoSpawn";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	CEntityVSlots *pEnt = sub_10002e32(pszClassName);
	if (!pEnt) {
		g_109f3650(1, "ERROR: Bad Entity Type: %s\n", pszClassName);
		(*g_109f3680)--;
		return 0;
	}
	pEnt->slot62(pOrigin);
	pEnt->slot64(pAngles);
	pEnt->slot202(pOwner);
	(*g_109f3680)--;
	return pEnt;
}
// END FUNCTION

// FUNCTION: 0x100a9ba0 size=0xb4
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
struct EntEntry { void *pEnt; int serial; int pad; };
struct EntTable { int hdr; EntEntry entries[1]; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern EntTable *g_10566458;

int CBaseEntity::vfunc96()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetAimEntEdict";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    unsigned int h = *(unsigned int *)((char *)this + 0x37c);
    if (h != 0xffffffff) {
        EntEntry *e = &g_10566458->entries[h & 0x1fff];
        if ((unsigned int)e->serial == (h >> 13)) {
            char *pEnt = (char *)e->pEnt;
            if (pEnt) {
                int edict = *(int *)(pEnt + 0x2e0);
                (*g_109f3680)--;
                return edict;
            }
        }
    }
    (*g_109f3680)--;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a9c90 size=0xa8
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"

CBaseEntity *CBaseEntity::sub_100a9c90()
{
	ScopeTrace trace("CBaseEntity::GetOwnerEntity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	return (CBaseEntity *)EHandle_Get(m_hOwner364);
}
// END FUNCTION

// FUNCTION: 0x100a9d70 size=0xf2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CBaseEntity::sub_100a9d70
void CBaseEntity::sub_100a9d70(float *pOut)
{
    ScopeTrace trace("CBaseEntity::GetCentroid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (m_pEdict2e0) {
        CCollisionProperty *pProp = (CCollisionProperty *)((char *)this + 0x270);
        const float *pMins = pProp->vfunc1();
        const float *pMaxs = pProp->vfunc2();
        pOut[0] = pMaxs[0] + pMins[0];
        pOut[1] = pMaxs[1] + pMins[1];
        pOut[2] = pMaxs[2] + pMins[2];
        pOut[0] = pOut[0] * 0.5f;
        pOut[1] = pOut[1] * 0.5f;
        pOut[2] = pOut[2] * 0.5f;
    } else {
        pOut[0] = 0;
        pOut[1] = 0;
        pOut[2] = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x100a9eb0 size=0x86
#include "CBaseEntity.h"
#include "CBaseEntitySlots.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseEntity::vfunc222(int a)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::GetSoundEmissionOrigin";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	((CBaseEntitySlots *)this)->slot192((float *)a);
	--*g_109f3680;
	return a;
}
// END FUNCTION

// FUNCTION: 0x100a9f70 size=0xcc
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SaveSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7)
	virtual void b0(); virtual void b1();
	virtual int s82();
};

int CBaseEntity::vfunc126(int pSave)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::Save";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	float *pNextThink = (float *)((char *)this + 0x17c);
	float *pOut = (float *)((char *)this + 0x180);
	if (*pNextThink <= 0.0f) {
		*pOut = *pNextThink;
	} else {
		if (*(int *)pNextThink == 0x7f7fffff)
			*pOut = 3.4028235e38f;
		else
			*pOut = 1.0f;
	}
	int r = sub_100aa080((void *)pSave, ((SaveSlots *)this)->s82());
	--*g_109f3680;
	return r;
}
// END FUNCTION

// FUNCTION: 0x100aa080 size=0x86
#include "CBaseEntity.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
struct ISaveBlockLike
{
	virtual void slot0();
	virtual void slot1();
	virtual int slot2(CBaseEntity *pEnt, int block);
};
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

int CBaseEntity::sub_100aa080(void *pSave, int block)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::SaveDataDescBlock";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	int r = ((ISaveBlockLike *)pSave)->slot2(this, block);
	--*g_109f3680;
	return r;
}
// END FUNCTION

// FUNCTION: 0x100aa140 size=0x2d3
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
#include "CRestore.h"
#include "CSaveRestoreData.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"
#include "Vector.h"

extern Vector g_1070d1b0;
extern CGlobalEntityList *g_10566458;
extern float g_104454c4;
void sub_10138720(const float *pMatrix, int n, float *pOut);
void sub_10138760(const float *pIn, int n, float *pMatrix);
void sub_101cf390(CBaseEntity *pEnt, const Vector *pMins, const Vector *pMaxs);

// TARGET: CBaseEntity::vfunc127
int CBaseEntity::vfunc127(int a)
{
	ScopeTrace trace("CBaseEntity::Restore", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
	pCol->sub_100ddc00();
	CRestore *pRestore = (CRestore *)a;
	int nResult = sub_100aa5c0(pRestore, (int)vfunc82());
	CSaveRestoreData *pInfo = (CSaveRestoreData *)pRestore->vfunc33();
	Vector vecOffset = pInfo->m_vec130c;
	if (!g_10566458->sub_100290c0(&m_hTouch254)) {
		const Vector *pLandmark = pInfo->m_bLandmarkOffset12c4 ? &pInfo->m_vecLandmarkOffset12dc : &g_1070d1b0;
		Vector vecLandmark = *pLandmark;
		vecOffset += vecLandmark;
	}
	Vector vecLocal;
	sub_10138720(m_rgflCoordinateFrame, 3, &vecLocal.x);
	vecLocal += vecOffset;
	sub_10138760(&vecLocal.x, 3, m_rgflCoordinateFrame);
	Vector *pOrigin = (Vector *)((char *)this + 0x41c);
	VectorAdd(vecOffset, *pOrigin, *pOrigin);
	m_flags268 &= ~0x8000;
	pCol->sub_100dda20();
	if (m_pEdict2e0 && vfunc8()) {
		int nTmp;
		if (*vfunc9(&nTmp) && pRestore->vfunc32()) {
			vecLocal = *(Vector *)pCol->vfunc1();
			Vector vecMaxs = *(Vector *)pCol->vfunc2();
			const char *pName = *vfunc9(&nTmp);
			if (!pName)
				pName = g_106b8540;
			vfunc10(sub_100adfd0(pName));
			pName = *vfunc9(&nTmp);
			if (!pName)
				pName = g_106b8540;
			vfunc105(pName);
			sub_101cf390(this, &vecLocal, &vecMaxs);
		}
	}
	if (*(float *)((char *)this + 0x180) <= g_104454c4) {
		*(int *)((char *)this + 0x17c) = *(int *)((char *)this + 0x180);
	} else if (*(int *)((char *)this + 0x180) == 0x7f7fffff) {
		*(int *)((char *)this + 0x17c) = 0x7f7fffff;
	}
	return nResult;
}
// END FUNCTION

// FUNCTION: 0x100aa4e0 size=0x84
#include "CBaseEntity.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CBaseEntity::vfunc129()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::OnSave";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	vfunc98();
	sub_100b1d10();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100aa5a0 size=0xd
#include "CBaseEntity.h"
void CBaseEntity::vfunc130(int a)
{
	vfunc6(0);
}
// END FUNCTION

// FUNCTION: 0x100aa5c0 size=0x86
#include "CBaseEntity.h"
#include "CRestore.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseEntity::sub_100aa5c0(CRestore *pRestore, int map)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::RestoreDataDescBlock";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int result = pRestore->vfunc2(this, map);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x100aa680 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100aa680(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::ShouldSavePhysics";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return true;
}
// END FUNCTION

// FUNCTION: 0x100aa720 size=0x6a
#include "CBaseLandmark.h"
#include "CBreakableSurface.h"
#include "CLogicAuto.h"
#include "CLogicalEntity.h"
#include "CPlatTrigger.h"
#include "CPlayerPickupController.h"
#include "CPointEntity.h"
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_10556c1c[];
extern char g_106b8540[];

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); \
	virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct TIface {
	V10(a) V10(b) V10(c) V10(d)
	virtual void e0(); virtual void e12(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual int v45(int a);
};
extern TIface *g_1070b22c;

int sub_100aa720(int a)
{
	g_109f3620[*g_109f3680].name = g_10556c1c;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	int r = g_1070b22c->v45(a);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x100aa7b0 size=0x69
struct SScope { const char *a; const char *b; const char *c; };
extern "C" __declspec(dllimport) SScope g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern char g_106b8540[];
// TARGET: sub_100aa7b0
void sub_100aa7b0(void *p)
{
    g_ScopeTraceStack[g_ScopeTraceStackDepth].a = "CBaseEntity::operator delete";
    g_ScopeTraceStack[g_ScopeTraceStackDepth].b = g_106b8540;
    g_ScopeTraceStack[g_ScopeTraceStackDepth].c = g_106b8540;
    g_ScopeTraceStackDepth++;
    engine->vfunc46(p);
    g_ScopeTraceStackDepth--;
}
// END FUNCTION

// FUNCTION: 0x100aa840 size=0x81
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

char CBaseEntity::sub_100aa840()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseEntity::IsTransparent", n);
    return *(int *)((char *)this + 0x16c) != 0;
}
// END FUNCTION

// FUNCTION: 0x100aa900 size=0x76
#include "CBaseEntity.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10556c80[];
extern char g_105387dc[];
extern char g_106b8540[];
bool CBaseEntity::vfunc99(int a, int b, int c)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10556c80;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x100aa9a0 size=0x76
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100aa9a0(CBaseEntity *self, int, int a, int b, int c)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::TestHitboxes";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x100aaa40 size=0x97
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

#define V4(x) virtual void x##a(); virtual void x##b(); virtual void x##c(); virtual void x##d();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)

struct PhysShadow {
	V16(a) V4(b) V4(c)
	virtual void s24();
	virtual void v25();
};

void CBaseEntity::sub_100aaa40(int group)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetCollisionGroup";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (m_field368 != group) {
		m_field368 = group;
		PhysShadow *obj = *(PhysShadow **)((char *)this + 0x36c);
		if (obj)
			obj->v25();
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100aab10 size=0xd7
#include "CBaseEntity.h"
struct SEntityEntry
{
    int m_pad;
    void *m_pEnt;
    unsigned int m_serial;
};

struct SPhysObject
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25();
};

extern int *g_109f3680;
extern const char **g_109f3620;
extern const char g_105387dc[];
extern const char g_106b8540[];
extern const char g_10556ce8[];
extern SEntityEntry *g_10566458;

// TARGET: CBaseEntity::vfunc202
void CBaseEntity::vfunc202(CBaseEntity *pOwner)
{
    const char *name;
    if (this) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else {
        name = g_105387dc;
    }
    g_109f3620[*g_109f3680 * 3] = g_10556ce8;
    g_109f3620[*g_109f3680 * 3 + 1] = name;
    g_109f3620[*g_109f3680 * 3 + 2] = g_106b8540;
    ++*g_109f3680;
    CBaseEntity *cur;
    unsigned int h = m_hOwner364;
    if (h == 0xffffffff) {
        cur = 0;
    } else {
        void **q = &g_10566458[h & 0x1fff].m_pEnt;
        if ((unsigned int)q[1] == (h >> 13))
            cur = (CBaseEntity *)q[0];
        else
            cur = 0;
    }
    if (cur != pOwner) {
        if (pOwner)
            m_hOwner364 = *pOwner->vfunc1();
        else
            m_hOwner364 = 0xffffffff;
        if (m_obj36c)
            ((SPhysObject *)m_obj36c)->v25();
    }
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100aac30 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100aac30(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetMoveType";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x35c);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100aacd0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100aacd0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetMoveCollide";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x360);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100aad70 size=0xa1
#include "CBaseEntity.h"
#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// The object at +0x36c viewed as a plain list of slots up to 25.
struct SSlot25Object
{
	PV10(a0) PV10(a1)
	virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24();
	virtual void Slot25();
};

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc93(int moveType, int moveCollide)
{
	const char *name;
	if (this)
	{
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetMoveType";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	int *pType = (int *)((char *)this + 0x35c);
	if (*pType != moveType)
	{
		*pType = moveType;
		pType[1] = moveCollide;
		SSlot25Object *pObj = *(SSlot25Object **)((char *)this + 0x36c);
		if (pObj)
			pObj->Slot25();
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100aae50 size=0xa4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SSlot15Entity
{
	PV10(a0)
	virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14();
	virtual void Slot15(const Vector &v);
};

void CBaseEntity::vfunc103()
{
	ScopeTrace scope("CBaseEntity::Spawn", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	m_flForceTransmitTime = 0;
	((SSlot15Entity *)this)->Slot15(Vector(0, 0, 0));
}
// END FUNCTION

// FUNCTION: 0x100aaf30 size=0xb5
#include "CBaseEntity.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

void CBaseEntity::sub_100aaf30()
{
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::PostSpawn", ent, g_106b8540);
    const char *name = m_name26c;
    if (!name) name = g_106b8540;
    vfunc11(name);
    const char *classname = *(const char **)((char *)this + 0x11c);
    if (!classname) classname = g_106b8540;
    vfunc13(classname);
    if (*((char *)this + 0xe0))
        vfunc77();
}
// END FUNCTION

// FUNCTION: 0x100ab020 size=0x1b9
#include "CBaseEntity.h"
#include "CUnknown101ab800.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include "TestBit.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern char g_105387dc[];
CBaseEntity *sub_100ab250(int pEdict);

struct CNetPropView : CUnknown101ab800
{
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual int vfunc7();
};

char CBaseEntity::sub_100ab020(int a, int b, int c, int d, int e)
{
	ScopeTrace trace("CBaseEntity::ShouldTransmit", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	if (!(m_flForceTransmitTime > gpGlobals->curtime))
	{
		if (m_nEffectFlags & 0x40)
			return false;
		int unused;
		if (!(m_flags268 & 0x80)) {
			if (!vfunc8() || !*vfunc9(&unused))
				return false;
		}
		if (vfunc8() == 1)
			return true;
		CBaseEntity *pViewer;
		{
			ScopeTrace traceInstance("CBaseEntity::Instance", g_106b8540);
			pViewer = sub_100ab250(b);
		}
		if (!(*(int *)((char *)pViewer + 0xa8) && ((CNetPropView *)((char *)this + 0x2d4))->vfunc7() == *(int *)((char *)pViewer + 0x1f98)) && !TestBit(m_flags268, 17))
			return ((CNetPropView *)((char *)this + 0x2d4))->sub_101ab8f0(b, (const unsigned char *)c, d, e);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x100ab250 size=0x17
struct CUnknown100ab250Obj
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual int vfunc4();
};

struct CUnknown100ab250
{
	char m_pad0000[0x40];
	CUnknown100ab250Obj *m_p40;
};

// TARGET: sub_100ab250
int sub_100ab250(CUnknown100ab250 *p)
{
	if (p && p->m_p40)
	{
		return p->m_p40->vfunc4();
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100ab280 size=0x142
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
struct CTransmitInfoView { int m_n0; int m_n4; int m_n8; int m_nC; unsigned char *m_pTransmitEdict; };

struct CBaseEntityTransmitView : CBaseEntity
{
    int edict() { return m_pEdict2e0; }
    int entindex() { return engine->vfunc35(edict()); }
    CBaseEntity *GetMoveParent() { return ((EHANDLE &)m_hMoveParent).Get(); }
};

void CBaseEntity::vfunc87(void *pCheckTransmitInfo)
{
    ScopeTrace scope("CBaseEntity::SetTransmit", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    CTransmitInfoView *pInfo = (CTransmitInfoView *)pCheckTransmitInfo;
    CBaseEntityTransmitView *self = (CBaseEntityTransmitView *)this;
    int index = self->entindex();
    if (pInfo->m_pTransmitEdict[index >> 3] & (1 << (index & 7)))
        return;
    index = self->entindex();
    pInfo->m_pTransmitEdict[index >> 3] |= (1 << (index & 7));
    if (self->GetMoveParent())
        self->GetMoveParent()->vfunc87(pCheckTransmitInfo);
}
// END FUNCTION

// FUNCTION: 0x100ab430 size=0x3
// TARGET: sub_100ab430
void __stdcall sub_100ab430(int, int) {}
// END FUNCTION

// FUNCTION: 0x100ab450 size=0x79
#include "CBaseEntity.h"
extern char g_106b8540[];
struct ScopeTraceEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
void __cdecl sub_101cd110(int a, int b, int c, int d, int e);
void CBaseEntity::sub_100ab450(int a, int b, int c, int d, int e)
{
    g_109f3620[*g_109f3680].a = "Physics_TraceEntity";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    sub_101cd110(a, b, c, d, e);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100ab4f0 size=0x92
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

struct GetDebugName_string_t
{
	const char *pszValue;
	const char *ToCStr() const { return pszValue ? pszValue : g_106b8540; }
};

const char *CBaseEntity::sub_100ab4f0()
{
	ScopeTrace trace("CBaseEntity::GetDebugName", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (m_name26c != 0)
		return ((const GetDebugName_string_t *)&m_name26c)->ToCStr();
	else
		return ((const GetDebugName_string_t *)((char *)this + 0x11c))->ToCStr();
}
// END FUNCTION

// FUNCTION: 0x100ab5c0 size=0x2f2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CVariantCopy.h"
#include "CUnknown10738964.h"
#include "ScopeTrace.h"
#include "globalvars.h"

extern CUnknown10738964 *g_106cfe54;
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
__declspec(dllimport) void DevMsg(const char *pMsg, ...);

static inline int VInt(const CVariantCopy &v) { return v.m_fieldType == 4 ? v.m_value : 0; }
static inline const char *VString(const CVariantCopy &v) { return v.m_fieldType == 2 ? (v.iszVal ? v.iszVal : g_106b8540) : v.sub_100d0a00(); }

// TARGET: CBaseEntity::sub_100ab5c0
void CBaseEntity::sub_100ab5c0(const char *szInputName, CBaseEntity *pActivator, CVariantCopy Value)
{
	ScopeTrace trace("CBaseEntity::DrawInputOverlay", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char szText[1024];
	if (Value.m_fieldType == 4) {
		Q_snprintf(szText, sizeof(szText), "%3.1f  (%s,%d) <-- (%s)\n", gpGlobals->curtime, szInputName, VInt(Value), pActivator ? pActivator->sub_100ab4f0() : 0);
	} else if (Value.m_fieldType == 2) {
		Q_snprintf(szText, sizeof(szText), "%3.1f  (%s,%s) <-- (%s)\n", gpGlobals->curtime, szInputName, VString(Value), pActivator ? pActivator->sub_100ab4f0() : 0);
	} else {
		Q_snprintf(szText, sizeof(szText), "%3.1f  (%s) <-- (%s)\n", gpGlobals->curtime, szInputName, pActivator ? pActivator->sub_100ab4f0() : 0);
	}
	sub_1009f3c0(szText, 10);
	if (!g_106cfe54->vfunc1() && g_106cfe54->m_n2c) {
		if (Value.m_fieldType == 4) {
			DevMsg("input: (%s,%d) -> (%s,%s), from (%s)\n", szInputName, VInt(Value), m_classname11c ? m_classname11c : g_106b8540, sub_100ab4f0(), pActivator ? pActivator->sub_100ab4f0() : 0);
		} else if (Value.m_fieldType == 2) {
			DevMsg("input: (%s,%s) -> (%s,%s), from (%s)\n", szInputName, VString(Value), m_classname11c ? m_classname11c : g_106b8540, sub_100ab4f0(), pActivator ? pActivator->sub_100ab4f0() : 0);
		} else {
			DevMsg("input: (%s) -> (%s,%s), from (%s)\n", szInputName, m_classname11c ? m_classname11c : g_106b8540, sub_100ab4f0(), pActivator ? pActivator->sub_100ab4f0() : 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100ab980 size=0x1ee
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CEventAction.h"
#include "ScopeTrace.h"
#include "CUnknown10738964.h"

__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
__declspec(dllimport) void DevMsg(const char *pFormat, ...);
extern CUnknown10738964 *g_106cfe54;
extern float g_104454c4;

#define STR(p) ((p) ? (p) : g_106b8540)

void CBaseEntity::sub_100ab980(CEventAction *pAction)
{
	ScopeTrace trace("CBaseEntity::DrawOutputOverlay", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY", g_106b8540);
	char text[1024];
	if (pAction->m_flDelay != g_104454c4)
		Q_snprintf(text, sizeof(text), "%3.1f  (%s) --> (%s),%.1f) \n", gpGlobals->curtime, STR((const char *)pAction->m_iTargetInput), STR((const char *)pAction->m_iTarget), pAction->m_flDelay);
	else
		Q_snprintf(text, sizeof(text), "%3.1f  (%s) --> (%s)\n", gpGlobals->curtime, STR((const char *)pAction->m_iTargetInput), STR((const char *)pAction->m_iTarget));
	sub_1009f3c0(text, 10);
	if (!g_106cfe54->vfunc1() && g_106cfe54->m_n2c) {
		if (pAction->m_flDelay != g_104454c4)
			DevMsg("output: (%s,%s) -> (%s,%s,%.1f)\n", STR(m_classname11c), sub_100ab4f0(), STR((const char *)pAction->m_iTarget), STR((const char *)pAction->m_iTargetInput), pAction->m_flDelay);
		else
			DevMsg("output: (%s,%s) -> (%s,%s)\n", STR(m_classname11c), sub_100ab4f0(), STR((const char *)pAction->m_iTarget), STR((const char *)pAction->m_iTargetInput));
	}
}
// END FUNCTION

// FUNCTION: 0x100abbf0 size=0x71
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100abbf0(int a, int b)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::DrawDebugCombatTextOverlay";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100abc90 size=0x489
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include <string.h>
#include "CVariantCopy.h"
#include "datamap.h"
#include "inputdata_t.h"
#include "CUnknown10738964.h"
#include "Vector.h"
#include "ConVar.h"
extern ConVar g_106cfe50;

extern CUnknown10738964 *g_106cfe54;
extern "C" int __cdecl _strcmpi(const char *, const char *);
__declspec(dllimport) int __cdecl Q_strnicmp(const char *, const char *, int);
__declspec(dllimport) void __cdecl DevMsg(const char *, ...);
__declspec(dllimport) void __cdecl DevWarning(const char *, ...);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct VMW
{
	union
	{
		bool b;
		const char *isz;
		int i;
		float f;
		float v[3];
		unsigned int c;
	};
	unsigned int h;
	int t;
	VMW() {}
	VMW(const VMW &o) { b = o.b; isz = o.isz; i = o.i; f = o.f; memcpy(v, o.v, sizeof(v)); c = o.c; h = o.h; t = o.t; }
};

struct CBaseEntityU : CBaseEntity
{
	void sub_100ab5c0(const char *, CBaseEntity *, VMW);
};

// TARGET: CBaseEntity::vfunc118
bool CBaseEntity::vfunc118(const char *pszInputName, CBaseEntity *pActivator, CBaseEntity *pCaller, CVariantCopy Value, int outputID)
{
	ScopeTrace trace("CBaseEntity::AcceptInput", this ? STRINGR(m_name26c) : g_105387dc);

	if (sub_100b5190() && Q_strnicmp(pszInputName, "ScriptUnhide", strlen(pszInputName)) != 0) {
		if (g_106cfe50.GetBool()) {
			if (pCaller) {
				DevMsg("input %s: %s.%s(%s) IGNORED by ScriptHidden() entity\n", STRINGR(pCaller->m_name26c), sub_1000b5cd(), pszInputName, Value.m_fieldType == 2 ? STRINGR(Value.iszVal) : Value.sub_100d0a00());
				return true;
			}
			DevMsg("input <NULL>: %s.%s(%s) IGNORED by ScriptHidden() entity\n", sub_1000b5cd(), pszInputName, Value.m_fieldType == 2 ? STRINGR(Value.iszVal) : Value.sub_100d0a00());
		}
		return true;
	}

	for (datamap_t *dmap = vfunc82(); dmap != 0; dmap = dmap->baseMap) {
		for (int i = 0; i < dmap->dataNumFields; i++) {
			if (dmap->dataDesc[i].flags & 8) {
				if (!_strcmpi(dmap->dataDesc[i].externalName, pszInputName)) {
					m_hActivator10c = pActivator;
					m_hCaller110 = pCaller;

					if (g_106cfe50.GetBool()) {
						if (pCaller) {
							DevMsg("input %s: %s.%s(%s)\n", STRINGR(pCaller->m_name26c), sub_1000b5cd(), pszInputName, Value.m_fieldType == 2 ? STRINGR(Value.iszVal) : Value.sub_100d0a00());
						} else {
							DevMsg("input <NULL>: %s.%s(%s)\n", sub_1000b5cd(), pszInputName, Value.m_fieldType == 2 ? STRINGR(Value.iszVal) : Value.sub_100d0a00());
						}
					}

					if (m_fDebugOverlays224 & 0x10)
						((CBaseEntityU *)this)->sub_100ab5c0(pszInputName, pCaller, *(VMW *)&Value);

					int fieldType = dmap->dataDesc[i].fieldType;
					if (Value.m_fieldType != fieldType) {
						if (!Value.sub_100d05d0(fieldType)) {
							DevWarning("!! ERROR: bad input/output link:\n!! %s(%s,%s) doesn't match type from %s(%s)\n", STRINGR(m_classname11c), sub_1000b5cd(), pszInputName,
								pCaller != 0 ? STRINGR(pCaller->m_classname11c) : "<null>",
								pCaller != 0 ? STRINGR(pCaller->m_name26c) : "<null>");
							return false;
						}
					}

					void (CBaseEntity::*pfnInput)(inputdata_t &) = *(void (CBaseEntity::**)(inputdata_t &))&dmap->dataDesc[i].inputFunc;
					if (pfnInput) {
						inputdata_t data;
						data.pActivator = pActivator;
						data.pCaller = pCaller;
						data.value = *(variant_t *)&Value;
						data.nOutputID = outputID;
						(this->*pfnInput)(data);
					} else if (dmap->dataDesc[i].flags & 4) {
						((variant_t *)&Value)->sub_100d04b0((char *)this + dmap->dataDesc[i].fieldOffset[0]);
					}

					m_bChanged1b1 = 1;
					return true;
				}
			}
		}
	}

	if (g_106cfe50.GetBool())
		DevMsg("unhandled input: (%s) -> (%s,%s)\n", pszInputName, STRINGR(m_classname11c), sub_1000b5cd());
	return false;
}
// END FUNCTION

// FUNCTION: 0x100ac250 size=0xcd
#include "CBaseEntity.h"
#include <string.h>
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

// TARGET: CBaseEntity::sub_100ac250
int CBaseEntity::sub_100ac250(const char *context)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : "";
	else
		ent = "NULL ENTITY";
	int i = 0;
	g_109f3620[*g_109f3680].a = "CBaseEntity::GetIndexForContext";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = "";
	(*g_109f3680)++;
	if (m_nThinkContexts > 0) {
		int off = 0;
		do {
			const char *s = *(const char **)(off + (int)m_pThinkContexts);
			if (!strncmp(s, context, 32)) {
				(*g_109f3680)--;
				return i;
			}
			i++;
			off += 16;
		} while (i < m_nThinkContexts);
	}
	(*g_109f3680)--;
	return -1;
}
// END FUNCTION

// FUNCTION: 0x100ac360 size=0x12e
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "utlvector.h"
#include "CThinkSaveViews.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern "C" void *__cdecl memset(void *, int, unsigned int);

static inline void Q_memset(void *dest, int fill, unsigned int count)
{
	memset(dest, fill, count);
}

int CBaseEntity::sub_100ac360(const char *szContext)
{
	ScopeTrace trace("CBaseEntity::RegisterThinkContext", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	int iIndex = sub_100ac250(szContext);
	if (iIndex != -1)
		return iIndex;
	thinkfunc_t sNewFunc;
	Q_memset(&sNewFunc, 0, sizeof(sNewFunc));
	sNewFunc.m_a = 0;
	*(float *)&sNewFunc.m_b = 0.0f;
	sNewFunc.m_pszContext = szContext;
	return ((CUtlVector<thinkfunc_t> *)&m_pThinkContexts)->AddToTail(sNewFunc);
}
// END FUNCTION

// FUNCTION: 0x100ac4e0 size=0xe2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

int CBaseEntity::sub_100ac4e0(int func, int thinkTime, const char *szContext)
{
	ScopeTrace t("CBaseEntity::ThinkSet", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (szContext == 0) {
		*(int *)&m_pfnThink = func;
		return func;
	}
	int idx = sub_100ac250(szContext);
	if (idx == -1)
		idx = sub_100ac360(szContext);
	int off = idx * sizeof(CBaseEntityThinkContext);
	((CBaseEntityThinkContext *)((char *)m_pThinkContexts + off))->m_a = func;
	if (*(float *)&thinkTime != 0.0f)
		*(float *)&((CBaseEntityThinkContext *)((char *)m_pThinkContexts + off))->m_b = *(float *)&thinkTime;
	return func;
}
// END FUNCTION

// FUNCTION: 0x100ac610 size=0xc6
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CThinkView	// the think context table of the entity
{
	int sub_100ac360(const char *szContext);	// RegisterThinkContext (called through the stub at 0x10003823)
};

void __fastcall sub_100ac610(CBaseEntity *self, int, float thinkTime, const char *szContext)
{
	const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetNextThink";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int iIndex;
	if (szContext == 0) {
		iIndex = *(int *)((char *)self + 0x1cc);
		if (iIndex == -1) {
			*(float *)((char *)self + 0x17c) = thinkTime;
			(*g_109f3680)--;
			return;
		}
	} else {
		iIndex = self->sub_100ac250(szContext);
		if (iIndex == -1)
			iIndex = ((CThinkView *)self)->sub_100ac360(szContext);
	}
	*(float *)(*(int *)((char *)self + 0x1b8) + 8 + iIndex * 0x10) = thinkTime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ac720 size=0xb1
#include "CBaseEntity.h"
struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_109f3620;
extern int *g_109f3680;

float CBaseEntity::sub_100ac720(const char *context)
{
    const char *pszName;
    if (this) {
        pszName = m_name26c;
        if (!pszName)
            pszName = "";
    } else {
        pszName = "NULL ENTITY";
    }
    g_109f3620[*g_109f3680].m_pszName = "CBaseEntity::GetLastThink";
    g_109f3620[*g_109f3680].m_pszEnt = pszName;
    g_109f3620[*g_109f3680].m_pszExtra = "";
    (*g_109f3680)++;
    int idx;
    if (!context) {
        idx = *(int *)((char *)this + 0x1cc);
        if (idx == -1) {
            float f = *(float *)((char *)this + 0x178);
            (*g_109f3680)--;
            return f;
        }
    } else {
        idx = sub_100ac250(context);
    }
    float f = *(float *)((char *)m_pThinkContexts + idx * 16 + 0xc);
    (*g_109f3680)--;
    return f;
}
// END FUNCTION

// FUNCTION: 0x100ac810 size=0xd0
#include "CBaseEntity.h"
#include "inputdata_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];

static inline int VInt(const variant_t &v)
{
	if (v.fieldType == 4)
		return v.iValue;
	return 0;
}

// TARGET: CBaseEntity::sub_100ac810
void CBaseEntity::sub_100ac810(inputdata_t *pInput)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::InputAlpha";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	int n;
	if (VInt(pInput->value) > 255)
		n = 255;
	else if (VInt(pInput->value) >= 0)
		n = VInt(pInput->value);
	else
		n = 0;
	*((char *)this + 0x1a3) = n;
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100ac920 size=0x95
#include "CBaseEntity.h"
#include "inputdata_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct color32 {
	unsigned char r, g, b, a;
};

void CBaseEntity::sub_100ac920(inputdata_t *pInput)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::InputColor";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	color32 c = *(color32 *)&pInput->value.iValue;
	unsigned char *dst = (unsigned char *)this + 0x1a0;
	dst[0] = c.r;
	dst[1] = c.g;
	dst[2] = c.b;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ac9f0 size=0x8b
#include "CBaseEntity.h"
#include "inputdata_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
// stand-in for the first 173 slots of CBaseEntity's virtual table
struct Slots173 {
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7) D10(a8) D10(a9)
	D10(b0) D10(b1) D10(b2) D10(b3) D10(b4) D10(b5) D10(b6)
	virtual void c170(); virtual void c171(); virtual void c172();
	virtual void vfunc173(void *a, void *b, int c, int d);
};

void CBaseEntity::sub_100ac9f0(inputdata_t *pInput)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::InputUse";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((Slots173 *)this)->vfunc173(pInput->pActivator, pInput->pCaller, 3, 0);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100acab0 size=0x111
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "CVariantCopy.h"

extern "C" int _strcmpi(const char *, const char *);
extern char g_1055726c[];

struct TypeDescView
{
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    int pad[5];
};

struct DataMapView
{
    TypeDescView *dataDesc;
    int dataNumFields;
    const char *dataClassName;
    DataMapView *baseMap;
};

bool CBaseEntity::vfunc121(const char *szKeyName, CVariantCopy *pVariant)
{
    ScopeTrace trace(g_1055726c, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (szKeyName) {
        for (DataMapView *dmap = (DataMapView *)vfunc82(); dmap; dmap = dmap->baseMap) {
            for (int i = 0; i < dmap->dataNumFields; i++) {
                if ((dmap->dataDesc[i].flags & 0x14) && _strcmpi(dmap->dataDesc[i].externalName, szKeyName) == 0) {
                    pVariant->sub_1000b320(dmap->dataDesc[i].fieldType, (char *)this + dmap->dataDesc[i].fieldOffset[0]);
                    return true;
                }
            }
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x100acc20 size=0xd3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "inputdata_t.h"
#include "ScopeTrace.h"
extern char g_1055728c[];
extern CGlobalEntityList g_106eb5d8;
static inline const char *VariantString(variant_t *pv, const char **ppDummy)
{
    const char **pp = (const char **)pv;
    if (pv->fieldType != 2) {
        *ppDummy = 0;
        pp = ppDummy;
    }
    return *pp;
}
void CBaseEntity::sub_100acc20(inputdata_t *pInput)
{
    ScopeTrace t(g_1055728c, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    const char *name = VariantString(&pInput->value, (const char **)&pInput);
    *(const char **)((char *)this + 0x21c) = name;
    if (name) {
        CGlobalEntityList_Ent *pEnt = (CGlobalEntityList_Ent *)g_106eb5d8.sub_100f7770(0, name, 0, 0);
        if (pEnt) {
            *(unsigned int *)((char *)this + 0x220) = *pEnt->v1();
            return;
        }
    }
    *(unsigned int *)((char *)this + 0x220) = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x100acd40 size=0x85
#include "CBaseEntity.h"
#include "inputdata_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CBaseEntity::sub_100acd40(inputdata_t *pInput)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::InputDispatchEffect";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	variant_t *pValue = &pInput->value;
	if (pValue->fieldType != 2)
		pValue->sub_10008805();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ace00 size=0xb1
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct EntSlots
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49();
	virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69();
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79();
	virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89();
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94(); virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105(); virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109();
	virtual void s110(); virtual void s111(); virtual void s112(); virtual void s113(); virtual void s114(); virtual void s115(); virtual void s116(); virtual void s117(); virtual void s118(); virtual void s119();
	virtual void s120(); virtual void s121(); virtual void s122(); virtual void s123(); virtual void s124(); virtual void s125(); virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129();
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133(); virtual void s134(); virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145(); virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149();
	virtual void s150(); virtual void s151(); virtual void s152(); virtual void s153(); virtual void s154(); virtual void s155(); virtual void s156(); virtual void s157(); virtual void s158(); virtual void s159();
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163(); virtual void s164(); virtual void s165(); virtual void s166(); virtual void s167(); virtual void s168(); virtual void s169();
	virtual void s170(); virtual void s171(); virtual void s172(); virtual void s173(); virtual void s174(); virtual void s175(); virtual void s176(); virtual void s177(); virtual void s178(); virtual void s179();
	virtual void s180(); virtual void s181(); virtual void s182(); virtual void s183(); virtual void s184(); virtual void s185(); virtual void s186(); virtual void s187(); virtual void s188(); virtual void s189();
	virtual void s190(); virtual void s191(); virtual void s192(); virtual void s193(); virtual void s194(); virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198(); virtual void s199();
	virtual void s200(); virtual void s201(); virtual void s202(); virtual void s203(); virtual void s204(); virtual void s205(); virtual void s206(); virtual void s207(); virtual void s208(); virtual void s209();
	virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216();
	virtual float *s217(); virtual void s218(); virtual float *s219();
};

void CBaseEntity::vfunc120(const char *key, float *pos, float *ang)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::GetInputDispatchEffectPosition";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	float *p = ((EntSlots *)this)->s217();
	pos[0] = p[0]; pos[1] = p[1]; pos[2] = p[2];
	float *q = ((EntSlots *)this)->s219();
	ang[0] = q[0]; ang[1] = q[1]; ang[2] = q[2];
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100acef0 size=0x7c
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100acef0(int a)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::InputKill";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    vfunc119();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100acf90 size=0x7b
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_101cd940(CBaseEntity *pEnt);

void CBaseEntity::vfunc119()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Kill";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    sub_101cd940(this);
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ad030 size=0x9a
#include "CUnknown100ad030.h"
#include "ScopeTrace.h"
#include "string_t.h"
extern char g_106b8540[];

inline string_t StringID_100ad030(const variant_t &v)
{
	return (v.fieldType == 2) ? *(const string_t *)&v.iszValue : string_t(0);
}

void CUnknown100ad030::sub_100ad030(inputdata_t *pInput)
{
	ScopeTrace trace("CBaseEntity::InputSetParent", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_100a04e0(StringID_100ad030(pInput->value).pszValue, pInput->pActivator);
}
// END FUNCTION

// FUNCTION: 0x100ad100 size=0x7d
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_1000b636(CBaseEntity *pEnt);

void __fastcall sub_100ad100(CBaseEntity *self, int, int a)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::InputClearParent";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    sub_1000b636(self);
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ad1a0 size=0x124
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBCCSlotViews.h"
#include "ScopeTrace.h"

class CPhysicsObjectView
{
public:
	VIEW_SLOT10(0) VIEW_SLOT10(1) VIEW_SLOT10(2) VIEW_SLOT10(3)
	virtual void vfunc40(float *velocity, float *angular);
};

void CBaseEntity::vfunc199(float *vVelocity, float *vAngVelocity)
{
    ScopeTrace scope("CBaseEntity::GetVelocity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (m_obj36c) {
        CPhysicsObjectView *pPhys = (CPhysicsObjectView *)m_obj36c;
        if (vAngVelocity) {
            float tmp[3];
            pPhys->vfunc40(vVelocity, tmp);
            vAngVelocity[0] = tmp[1];
            vAngVelocity[1] = tmp[2];
            vAngVelocity[2] = tmp[0];
        } else {
            pPhys->vfunc40(vVelocity, 0);
        }
    } else {
        if (vVelocity) {
            vVelocity[0] = *(float *)((char *)this + 0x3d4);
            vVelocity[1] = *(float *)((char *)this + 0x3d8);
            vVelocity[2] = *(float *)((char *)this + 0x3dc);
        }
        if (vAngVelocity) {
            vAngVelocity[0] = *(float *)((char *)this + 0x3c8);
            vAngVelocity[1] = *(float *)((char *)this + 0x3cc);
            vAngVelocity[2] = *(float *)((char *)this + 0x3d0);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100ad320 size=0xf2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

void sub_10138720(const float *pMatrix, int column, float *pOut);

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

struct CBaseEntityVectorsUnit : CBaseEntity
{
	void sub_100ad320(float *pForward, float *pRight, float *pUp);
};

// TARGET: CBaseEntityVectorsUnit::sub_100ad320
void CBaseEntityVectorsUnit::sub_100ad320(float *pForward, float *pRight, float *pUp)
{
	ScopeTrace trace("CBaseEntity::GetVectors", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (TestBit(m_flags268, 11))
		vfunc98();
	const float *pMatrix = (const float *)((char *)this + 0x130);
	if (pForward != 0)
		sub_10138720(pMatrix, 0, pForward);
	if (pRight != 0)
	{
		sub_10138720(pMatrix, 1, pRight);
		pRight[0] = pRight[0] * -1.0f;
		pRight[1] = pRight[1] * -1.0f;
		pRight[2] = pRight[2] * -1.0f;
	}
	if (pUp != 0)
		sub_10138720(pMatrix, 2, pUp);
}
// END FUNCTION

// FUNCTION: 0x100ad460 size=0xbb
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern void (__cdecl *g_109f3628)(const char *, ...);
void sub_101cf4a0(CBaseEntity *pEnt, const char *pszModel);

void CBaseEntity::vfunc105(const char *pszModel)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetModel";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int idx = engine->vfunc20(pszModel);
	if (engine->vfunc21(idx) != 1)
		g_109f3628("Setting CBaseEntity to non-brush model %s\n", pszModel);
	sub_101cf4a0(this, pszModel);
	*((char *)this + 0x1b1) = 1;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ad550 size=0x13a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

void sub_10139610(const float *angles, float *forward, float *right, float *up);
extern float g_1070d9d0[3];
extern float g_104454c4;

// TARGET: CBaseEntity::vfunc171
void CBaseEntity::vfunc171()
{
	ScopeTrace trace("CBaseEntity::SetMovedir", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float *ang = (float *)((CEntityVSlots *)this)->slot221();
	if (g_104454c4 == ang[0] && ang[1] == -1.0f && g_104454c4 == ang[2])
	{
		m_vecMovedir[0] = 0.0f;
		m_vecMovedir[1] = 0.0f;
		m_vecMovedir[2] = 1.0f;
	}
	else
	{
		ang = (float *)((CEntityVSlots *)this)->slot221();
		if (g_104454c4 == ang[0] && ang[1] == -2.0f && g_104454c4 == ang[2])
		{
			m_vecMovedir[0] = 0.0f;
			m_vecMovedir[1] = 0.0f;
			m_vecMovedir[2] = -1.0f;
		}
		else
		{
			sub_10139610((float *)((CEntityVSlots *)this)->slot221(), m_vecMovedir, 0, 0);
		}
	}
	vfunc64(g_1070d9d0);
}
// END FUNCTION

// FUNCTION: 0x100ad6e0 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100ad6e0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Illumination";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0x80;
}
// END FUNCTION

// FUNCTION: 0x100ad780 size=0x98
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc114()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::PostClientMessagesSent";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	unsigned int *pFlags = (unsigned int *)((char *)this + 0x19c);
	if (*pFlags & 0x100)
		*pFlags &= 0xfffff7ff;
	*pFlags &= 0xfffffced;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ad850 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100ad850(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetDamageType";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ad8f0 size=0x3
// TARGET: sub_100ad8f0
void __stdcall sub_100ad8f0(void *a, void *b, void *c, void *d) {}
// END FUNCTION

// FUNCTION: 0x100ad910 size=0x3
// TARGET: sub_100ad910
void __stdcall sub_100ad910(void *a, void *b, void *c) {}
// END FUNCTION

// FUNCTION: 0x100ad930 size=0xa
#include "utlvector.h"
CUtlVector<int> g_106cf218;
// END FUNCTION

// FUNCTION: 0x100ada20 size=0x142
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct UtlMem3
{
    int *m_pMemory;
    int m_allocationCount;
    int m_growSize;

    void sub_100b4a40(int num);	// "CUtlMemory::Grow"
};

struct EntStack : public UtlMem3	// the global CUtlVector<CBaseEntity *> of the entities being teleported
{
    int m_Size;	// 0x0c
    int *m_pElements;	// 0x10

    int Find(int pEnt)
    {
        for (int i = 0; i < m_Size; i++) {
            if (m_pMemory[i] == pEnt)
                return i;
        }
        return -1;
    }
};

extern EntStack g_106cf218;
extern char g_105574a0[];
void sub_100adbd0(CBaseEntity *pTarget, CBaseEntity *pThis, const float *pOrigin, const float *pAngles, const float *pVelocity);

void __fastcall sub_100ada20(CBaseEntity *pThis, int unused, const float *pOrigin, const float *pAngles, const float *pVelocity)
{
    ScopeTrace trace(g_105574a0, pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
    if (g_106cf218.Find((int)pThis) >= 0)
        return;
    int elem = g_106cf218.m_Size;
    if (g_106cf218.m_Size + 1 > g_106cf218.m_allocationCount)
        g_106cf218.sub_100b4a40(g_106cf218.m_Size - g_106cf218.m_allocationCount + 1);
    g_106cf218.m_Size += 1;
    g_106cf218.m_pElements = g_106cf218.m_pMemory;
    int numToMove = g_106cf218.m_Size - elem - 1;
    if (numToMove > 0)
        memmove(g_106cf218.m_pMemory + elem + 1, g_106cf218.m_pMemory + elem, numToMove * 4);
    int *p = g_106cf218.m_pMemory + elem;
    if (p)
        *p = (int)pThis;
    sub_100adbd0(pThis, pThis, pOrigin, pAngles, pVelocity);
    if (g_106cf218.m_Size > 0) {
        memmove(g_106cf218.m_pMemory + elem, g_106cf218.m_pMemory + g_106cf218.m_Size - 1, 4);
        g_106cf218.m_Size--;
    }
}
// END FUNCTION

// FUNCTION: 0x100adbd0 size=0x28a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWeaponThrown_Grenade_Frag.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "ehandle.h"
#include "Vector.h"
#include "QAngle.h"

extern Vector g_1070d1b0;

void sub_101cf5c0(CBaseEntity *pEnt, const Vector *pPos, int a);

struct notify_teleport_params_t
{
    Vector prevOrigin;
    QAngle prevAngles;
    bool physicsRotate;
};

struct notify_system_event_params_t
{
    const notify_teleport_params_t *pTeleport;
    notify_system_event_params_t(const notify_teleport_params_t *pInTeleport) { pTeleport = pInTeleport; }
};

struct INotify
{
    virtual void AddEntity(CBaseEntity *pNotify, CBaseEntity *pWatched) = 0;
    virtual void RemoveEntity(CBaseEntity *pNotify, CBaseEntity *pWatched) = 0;
    virtual void ReportNamedEvent(CBaseEntity *pEntity, const char *pEventName) = 0;
    virtual void ReportSystemEvent(CBaseEntity *pEntity, int eventType, const notify_system_event_params_t &params) = 0;
    inline void ReportTeleportEvent(CBaseEntity *pEntity, const Vector &prevOrigin, const QAngle &prevAngles, bool physicsRotate)
    {
        notify_teleport_params_t teleport;
        teleport.prevOrigin = prevOrigin;
        teleport.prevAngles = prevAngles;
        teleport.physicsRotate = physicsRotate;
        notify_system_event_params_t eventParams(&teleport);
        ReportSystemEvent(pEntity, 0, eventParams);
    }
};

extern INotify *g_1056645c;

#define VD(n) virtual void d##n();
#define VD10(p) VD(p##0) VD(p##1) VD(p##2) VD(p##3) VD(p##4) VD(p##5) VD(p##6) VD(p##7) VD(p##8) VD(p##9)

struct IPhysicsSetPos
{
    VD10(0) VD10(1) VD10(2) VD(30) VD(31) VD(32) VD(33) VD(34)
    virtual void vfunc35(const Vector *pPos, const QAngle *pAngles, int bTeleport);
    VD(36) VD(37) VD(38)
    virtual void vfunc39(float *pPosition, float *pAngles);
};

struct CEntTele
{
    VD10(0) VD10(1) VD10(2) VD10(3) VD10(4) VD10(5) VD(60) VD(61) VD(62) VD(63)
    virtual void vfunc64(const float *pAngles);
    VD(65) VD(66) VD(67) VD(68) VD(69)
    VD10(7) VD10(8) VD(90) VD(91)
    virtual int vfunc92();
    VD(93) VD(94) VD(95) VD(96) VD(97)
    virtual void vfunc98();
    VD(99) VD10(10) VD10(11) VD10(12) VD10(13) VD10(14) VD10(15) VD10(16) VD10(17) VD10(18) VD10(19) VD10(20)
    VD(210) VD(211) VD(212) VD(213) VD(214) VD(215) VD(216)
    virtual float *vfunc217();
    VD(218)
    virtual float *vfunc219();
};

// TARGET: sub_100adbd0
void sub_100adbd0(CBaseEntity *pEnt, CBaseEntity *pTeleportEnt, const Vector *pNewPos, const QAngle *pNewAngles, const Vector *pNewVel)
{
    ScopeTrace trace("TeleportEntity_r", g_106b8540);

    CEntTele *pView = (CEntTele *)pEnt;

    Vector prevOrigin = *(Vector *)pView->vfunc217();
    QAngle prevAngles = *(QAngle *)pView->vfunc219();

    if (pTeleportEnt == pEnt)
    {
        if (pNewAngles)
        {
            pView->vfunc64((const float *)pNewAngles);
            if (pEnt->m_pA8)
            {
                *(Vector *)((char *)pEnt + 0x206c) = *(Vector *)pNewAngles;
                *(int *)((char *)pEnt + 0x207c) = 1;
            }
        }
        if (pNewVel)
        {
            pEnt->sub_100b2e30((const float *)pNewVel);
            pEnt->m_vecBaseVelocity = g_1070d1b0;
        }
        if (pNewPos)
        {
            pEnt->m_nEffectFlags |= 0x10;
            sub_101cf5c0(pEnt, pNewPos, 0);
        }
    }
    else
    {
        pView->vfunc98();
    }

    IPhysicsSetPos *pPhys = (IPhysicsSetPos *)pEnt->m_obj36c;
    bool rotatePhysics = false;
    if (pPhys)
    {
        if (pNewVel)
            pPhys->vfunc39((float *)pNewVel, 0);

        const QAngle *pAngles = (const QAngle *)pView->vfunc219();
        if (!pEnt->m_pA8 && pView->vfunc92() != 2)
            rotatePhysics = true;
        else
            pAngles = (const QAngle *)g_1070d9d0;

        pPhys->vfunc35((const Vector *)pView->vfunc217(), pAngles, 1);
    }

    g_1056645c->ReportTeleportEvent(pEnt, prevOrigin, prevAngles, rotatePhysics);

    CBaseEntity *pChild = pEnt->m_hMoveChild260.Get();
    while (pChild)
    {
        sub_100adbd0(pChild, pTeleportEnt, 0, 0, 0);
        pChild = pChild->m_hMovePeer264.Get();
    }
}
// END FUNCTION

// FUNCTION: 0x100adf10 size=0x8a
#include "CBaseEntity.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
void sub_101cf390(CBaseEntity *pEnt, const float *mins, const float *maxs);

void CBaseEntity::sub_100adf10(const float *mins, const float *maxs)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::SetSize";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	sub_101cf390(this, mins, maxs);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100adfd0 size=0x84
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];


struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int CBaseEntity::sub_100adfd0(const char *name)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseEntity::PrecacheModel", n);
    return engine->vfunc13(name, 0);
}
// END FUNCTION

// FUNCTION: 0x100ae090 size=0x83
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
struct ISoundSink { virtual int PrecacheSound(const char *s, int n); };
extern ISoundSink *g_1070b248;

struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int CBaseEntity::sub_100ae090(const char *name)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseEntity::PrecacheSound", n);
    return g_1070b248->PrecacheSound(name, 0);
}
// END FUNCTION

// FUNCTION: 0x100ae150 size=0x7b
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
void sub_101cd940(CBaseEntity *pEnt);

void CBaseEntity::sub_100ae150()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Remove";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    sub_101cd940(this);
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ae1f0 size=0xe1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern void (__cdecl *g_109f3628)(const char *fmt, ...);
extern unsigned int g_1070ba38;
CBaseEntity *sub_10172710(CBaseEntity *pPlayer);
void sub_101c0b80(const char *pszTarget, CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value);

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CEntityUseSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9) SV10(10)
	SV(110) SV(111) SV(112) SV(113) SV(114) SV(115)
	virtual char s116();
	SV(117) SV(118) SV(119)
	SV10(12) SV10(13) SV10(14) SV10(15) SV10(16)
	SV(170) SV(171) SV(172)
	virtual void s173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value);
};

void sub_100ae1f0(CBaseEntity *pActivator, const char *pszTarget)
{
	ScopeTrace trace("ConsoleFireTargets", g_106b8540);
	if (_strcmpi(pszTarget, g_106b8540) == 0) {
		CBaseEntity *pEnt = sub_10172710(pActivator);
		if (pEnt && !((CEntityUseSlotsX *)pEnt)->s116()) {
			g_109f3628("[%03d] Found: %s, firing\n", g_1070ba38 % 1000, pEnt->sub_100ab4f0());
			((CEntityUseSlotsX *)pEnt)->s173(pActivator, pActivator, 3, 0);
			return;
		}
	}
	sub_101c0b80(pszTarget, pActivator, pActivator, 3, 0);
}
// END FUNCTION

// FUNCTION: 0x100ae320 size=0x77
#include "IVEngineServer.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern IVEngineServer *g_1070b22c;
int sub_101193b0();
void sub_100d1ff0(int a, int b, unsigned int flags);

void sub_100ae320()
{
	g_109f3620[*g_109f3680].a = "CC_Ent_Name";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100d1ff0(sub_101193b0(), g_1070b22c->vfunc84(1), 2);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ae3c0 size=0xa
#include "ConCommand.h"
void sub_100ae320(void);
ConCommand g_106ceb18("ent_name", sub_100ae320, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100ae450 size=0x77
#include "IVEngineServer.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern IVEngineServer *g_1070b22c;
int sub_101193b0();
void sub_100d1ff0(int a, int b, unsigned int flags);

void sub_100ae450()
{
	g_109f3620[*g_109f3680].a = "CC_Ent_Text";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100d1ff0(sub_101193b0(), g_1070b22c->vfunc84(1), 1);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ae4f0 size=0xa
#include "ConCommand.h"
void sub_100ae450(void);
ConCommand g_106cf180("ent_text", sub_100ae450, "Displays text debugging information about the given entity(ies) on top of the entity (See Overlay Text)\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100ae580 size=0x77
#include "IVEngineServer.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern IVEngineServer *g_1070b22c;
int sub_101193b0();
void sub_100d1ff0(int a, int b, unsigned int flags);

void sub_100ae580()
{
	g_109f3620[*g_109f3680].a = "CC_Ent_BBox";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100d1ff0(sub_101193b0(), g_1070b22c->vfunc84(1), 4);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ae620 size=0xa
#include "ConCommand.h"
void sub_100ae580(void);
ConCommand g_106cf080("ent_bbox", sub_100ae580, "Displays the movement bounding box for the given entity(ies) in orange.  Some entites will also display entity specific overlays.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100ae6b0 size=0x77
#include "IVEngineServer.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern IVEngineServer *g_1070b22c;
int sub_101193b0();
void sub_100d1ff0(int a, int b, unsigned int flags);

void sub_100ae6b0()
{
	g_109f3620[*g_109f3680].a = "CC_Ent_AbsBox";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100d1ff0(sub_101193b0(), g_1070b22c->vfunc84(1), 32);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ae750 size=0xa
#include "ConCommand.h"
void sub_100ae6b0(void);
ConCommand g_106cfd18("ent_absbox", sub_100ae6b0, "Displays the total bounding box for the given entity(s) in green.  Some entites will also display entity specific overlays.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100ae7e0 size=0x7a
#include "IVEngineServer.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern IVEngineServer *g_1070b22c;
int sub_101193b0();
void sub_100d1ff0(int a, int b, unsigned int flags);

void sub_100ae7e0()
{
	g_109f3620[*g_109f3680].a = "CC_Ent_Muzzle";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100d1ff0(sub_101193b0(), g_1070b22c->vfunc84(1), 128);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100ae880 size=0xa
#include "ConCommand.h"
void sub_100ae7e0(void);
ConCommand g_106cf2d0("ent_muzzle", sub_100ae7e0, "Displays the muzzleflash attachment point", 0, 0);
// END FUNCTION

// FUNCTION: 0x100ae910 size=0xd8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "ConVar.h"
#include "CBaseEntity.h"

extern ConVar g_1070b180;
void *sub_101193b0();
CBaseEntity *sub_100d2070(void *pPlayer, const char *pszName, CBaseEntity *pStart);

inline int EDICT_X(CBaseEntity *pEnt) { return pEnt->m_pEdict2e0; }
inline int ENTINDEX_X(CBaseEntity *pEnt) { return engine->vfunc35(EDICT_X(pEnt)); }

// TARGET: sub_100ae910
void sub_100ae910()
{
	ScopeTrace trace("CC_Ent_HitBoxes", g_106b8540);
	void *pPlayer = sub_101193b0();
	const char *pszName = engine->vfunc84(1);
	CBaseEntity *pEntity = sub_100d2070(pPlayer, pszName, 0);
	if (pEntity) {
		if (g_1070b180.GetInt() == ENTINDEX_X(pEntity))
			g_1070b180.sub_10246160(-1);
		else
			g_1070b180.sub_10246160(ENTINDEX_X(pEntity));
	}
}
// END FUNCTION

// FUNCTION: 0x100aea30 size=0xa
#include "ConCommand.h"
void sub_100ae910(void);
ConCommand g_106cfcec("ent_hitboxes", sub_100ae910, "Shows an entity's hit boxes.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aeac0 size=0xa
#include "ConCommand.h"
void sub_100ae910(void);
ConCommand g_106cebbc("ent_showhitboxes", sub_100ae910, "Shows an entity's hit boxes.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aeb50 size=0x6e
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

class CBasePlayer;
class CBaseEntity;
CBasePlayer *__cdecl sub_101193b0();
CBaseEntity *__cdecl sub_10172710(CBasePlayer *pPlayer);
void __cdecl sub_10119900(CBaseEntity *pEnt);

void sub_100aeb50()
{
	ScopeTrace trace("CC_Ent_ToggleDebugStats", g_106b8540);
	CBaseEntity *pEnt = sub_10172710(sub_101193b0());
	if (pEnt)
		sub_10119900(pEnt);
}
// END FUNCTION

// FUNCTION: 0x100aebe0 size=0xa
#include "ConCommand.h"
void sub_100aeb50(void);
ConCommand g_106cf154("ent_toggledebugstats", sub_100aeb50, " ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aec70 size=0x77
#include "IVEngineServer.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern IVEngineServer *g_1070b22c;
int sub_101193b0();
void sub_100d1ff0(int a, int b, unsigned int flags);

void sub_100aec70()
{
	g_109f3620[*g_109f3680].a = "CC_Ent_RBox";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100d1ff0(sub_101193b0(), g_1070b22c->vfunc84(1), 64);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100aed10 size=0xa
#include "ConCommand.h"
void sub_100aec70(void);
ConCommand g_106cf0f8("ent_rbox", sub_100aec70, "Displays the total bounding box for the given entity(s) in green.  Some entites will also display entity specific overlays.\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100aeda0 size=0x17f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);
CBaseEntity *sub_10172710(int index);
int sub_101193b0();
void sub_101cd940(CBaseEntity *p);
inline bool FStrEq(const char *sz1, const char *sz2)
{
    return _strcmpi(sz1, sz2) == 0;
}
inline const char *STRING(const char *const &offset)
{
    if (offset)
        return offset;
    return g_106b8540;
}
inline const char *STRINGV(const char *offset)
{
    return offset ? offset : g_106b8540;
}
// TARGET: sub_100aeda0
void sub_100aeda0()
{
    ScopeTrace trace("CC_Ent_Remove", g_106b8540);
    CBaseEntity *pEntity = 0;
    if (FStrEq(engine->vfunc84(1), g_106b8540)) {
        pEntity = sub_10172710(sub_101193b0());
    } else {
        CBaseEntity *ent = 0;
        while ((ent = g_106eb5d8.sub_100f7060(ent)) != 0) {
            if (((const char *)ent->m_name26c != 0 && FStrEq(engine->vfunc84(1), STRINGV((const char *)ent->m_name26c))) ||
                ((const char *)ent->m_classname11c != 0 && FStrEq(engine->vfunc84(1), STRING((const char *)ent->m_classname11c))) ||
                (ent->sub_1009f200() && FStrEq(engine->vfunc84(1), ent->sub_1009f200()))) {
                pEntity = ent;
                break;
            }
        }
    }
    if (pEntity) {
        Msg("Removed %s\n", STRING((const char *)pEntity->m_classname11c));
        sub_101cd940(pEntity);
    }
}
// END FUNCTION

// FUNCTION: 0x100aef80 size=0xa
#include "ConCommand.h"
void sub_100aeda0(void);
ConCommand g_106cfd40("ent_remove", sub_100aeda0, "Removes the given entity(s)\n\tArguments:   \t{entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100af010 size=0x20d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "engineserver.h"

struct CCmdClientView { char m_pad[0xa8]; int m_a8; };
CCmdClientView *sub_101193b0();
void sub_101ce620(int, int, const char *, int, int, int, int);
CBaseEntity *sub_10172710(CCmdClientView *);
int *sub_1042bff0(int *, const char *);
extern CGlobalEntityList g_106eb5d8;
extern void (__cdecl *g_109f3628)(const char *, ...);
int __cdecl _strcmpi(const char *, const char *);

inline int Q_stricmp(const char *a, const char *b) { return _strcmpi(a, b); }
inline const char *NonNull(const char *p) { return p ? p : g_106b8540; }
inline const char *STRING(int s) { return NonNull((const char *)s); }
inline const char *STRINGR(const char *const &p) { return p ? p : g_106b8540; }
inline bool ArgIs(const char *p) { return !Q_stricmp(engine->vfunc84(1), p); }

// TARGET: sub_100af010
void sub_100af010()
{
	ScopeTrace trace("CC_Ent_SetName", g_106b8540);
	CBaseEntity *pEnt;
	if (engine->vfunc85() < 1) {
		CCmdClientView *p = sub_101193b0();
		if (p && p->m_a8)
			sub_101ce620(p->m_a8, 2, "Usage:\n   ent_setname <new name> <entity name>\n", 0, 0, 0, 0);
	} else {
		if (!Q_stricmp(engine->vfunc84(2), g_106b8540)) {
			pEnt = sub_10172710(sub_101193b0());
		} else {
			pEnt = g_106eb5d8.sub_100f7060(0);
			while (pEnt) {
				if ((int)pEnt->m_name26c != 0 && ArgIs(STRING((int)pEnt->m_name26c)))
					break;
				if (pEnt->m_classname11c && ArgIs(STRINGR(pEnt->m_classname11c)))
					break;
				if (pEnt->sub_1009f200() && ArgIs(pEnt->sub_1009f200()))
					break;
				pEnt = g_106eb5d8.sub_100f7060(pEnt);
			}
		}
		if (pEnt) {
			const char *c = STRING((int)pEnt->m_classname11c);
			g_109f3628("Set the name of %s to %s\n", c, engine->vfunc84(1));
			int tmp[1];
			pEnt->sub_100a0420((const char *)*sub_1042bff0(tmp, engine->vfunc84(1)));
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100af2b0 size=0xa
#include "ConCommand.h"
void sub_100af010(void);
ConCommand g_106ceb6c("ent_setname", sub_100af010, "Sets the targetname of the given entity(s)\n\tArguments:   \t{new entity name} {entity_name} / {class_name} / no argument picks what player is looking at ", 0, 0);
// END FUNCTION

// FUNCTION: 0x100af340 size=0x3d8
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CVariantCopy.h"
#include "datamap.h"
#include "ehandle.h"
#include "Tier1.h"
#include "inputdata_t.h"

char *sub_101cf720(const char *fmt, ...);
void sub_101ce620(void *pCtx, int level, const char *s, const char *a = 0, const char *b = 0, const char *c = 0, const char *d = 0);
extern "C" int _strcmpi(const char *, const char *);
extern float g_104454c4;

inline int VarInt(const CVariantCopy &v) { return v.m_fieldType == 4 ? v.m_value : 0; }
inline float VarFloat(const CVariantCopy &v) { return v.m_fieldType == 1 ? v.flVal : g_104454c4; }
inline const char *VarString(const CVariantCopy &v) { return v.m_fieldType == 2 ? (v.iszVal ? v.iszVal : g_106b8540) : v.sub_100d0a00(); }

// TARGET: sub_100af340
void sub_100af340(void *pPlayer, CBaseEntity *pEntity)
{
	ScopeTrace trace("CC_Ent_Dump_Sub", g_106b8540, g_106b8540);
	sub_101ce620(pPlayer, 2, sub_101cf720("\n*****************************************************************\n"));
	sub_101ce620(pPlayer, 2, sub_101cf720("**                         BEGIN ENTITY DUMP                   **\n"));
	sub_101ce620(pPlayer, 2, sub_101cf720("**                                                             **\n"));
	for (datamap_t *dmap = pEntity->vfunc82(); (int)dmap != 0; dmap = dmap->baseMap)
	{
		sub_101ce620(pPlayer, 2, sub_101cf720("**      Datafields\n"));
		for (int i = 0; i < dmap->dataNumFields; ++i)
		{
			CVariantCopy var;
			const typedescription_t &field = dmap->dataDesc[i];
			if (pEntity->vfunc121(dmap->dataDesc[i].externalName, &var))
			{
				char buf[256];
				buf[0] = 0;
				switch (var.m_fieldType)
				{
				case 2:
					g_109f3890(buf, VarString(var), sizeof(buf));
					break;
				case 4:
					g_109f388c(buf, sizeof(buf), "%d", VarInt(var));
					break;
				case 1:
					g_109f388c(buf, sizeof(buf), "%.2f", VarFloat(var));
					break;
				case 12:
					if (var.m_fieldType != 12)
					{
						((variant_t *)&var)->NullHandle();
					}
					else
					{
						EHANDLE h; h = pcd_stage(*(EHANDLE *)&var.m_hEntity);
						if (h)
						{
							const char *pszName = pcd_stage(h)->m_name26c;
							g_109f388c(buf, sizeof(buf), "%s", pszName ? pszName : g_106b8540);
						}
					}
					break;
				}
				if (!_strcmpi("parentname", dmap->dataDesc[i].externalName) || !_strcmpi("targetname", dmap->dataDesc[i].externalName))
					continue;
				if (buf[0])
					sub_101ce620(pPlayer, 2, sub_101cf720("  %-40s: %10s\n", dmap->dataDesc[i].externalName, buf));
			}
		}
	}
	sub_101ce620(pPlayer, 2, sub_101cf720("**      Object-specific dump\n"));
	pEntity->vfunc31((int)pPlayer);
	sub_101ce620(pPlayer, 2, sub_101cf720("**                                                             **\n"));
	sub_101ce620(pPlayer, 2, sub_101cf720("**                         END ENTITY DUMP                     **\n"));
	sub_101ce620(pPlayer, 2, sub_101cf720("*****************************************************************\n\n"));
}
// END FUNCTION

// FUNCTION: 0x100af840 size=0x131
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CGlobalEntityList.h"

class CBasePlayer;
struct CCmdClientX { char pad[0xa8]; CBasePlayer *m_pPlayer; };
CCmdClientX *sub_101193b0();
CBaseEntity *sub_10172710(CBasePlayer *pPlayer);
void sub_100af340(CBasePlayer *pPlayer, CBaseEntity *pEnt);
void sub_101ce620(void *pPlayer, int a, const char *msg, const char *b, const char *c, const char *d, const char *e);
extern CGlobalEntityList g_106eb5d8;

inline void DumpEnts(CBasePlayer *pPlayer)
{
    CBaseEntity *ent;
    if (engine->vfunc85() < 2) {
        ent = sub_10172710(pPlayer);
        if (ent) {
            sub_100af340(pPlayer, ent);
            return;
        }
        sub_101ce620(pPlayer, 2, "Usage:\n   ent_dump <entity name>\n", 0, 0, 0, 0);
    } else {
        ent = g_106eb5d8.sub_100f7770(0, engine->vfunc84(1), 0, 0);
        if (ent) {
            do {
                sub_100af340(pPlayer, ent);
                ent = g_106eb5d8.sub_100f7770(ent, engine->vfunc84(1), 0, 0);
            } while (ent);
            return;
        }
        sub_101ce620(pPlayer, 2, "ent_dump: no such entity", 0, 0, 0, 0);
    }
}

void sub_100af840()
{
    ScopeTrace trace("CC_Ent_Dump", g_106b8540);
    CCmdClientX *pClient = sub_101193b0();
    if (!pClient)
        return;
    CBasePlayer *pPlayer = pClient->m_pPlayer;
    if (!pPlayer)
        return;
    DumpEnts(pPlayer);
}
// END FUNCTION

// FUNCTION: 0x100af9d0 size=0xa
#include "ConCommand.h"
void sub_100af840(void);
ConCommand g_106cf48c("ent_dump", sub_100af840, "Usage:\n   ent_dump <entity name>\n", 0, 0);
// END FUNCTION

// FUNCTION: 0x100afa60 size=0x75
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CEngineSlot84View {
    S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
    virtual int vfunc84(int a);
};
extern CEngineSlot84View *g_1070b22c;
int sub_101193b0(int a);
void sub_100ae1f0(int a);

void sub_100afa60()
{
    ScopeTrace trace("CC_Ent_FireTarget", g_106b8540);
    sub_100ae1f0(sub_101193b0(g_1070b22c->vfunc84(1)));
}
// END FUNCTION

// FUNCTION: 0x100afb00 size=0xa
#include "ConCommand.h"
void sub_100afa60(void);
ConCommand g_106cf280("firetarget", sub_100afa60, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100afb90 size=0x1c6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CEventQueue.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include <stdlib.h>

struct CCmdClient
{
	char m_pad0000[0xa8];
	CBaseEntity *m_pPlayer;	// 0xa8
};

CCmdClient *sub_101193b0();
const char **sub_1042bff0(const char **pOut, const char *psz);
void sub_101ce620(void *pPlayer, int dest, const char *pszMsg, const char *p1, const char *p2, const char *p3, const char *p4);
extern CEventQueue g_106e7050;

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct castable_string_t
{
	const char *pszValue;
	castable_string_t(const char *pszFrom) { pszValue = (*pszFrom) ? pszFrom : 0; }
};

inline void SetString(CVariantCopy &v, castable_string_t str) { v.iszVal = str.pszValue; v.m_fieldType = 2; }

void sub_100afb90()
{
	ScopeTrace trace("CC_Ent_Fire", g_106b8540, g_106b8540);
	CCmdClient *pClient = sub_101193b0();
	if (!pClient)
		return;
	CBaseEntity *pPlayer = pClient->m_pPlayer;
	if (!pPlayer)
		return;
	if (engine->vfunc85() < 2) {
		sub_101ce620(pPlayer, 2, "Usage:\n   ent_fire <target> [action] [value] [delay]\n", 0, 0, 0, 0);
	} else {
		const char *target = "", *action = "Use";
		CVariantCopy value;
		int delay = 0;
		const char *tmp;
		target = STRINGR(*sub_1042bff0(&tmp, engine->vfunc84(1)));
		if (engine->vfunc85() >= 3)
			action = STRINGR(*sub_1042bff0(&tmp, engine->vfunc84(2)));
		if (engine->vfunc85() >= 4)
			SetString(value, castable_string_t(engine->vfunc84(3)));
		if (engine->vfunc85() >= 5)
			delay = atoi(engine->vfunc84(4));
		g_106e7050.sub_100cddf0(target, action, value, (float)delay, pPlayer, pPlayer, 0, CEQExtra());
	}
}
// END FUNCTION

// FUNCTION: 0x100afde0 size=0xa
#include "ConCommand.h"
void sub_100afb90(void);
ConCommand g_106cf22c("ent_fire", sub_100afb90, "Usage:\n   ent_fire <target> [action] [value] [delay]\n", 0, 0);
// END FUNCTION

// FUNCTION: 0x100afe70 size=0x6f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

struct CEntBreakTarget { char m_pad[0xa8]; int m_pObj; };
CEntBreakTarget *sub_101193b0();
void sub_10172710(int obj);

void sub_100afe70()
{
	ScopeTrace trace("CC_Ent_Break", g_106b8540);
	CEntBreakTarget *p = sub_101193b0();
	if (p && p->m_pObj)
		sub_10172710(p->m_pObj);
}
// END FUNCTION

// FUNCTION: 0x100aff00 size=0xa
#include "ConCommand.h"
void sub_100afe70(void);
ConCommand g_106cf1a8("ent_break", sub_100afe70, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100aff90 size=0x1d5
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

class CBasePlayer;
CBasePlayer *sub_101193b0();
CBaseEntity *sub_10136580(const char *pszClassname);
void sub_101ce620(void *pPlayer, int nType, const char *pszText, const char *p1, const char *p2, const char *p3, const char *p4);
const char *sub_101cf720(const char *pszFormat, const char *pszValue);

struct STypeDescView	// one datamap field (0x2c bytes)
{
	char m_pad0000[0x12];
	unsigned char m_nFlags;	// 0x12
	char m_pad0013;
	const char *m_pszExternalName;	// 0x14
	char m_pad0018[0x2c - 0x18];
};

struct SDatamapView
{
	STypeDescView *m_pDataDesc;	// 0x00
	int m_nFields;	// 0x04
	const char *m_pszClassName;	// 0x08
	SDatamapView *m_pBaseMap;	// 0x0c
};

struct SDeletableView	// slot 5 is the scalar deleting destructor
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void vfunc5(unsigned int flags);
};

struct SCommandClientView
{
	char m_pad0000[0xa8];
	void *m_pPlayer;	// 0xa8
};

void sub_100aff90()
{
	ScopeTrace trace("CC_Ent_Info", g_106b8540);
	SCommandClientView *pCommandClient = (SCommandClientView *)sub_101193b0();
	void *pPlayer = pCommandClient ? pCommandClient->m_pPlayer : 0;
	if (!pPlayer)
		return;

	if (engine->vfunc85() < 2) {
		sub_101ce620(pPlayer, 2, "Usage:\n   ent_info <class name>\n", 0, 0, 0, 0);
	} else {
		CBaseEntity *pEntity = sub_10136580(engine->vfunc84(1));
		if (pEntity) {
			SDatamapView *pMap;
			int i;
			for (pMap = (SDatamapView *)pEntity->vfunc82(); pMap; pMap = pMap->m_pBaseMap) {
				for (i = 0; i < pMap->m_nFields; i++) {
					if (pMap->m_pDataDesc[i].m_nFlags & 0x10)
						sub_101ce620(pPlayer, 2, sub_101cf720("  output: %s\n", pMap->m_pDataDesc[i].m_pszExternalName), 0, 0, 0, 0);
				}
			}
			for (pMap = (SDatamapView *)pEntity->vfunc82(); pMap; pMap = pMap->m_pBaseMap) {
				for (i = 0; i < pMap->m_nFields; i++) {
					if (pMap->m_pDataDesc[i].m_nFlags & 8)
						sub_101ce620(pPlayer, 2, sub_101cf720("  input: %s\n", pMap->m_pDataDesc[i].m_pszExternalName), 0, 0, 0, 0);
				}
			}
			((SDeletableView *)pEntity)->vfunc5(1);
		} else {
			sub_101ce620(pPlayer, 2, sub_101cf720("no such entity %s\n", engine->vfunc84(1)), 0, 0, 0, 0);
		}
	}
}
// END FUNCTION
