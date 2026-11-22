// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 56 blocks
#include "vampire.h"

// FUNCTION: 0x10033b80 size=0x1d1
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "type_info.h"
#include "ScopeTrace.h"
#include "ConVar.h"
#include "CUnknown100a8220.h"

__declspec(dllimport) void Warning(const char *pMsg, ...);
__declspec(dllimport) void DevMsg(const char *pMsg, ...);
extern ConVar *g_106bd86c;
extern float g_106bcb58;
extern type_info g_1053a9b8;

#define SV1(p) virtual void p();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

class SThinkOwnerView	// the object at +0x94: a flag at +0x5c38, slot 582 reports a slow think
{
public:
	SV100(sa) SV100(sb) SV100(sc) SV100(sd) SV100(se) SV10(sf0) SV10(sf1) SV10(sf2) SV10(sf3) SV10(sf4) SV10(sf5) SV10(sf6) SV10(sf7) SV1(sg0) SV1(sg1)
	virtual void vfunc582(float flTime);
	char m_pad0004[0x5c38 - 4];
	int m_n5c38;
};

void CBaseEntity::sub_10033b80(void (CBaseEntity::*pfnThink)())
{
	ScopeTrace trace("CBaseEntity::PhysicsDispatchThink", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float flThinkLimit;
	if (g_106bd86c->vfunc1())
		flThinkLimit = 0.0f;
	else
		flThinkLimit = g_106bd86c->m_fValue;
	float flThinkStart = 0.0f;
	if (((CUnknown100a8220 *)this)->sub_100a8220()) {
		const char *pszName = m_classname11c;
		if (!pszName)
			pszName = g_106b8540;
		Warning("Dormant entity %s is thinking!!\n", pszName);
	}
	if (flThinkLimit != 0.0f)
		flThinkStart = engine->vfunc87();
	if (pfnThink)
		(this->*pfnThink)();
	if (flThinkLimit != 0.0f) {
		float flTime = (engine->vfunc87() - flThinkStart) * 1000.0f;
		if (flTime > flThinkLimit) {
			SThinkOwnerView *pOwner = *(SThinkOwnerView **)((char *)this + 0x94);
			if (pOwner && pOwner->m_n5c38) {
				pOwner->vfunc582(flTime);
				return;
			}
			if (gpGlobals->curtime >= g_106bcb58) {
				const char *pszName = m_classname11c;
				if (!pszName)
					pszName = g_106b8540;
				DevMsg("%s(%s) thinking for %.02f ms!!!\n", pszName, g_1053a9b8.raw_name(), flTime);
				g_106bcb58 = gpGlobals->curtime + 1.0f;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10033de0 size=0x122
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

extern float g_104454c4;

struct CBaseEntityThinkUnit : CBaseEntity
{
	bool sub_10033de0(float *pNextThink, float *pLastThink, int thinkFunc);
	void sub_10033b80(int thinkFunc);
};

// TARGET: CBaseEntityThinkUnit::sub_10033de0
bool CBaseEntityThinkUnit::sub_10033de0(float *pNextThink, float *pLastThink, int thinkFunc)
{
	ScopeTrace trace("CBaseEntity::PhysicsRunSpecificThink", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float thinktime = *pNextThink;
	if (thinktime <= g_104454c4 || thinktime > gpGlobals->curtime + gpGlobals->frametime)
		return true;
	if (thinktime < gpGlobals->curtime)
		thinktime = gpGlobals->curtime;
	*pNextThink = 0;
	float oldtime = gpGlobals->curtime;
	gpGlobals->curtime = thinktime;
	sub_10033b80(thinkFunc);
	*pLastThink = thinktime;
	gpGlobals->curtime = oldtime;
	return ((CEntityVSlots *)this)->slot116() == 0;
}
// END FUNCTION

// FUNCTION: 0x10033f60 size=0x2aa
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "CBaseEntity.h"
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "utlvector.h"

struct CBaseEntityThinkUnit
{
	bool sub_10033de0(float *pNext, float *pLast, int pfn);
};
void sub_1003c450();

#define THINKVEC (*(CUtlVector<CBaseEntityThinkContext> *)&m_pThinkContexts)

struct CCycleSampleLocal
{
	unsigned __int64 m_Int64;
	CCycleSampleLocal() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

// TARGET: CBaseEntity::sub_10033f60
bool CBaseEntity::sub_10033f60(int nThinkMethod)
{
	ScopeTrace trace("CBaseEntity::PhysicsRunThink", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CBaseEntity_PhysicsRunThink", 0, "Unaccounted", false);
	bool bAlive = true;
	if (nThinkMethod != 2) {
		bAlive = ((CBaseEntityThinkUnit *)this)->sub_10033de0((float *)((char *)this + 0x17c), (float *)((char *)this + 0x178), (int)sub_1003c450);
		if (!bAlive) {
			g_109f3648->ExitScopeCall();
			return false;
		}
	}
	if (nThinkMethod == 1) {
		g_109f3648->ExitScopeCall();
	} else {
		for (int i = 0; i < THINKVEC.Count(); i++) {
			m_iCurrentThinkContext = i;
			bAlive = ((CBaseEntityThinkUnit *)this)->sub_10033de0((float *)&THINKVEC[i].m_b, (float *)&THINKVEC[i].m_c, THINKVEC[i].m_a);
			m_iCurrentThinkContext = -1;
			if (!bAlive) {
				CVProfile *pProf = g_109f3648;
				if (!pProf->m_bAtRoot || pProf->m_enabled) {
					CVProfNode *pNode = pProf->m_pCurNode;
					if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
						CUnknownCycle100335e0 *pc = &pNode->m_CurFrameTime;
						sub_100335e0(pc);
						pNode->m_TotalTime += pc->m_Int64;
						g_109f3648->PopGroup();
					}
					if (pNode->m_nRecursions == 0)
						pProf->m_pCurNode = pProf->m_pCurNode->m_pParent;
					pProf->m_bAtRoot = (pProf->m_pCurNode == pProf->m_pRoot);
				}
				return false;
			}
		}
		CVProfile *pProf = g_109f3648;
		if (!pProf->m_bAtRoot || pProf->m_enabled) {
			CVProfNode *pNode = pProf->m_pCurNode;
			if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
				CUnknownCycle100335e0 *pc = &pNode->m_CurFrameTime;
				CCycleSampleLocal cc;
				cc.Sample();
				pc->m_Int64 = cc.m_Int64 - pc->m_Int64;
				pNode->m_TotalTime += pc->m_Int64;
				g_109f3648->PopGroup();
			}
			if (pNode->m_nRecursions == 0)
				pProf->m_pCurNode = pProf->m_pCurNode->m_pParent;
			pProf->m_bAtRoot = (pProf->m_pCurNode == pProf->m_pRoot);
		}
	}
	return bAlive;
}
// END FUNCTION

// FUNCTION: 0x100342c0 size=0x235
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

void __fastcall sub_10006456(CBaseEntity *p);

inline bool IsSolid(int solidType, int nSolidFlags)
{
	return (solidType != 0) && ((nSolidFlags & 4) == 0);
}

struct CCollisionPropertyV
{
	char m_pad[0x40];
	int m_Solid;	// 0x2b0
	unsigned short m_usSolidFlags;	// 0x2b4
	bool IsSolidFlagSet(int flagMask) const { return (m_usSolidFlags & flagMask) != 0; }
	bool IsSolid() const { return ::IsSolid(m_Solid, m_usSolidFlags); }
};

struct CBaseEntityRelink : CBaseEntity
{
	const CCollisionPropertyV *CollisionPropV() const { return (const CCollisionPropertyV *)((char *)this + 0x270); }
	bool IsSolid() const
	{
		ScopeTrace trace("CBaseEntity::IsSolid", this ? (STRINGR_F(m_name26c)) : g_105387dc);
		return CollisionPropV()->IsSolid();
	}
	bool IsSolidFlagSet(int flagMask) const
	{
		ScopeTrace trace("CBaseEntity::IsSolidFlagSet", this ? (STRINGR_F(m_name26c)) : g_105387dc);
		return CollisionPropV()->IsSolidFlagSet(flagMask);
	}
};

// TARGET: CBaseEntity::sub_100342c0
void CBaseEntity::sub_100342c0()
{
	ScopeTrace trace("CBaseEntity::PhysicsRelinkChildren", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	for (CBaseEntityRelink *pChild = (CBaseEntityRelink *)m_hMoveChild260.Get(); pChild; pChild = (CBaseEntityRelink *)pChild->m_hMovePeer264.Get()) {
		if (pChild->IsSolid() || pChild->IsSolidFlagSet(8))
			pChild->sub_100a53d0(0);
		if (pChild->vfunc94() != 7)
			((CEntityVSlots *)pChild)->slot232(*(int *)&gpGlobals->frametime);
		if (pChild->m_hMoveChild260.Get())
			sub_10006456(pChild);
	}
}
// END FUNCTION

// FUNCTION: 0x10034590 size=0x87d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
// TARGET: CBaseEntity::sub_10034590
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "CUnknown100353c0.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "ConVar.h"
#include "PhysicsTrace.h"

extern Vector g_1070d1b0;	// vec3_origin
extern float g_104454c4;	// 0.0f
void sub_10139500(const Vector &start, float scale, const Vector &direction, Vector &dest);	// VectorMA (asm, cdecl)
__declspec(dllimport) void Warning(const char *pszFormat, ...);

struct CTryMoveCollision
{
	virtual void vfunc0();
	virtual const Vector *OBBMins();
	virtual const Vector *OBBMaxs();
};

struct CTryMoveSurface
{
	const char *name;
	short surfaceProps;
	unsigned short flags;
};

struct CTryMoveTraceTail
{
	char m_base[0x38];
	float fractionleftsolid;
	CTryMoveSurface surface;
	int hitgroup;
	short physicsbone;
	CBaseEntity *m_pEnt;
	int hitbox;
};

struct CTryMoveEdict
{
	char m_pad00[0x4c];
	char m_bFree;
};

struct CTryMoveCycle
{
	unsigned __int64 m_Int64;
	CTryMoveCycle() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm
		{
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

struct CTryMoveVS
{
	EVS10() EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9) EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15)
	EVS(160) EVS(161) EVS(162) EVS(163) EVS(164) EVS(165)
	virtual char slot166(CEntityVSlots *pEnt);
};

struct CTryMoveEntity : CBaseEntity
{
	const Vector &GetAbsVelocity()
	{
		if ((unsigned char)(m_flags268 >> 12) & 1)
			sub_100b1d10();
		return m_vecVelocity3bc;
	}
	float GetFriction() const { return *(const float *)((const char *)this + 0x3f0); }
	CTryMoveCollision *CollisionProp() { return (CTryMoveCollision *)((char *)this + 0x270); }
	CEntityVSlots *V() { return (CEntityVSlots *)this; }
};

inline void TryMovePopGroup(CVProfile *p)
{
	--p->m_nGroupStackDepth;
	int nNew = p->m_GroupIDStack[p->m_nGroupStackDepth];
	int nOld = p->m_GroupIDStack[p->m_nGroupStackDepth + 1];
	if (nNew != nOld && p->m_bVTuneGroupsEnabled && nOld == p->m_nVTuneGroupID)
		vtune(false);
}

inline bool TryMoveNodeExit(CVProfNode *n, bool bPopInline)
{
	if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0)
	{
		CTryMoveCycle cnt;
		cnt.Sample();
		CUnknownCycle100335e0 *pc = &n->m_CurFrameTime;
		pc->m_Int64 = cnt.m_Int64 - pc->m_Int64;
		n->m_TotalTime += pc->m_Int64;
		if (bPopInline)
			TryMovePopGroup(g_109f3648);
		else
			g_109f3648->PopGroup();
	}
	return n->m_nRecursions == 0;
}

inline void TryMoveExitScope(CVProfile *p, bool bPopInline)
{
	if (!p->m_bAtRoot || p->m_enabled)
	{
		if (TryMoveNodeExit(p->m_pCurNode, bPopInline))
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
}

int CBaseEntity::sub_10034590(float flTime, CGameTrace *steptrace)
{
	CTryMoveEntity *self = (CTryMoveEntity *)this;
	ScopeTrace scopeTrace("CBaseEntity::PhysicsTryMove", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CBaseEntity::PhysicsTryMove", 0, "Unaccounted", false);

	int bumpcount, numbumps;
	Vector dir;
	float d;
	int numplanes;
	Vector planes[5];
	Vector primal_velocity, original_velocity, new_velocity;
	int i, j;
	CGameTrace trace;
	Vector end;
	float time_left;
	int blocked;

	unsigned int mask = self->V()->slot237();

	new_velocity.Init();

	numbumps = 4;

	Vector vecAbsVelocity = self->GetAbsVelocity();

	blocked = 0;
	VectorCopy(vecAbsVelocity, original_velocity);
	VectorCopy(vecAbsVelocity, primal_velocity);
	numplanes = 0;

	time_left = flTime;

	for (bumpcount = 0; bumpcount < numbumps; bumpcount++)
	{
		if (vecAbsVelocity == g_1070d1b0)
			break;

		sub_10139500(*self->V()->slot217(), time_left, vecAbsVelocity, end);

		const Vector *pMins = self->CollisionProp()->OBBMins();
		sub_10035030(this, self->V()->slot217(), &end, pMins, self->CollisionProp()->OBBMaxs(), mask, &trace);

		if (trace.m_startsolid)
		{
			sub_100b2770(g_1070d1b0);
			g_109f3648->ExitScopeCall();
			return 4;
		}

		if (trace.m_fraction > g_104454c4)
		{
			self->V()->slot216((Vector *)trace.m_endpos);
			VectorCopy(vecAbsVelocity, original_velocity);
			numplanes = 0;
		}

		if (trace.m_fraction == 1)
			break;

		if (!trace.m_pEnt)
		{
			sub_100b2770(vecAbsVelocity);
			Warning("PhysicsTryMove: !trace.m_pEnt");
			g_109f3648->ExitScopeCall();
			return 4;
		}

		if (trace.m_planeNormal[2] > 0.7)
		{
			blocked |= 1;
			if (((CTryMoveVS *)this)->slot166((CEntityVSlots *)trace.m_pEnt))
				self->V()->slot208((CEntityVSlots *)trace.m_pEnt);
		}
		if (trace.m_planeNormal[2] == g_104454c4)
		{
			blocked |= 2;
			if (steptrace)
			{
				((CUnknown100353c0 *)steptrace)->sub_100353c0((const CUnknown100353c0 *)&trace);
				CTryMoveTraceTail *pDst = (CTryMoveTraceTail *)steptrace;
				CTryMoveTraceTail *pSrc = (CTryMoveTraceTail *)&trace;
				pDst->fractionleftsolid = pSrc->fractionleftsolid;
				pDst->surface = pSrc->surface;
				pDst->hitgroup = pSrc->hitgroup;
				pDst->physicsbone = pSrc->physicsbone;
				pDst->m_pEnt = pSrc->m_pEnt;
				pDst->hitbox = pSrc->hitbox;
			}
		}

		sub_1003e6c0(trace.m_pEnt, &trace);
		if (self->V()->slot116() || ((CTryMoveEdict *)m_pEdict2e0)->m_bFree)
			break;

		time_left -= time_left * trace.m_fraction;

		if (numplanes >= 5)
		{
			sub_100b2770(g_1070d1b0);
			g_109f3648->ExitScopeCall();
			return blocked;
		}

		VectorCopy(*(Vector *)trace.m_planeNormal, planes[numplanes]);
		numplanes++;

		if (self->V()->slot94() == 3 && (!(sub_100b3700() & 1) || self->GetFriction() != 1))
		{
			for (i = 0; i < numplanes; i++)
			{
				if (planes[i][2] > 0.7)
				{
					sub_1003ef00(&original_velocity, &planes[i], &new_velocity, 1);
					VectorCopy(new_velocity, original_velocity);
				}
				else
				{
					sub_1003ef00(&original_velocity, &planes[i], &new_velocity, 1.0 + (g_109eef74->vfunc1() ? g_104454c4 : g_109eef74->m_fValue) * (1 - self->GetFriction()));
				}
			}

			VectorCopy(new_velocity, vecAbsVelocity);
			VectorCopy(new_velocity, original_velocity);
		}
		else
		{
			for (i = 0; i < numplanes; i++)
			{
				sub_1003ef00(&original_velocity, &planes[i], &new_velocity, 1);
				for (j = 0; j < numplanes; j++)
					if (j != i)
					{
						if (DotProduct(new_velocity, planes[j]) < g_104454c4)
							break;
					}
				if (j == numplanes)
					break;
			}

			if (i != numplanes)
			{
				VectorCopy(new_velocity, vecAbsVelocity);
			}
			else
			{
				if (numplanes != 2)
				{
					sub_100b2770(vecAbsVelocity);
					g_109f3648->ExitScope();
					return blocked;
				}
				CrossProduct(planes[0], planes[1], dir);
				const Vector &v = vecAbsVelocity;
				d = vecAbsVelocity.z * dir.z + vecAbsVelocity.x * dir.x + dir.y * v.y;
				VectorScale(dir, d, vecAbsVelocity);
			}

			if (vecAbsVelocity.x * primal_velocity.x + vecAbsVelocity.y * primal_velocity.y + vecAbsVelocity[2] * primal_velocity[2] <= g_104454c4)
			{
				sub_100b2770(g_1070d1b0);
				TryMoveExitScope(g_109f3648, false);
				return blocked;
			}
		}
	}

	sub_100b2770(vecAbsVelocity);
	TryMoveExitScope(g_109f3648, true);
	return blocked;
}
// END FUNCTION

// FUNCTION: 0x10035030 size=0x2c2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include <math.h>
#include "UTIL_Trace.h"
#include "CGameRules.h"
#include "ScopeTrace.h"
#include "PhysicsTrace.h"

extern CGameRules *g_1070ba0c;

#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
struct CPhysTraceView
{
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
	V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17)
	V(180) V(181) V(182) V(183) V(184) V(185) V(186) V(187) V(188) virtual void *v189();
	V10(19) V10(20) V(210) virtual unsigned int v211();
	char m_pad[0x368 - 4];
	int m_nColGroup;
};

// TARGET: sub_10035030
void sub_10035030(CBaseEntity *pEntity, const Vector *pStart, const Vector *pEnd, const Vector *pMins, const Vector *pMaxs, unsigned int fMask, CGameTrace *pTrace)
{
	ScopeTrace scope("Physics_TraceHull", g_106b8540, g_106b8540);
	CPhysTraceView *pEnt = (CPhysTraceView *)pEntity;
	if (pEnt->v189()) {
		g_1070ba0c->vfunc76(*pStart, *pEnd, *pMins, *pMaxs, fMask, (CBaseEntity *)pEnt, pEnt->m_nColGroup, ((int)(pEnt)), pTrace);
		return;
	} else { volatile int group = pEnt->m_nColGroup; char bSweptBox = ((pEnt->v211() >> 6)) & 1;
	Ray_t ray;
	const Vector &start = *pStart;
	const Vector &end = *pEnd;
	ray.m_Delta[0] = end.x - start.x;
	ray.m_Delta[1] = end.y - start.y;
	ray.m_Delta[2] = end.z - start.z;
	int bSw = ((ray.m_Delta[2] * *(ray.m_Delta + 2) + ray.m_Delta[1] * ray.m_Delta[1] + ray.m_Delta[0] * ray.m_Delta[0]) != g_104454c4); *(char *)&ray.m_IsSwept = bSw;
	const Vector &mins = *pMins;
	const Vector &maxs = *pMaxs;
	ray.m_StartOffset[0] = maxs.x - mins.x;
	ray.m_StartOffset[1] = maxs.y - mins.y;
	ray.m_StartOffset[2] = maxs.z - mins.z;
	ray.m_StartOffset[0] *= 0.5f;
	ray.m_StartOffset[1] *= 0.5f;
	ray.m_StartOffset[2] *= 0.5f;
	int bR = (1e-6 > (ray.m_StartOffset[2] * (ray.m_StartOffset[2]) + ray.m_StartOffset[1] * ray.m_StartOffset[1] + (ray.m_StartOffset[0]) * ray.m_StartOffset[0])); *(char *)&ray.m_IsRay = bR;
	if ((int)bSweptBox == -1) { ray.m_Extents[0] = mins.x + maxs.x; } else { ray.m_Extents[0] = mins.x + maxs.x; }
	ray.m_Extents[1] = mins[1] + maxs.y;
	ray.m_Extents[2] = (maxs.z) + mins.z;
	ray.m_Extents[0] *= 0.5f;
	ray.m_Extents[1] *= 0.5f;
	ray.m_Extents[2] *= 0.5f;
	ray.m_Start[0] = ray.m_Extents[0] + start.x;
	ray.m_Start[1] = ray.m_Extents[1] + start.y;
	ray.m_Start[2] = (ray.m_Extents[2]) + start.z;
	ray.m_Extents[0] *= -1.0f;
	ray.m_Extents[1] *= -1.0f;
	ray.m_Extents[2] *= -1.0f;
	ray.m_b32 = 0;
	ray.m_b33 = 0;
	ray.m_n34 = 0;
	if (bSweptBox && !ray.m_IsRay) {
		ray.m_n34 = sqrt((ray.m_StartOffset[0] * ray.m_StartOffset[0]) + (ray.m_StartOffset[1] * ray.m_StartOffset[1]));
		if (ray.m_n34 > 1e-6)
			ray.m_b33 = 1;
	}
	CTraceFilterSimple filter((CBaseEntity *)pEnt, group);
	g_1070b254->vfunc4(&ray, fMask, (CTraceFilterNoCharacterCollide *)&filter, pTrace);
	if (!(g_10738964)->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&pTrace->m_startpos, (const Vector *)&pTrace->m_endpos, 0xff, 0xff, 0, 1, -1.0f); }
}
// END FUNCTION

// FUNCTION: 0x100353c0 size=0x93
#include "CUnknown100353c0.h"

CUnknown100353c0 *CUnknown100353c0::sub_100353c0(const CUnknown100353c0 *o)
{
	m_w[0] = o->m_w[0];
	m_w[1] = o->m_w[1];
	m_w[2] = o->m_w[2];
	m_w[3] = o->m_w[3];
	m_w[4] = o->m_w[4];
	m_w[5] = o->m_w[5];
	m_inner = o->m_inner;
	m_x = o->m_x;
	m_y = o->m_y;
	m_z = o->m_z;
	m_p = o->m_p;
	m_q = o->m_q;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10035490 size=0x246
#include "CBaseEntity.h"
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "ConVar.h"
#include "globalvars.h"
#include "TestBit.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern ConVar *g_109ef2d4;
extern float g_104454c4;

struct CycleCount
{
	unsigned __int64 m_Int64;
	CycleCount() : m_Int64(0) {}
	void Sample()
	{
		unsigned int *p = (unsigned int *)&m_Int64;
		__asm {
			mov ecx, p
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		CycleCount now;
		now.Sample();
		m_Int64 = now.m_Int64 - m_Int64;
	}
	void Add(const CycleCount &r)
	{
		m_Int64 += r.m_Int64;
	}
};

struct CEntityGravView : CBaseEntity
{
	float GetGravity() const { return *(float *)((char *)this + 0x3ec); }
	const Vector &GetAbsVelocity()
	{
		if (TestBit(m_flags268, 12))
			sub_100b1d10();
		return m_vecVelocity3bc;
	}
	const Vector &GetBaseVelocity() const { return m_vecBaseVelocity; }
	void SetBaseVelocity(const Vector &v) { m_vecBaseVelocity = v; }
};

// TARGET: CBaseEntity::sub_10035490
void CBaseEntity::sub_10035490(float timestep)
{
	CEntityGravView *self = (CEntityGravView *)this;
	ScopeTrace trace("CBaseEntity::PhysicsAddHalfGravity", this ? (STRINGR_F(m_name26c)) : g_105387dc);

	g_109f3648->EnterScope("CBaseEntity::PhysicsAddHalfGravity", 0, "Unaccounted", false);

	float ent_gravity;
	if (self->GetGravity())
		ent_gravity = self->GetGravity();
	else
		ent_gravity = 1.0f;

	Vector vecAbsVelocity = self->GetAbsVelocity();
	vecAbsVelocity[2] -= (0.5 * ent_gravity * (g_109ef2d4->vfunc1() ? g_104454c4 : g_109ef2d4->m_fValue) * timestep);
	vecAbsVelocity[2] += self->GetBaseVelocity()[2] * gpGlobals->frametime;
	sub_100b2770(vecAbsVelocity);

	Vector vecNewBaseVelocity = self->GetBaseVelocity();
	vecNewBaseVelocity[2] = 0;
	self->SetBaseVelocity(vecNewBaseVelocity);

	sub_1003eb50();

	CVProfile *prof = g_109f3648;
	if (!prof->m_bAtRoot || prof->m_enabled) {
		CVProfNode *node = prof->m_pCurNode;
		if (--node->m_nRecursions == 0 && node->m_nCurFrameCalls != 0) {
			((CycleCount *)&node->m_CurFrameTime)->End();
			((CycleCount *)&node->m_TotalTime)->Add(*(CycleCount *)&node->m_CurFrameTime);
			g_109f3648->PopGroup();
		}
		if (node->m_nRecursions == 0)
			prof->m_pCurNode = prof->m_pCurNode->m_pParent;
		prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10035780 size=0x245
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Ray_t.h"
#include "CBaseEntity.h" 
#include "CGameTrace.h" 
#include "CCollisionProperty.h" 
#include "ScopeTrace.h" 
#include "PhysicsTrace.h" 
#include "CEntityVSlots.h" 
#include "CEHandleGet.h" 
#include "CBaseNetworkable.h"
extern void (*g_109f362c)(const char *,...);
struct IServerNetworkableX { virtual void n0(); virtual void n1(); virtual void n2(); virtual void n3(); virtual void n4(); virtual const char *n5(); };
struct IServerUnknownX { virtual void v0(); virtual void v1(); virtual void v2(); virtual struct IServerNetworkableX *v3(); virtual void v4();
 const char *Name() { IServerNetworkableX *p = v3(); return p->n5(); } };
struct EdictX { char pad[0x40]; IServerUnknownX *m_p40; };
CGameTrace CBaseEntity::vfunc234(const Vector *pDelta) {
 ScopeTrace trace("CBaseEntity::PhysicsPushEntity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);
 if ( EHandle_Get( m_hMoveParent ) ) {
   EdictX *e = (EdictX *)m_pEdict2e0;
   (*g_109f362c)("pushing entity (%s) that has m_pMoveParent!\n", !e->m_p40 ? g_106b8540 : e->m_p40->Name()); }
 unsigned int mask = ((CEntityVSlots *)this)->slot237();
 Vector vecOrigin = *((CEntityVSlots *)this)->slot220();
 Vector vecTarget; VectorAdd( *((CEntityVSlots *)this)->slot220(), *pDelta, vecTarget );
 bool bSolid; { ScopeTrace traceSolid("CBaseEntity::IsSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
   CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
   bSolid = (pCollision->m_nSolidType != 0 && !(pCollision->m_usSolidFlags & 4)); }
 if ( !bSolid || (((CEntityVSlots *)this)->slot211() & 0x28) ) mask &= 0xfdffffff;
 CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
 const Vector *pMins = (const Vector *)pCollision->vfunc1();
 CGameTrace trace2;
 sub_10035030(this, ((CEntityVSlots *)this)->slot220(), &vecTarget, pMins, (const Vector *)pCollision->vfunc2(), mask, &trace2);
 if ( trace2.m_fraction != g_104454c4 ) vfunc62( trace2.m_endpos );
 sub_100a53d0( (int)&vecOrigin );
 if ( trace2.m_pEnt ) sub_1003e6c0( trace2.m_pEnt, &trace2 );
 return trace2; }
// END FUNCTION

// FUNCTION: 0x10035a70 size=0xfb
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
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
struct PTEPColl { virtual void v0(); virtual float *GetMins(); virtual float *GetMaxs(); };
struct PTEPEnt {
    V10(t00) V10(t01) V10(t02) V10(t03) V10(t04) V10(t05) V10(t06) V10(t07) V10(t08) V10(t09)
    V10(t10) V10(t11) V10(t12) V10(t13) V10(t14) V10(t15) V10(t16) V10(t17) V10(t18) V10(t19)
    V10(t20)
    virtual void u210(); virtual void u211(); virtual void u212(); virtual void u213(); virtual void u214(); virtual void u215(); virtual void u216();
    virtual float *GetAbsOrigin();
    V10(v22) virtual void u228(); virtual void u229();
    virtual void u230(); virtual void u231(); virtual void u232(); virtual void u233(); virtual void u234(); virtual void u235(); virtual void u236();
    virtual unsigned int SolidMask();
    char pad[0x270 - 4];
    PTEPColl m_coll;
};
struct PTEPTrace { char pad[0x37]; bool startsolid; char pad2[0x14]; CBaseEntity *pEnt; char tail[4]; };
void sub_10035030(CBaseEntity *ent, float *start, float *end, float *mins, float *maxs, unsigned int mask, PTEPTrace *tr);

bool CBaseEntity::sub_10035a70(CBaseEntity **ppEntity)
{
    ScopeTrace trace("CBaseEntity::PhysicsTestEntityPosition", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    PTEPTrace tr;
    PTEPEnt *e = (PTEPEnt *)this;
    unsigned int mask = e->SolidMask();
    float *mins = e->m_coll.GetMins();
    sub_10035030(this, e->GetAbsOrigin(), e->GetAbsOrigin(), mins, e->m_coll.GetMaxs(), mask, &tr);
    if (tr.startsolid) {
        if (ppEntity)
            *ppEntity = tr.pEnt;
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10035bb0 size=0xa
#define PCD_INITIALIZERS
#include "CPhysicsPushedEntities.h"
CPhysicsPushedEntities g_106bbae4;
// END FUNCTION

// FUNCTION: 0x10035d00 size=0xb4
#include "CPhysicsPushedEntities.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);

// CUtlVector<T>(growSize, initSize) inlined on the header's vector views
template <class V, class T>
inline void UtlVectorInit(V &v, T *, int growSize, int initSize)
{
	v.m_pMemory = 0;
	v.m_nAllocationCount = initSize;
	v.m_nGrowSize = growSize;
	if (v.m_nAllocationCount)
		v.m_pMemory = (T *)Plat_Alloc(v.m_nAllocationCount * sizeof(T));
	v.m_Size = 0;
	v.m_pElements = v.m_pMemory;
}

CPhysicsPushedEntities::CPhysicsPushedEntities()
{
	UtlVectorInit(m_rgPusher, (PusherInfo_t *)0, 8, 8);
	UtlVectorInit(m_rgMoved, (MovedEntity_t *)0, 32, 32);
	ScopeTrace trace("CPhysicsPushedEntities::CPhysicsPushedEntities", g_106b8540, g_106b8540);
}
// END FUNCTION

// FUNCTION: 0x10035df0 size=0xca
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
#include "CPhysicsPushedEntities.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CPushEntitySlots
{
	S100(a) S100(b) S10(c0)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual float *vfunc217();	// GetAbsOrigin
};

void CPhysicsPushedEntities::sub_10035df0(CBaseEntity *pEntity)
{
	ScopeTrace trace("CPhysicsPushedEntities::AddEntity", g_106b8540);
	CMovedVec *pVec = &m_rgMoved;
	int idx = pVec->m_Size;
	if (idx + 1 > pVec->m_nAllocationCount)
		pVec->sub_1003c3c0(idx - pVec->m_nAllocationCount + 1);
	pVec->m_Size++;
	pVec->m_pElements = pVec->m_pMemory;
	pVec->sub_1003c330(idx, 1);
	MovedEntity_t *pMoved = &pVec->m_pMemory[idx];
	if (pMoved)
		pMoved->sub_1003c3a0();
	pVec->m_pMemory[idx].m_pEntity = pEntity;
	MovedEntity_t *pBase = pVec->m_pMemory;
	const float *pOrigin = ((CPushEntitySlots *)pEntity)->vfunc217();
	pBase[idx].m_vecStartAbsOrigin[0] = pOrigin[0];
	pBase[idx].m_vecStartAbsOrigin[1] = pOrigin[1];
	pBase[idx].m_vecStartAbsOrigin[2] = pOrigin[2];
}
// END FUNCTION

// FUNCTION: 0x10035f00 size=0x95
#include "CPhysicsPushedEntities.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

struct HandleSys {
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual int GetHandle(short index);
};
extern HandleSys *g_1070b24c;

void CPhysicsPushedEntities::sub_10035f00(int *pHandles)
{
	g_109f3620[*g_109f3680].fn = "CPhysicsPushedEntities::UnlinkPusherList";
	g_109f3620[*g_109f3680].name = "";
	g_109f3620[*g_109f3680].extra = "";
	(*g_109f3680)++;
	for (int i = m_rgPusher.m_Size - 1; i >= 0; i--) {
		short index = *(short *)((char *)m_rgPusher.m_pMemory[i].m_pEntity + 0x2b6);
		pHandles[i] = g_1070b24c->GetHandle(index);
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10035fd0 size=0x96
#include "CPhysicsPushedEntities.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct IEntityHandleTable
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual void SetHandle(short index, int handle);
};
extern IEntityHandleTable *g_1070b24c;

void CPhysicsPushedEntities::sub_10035fd0(int *pHandles)
{
	g_109f3620[*g_109f3680].a = "CPhysicsPushedEntities::RelinkPusherList";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	for (int i = m_rgPusher.m_Size - 1; i >= 0; i--)
		g_1070b24c->SetHandle(*(short *)((char *)m_rgPusher.m_pMemory[i].m_pEntity + 0x2b6), pHandles[i]);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100360a0 size=0x16b
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
#include "matrix3x4_t.h"
#include "CPhysicsPushedEntities.h"

#define PV(n) virtual void s##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct PushColl_t {
	PV(a0) PV(a1) PV(a2) PV(a3) PV(a4) PV(a5) PV(a6) PV(a7)
	virtual float *vfunc8();
};

struct PushEnt_t {
	char pad[0x270];
	PushColl_t coll;
};

struct PushPusher_t {
	PV10(a0) PV10(a1) PV10(a2) PV10(a3) PV10(a4) PV10(a5) PV10(a6) PV10(a7) PV10(a8)
	PV(b0) PV(b1)
	virtual int vfunc92();
};

struct PushRot_t {
	char pad[0xc];
	matrix3x4_t m_ToLocal;
	matrix3x4_t m_ToWorld;
};

void sub_10138130(const Vector &in, const matrix3x4_t &mat, Vector &out);
void sub_10137fe0(const Vector &in, const matrix3x4_t &mat, Vector &out);

void CPhysicsPushedEntities::sub_100360a0(CBaseEntity *pEntity, const float *pRotation, float *pMove, const float *pOrigin)
{
	ScopeTrace trace("CPhysicsPushedEntities::ComputeRotationalPushDirection", g_106b8540);
	PushColl_t *pColl = &((PushEnt_t *)pEntity)->coll;
	Vector vecPoint = *(Vector *)pColl->vfunc8();
	if (((PushPusher_t *)pOrigin)->vfunc92() == 6) {
		Vector vecOutB;
		Vector vecOutA;
		((CCollisionProperty *)pColl)->sub_100dcd90(&((CCollisionProperty *)pColl)->m_vecMins.x, &((CCollisionProperty *)pColl)->m_vecMaxs.x, &vecOutA.x, &vecOutB.x);
		if (pMove[0] < 0.0f)
			vecPoint.x = vecOutB.x;
		else
			vecPoint.x = vecOutA.x;
		if (pMove[1] < 0.0f)
			vecPoint.y = vecOutB.y;
		else
			vecPoint.y = vecOutA.y;
		if (pMove[2] < 0.0f)
			vecPoint.z = vecOutB.z;
		else
			vecPoint.z = vecOutA.z;
	}
	const PushRot_t *pRot = (const PushRot_t *)pRotation;
	Vector vecLocal;
	Vector vecWorld;
	sub_10138130(vecPoint, pRot->m_ToLocal, vecLocal);
	sub_10137fe0(vecLocal, pRot->m_ToWorld, vecWorld);
	pMove[0] = vecWorld.x - vecPoint.x;
	pMove[1] = vecWorld.y - vecPoint.y;
	pMove[2] = vecWorld.z - vecPoint.z;
}
// END FUNCTION

// FUNCTION: 0x10036270 size=0x276
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
#include "CPhysicsPushedEntities.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "Vector.h"
#include "utlvector.h"
#include <malloc.h>
extern void (__cdecl *g_109f362c)(const char *pMsg, ...);
extern float g_104454c4;
void sub_10036590(CBaseEntity *pEntity, const Vector *pOrigin, const Vector *pMove, void *pTrace);

struct CPushBlockerView : public CBaseEntity
{
	bool IsSolidInl()
	{
		ScopeTrace t("CBaseEntity::IsSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		return m_n2b0 && !(m_b2b4 & 4);
	}
	bool IsSolidFlagSetInl(int flags)
	{
		ScopeTrace t("CBaseEntity::IsSolidFlagSet", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		return (m_b2b4 & flags) != 0;
	}
	bool IsPointSizedInl() { return m_fl2b8 == g_104454c4; }
};

bool CPhysicsPushedEntities::sub_10036270(MovedEntity_t &info, const Vector &vecAbsPush, bool bRotationalPush)
{
	ScopeTrace trace("CPhysicsPushedEntities::SpeculativelyCheckPush", g_106b8540);
	CPushBlockerView *pBlocker = (CPushBlockerView *)info.m_pEntity;
	int *pPusherHandles = (int *)alloca(m_rgPusher.m_Size * sizeof(int));
	sub_10035f00(pPusherHandles);
	sub_10036590(pBlocker, ((CEntityVSlots *)pBlocker)->slot217(), &vecAbsPush, info.m_pad10);
	sub_10035fd0(pPusherHandles);

	if (info.m_flFraction != g_104454c4)
	{
		((CEntityVSlots *)pBlocker)->slot216(&info.m_vecEndPos);
		if (pBlocker->m_p9c)
		{
			pBlocker->vfunc62(&info.m_vecEndPos.x);
			((CCollisionProperty *)(0x270 + (char *)pBlocker))->sub_100ddd90();
			pBlocker->sub_100b3b00();
		}
	}

	if (!bRotationalPush && info.m_flFraction == 1.0)
	{
		if (pBlocker->sub_10035a70(0))
			g_109f362c("Interpenetrating entities! (%s and %s)\n", pBlocker->sub_1009f200(), (*(CUtlVector<PusherInfo_t> *)&m_rgPusher)[0].m_pEntity->sub_1009f200());
		return true;
	}
	info.m_bBlocked = pBlocker->sub_10035a70(0);
	if (!info.m_bBlocked)
		return true;
	if (pBlocker->IsPointSizedInl())
		return true;
	if (!pBlocker->IsSolidInl() || pBlocker->IsSolidFlagSetInl(0x20))
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10036590 size=0x1f8
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
#include "CGameTrace.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include "Vector.h"

void sub_10036810(CBaseEntity *pEnt, const Vector *pStart, const Vector *pEnd, int mask, CGameTrace *pTrace);
void sub_101cf210(CGameTrace *pTrace);

void sub_10036590(CBaseEntity *pEnt, const Vector *pStart, const Vector *pDelta, CGameTrace *pTrace)
{
	ScopeTrace trace("PhysicsCheckSweep", g_106b8540);

	int mask = ((CEntityVSlots *)pEnt)->slot237();

	Vector vecEnd;
	VectorAdd(*pStart, *pDelta, vecEnd);

	bool bSolid;
	{
		ScopeTrace traceIsSolid("CBaseEntity::IsSolid", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		bSolid = (pEnt->m_n2b0 != 0 && (pEnt->m_b2b4 & 4) == 0);
	}

	bool bFlagSet = false;
	if (bSolid)
	{
		ScopeTrace traceFlag("CBaseEntity::IsSolidFlagSet", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		bFlagSet = ((pEnt->m_b2b4 >> 5) & 1) != 0;
	}

	if (!bSolid || bFlagSet)
	{
		if (EHandle_Get(pEnt->m_hMoveParent))
		{
			sub_101cf210(pTrace);
			return;
		}
		mask &= 0xfdffffff;
	}

	sub_10036810(pEnt, pStart, &vecEnd, mask, pTrace);
}
// END FUNCTION

// FUNCTION: 0x10036810 size=0xb2
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##a) V10(p##b) V10(p##c) V10(p##d) V10(p##e) V10(p##f) V10(p##g) V10(p##h) V10(p##i) V10(p##j)
struct PhysEnt {
    V100(x) virtual void xa(); virtual void xb();
    virtual void Trace(PhysEnt *ent, int a, int b, int c, int d);
    V10(ya) V10(yb) V10(yc) V10(yd) V10(ye) V10(yf) V10(yg) V10(yh)
    virtual void yi3(); virtual void yi4(); virtual void yi5();
    virtual void yi6(); virtual void yi7(); virtual void yi8();
    virtual int UsesGlobalPhysics();
};
struct PhysGlobal {
    V10(xa) V10(xb) V10(xc) V10(xd) V10(xe) V10(xf) V10(xg)
    virtual void xh0(); virtual void xh1(); virtual void xh2(); virtual void xh3(); virtual void xh4(); virtual void xh5(); virtual void xh6(); virtual void xh7();
    virtual float Trace(PhysEnt *ent, int a, int b, int c, int d);
};
extern PhysGlobal *g_1070ba0c;

void sub_10036810(PhysEnt *ent, int a, int b, int c, int d)
{
    ScopeTrace trace("Physics_TraceEntity", g_106b8540, g_106b8540);
    if (ent->UsesGlobalPhysics())
        g_1070ba0c->Trace(ent, a, b, c, d);
    else
        ent->Trace(ent, a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x10036900 size=0xd7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "ScopeTrace.h"
#include "CPhysicsPushedEntities.h"

bool CPhysicsPushedEntities::sub_10036900(const float *pRotation, const float *pOrigin)
{
	ScopeTrace trace("CPhysicsPushedEntities::SpeculativelyCheckRotPush", g_106b8540);
	Vector vecAbsPush;
	m_nBlockingIndex = -1;
	for (int i = m_rgMoved.Count(); --i >= 0; ) {
		sub_100360a0(m_rgMoved[i].m_pEntity, pRotation, &vecAbsPush.x, pOrigin);
		if (!sub_10036270(m_rgMoved.Element(i), vecAbsPush, true)) {
			m_nBlockingIndex = i;
			return false;
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10036a20 size=0xb1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CPhysicsPushedEntities.h"
#include "ScopeTrace.h"

bool CPhysicsPushedEntities::sub_10036a20(const float *pMove)
{
	ScopeTrace scope("CPhysicsPushedEntities::SpeculativelyCheckLinearPush", g_106b8540);
	m_nBlockingIndex = -1;
	for (int i = m_rgMoved.Count(); --i >= 0; )
	{
		if (!sub_10036270(m_rgMoved.Element(i), *(const Vector *)pMove, false))
		{
			m_nBlockingIndex = i;
			return false;
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10036b10 size=0x8f
#include "CPhysicsPushedEntities.h"
#include "CBaseEntity.h"

#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

// CBaseEntity viewed as a plain list of slots up to 232.
struct SSlot232Entity
{
	PV100(a0) PV100(a1)
	PV10(a20)
	virtual void a210(); virtual void a211(); virtual void a212(); virtual void a213();
	virtual void a214(); virtual void a215(); virtual void a216(); virtual void a217();
	virtual void a218(); virtual void a219(); virtual void a220(); virtual void a221();
	virtual void a222(); virtual void a223(); virtual void a224(); virtual void a225();
	virtual void a226(); virtual void a227(); virtual void a228(); virtual void a229();
	virtual void a230(); virtual void a231();
	virtual void Slot232(int a);
};

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CPhysicsPushedEntities::sub_10036b10()
{
	g_109f3620[*g_109f3680].a = "CPhysicsPushedEntities::FinishPushers";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	for (int i = m_rgPusher.m_Size; --i >= 0; )
	{
		PusherInfo_t *p = m_rgPusher.m_pMemory + i;
		p->m_pEntity->sub_100a53d0((int)p + 4);
		((SSlot232Entity *)p->m_pEntity)->Slot232(0);
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10036bd0 size=0x11a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsPushedEntities.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct SRotPushView
{
	char m_pad0000[0x6c];
	Vector m_vecAMove;	// 0x6c
};

struct SPushedEntView
{
	char m_pad0000[0xa8];
	int m_pPlayerObj;	// 0xa8
	char m_pad00ac[0x3c8 - 0xac];
	Vector m_vecLocalAngVel;	// 0x3c8
	char m_pad03d4[0x207c - 0x3d4];
	int m_nFixAngle;	// 0x207c
	float m_flAngleChange;	// 0x2080
};

void CPhysicsPushedEntities::sub_10036bd0(CBaseEntity *pEnt, int a)
{
	ScopeTrace trace("CPhysicsPushedEntities::FinishRotPushedEntity", g_106b8540);
	const SRotPushView *pRot = (const SRotPushView *)a;
	SPushedEntView *pView = (SPushedEntView *)pEnt;
	if (pView->m_pPlayerObj) {
		Vector vecAngVel = pView->m_vecLocalAngVel;
		vecAngVel[1] = pRot->m_vecAMove[1];
		pEnt->sub_100b2f50(&vecAngVel.x);
		pView->m_nFixAngle = 2;
		pView->m_flAngleChange = pRot->m_vecAMove[1] + pView->m_flAngleChange;
	} else {
		Vector vecAngles = *((CEntityVSlots *)pEnt)->slot219();
		vecAngles += pRot->m_vecAMove;
		((CEntityVSlots *)pEnt)->slot218(&vecAngles);
	}
}
// END FUNCTION

// FUNCTION: 0x10036d40 size=0xd0
#include "CPhysicsPushedEntities.h"
#include "CEntityVSlots.h"
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CPhysicsPushedEntities::sub_10036d40(char bFlag, int a)
{
	g_109f3620[*g_109f3680].a = "CPhysicsPushedEntities::FinishPush";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_10036b10();
	for (int i = m_rgMoved.m_Size - 1; i >= 0; i--) {
		MovedEntity_t *pMoved = &m_rgMoved[i];
		CBaseEntity *pEnt = pMoved->m_pEntity;
		pMoved->m_pEntity->sub_100a53d0((int)pMoved->m_vecStartAbsOrigin);
		((CEntityVSlots *)pMoved->m_pEntity)->slot232(0);
		if (pMoved->m_pBlocker)
			pEnt->sub_1003e6c0(pMoved->m_pBlocker, pMoved->m_pad10);
		if (bFlag)
			sub_10036bd0(pEnt, a);
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10036e50 size=0x7e
#include "CBaseEntity.h"
#include "CPhysicsPushedEntities.h"
extern char g_106b8540[];
struct ScopeTraceEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
CBaseEntity *CPhysicsPushedEntities::sub_10036e50()
{
    g_109f3620[*g_109f3680].a = "CPhysicsPushedEntities::RegisterBlockage";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    MovedEntity_t &moved = m_rgMoved[m_nBlockingIndex];
    if (moved.m_pBlocker)
        moved.m_pEntity->sub_10012d14(moved.m_pBlocker, moved.m_pad10);
    CBaseEntity *pEntity = moved.m_pEntity;
    --*g_109f3680;
    return pEntity;
}
// END FUNCTION

// FUNCTION: 0x10036ef0 size=0x8b
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CPhysicsPushedEntities.h"

#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

// CBaseEntity viewed as a plain list of slots up to 216 (SetAbsOrigin).
struct SSetOriginEntity
{
	PV100(a0) PV100(a1)
	PV10(a20)
	virtual void a210(); virtual void a211(); virtual void a212(); virtual void a213();
	virtual void a214(); virtual void a215();
	virtual void SetAbsOrigin(const float *origin);
};

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct SMovedMemory
{
	MovedEntity_t *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	MovedEntity_t &operator[](int i) { return m_pMemory[i]; }
};

struct SMovedVec : SMovedMemory
{
	int m_Size;
	int Count() const { return m_Size; }
	MovedEntity_t &Element(int i) { return (*this)[i]; }
	MovedEntity_t &operator[](int i) { return SMovedMemory::operator[](i); }
};

void CPhysicsPushedEntities::sub_10036ef0()
{
	g_109f3620[*g_109f3680].a = "CPhysicsPushedEntities::RestoreEntities";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	SMovedVec &v = *(SMovedVec *)&m_rgMoved;
	for (int i = v.Count(); --i >= 0; )
		((SSetOriginEntity *)v[i].m_pEntity)->SetAbsOrigin(v[i].m_vecStartAbsOrigin);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10036fb0 size=0x295
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "CBaseEntity.h"
#include "CPhysicsPushedEntities.h"
#include "CUtlVector4.h"

struct PBScope
{
	void sub_10037300(const char *pszFunc, const char *pszName, const char *pszLine);
	~PBScope() { (*g_109f3680)--; }
};

inline bool PB_IsSolid(int solidType, int nSolidFlags)
{
	return solidType != 0 && (nSolidFlags & 4) == 0;
}

struct PBColl
{
	void *m_vptr;
	Vector m_vecMins;	// 0x04
	Vector m_vecMaxs;	// 0x10
	char m_pad1c[0x40 - 0x1c];
	int m_nSolidType;	// 0x40
	unsigned short m_usSolidFlags;	// 0x44

	int GetSolid() const { return m_nSolidType; }
	int GetSolidFlags() const { return m_usSolidFlags; }
	bool IsSolid() const { return PB_IsSolid(GetSolid(), GetSolidFlags()); }
	bool IsSolidFlagSet(int flagMask) const { return (m_usSolidFlags & flagMask) != 0; }
	void sub_100dcd90(const Vector &entityMins, const Vector &entityMaxs, Vector *pWorldMins, Vector *pWorldMaxs);
	void WorldSpaceAABB(Vector *pWorldMins, Vector *pWorldMaxs) { sub_100dcd90(m_vecMins, m_vecMaxs, pWorldMins, pWorldMaxs); }
};

struct PBEnt;
PBEnt *sub_1012c9c0(PBEnt *p);

struct PBEnt
{
	char m_pad0[0x26c];
	const char *m_pszName;	// 0x26c
	PBColl m_Collision;	// 0x270

	PBColl *CollisionProp() { return &m_Collision; }
	PBEnt *GetRootMoveParent() { return sub_1012c9c0(this); }
	bool IsSolid()
	{
		PBScope scope;
		scope.sub_10037300("CBaseEntity::IsSolid", this ? (m_pszName ? m_pszName : g_106b8540) : g_105387dc, g_106b8540);
		return CollisionProp()->IsSolid();
	}
	bool IsSolidFlagSet(int flags)
	{
		PBScope scope;
		scope.sub_10037300("CBaseEntity::IsSolidFlagSet", this ? (m_pszName ? m_pszName : g_106b8540) : g_105387dc, g_106b8540);
		return CollisionProp()->IsSolidFlagSet(flags);
	}
};

struct PBPusherInfo
{
	PBEnt *m_pEntity;
	Vector m_vecStartAbsOrigin;
};

struct PBPusherVec
{
	PBPusherInfo *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	int m_Size;
	PBPusherInfo *m_pElements;
	int Count() const { return m_Size; }
	PBPusherInfo &operator[](int i) { return m_pMemory[i]; }
};

struct PBPushed
{
	CUtlVector<PBPusherInfo> m_rgPusher;
};

struct PBList
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;
	int sub_1003c0e0(int elem, const int &src);
	int AddToTail(const int &src) { return sub_1003c0e0(m_size, src); }
};

struct PBFilter
{
	void *m_vptr;
	PBList m_ignoreList;
	void sub_10037950();
	void AddEntityToIgnore(PBEnt *pEntity) { m_ignoreList.AddToTail((int)pEntity); }
};

struct PBPartition
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void vfunc12(int listMask, const Vector &mins, const Vector &maxs, bool coarseTest, void *pIterator, int unk);
};
extern PBPartition *g_1070b24c;
extern int g_106bcb5c;
extern char g_104492fc[], g_104492f0[];
struct PBVecOps
{
	void sub_1003c1c0();
	void sub_1003c1e0();
};

struct PBEnum
{
	void *m_vptr;
	PBPushed *m_pPushedEntities;
	PBEnt *m_pRootHighestParent;
	PBFilter m_pushFilter;

	void CtorBody()
	{
		PBScope s;
		s.sub_10037300("CPushBlockerEnum::CPushBlockerEnum", g_106b8540, g_106b8540);
		m_pRootHighestParent = sub_1012c9c0(m_pPushedEntities->m_rgPusher[0].m_pEntity);
		++g_106bcb5c;
		for (int i = m_pPushedEntities->m_rgPusher.Count(); --i >= 0; )
			m_pushFilter.AddEntityToIgnore(m_pPushedEntities->m_rgPusher[i].m_pEntity);
	}
};

void CPhysicsPushedEntities::sub_10036fb0()
{
	ScopeTrace scope("CPhysicsPushedEntities::GenerateBlockingEntityList", g_106b8540);
	g_109f3648->EnterScope("CPhysicsPushedEntities::GenerateBlockingEntityList", 0, "Unaccounted", false);

	m_rgMoved.m_Size = 0;
	PBEnum blockerEnum;
	blockerEnum.m_vptr = g_104492fc;
	blockerEnum.m_pPushedEntities = (PBPushed *)this;
	blockerEnum.m_pushFilter.sub_10037950();
	blockerEnum.m_vptr = g_104492f0;
	blockerEnum.CtorBody();

	for (int i = m_rgPusher.m_Size; --i >= 0; ) {
		PBEnt *pPusher = (PBEnt *)m_rgPusher.m_pMemory[i].m_pEntity;
		if (!pPusher->IsSolid() || pPusher->IsSolidFlagSet(0x20))
			continue;
		Vector vecAbsMins, vecAbsMaxs;
		pPusher->CollisionProp()->WorldSpaceAABB(&vecAbsMins, &vecAbsMaxs);
		g_1070b24c->vfunc12(0x10, vecAbsMins, vecAbsMaxs, false, &blockerEnum, 0);
	}

	((PBVecOps *)&blockerEnum.m_pushFilter.m_ignoreList)->sub_1003c1c0();
	((PBVecOps *)&blockerEnum.m_pushFilter.m_ignoreList)->sub_1003c1e0();
	blockerEnum.m_pushFilter.m_ignoreList.m_pElements = blockerEnum.m_pushFilter.m_ignoreList.m_pMemory;
	((PBVecOps *)&blockerEnum.m_pushFilter.m_ignoreList)->sub_1003c1e0();
	g_109f3648->ExitScope();
}
// END FUNCTION

// FUNCTION: 0x10037300 size=0x59
#pragma inline_depth(0)
#include "ScopeTrace.h"
// TARGET: ??0ScopeTrace@@QAE@PBD00@Z
void sub_f(const char *a, const char *b, const char *c)
{
	ScopeTrace t(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10037380 size=0x25a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CPushBlockerEnum.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CGameRules.h"
#include "CPhysicsPushedEntities.h"

struct SPushHandleEntity
{
	virtual void v0();
	virtual unsigned int &GetRefEHandle();
};
struct SPushTarget : CBaseEntity
{
	char m_pad2[0x400 - sizeof(CBaseEntity)];
	int m_nPushEnumCount;
	int GetCollisionGroup() const { return m_field368; }
};
extern CGlobalEntityList g_106eb5d8;
extern int g_106bcb5c;
extern CGameRules *g_1070ba0c;
CBaseEntity *sub_1012c9c0(CBaseEntity *pEnt);

inline CBaseEntity *GetBaseEntity(unsigned int hEnt)
{
	CGlobalEntityList_Ent *pUnk = (CGlobalEntityList_Ent *)g_106eb5d8.sub_100290c0(&hEnt);
	if (pUnk)
		return pUnk->vfunc4();
	else
		return 0;
}

struct CPushBlockerEnumImpl : CPushBlockerEnum
{
	inline CBaseEntity *GetPushableEntity(SPushHandleEntity *pHandleEntity)
	{
		ScopeTrace scope("CPushBlockerEnum::GetPushableEntity", g_106b8540);
		SPushTarget *pCheck = (SPushTarget *)GetBaseEntity(pHandleEntity->GetRefEHandle());
		if (!pCheck)
			return 0;
		if (pCheck->m_nPushEnumCount == g_106bcb5c)
			return 0;
		if (!pCheck->sub_10037680())
			return 0;
		if (pCheck->vfunc94() == 8 ||
			pCheck->vfunc94() == 0 ||
			pCheck->vfunc94() == 7 ||
			pCheck->vfunc94() == 9)
			return 0;
		if (!g_1070ba0c->vfunc77((void *)pCheck->GetCollisionGroup(), ((SPushTarget *)m_pPusher)->GetCollisionGroup()))
			return 0;
		CBaseEntity *pCheckHighestParent = sub_1012c9c0(pCheck);
		if (pCheckHighestParent == m_pPusher)
			return 0;
		if (!sub_10037750(pCheck))
		{
			if (!sub_10037840(pCheck))
				return 0;
		}
		return pCheckHighestParent;
	}
};

int CPushBlockerEnum::vfunc0(CBaseEntity *pHandleEntity)
{
	ScopeTrace scope("CPushBlockerEnum::EnumElement", g_106b8540);
	CBaseEntity *pCheck = ((CPushBlockerEnumImpl *)this)->GetPushableEntity((SPushHandleEntity *)pHandleEntity);
	if (!pCheck)
		return 0;
	((SPushTarget *)pCheck)->m_nPushEnumCount = g_106bcb5c;
	((CPhysicsPushedEntities *)m_pList)->sub_10035df0(pCheck);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10037680 size=0x93
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool CBaseEntity::sub_10037680()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::IsSolid";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	bool r = *(int *)((char *)this + 0x2b0) != 0 && (*((char *)this + 0x2b4) & 4) == 0;
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10037750 size=0xb4
#include "CPushBlockerEnum.h"
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct EntSlots209 {
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7) D10(a8) D10(a9)
	D10(b0) D10(b1) D10(b2) D10(b3) D10(b4) D10(b5) D10(b6) D10(b7) D10(b8) D10(b9)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
	virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8();
	virtual CBaseEntity *f209();
};

bool CPushBlockerEnum::sub_10037750(CBaseEntity *pEnt)
{
    g_109f3620[*g_109f3680].a = "CPushBlockerEnum::IsStandingOnPusher";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    CBaseEntity *pGround = ((EntSlots209 *)pEnt)->f209();
    if ((pEnt->sub_100b3700() & 1) || pGround) {
        CPushBlockerList *pList = m_pList;
        for (int i = pList->m_nCount - 1; i >= 0; i--) {
            if (pList->m_pData[i].m_pEntity == pGround) {
                (*g_109f3680)--;
                return true;
            }
        }
    }
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10037840 size=0xc3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CPushBlockerEnum.h"
#include "CGameTrace.h"
#include "ScopeTrace.h"
#include "CUnknown1070b254.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct PushCollideView
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8)
	virtual const float *slot9(int a);
};

struct PushEntView
{
	PV(0) PV(1)
	virtual PushCollideView *slot2();
	PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18) PV10(19)
	PV10(20)
	PV(210) PV(211) PV(212) PV(213) PV(214) PV(215) PV(216)
	virtual const float *slot217();
	PV(218) PV(219)
	PV10(22)
	PV(230) PV(231) PV(232) PV(233) PV(234) PV(235) PV(236)
	virtual unsigned int slot237();
};

char CPushBlockerEnum::sub_10037840(CBaseEntity *pEnt)
{
	ScopeTrace trace("CPushBlockerEnum::IntersectsPushers", g_106b8540);
	PushEntView *e = (PushEntView *)pEnt;
	PushCollideView *pCollision = e->slot2();
	CGameTrace tr;
	g_1070b254->vfunc5(pCollision, e->slot217(), e->slot217(), pCollision->slot9(0), e->slot237(), &m_push, &tr);
	return tr.m_startsolid;
}
// END FUNCTION

// FUNCTION: 0x10037950 size=0x1a
namespace lifted {
extern char g_10449308;
}
struct CUnknown10037950 { void * sub_10037950(); };
void * CUnknown10037950::sub_10037950()
{
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 8) = 0;
    *(int *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = 0;
    *(int *)((char *)this + 0x14) = 0;
    *(int *)this = (int)&lifted::g_10449308;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10037980 size=0x26
#include "CTraceFilterAgainstEntityList.h"

// TARGET: CTraceFilterAgainstEntityList::vfunc0
bool CTraceFilterAgainstEntityList::vfunc0(void *pEntity, int contentsMask)
{
	for (int i = m_nEntities - 1; i >= 0; i--) {
		if (m_pEntities[i] == (int)pEntity)
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x100379c0 size=0x6
#include "CTraceFilterAgainstEntityList.h"
int CTraceFilterAgainstEntityList::vfunc1()
{
    return 2;
}
// END FUNCTION

// FUNCTION: 0x100379e0 size=0x1bc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CPhysicsPushedEntities.h"
#include "CUtlVector16.h"
#include "CVProfile.h"
#include "CEntityVSlots.h"
#include "utlvector.h"

struct MoveHierarchyEnt100379e0
{
	char m_pad[0x260];
	EHANDLE m_hMoveChild;
	EHANDLE m_hMovePeer;
};

static inline CBaseEntity *FirstMoveChild(CBaseEntity *pEnt)
{
	return ((MoveHierarchyEnt100379e0 *)pEnt)->m_hMoveChild.Get();
}

static inline CBaseEntity *NextMovePeer(CBaseEntity *pEnt)
{
	return ((MoveHierarchyEnt100379e0 *)pEnt)->m_hMovePeer.Get();
}

void CPhysicsPushedEntities::sub_100379e0(CBaseEntity *pParent)
{
	ScopeTrace trace("CPhysicsPushedEntities::SetupAllInHierarchy", g_106b8540, g_106b8540);
	if (!pParent)
		return;
	g_109f3648->EnterScope("CPhysicsPushedEntities::SetupAllInHierarchy", 0, "Unaccounted", false);
	CUtlVector<PusherInfo_t> &pushers = *(CUtlVector<PusherInfo_t> *)&m_rgPusher;
	int i = pushers.Count();
	((CUtlVector16 *)&m_rgPusher)->sub_1003c220(1);
	((CUtlVector16 *)&m_rgPusher)->sub_10014f8d(i, 1);
	pushers[i].m_pEntity = pParent;
	pushers[i].m_vecStartAbsOrigin = *((CEntityVSlots *)pParent)->slot217();
	for (CBaseEntity *pChild = FirstMoveChild(pParent); pChild; pChild = NextMovePeer(pChild))
		sub_1000497b(pChild);
	g_109f3648->ExitScopeInlined();
}
// END FUNCTION

// FUNCTION: 0x10037c10 size=0x1fc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsPushedEntities.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "matrix3x4_t.h"
#include "Vector.h"

void sub_10139b50(const void *a, const void *b, const void *c);

struct CPhysicsRotateInfo
{
	Vector m_vecOrigin;
	matrix3x4_t m_mat0;
	matrix3x4_t m_mat1;
	Vector m_vecAngVel;
};

struct QAngleL
{
	float x, y, z;
	QAngleL &operator+=(const QAngleL &v) { x += v.x; y += v.y; z += v.z; return *this; }
	QAngleL operator*(float fl) const { QAngleL res; res.x = x * fl; res.y = y * fl; res.z = z * fl; return res; }
};

void CPhysicsPushedEntities::sub_10037c10(CBaseEntity *pRoot, float flRotation, float *pOrigin)
{
	ScopeTrace trace("CPhysicsPushedEntities::RotateRootEntity", g_106b8540);
	g_109f3648->EnterScope("CPhysicsPushedEntities::RotateRootEntity", 0, "Unaccounted", false);

	CPhysicsRotateInfo *pInfo = (CPhysicsRotateInfo *)pOrigin;
	pInfo->m_vecAngVel = *(Vector *)pRoot->m_angVel3c8 * flRotation;

	pInfo->m_vecOrigin = *((CEntityVSlots *)pRoot)->slot217();

	sub_10139b50(((CEntityVSlots *)pRoot)->slot219(), &pInfo->m_vecOrigin, &pInfo->m_mat0);

	QAngleL angles = *(QAngleL *)((CEntityVSlots *)pRoot)->slot221();
	angles += *(QAngleL *)pRoot->m_angVel3c8 * flRotation;
	((CEntityVSlots *)pRoot)->slot64((const float *)&angles);

	sub_10139b50(((CEntityVSlots *)pRoot)->slot219(), &pInfo->m_vecOrigin, &pInfo->m_mat1);

	g_109f3648->ExitScopeInlined();
}
// END FUNCTION

// FUNCTION: 0x10037e90 size=0x248
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsPushedEntities.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "CVProfile.h"

#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)
struct E221 {
    V64(p) V64(q) V64(r) V16(u) V4(x) V4(y) V4(z)
    virtual void f0();
    virtual const float *f(); 
};

CBaseEntity *CPhysicsPushedEntities::sub_10037e90(CBaseEntity *pRoot, float flRotation)
{
    ScopeTrace trace("CPhysicsPushedEntities::PerformRotatePush", g_106b8540, g_106b8540);
    g_109f3648->EnterScope("CPhysicsPushedEntities::PerformRotatePush", 0, "Unaccounted", false);
    m_rgPusher.m_Size = 0;
    sub_1000497b(pRoot);
    Vector vecStart;
    vecStart = *(const Vector *)((E221 *)pRoot)->f();
    float origin[30];
    sub_10037c10(pRoot, flRotation, origin);
    sub_10036fb0();
    if (!sub_10036900(origin, (const float *)pRoot)) {
        CBaseEntity *pBlocked = sub_10036e50();
        pRoot->vfunc64(&vecStart.x);
        sub_10036ef0();
        g_109f3648->ExitScopeInlined();
        return pBlocked;
    }
    sub_10036d40(1, (int)origin);
    CVProfile *p = g_109f3648;
    if (!p->m_bAtRoot || p->m_enabled) {
        CVProfNode *n = p->m_pCurNode;
        if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
            CUnknownCycle100335e0 *pc = &n->m_CurFrameTime;
            sub_100335e0(pc);
            n->m_TotalTime += pc->m_Int64;
            g_109f3648->PopGroup();
        }
        if (n->m_nRecursions == 0)
            p->m_pCurNode = p->m_pCurNode->m_pParent;
        p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10038180 size=0x1f9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "vampire.h"
#include "CPhysicsPushedEntities.h"
#include "CBaseEntity.h"
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "Vector.h"
#include "CEntityVSlots.h"

struct CCycleCountLocal
{
	unsigned __int64 m_Int64;
	CCycleCountLocal() { m_Int64 = 0; }
	void Sample()
	{
		__asm
		{
			mov ecx, this
			rdtsc
			mov dword ptr [ecx], eax
			mov dword ptr [ecx + 4], edx
		}
	}
	void End()
	{
		CCycleCountLocal now;
		now.Sample();
		m_Int64 = now.m_Int64 - m_Int64;
	}
};

void CPhysicsPushedEntities::sub_10038180(CBaseEntity *pRoot, const float *pMove, float *pOut)
{
	ScopeTrace trace("CPhysicsPushedEntities::LinearlyMoveRootEntity", g_106b8540);
	g_109f3648->EnterScope("CPhysicsPushedEntities::LinearlyMoveRootEntity", 0, "Unaccounted", false);

	float flScale = *(float *)&pMove;

	Vector vecMove;
	vecMove.x = flScale * pRoot->m_vel3d4[0];
	vecMove.y = flScale * pRoot->m_vel3d4[1];
	vecMove.z = flScale * pRoot->m_vel3d4[2];

	Vector vecNew = *((CEntityVSlots *)pRoot)->slot220();
	float fx = vecMove.x;
	vecNew.x = fx + vecNew.x;
	vecNew.y += vecMove.y;
	vecNew.z += vecMove.z;
	pRoot->vfunc62(vecNew.Base());

	char flags = (char)(pRoot->m_flags268 >> 12);
	if ((flags & 1) != 0)
		pRoot->sub_100b1d10();

	*(Vector *)pOut = pRoot->m_vecVelocity3bc * flScale;

	CVProfile *pProfile = g_109f3648;
	if (!pProfile->m_bAtRoot || pProfile->m_enabled)
	{
		CVProfNode *pNode = pProfile->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0)
		{
			((CCycleCountLocal *)&pNode->m_CurFrameTime)->End();
			pNode->m_TotalTime += pNode->m_CurFrameTime.m_Int64;
			g_109f3648->PopGroup();
		}
		if (pNode->m_nRecursions == 0)
			pProfile->m_pCurNode = pProfile->m_pCurNode->m_pParent;
		pProfile->m_bAtRoot = (pProfile->m_pCurNode == pProfile->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10038400 size=0x26a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsPushedEntities.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "CVProfile.h"

#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)
struct E220 {
    V64(p) V64(q) V64(r) V16(u) V4(x) V4(y) V4(z)
    virtual const float *f();
};
struct E62 {
    V16(p) V16(q) V16(r) V4(x) V4(y) V4(z) virtual void d0(); virtual void d1();
    virtual void f(const float *v);
};

struct CycleView {
    unsigned __int64 m_Int64;
    void Sample() { __asm {
        mov ecx, this
        rdtsc
        mov [ecx], eax
        mov [ecx + 4], edx } }
    void End() { CycleView c; c.m_Int64 = 0; c.Sample(); m_Int64 = c.m_Int64 - m_Int64; }
};

inline bool ExitNode2(CVProfNode *n)
{
    if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
        ((CycleView *)&n->m_CurFrameTime)->End();
        n->m_TotalTime += n->m_CurFrameTime.m_Int64;
        g_109f3648->PopGroup();
    }
    return n->m_nRecursions == 0;
}

CBaseEntity *CPhysicsPushedEntities::sub_10038400(CBaseEntity *pRoot, const float *pMove)
{
    ScopeTrace trace("CPhysicsPushedEntities::PerformLinearPush", g_106b8540, g_106b8540);
    g_109f3648->EnterScope("CPhysicsPushedEntities::PerformLinearPush", 0, "Unaccounted", false);
    m_rgPusher.m_Size = 0;
    sub_1000497b(pRoot);
    Vector vecStart;
    vecStart = *(const Vector *)((E220 *)pRoot)->f();
    float out[3];
    sub_10038180(pRoot, pMove, out);
    sub_10036fb0();
    if (!sub_10036a20(out)) {
        CBaseEntity *pBlocked = sub_10036e50();
        ((E62 *)pRoot)->f(&vecStart.x);
        sub_10036ef0();
        g_109f3648->ExitScopeInlined();
        return pBlocked;
    }
    sub_10036d40(0, 0);
    CVProfile *p = g_109f3648;
    if (!p->m_bAtRoot || p->m_enabled) {
        if (ExitNode2(p->m_pCurNode))
            p->m_pCurNode = p->m_pCurNode->m_pParent;
        p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10038710 size=0x232
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "CPhysicsPushedEntities.h"
#include "Vector.h"

extern Vector g_1070d1b0;
extern CPhysicsPushedEntities g_106bbae4;

struct CCycleSample
{
	unsigned __int64 m_Int64;
	void Sample() { unsigned int *p = (unsigned int *)&m_Int64; __asm { mov ecx, p
		rdtsc
		mov [ecx], eax
		mov [ecx + 4], edx } }
	void Add(const CCycleSample &rhs) { m_Int64 += rhs.m_Int64; }
};

int CBaseEntity::PhysicsPushMove(float movetime)
{
	ScopeTrace trace("CBaseEntity::PhysicsPushMove", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CBaseEntity::PhysicsPushMove", 0, "Unaccounted", false);

	*(float *)((char *)this + 0x3f4) += movetime;

	if (*(Vector *)m_vel3d4 == g_1070d1b0)
	{
		g_109f3648->ExitScope();
		return 0;
	}

	int pBlocker = (int)g_106bbae4.sub_10038400(this, *(const float **)&movetime);
	if (pBlocker)
		*(float *)((char *)this + 0x3f4) -= movetime;

	CVProfile *p = g_109f3648;
	if (!p->m_bAtRoot || p->m_enabled) {
		CVProfNode *n = p->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleSample s;
			s.m_Int64 = 0;
			s.Sample();
			n->m_CurFrameTime.m_Int64 = s.m_Int64 - n->m_CurFrameTime.m_Int64;
			((CCycleSample *)&n->m_TotalTime)->Add(*(CCycleSample *)&n->m_CurFrameTime);
			g_109f3648->PopGroup();
		}
		if (n->m_nRecursions == 0)
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
	return pBlocker;
}
// END FUNCTION

// FUNCTION: 0x100389e0 size=0x235
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CPhysicsPushedEntities.h"
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "Vector.h"

extern CPhysicsPushedEntities g_106bbae4;
extern Vector g_1070d9d0;

struct CycleCount
{
	unsigned __int64 m_Int64;
	CycleCount() : m_Int64(0) {}
	void Sample()
	{
		unsigned int *p = (unsigned int *)&m_Int64;
		__asm {
			mov ecx, p
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		CycleCount now;
		now.Sample();
		m_Int64 = now.m_Int64 - m_Int64;
	}
	void Add(const CycleCount &r)
	{
		m_Int64 += r.m_Int64;
	}
};

// TARGET: CBaseEntity::vfunc239
bool CBaseEntity::vfunc239(float flDelta)
{
	ScopeTrace trace("CBaseEntity::PhysicsPushRotate",
		this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	g_109f3648->EnterScope("CBaseEntity::PhysicsPushRotate", 0, "Unaccounted", false);

	*(float *)((char *)this + 0x3f4) += flDelta;

	if (g_1070d9d0.x == m_angVel3c8[0]
		&& g_1070d9d0.y == m_angVel3c8[1]
		&& g_1070d9d0.z == m_angVel3c8[2]) {
		g_109f3648->ExitScope();
		return false;
	}

	CBaseEntity *pBlocker = g_106bbae4.sub_10037e90(this, flDelta);
	if (pBlocker)
		*(float *)((char *)this + 0x3f4) -= flDelta;
	bool b = pBlocker != 0;

	CVProfile *prof = g_109f3648;
	if (!prof->m_bAtRoot || prof->m_enabled) {
		CVProfNode *node = prof->m_pCurNode;
		if (--node->m_nRecursions == 0 && node->m_nCurFrameCalls != 0) {
			((CycleCount *)&node->m_CurFrameTime)->End();
			((CycleCount *)&node->m_TotalTime)->Add(*(CycleCount *)&node->m_CurFrameTime);
			g_109f3648->PopGroup();
		}
		if (node->m_nRecursions == 0)
			prof->m_pCurNode = prof->m_pCurNode->m_pParent;
		prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot);
	}
	return b;
}
// END FUNCTION

// FUNCTION: 0x10038cb0 size=0x429
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
#include "CVProfile.h"
#include "globalvars.h"
#include "CEntityVSlots.h"

extern float g_104454c4;

struct CPhysObj46
{
	virtual void v0() {} virtual void v1() {} virtual void v2() {} virtual void v3() {} virtual void v4() {}
	virtual void v5() {} virtual void v6() {} virtual void v7() {} virtual void v8() {} virtual void v9() {}
	virtual void v10() {} virtual void v11() {} virtual void v12() {} virtual void v13() {} virtual void v14() {}
	virtual void v15() {} virtual void v16() {} virtual void v17() {} virtual void v18() {} virtual void v19() {}
	virtual void v20() {} virtual void v21() {} virtual void v22() {} virtual void v23() {} virtual void v24() {}
	virtual void v25() {} virtual void v26() {} virtual void v27() {} virtual void v28() {} virtual void v29() {}
	virtual void v30() {} virtual void v31() {} virtual void v32() {} virtual void v33() {} virtual void v34() {}
	virtual void v35() {} virtual void v36() {} virtual void v37() {} virtual void v38() {} virtual void v39() {}
	virtual void v40() {} virtual void v41() {} virtual void v42() {} virtual void v43() {} virtual void v44() {}
	virtual void v45() {}
	virtual void vfunc46(Vector *a, Vector *b, int c, float d) {}
};

struct CCycleNow
{
	unsigned __int64 m_Int64;
	CCycleNow() { m_Int64 = 0; }
	void Sample()
	{
		unsigned __int64 *pc = &m_Int64;
		__asm {
			mov ecx, pc
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

struct CBaseEntityView239
{
	char pad[0x3f4];
	float m_f3f4;
	char pad2[4];
	float m_f3fc;
};

inline void ExitScopeSampled(CVProfile *p)
{
	if (!p->m_bAtRoot || p->m_enabled) {
		CVProfNode *n = p->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleNow now;
			now.Sample();
			CUnknownCycle100335e0 *pc = &n->m_CurFrameTime;
			pc->m_Int64 = now.m_Int64 - pc->m_Int64;
			n->m_TotalTime += pc->m_Int64;
			g_109f3648->PopGroup();
		}
		if (n->m_nRecursions == 0)
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
}

void CBaseEntity::sub_10038cb0()
{
	ScopeTrace trace("CBaseEntity::PhysicsPusher", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CBaseEntity_PhysicsPusher", 0, "Unaccounted", false);
	if (!sub_10033f60(0)) {
		g_109f3648->ExitScopeCall();
		return;
	}
	CBaseEntityView239 *v = (CBaseEntityView239 *)this;
	CEntityVSlots *s = (CEntityVSlots *)this;
	float movetime;
	if (gpGlobals->frametime + v->m_f3f4 > v->m_f3fc) {
		movetime = v->m_f3fc - v->m_f3f4;
		if (movetime < g_104454c4)
			*(int *)&movetime = 0;
	} else {
		movetime = gpGlobals->frametime;
	}
	CPhysObj46 *pPhys = (CPhysObj46 *)m_obj36c;
	if (movetime != g_104454c4) {
		movetime = s->slot135(movetime);
		if (m_angVel3c8[0] == g_104454c4 && m_angVel3c8[1] == g_104454c4 && m_angVel3c8[2] == g_104454c4) {
			PhysicsPushMove(movetime);
		} else {
			char flags = (char)(m_flags268 >> 12);
			if ((flags & 1) != 0)
				sub_100b1d10();
			if (m_vecVelocity3bc.x == g_104454c4) {
				flags = (char)(m_flags268 >> 12);
				if ((flags & 1) != 0)
					sub_100b1d10();
				if (m_vecVelocity3bc.y == g_104454c4) {
					flags = (char)(m_flags268 >> 12);
					if ((flags & 1) != 0)
						sub_100b1d10();
					if (m_vecVelocity3bc.z == g_104454c4) {
						s->slot239(movetime);
						goto check;
					}
				}
			}
			if (s->slot239(movetime)) {
				float old = v->m_f3f4;
				v->m_f3f4 = m_flStartFrameLocalTime;
				PhysicsPushMove(movetime);
				if (v->m_f3f4 < old)
					v->m_f3f4 = old;
			}
		}
check:
		if (pPhys)
			pPhys->vfunc46(s->slot217(), s->slot219(), 0, movetime);
	}
	if (pPhys) {
		g_109f3648->ExitScopeInlined();
		return;
	}
	if (v->m_f3fc <= v->m_f3f4 && v->m_f3fc > g_104454c4) {
		*(int *)&v->m_f3fc = 0;
		vfunc133();
	}
	ExitScopeSampled(g_109f3648);
}
// END FUNCTION

// FUNCTION: 0x100391f0 size=0x1f3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CVProfile.h"
#include "ScopeTrace.h"

struct CCycleSample
{
	unsigned __int64 m_Int64;
	void Sample() { unsigned int *p = (unsigned int *)&m_Int64; __asm { mov ecx, p
		rdtsc
		mov [ecx], eax
		mov [ecx + 4], edx } }
	void Add(const CCycleSample &rhs) { m_Int64 += rhs.m_Int64; }
};

// TARGET: CBaseEntity::sub_100391f0
void CBaseEntity::sub_100391f0()
{
	ScopeTrace trace("CBaseEntity::PhysicsNone", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot) {
		if (p->m_pCurNode->m_pszName != "CBaseEntity_PhysicsNone")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CBaseEntity_PhysicsNone", 0, "Unaccounted");
		CVProfNode *n = p->m_pCurNode;
		n->m_nCurFrameCalls++;
		if (n->m_nRecursions++ == 0) {
			((CCycleSample *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroupInlined(n->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}
	sub_10033f60(0);
	p = g_109f3648;
	if (!p->m_bAtRoot || p->m_enabled) {
		CVProfNode *n = p->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleSample s;
			s.m_Int64 = 0;
			s.Sample();
			n->m_CurFrameTime.m_Int64 = s.m_Int64 - n->m_CurFrameTime.m_Int64;
			((CCycleSample *)&n->m_TotalTime)->Add(*(CCycleSample *)&n->m_CurFrameTime);
			g_109f3648->PopGroup();
		}
		if (n->m_nRecursions == 0)
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10039470 size=0x29a
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
#include "CVProfile.h"
#include "ScopeTrace.h"
struct FollowName { virtual void n0(); virtual void n1(); virtual void n2(); virtual void n3(); virtual void n4(); virtual const char *n5(); };
struct FollowHolder { virtual void h0(); virtual void h1(); virtual void h2(); virtual FollowName *h3(); };
struct FollowEdict { char pad[0x40]; FollowHolder *m_pHolder; };
extern void (*g_109f3658)(int level, const char *pszFormat, ...);
extern void (__fastcall *g_109f365c)(void *pProfile);
void CBaseEntity::sub_10039470()
{
	ScopeTrace trace("CBaseEntity::PhysicsFollow", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CBaseEntity_PhysicsFollow", 0, "Unaccounted", false);
	if (!sub_10033f60(0)) { g_109f365c(g_109f3648); return; }
	if (m_hAimEnt37c.Get()) {
		CEntityVSlots *pThis = (CEntityVSlots *)this;
		pThis->slot216(((CEntityVSlots *)m_hAimEnt37c.Get())->slot217());
		pThis->slot218(((CEntityVSlots *)m_hAimEnt37c.Get())->slot219());
		sub_100a53d0(0);
		g_109f3648->ExitScopeInlined();
		return;
	}
	const char *pszName;
	FollowEdict *pEdict = (FollowEdict *)m_pEdict2e0;
	if (!pEdict->m_pHolder) pszName = g_106b8540;
	else pszName = pEdict->m_pHolder->h3()->n5();
	g_109f3658(2, "%s movetype FOLLOW with NULL aiment\n", pszName);
	vfunc93(0, 0);
	g_109f3648->ExitScope();
}
// END FUNCTION

// FUNCTION: 0x100397c0 size=0x255
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
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "globalvars.h"

void sub_10139500(float *, float, const Vector *, Vector *);

struct CEntSlots216 {
	CBP_V100(xa) CBP_V100(xb) CBP_V10(xc0)
	CBP_V1(xd0) CBP_V1(xd1) CBP_V1(xd2) CBP_V1(xd3) CBP_V1(xd4) CBP_V1(xd5)
	virtual void vfunc216(Vector *pOut);
	virtual float *vfunc217();
};

struct CCycleCountV {
	unsigned __int64 m_Int64;
	CCycleCountV() { m_Int64 = 0; }
	void Sample() {
		unsigned int *pSt = (unsigned int *)&m_Int64;
		__asm {
			mov ecx, pSt
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End() {
		CCycleCountV stamp;
		stamp.Sample();
		m_Int64 = stamp.m_Int64 - m_Int64;
	}
	void Add(const CCycleCountV &r) { m_Int64 += r.m_Int64; }
};

struct CVProfNodeV {
	char m_pad[8];
	CCycleCountV m_CurFrameTime;
	int m_nRecursions;
	int m_nCurFrameCalls;
	CCycleCountV m_TotalTime;
	char m_pad2[0x48 - 0x20];
	CVProfNodeV *m_pParent;
	bool Exit() {
		if (--m_nRecursions == 0 && m_nCurFrameCalls != 0) {
			m_CurFrameTime.End();
			m_TotalTime.Add(m_CurFrameTime);
			g_109f3648->PopGroup();
		}
		return m_nRecursions == 0;
	}
};

void CBaseEntity::sub_100397c0()
{
	ScopeTrace trace("CBaseEntity::PhysicsNoclip", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot) {
		if (p->m_pCurNode->m_pszName != "CBaseEntity::PhysicsNoclip")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CBaseEntity::PhysicsNoclip", 0, "Unaccounted");
		p->m_pCurNode->EnterScope();
		p->m_bAtRoot = false;
	}
	if (!sub_10033f60(0)) {
		g_109f3648->ExitScope();
		return;
	}
	sub_1003f810(gpGlobals->frametime);
	unsigned char bAttached = (unsigned char)((m_flags268 >> 12) & 1);
	if (bAttached)
		sub_100b1d10();
	Vector v;
	sub_10139500(((CEntSlots216 *)this)->vfunc217(), gpGlobals->frametime, &m_vecVelocity3bc, &v);
	((CEntSlots216 *)this)->vfunc216(&v);
	CVProfile *q = g_109f3648;
	if (!q->m_bAtRoot || q->m_enabled) {
		if (((CVProfNodeV *)q->m_pCurNode)->Exit())
			q->m_pCurNode = q->m_pCurNode->m_pParent;
		q->m_bAtRoot = (q->m_pCurNode == q->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10039ac0 size=0x415
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
#include "CVProfile.h"
#include "globalvars.h"
#include "CEntityVSlots.h"

extern float g_104454c4;

struct CPhysObj46
{
	virtual void v0() {} virtual void v1() {} virtual void v2() {} virtual void v3() {} virtual void v4() {}
	virtual void v5() {} virtual void v6() {} virtual void v7() {} virtual void v8() {} virtual void v9() {}
	virtual void v10() {} virtual void v11() {} virtual void v12() {} virtual void v13() {} virtual void v14() {}
	virtual void v15() {} virtual void v16() {} virtual void v17() {} virtual void v18() {} virtual void v19() {}
	virtual void v20() {} virtual void v21() {} virtual void v22() {} virtual void v23() {} virtual void v24() {}
	virtual void v25() {} virtual void v26() {} virtual void v27() {} virtual void v28() {} virtual void v29() {}
	virtual void v30() {} virtual void v31() {} virtual void v32() {} virtual void v33() {} virtual void v34() {}
	virtual void v35() {} virtual void v36() {} virtual void v37() {} virtual void v38() {} virtual void v39() {}
	virtual void v40() {} virtual void v41() {} virtual void v42() {} virtual void v43() {} virtual void v44() {}
	virtual void v45() {}
	virtual void vfunc46(Vector *a, Vector *b, int c, float d) {}
};

struct CCycleNow
{
	unsigned __int64 m_Int64;
	CCycleNow() { m_Int64 = 0; }
	void Sample()
	{
		unsigned __int64 *pc = &m_Int64;
		__asm {
			mov ecx, pc
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

struct CBaseEntityView239
{
	char pad[0x3f4];
	float m_f3f4;
	char pad2[4];
	float m_f3fc;
};

inline void ExitScopeSampled(CVProfile *p)
{
	if (!p->m_bAtRoot || p->m_enabled) {
		CVProfNode *n = p->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleNow now;
			now.Sample();
			CUnknownCycle100335e0 *pc = &n->m_CurFrameTime;
			pc->m_Int64 = now.m_Int64 - pc->m_Int64;
			n->m_TotalTime += pc->m_Int64;
			g_109f3648->PopGroup();
		}
		if (n->m_nRecursions == 0)
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
}

void CBaseEntity::sub_10039ac0()
{
	ScopeTrace trace("CBaseEntity::PhysicsParent", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CBaseEntity_PhysicsParent", 0, "Unaccounted", false);
	if (!sub_10033f60(0)) {
		g_109f3648->ExitScopeCall();
		return;
	}
	CBaseEntityView239 *v = (CBaseEntityView239 *)this;
	CEntityVSlots *s = (CEntityVSlots *)this;
	*(int *)&m_flStartFrameLocalTime = *(int *)&v->m_f3f4;
	float movetime;
	if (gpGlobals->frametime + v->m_f3f4 > v->m_f3fc) {
		movetime = v->m_f3fc - v->m_f3f4;
		if (movetime < g_104454c4)
			goto done;
	} else {
		movetime = gpGlobals->frametime;
	}
	if (movetime != g_104454c4) {
		movetime = s->slot135(movetime);
		if (m_angVel3c8[0] == g_104454c4 && m_angVel3c8[1] == g_104454c4 && m_angVel3c8[2] == g_104454c4) {
			PhysicsPushMove(movetime);
		} else {
			char flags = (char)(m_flags268 >> 12);
			if ((flags & 1) != 0)
				sub_100b1d10();
			if (m_vecVelocity3bc.x == g_104454c4) {
				flags = (char)(m_flags268 >> 12);
				if ((flags & 1) != 0)
					sub_100b1d10();
				if (m_vecVelocity3bc.y == g_104454c4) {
					flags = (char)(m_flags268 >> 12);
					if ((flags & 1) != 0)
						sub_100b1d10();
					if (m_vecVelocity3bc.z == g_104454c4) {
						s->slot239(movetime);
						goto check;
					}
				}
			}
			if (s->slot239(movetime)) {
				float old = v->m_f3f4;
				v->m_f3f4 = m_flStartFrameLocalTime;
				PhysicsPushMove(movetime);
				if (v->m_f3f4 < old)
					v->m_f3f4 = old;
			}
		}
check:
		CPhysObj46 *pPhys = (CPhysObj46 *)m_obj36c;
		if (pPhys) {
			pPhys->vfunc46(s->slot217(), s->slot219(), 0, movetime);
			g_109f3648->ExitScopeInlined();
			return;
		}
	}
done:
	if (v->m_f3fc <= v->m_f3f4) {
		*(int *)&v->m_f3fc = 0;
		vfunc133();
	}
	ExitScopeSampled(g_109f3648);
}
// END FUNCTION

// FUNCTION: 0x10039ff0 size=0x71
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::vfunc238(Vector *a, Vector *b, int c, int d)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::PerformCustomPhysics";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1003a090 size=0x3e5
#include "CWeaponThrown_Grenade_Frag.h"
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
#include "CVProfile.h"
#include "ScopeTrace.h"
#include "CGameTrace.h"
#include "CUnknown100353c0.h"

extern Vector g_1070d1b0;
extern float g_104454c4;

struct PhysCustomView
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5)
	EVS(60) EVS(61) EVS(62) EVS(63)
	virtual void slot64(const float *pAngles);
	EVS(65) EVS(66) EVS(67) EVS(68) EVS(69)
	EVS10(7) EVS10(8) EVS10(9) EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS(200) EVS(201) EVS(202) EVS(203) EVS(204) EVS(205) EVS(206) EVS(207) EVS(208)
	virtual CEntityVSlots *slot209();
	EVS(210) EVS(211) EVS(212) EVS(213) EVS(214) EVS(215) EVS(216) EVS(217) EVS(218) EVS(219)
	virtual Vector *slot220();
	virtual Vector *slot221();
	EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS(230) EVS(231) EVS(232) EVS(233)
	virtual void *slot234(void *pResult, const Vector *pDelta);
	EVS(235) EVS(236) EVS(237)
	virtual void slot238(Vector *pPos, Vector *pVel, Vector *pAng, Vector *pAngVel);
};

struct CTraceCopy : CUnknown100353c0
{
	float m_f38;
	const char *m_p3c;
	int m_d40;
	int m_d44;
	short m_w48;
	int m_p4c;
	int m_d50;

	CTraceCopy(const CTraceCopy &o)
	{
		sub_100353c0(&o);
		m_f38 = o.m_f38;
		m_p3c = o.m_p3c;
		m_d40 = o.m_d40;
		m_d44 = o.m_d44;
		m_w48 = o.m_w48;
		m_p4c = o.m_p4c;
		m_d50 = o.m_d50;
	}
};

// TARGET: CBaseEntity::sub_1003a090
void CBaseEntity::sub_1003a090()
{
	ScopeTrace trace("CBaseEntity::PhysicsCustom", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CBaseEntity_PhysicsCustom", 0, "Unaccounted", false);
	sub_1003e880();
	if (!sub_10033f60(0))
	{
		g_109f3648->ExitScopeCall();
		return;
	}
	if ((unsigned char)(m_flags268 >> 12) & 1)
		sub_100b1d10();
	PhysCustomView *v = (PhysCustomView *)this;
	if (m_vecVelocity3bc.z > g_104454c4 || !v->slot209() || (((CBaseEntity *)v->slot209())->sub_100b3700() & 0x8002080))
		sub_100b3640(1);
	Vector vecNewPosition = *v->slot220();
	if ((unsigned char)(m_flags268 >> 12) & 1)
		sub_100b1d10();
	Vector vecNewVelocity = m_vecVelocity3bc;
	Vector angNewAngles = *v->slot221();
	Vector angNewAngVelocity = *(Vector *)m_angVel3c8;
	v->slot238(&vecNewPosition, &vecNewVelocity, &angNewAngles, &angNewAngVelocity);
	sub_100b2770(vecNewVelocity);
	v->slot64((const float *)&angNewAngles);
	*(Vector *)m_angVel3c8 = angNewAngVelocity;
	Vector move;
	VectorSubtract(vecNewPosition, *v->slot220(), move);
	char tmp[0x54];
	CTraceCopy tr = *(CTraceCopy *)v->slot234(tmp, &move);
	sub_1003eb50();
	if (((char *)&tr)[0x36])
	{
		sub_100b2770(g_1070d1b0);
		*(Vector *)m_angVel3c8 = *(Vector *)g_1070d9d0;
		g_109f3648->ExitScopeCall();
		return;
	}
	if (*(char *)(m_pEdict2e0 + 0x4c))
	{
		g_109f3648->ExitScope();
		return;
	}
	sub_1003f4d0();
	g_109f3648->ExitScopeInlined();
}
// END FUNCTION

// FUNCTION: 0x1003a580 size=0xa
#include "ConVar.h"
ConVar g_106bbb10("sv_teststepsimulation", "1", 0);
// END FUNCTION

// FUNCTION: 0x1003a610 size=0x531
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CPhysObjSlots.h"
#include "CCollisionProperty.h"
#include "CGameTrace.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "CEHandleGet.h"
#include "PhysicsTrace.h"

extern float g_1070d9d0[];
extern float g_104454c4;

struct CDevFlagView
{
	virtual void v0();
	virtual char v1();
	char m_pad[0x28];
	int m_n2c;
};
extern CDevFlagView *g_106bbaa4;

struct CCycleSample
{
	unsigned __int64 m_Int64;
	CCycleSample() { m_Int64 = 0; }
	void Sample()
	{
		unsigned int *p = (unsigned int *)&m_Int64;
		__asm
		{
			mov ecx, p
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

static inline void PopGroupV2(CVProfile *p)
{
	--p->m_nGroupStackDepth;
	int nNew = p->m_GroupIDStack[p->m_nGroupStackDepth];
	int nOld = p->m_GroupIDStack[p->m_nGroupStackDepth + 1];
	if (nNew != nOld && p->m_bVTuneGroupsEnabled && nOld == p->m_nVTuneGroupID)
		vtune(false);
}

#define ENT ((CEntityVSlots *)this)

void CBaseEntity::sub_1003a610()
{
	ScopeTrace scope("CBaseEntity::PhysicsStepTroika", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	g_109f3648->EnterScope("CBaseEntity_PhysicsStepTroika", 0, "Unaccounted", false);

	CAI_BaseNPCTroika *pNPC = m_pNPC98;
	sub_10033f60(2);

	float flNextThink = m_flNextThink;
	float flTimeStep = flNextThink - gpGlobals->curtime;

	if (!(flNextThink <= g_104454c4))
	{
		if (!(flTimeStep > 0.5))
		{
			if (!(flTimeStep > gpGlobals->frametime))
			{
				Vector vecOldOrigin = *ENT->slot217();
				float flNPCNext = pNPC->m_f6248;
				if (flNPCNext - gpGlobals->curtime > gpGlobals->frametime)
				{
					sub_10033f60(1);
					if (m_obj36c)
					{
						if (vecOldOrigin != *ENT->slot217())
						{
							if (m_obj36c)
							{
								ScopeTrace scope2("VPhysicsGetObject()->UpdateShadow", g_106b8540, g_106b8540);
								CPhysObjSlots *pPhysics = (CPhysObjSlots *)m_obj36c;
								pPhysics->slot46((const float *)ENT->slot217(), g_1070d9d0, ((unsigned int)sub_100b3700() >> 10) & 1, flTimeStep);
							}
						}
					}
					g_109f3648->ExitScopeCall();
					return;
				}

				if (!g_106bbaa4->v1() && g_106bbaa4->m_n2c && m_obj36c && !EHandle_Get(m_hTouch254))
				{
					Vector vecPhysics;
					((CPhysObjSlots *)m_obj36c)->slot47(&vecPhysics, (Vector *)0);
					Vector vecDelta = *ENT->slot217() - vecPhysics;
					if (vecDelta.LengthSqr() < 1.0f)
					{
						CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
						float *pMaxs = pCollision->vfunc2();
						float *pMins = pCollision->vfunc1();
						CGameTrace trace;
						sub_10035030(this, (const Vector *)ENT->slot217(), (const Vector *)ENT->slot217(), (const Vector *)pMins, (const Vector *)pMaxs, ENT->slot237(), &trace);
						if (trace.m_startsolid)
						{
							ENT->slot216(&vecPhysics);
							sub_100a53d0(0);
						}
					}
					else
					{
						ENT->slot216(&vecPhysics);
						sub_100a53d0(0);
					}
				}

				if (flNPCNext < gpGlobals->curtime)
					flNPCNext = gpGlobals->curtime;
				sub_1003b190(flNPCNext - ((CEntityVSlots *)pNPC)->slot413());
				sub_10033f60(1);
				sub_1003f4d0();
				if (m_obj36c && vecOldOrigin != *ENT->slot217())
				{
					CPhysObjSlots *pPhysics = (CPhysObjSlots *)m_obj36c;
					pPhysics->slot46((const float *)ENT->slot217(), g_1070d9d0, ((unsigned int)sub_100b3700() >> 10) & 1, flTimeStep);
				}

				CVProfile *pProfile = g_109f3648;
				if (!pProfile->m_bAtRoot || pProfile->m_enabled)
				{
					CVProfNode *pNode = pProfile->m_pCurNode;
					if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0)
					{
						CCycleSample sample;
						sample.Sample();
						CUnknownCycle100335e0 *pc = &pNode->m_CurFrameTime;
						pc->m_Int64 = sample.m_Int64 - pc->m_Int64;
						pNode->m_TotalTime += pc->m_Int64;
						PopGroupV2(g_109f3648);
					}
					if (pNode->m_nRecursions == 0)
						pProfile->m_pCurNode = pProfile->m_pCurNode->m_pParent;
					pProfile->m_bAtRoot = (pProfile->m_pCurNode == pProfile->m_pRoot);
				}
				return;
			}
			goto EXIT;
		}
		else
		{
			if (((CEntityVSlots *)pNPC)->slot158())
				goto EXIT;
			goto RESET;
		}
	}
	else
	{
		goto RESET;
	}
RESET:
	sub_1003b190(gpGlobals->frametime);
	sub_1003f4d0();
	*(int *)((char *)this + 0x178) = *(int *)&gpGlobals->curtime;
EXIT:
	g_109f3648->ExitScopeCall();
	return;
}
// END FUNCTION

// FUNCTION: 0x1003aca0 size=0x3ee
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
#include "CGameTrace.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "globalvars.h"
#include "Vector.h"
struct CVarV2 { virtual void v0(); virtual char vfunc1(); int pad4[10]; int m2c; };
struct CCollV { virtual void v0(); virtual int vfunc1(); virtual int vfunc2(); };
struct CPOV {
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS(40) EVS(41) EVS(42) EVS(43) EVS(44) EVS(45)
	virtual void slot46(Vector *pOrigin, void *pAngles, bool flag, float dt);
	virtual void slot47(Vector *pOut, int a);
};
extern CVarV2 *g_106bbaa4;
struct ELV { int sub_100290c0(void *h); };
extern ELV *g_10566458;
extern char g_1070d9d0[];
extern float g_104454c4;
void sub_10035030(void *a, void *b, void *c, int d, int e, int f, void *g);
struct CCycleSample {
	unsigned __int64 m_Int64;
	void Sample() { unsigned int *p = (unsigned int *)&m_Int64; __asm { mov ecx, p
		rdtsc
		mov [ecx], eax
		mov [ecx + 4], edx } }
};
struct EV : CBaseEntity {
	void sub_1003aca0();
	void sub_1003a610(); void sub_1003f4d0(); void sub_1003b190(float f); float sub_100ac720(int a);
};
#define M(T,off) (*(T*)((char*)this+off))
// TARGET: EV::sub_1003aca0
void EV::sub_1003aca0()
{
	CEntityVSlots *me = (CEntityVSlots *)this;
	const char *nm;
	if (this) { nm = M(const char *,0x26c); if (!nm) nm = g_106b8540; } else nm = g_105387dc;
	ScopeTrace scope("CBaseEntity::PhysicsStep", nm);
	g_109f3648->EnterScope("CBaseEntity_PhysicsStep", 0, "Unaccounted", false);
	if (M(int,0x98)) {
		sub_1003a610();
		g_109f3648->ExitScopeCall();
		return;
	}
	sub_10033f60(2);
	float t = M(float,0x17c);
	float dt = t - gpGlobals->curtime;
	if (t <= g_104454c4 || dt > 0.5) {
		sub_1003b190(gpGlobals->frametime);
		sub_1003f4d0();
		M(float,0x178) = gpGlobals->curtime;
		g_109f3648->ExitScopeCall();
		return;
	}
	if (dt > gpGlobals->frametime) {
		g_109f3648->ExitScopeCall();
		return;
	}
	Vector vOld = *me->slot217();
	Vector v;
	CPOV *po;
	if (!g_106bbaa4->vfunc1() && g_106bbaa4->m2c && (po = M(CPOV *,0x36c)) && !g_10566458->sub_100290c0(&M(char,0x254))) {
		po->slot47(&v, 0);
		Vector *o = me->slot217();
		float dx = o->x - v.x, dy = o->y - v.y, dz = o->z - v.z;
		if (dx * dx + dy * dy + dz * dz < 1.0f) {
			CGameTrace tr;
			CCollV *c = &M(CCollV,0x270);
			int a2 = c->vfunc2();
			int a1 = c->vfunc1();
			sub_10035030(this, me->slot217(), me->slot217(), a1, a2, me->slot237(), &tr);
			if (tr.m_startsolid) {
				me->slot216(&v);
				sub_100a53d0(0);
			}
		} else {
			me->slot216(&v);
			sub_100a53d0(0);
		}
	}
	if (t < gpGlobals->curtime) t = gpGlobals->curtime;
	sub_1003b190(t - sub_100ac720(0));
	sub_10033f60(1);
	sub_1003f4d0();
	if (M(void *,0x36c)) {
		Vector *o = me->slot217();
		if (o->x != vOld.x || o->y != vOld.y || o->z != vOld.z) {
			CPOV *po2 = M(CPOV *,0x36c);
			po2->slot46(me->slot217(), g_1070d9d0, ((unsigned)sub_100b3700() >> 10) & 1, dt);
		}
	}
	CVProfile *prof = g_109f3648;
	if (!prof->m_bAtRoot || prof->m_enabled) {
		CVProfNode *n = prof->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleSample s;
			s.m_Int64 = 0;
			s.Sample();
			CUnknownCycle100335e0 *pc = &n->m_CurFrameTime;
			pc->m_Int64 = s.m_Int64 - pc->m_Int64;
			n->m_TotalTime += pc->m_Int64;
			g_109f3648->PopGroup();
		}
		if (n->m_nRecursions == 0)
			prof->m_pCurNode = prof->m_pCurNode->m_pParent;
		prof->m_bAtRoot = prof->m_pCurNode == prof->m_pRoot;
	}
}
// END FUNCTION

// FUNCTION: 0x1003b190 size=0x552
#include "CTraceFilterNoCharacterCollide.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFuncBrush.h"
#include "ScopeTrace.h"
#include "ConVar.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "CCollisionProperty.h"
#include "Vector.h"

struct CBaseEntityPhysView_1003b190
{
	char m_pad0000[0x3b0];
	Vector m_vecBase3b0;
	Vector m_vecVel3bc;
	char m_pad03c8[0x3e0 - 0x3c8];
	int m_nWaterLevel3e0;
	char m_pad03e4[0x3f0 - 0x3e4];
	float m_flFriction3f0;
	float GetFriction() { return m_flFriction3f0; }
};
extern ConVar *g_109ef2d4;
extern Vector g_1070d1b0;
extern float g_104454c4;
void sub_10146570(const Vector *a, const Vector *b, int r, int g, int bl, int c, float d);

static inline bool IsEFlagBit12(unsigned int f)
{
	return ((f >> 12) & 1) != 0;
}

// TARGET: CBaseEntity::sub_1003b190
void CBaseEntity::sub_1003b190(float flTimeStepSize)
{
	ScopeTrace scope("CBaseEntity::PhysicsStepRunTimestep", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseEntityPhysView_1003b190 *v = (CBaseEntityPhysView_1003b190 *)this;
	CFuncBrushVt *vt = (CFuncBrushVt *)this;
	int mask = vt->slot237();
	sub_1003eb50();
	bool bOnGround = (sub_100b3700() & 1) != 0;
	bool bWasInWater = PhysicsCheckWater();
	bool bDidHalfGravity = false;
	if (!bOnGround && !(sub_100b3700() & 0x400) && (!(sub_100b3700() & 0x800) || v->m_nWaterLevel3e0 <= 0))
	{
		if (IsEFlagBit12(m_flags268))
			sub_100b1d10();
		g_109ef2d4->vfunc1();
		if (!bWasInWater)
		{
			sub_10035490(flTimeStepSize);
			bDidHalfGravity = true;
		}
	}
	if (!(sub_100b3700() & 0x200000))
	{
		if (IsEFlagBit12(m_flags268))
			sub_100b1d10();
		if (!(v->m_vecVel3bc.sub_1003b850(g_1070d1b0) && v->m_vecBase3b0.sub_1003b850(g_1070d1b0)))
		{
			if (IsEFlagBit12(m_flags268))
				sub_100b1d10();
			Vector vecAbsVelocity = v->m_vecVel3bc;
			vt->slot208(0);
			if (bOnGround)
			{
				float speed = vecAbsVelocity.Length();
				if (speed != g_104454c4)
				{
					float friction = (g_109eefbc->vfunc1() ? g_104454c4 : g_109eefbc->m_fValue) * v->GetFriction();
					float stop = g_109ef16c->vfunc1() ? g_104454c4 : g_109ef16c->m_fValue;
					float control = speed < stop ? (g_109ef16c->vfunc1() ? g_104454c4 : g_109ef16c->m_fValue) : speed;
					float newspeed = speed - control * friction * flTimeStepSize;
					if (newspeed < g_104454c4)
						newspeed = g_104454c4;
					newspeed /= speed;
					vecAbsVelocity.x *= newspeed;
					vecAbsVelocity.y *= newspeed;
				}
			}
			vecAbsVelocity += v->m_vecBase3b0;
			sub_100b2770(vecAbsVelocity);
			sub_1003f810(flTimeStepSize);
			sub_1003eb50();
			sub_10034590(flTimeStepSize, 0);
			sub_1003eb50();
			if (IsEFlagBit12(m_flags268))
				sub_100b1d10();
			vecAbsVelocity = v->m_vecVel3bc;
			vecAbsVelocity -= v->m_vecBase3b0;
			sub_100b2770(vecAbsVelocity);
			sub_1003eb50();
			CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
			float *pMins = pColl->vfunc1();
			float *pOrg = vt->slot217();
			Vector lo, hi;
			lo.x = pMins[0];
			lo.x += pOrg[0];
			lo.y = pOrg[1] + pMins[1];
			lo.z = pOrg[2] + pMins[2];
			float *pMaxs = pColl->vfunc2();
			pOrg = vt->slot217();
			hi.x = pOrg[0] + pMaxs[0];
			hi.y = pOrg[1];
			hi.y += pMaxs[1];
			Vector vecTop;
			vecTop.z = lo.z - 1.0f;
			for (int i = 0; i <= 1; i++)
			{
				if (sub_100b3700() & 1)
					break;
				for (int j = 0; j <= 1; j++)
				{
					Ray_t ray;
					float fx = i ? hi.x : lo.x;
					float fy = j ? hi.y : lo.y;
					ray.m_Delta[0] = 0;
					ray.m_Delta[1] = 0;
					ray.m_Delta[2] = 0;
					ray.m_IsSwept = false;
					ray.m_StartOffset[0] = ray.m_StartOffset[1] = ray.m_StartOffset[2] = 0;
					ray.m_IsRay = true;
					ray.m_Extents[0] = ray.m_Extents[1] = ray.m_Extents[2] = 0;
					ray.m_Start[0] = fx;
					ray.m_Start[1] = fy;
					ray.m_Start[2] = vecTop.z;
					ray.m_b32 = 0;
					ray.m_n34 = 0;
					ray.m_b33 = 0;
					CTraceFilterSimple filter(this, 0);
					CGameTrace tr;
					g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&filter, &tr);
					if (!g_10738964->vfunc1() && g_10738964->m_n2c)
						sub_10146570((const Vector *)&tr.m_startpos, (const Vector *)&tr.m_endpos, 0xff, 0, 0, 1, -1.0f);
					if (tr.m_startsolid)
					{
						vt->slot208(tr.m_pEnt);
						break;
					}
				}
			}
			sub_100a53d0(0);
		}
	}
	if (!(sub_100b3700() & 1) && bDidHalfGravity)
		sub_10035490(flTimeStepSize);
}
// END FUNCTION

// FUNCTION: 0x1003b850 size=0x36
#include "Vector.h"

// TARGET: Vector::sub_1003b850
bool Vector::sub_1003b850(const Vector &v) const
{
    return (v.x == x) && (v.y == y) && (v.z == z);
}
// END FUNCTION

// FUNCTION: 0x1003b8a0 size=0x1b9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "globalvars.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CBCCSlotViews.h"

extern void (__cdecl *g_109f3630)(const char *pMsg, ...);
extern float g_104454c4;
extern CBaseEntity *g_106baaa0[];
extern CBaseEntity *g_106bbb58[];

struct Edict1003b8a0
{
	char pad[0x40];
	CServerUnknownSlotView *m_pUnk;
	char pad2[8];
	char m_bFree;
	char pad3[0x78 - 0x4d];
};

void sub_1003b8a0()
{
	ScopeTrace trace("Physics_BuildThinkLists", g_106b8540, g_106b8540);
	int nEdicts = engine->vfunc39();
	Edict1003b8a0 *pEdict = (Edict1003b8a0 *)engine->vfunc36();
	int nThinkers = 0;
	int nChecks = 0;
	for (int i = 0; i < nEdicts; i++, pEdict++) {
		if (pEdict->m_bFree || !pEdict->m_pUnk)
			continue;
		CBaseEntity *pEnt = (CBaseEntity *)pEdict->m_pUnk->vfunc4();
		if (!pEnt)
			continue;
		if (pEnt->vfunc83() & 1) {
			g_109f3630("Ignoring ent %d (%s) which is pending deletion\n", i, pEnt->sub_1000b5cd());
			continue;
		}
		if (*((unsigned char *)&pEnt->m_flags268 + 3) & 1)
			g_106baaa0[nChecks++] = pEnt;
		if (pEnt->sub_100b3700() & 0x40000)
			continue;
		if (pEnt->sub_100b5190())
			continue;
		if (EHandle_Get(*(unsigned int *)((char *)pEnt + 0x25c)))
			continue;
		if (pEnt->vfunc94() != 0 || (!(pEnt->m_flNextThink <= g_104454c4) && !(gpGlobals->curtime < pEnt->m_flNextThink)))
			g_106bbb58[nThinkers++] = pEnt;
	}
	g_106bbb58[nThinkers] = 0;
	g_106baaa0[nChecks] = 0;
}
// END FUNCTION

// FUNCTION: 0x1003bad0 size=0x25b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "globalvars.h"

struct CPlrObj { char pad[0x23a0]; char m_b23a0; };
struct CPlrE { char pad[0xa8]; CPlrObj *m_p; };
struct CSubObj {
	char pad[1];
	char __fastcall sub_1042d6b0();
	int __fastcall sub_1042d700();
};
struct CTimeObj { char pad[0x2358]; float m_t2358; };
struct CSimEnt {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
	virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
	virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89();
	virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94(); virtual void v95(); virtual void v96();
	virtual CPlrE *vfunc97();
	char pad[0x1a8 - 4];
	CSubObj m_sub;
	char pad2[0x2e0 - 0x1a8 - 1];
	int m_n2e0;
	unsigned int sub_100b3700();
	char sub_100b4b20();
	CTimeObj *sub_100b4010();
	void sub_100b3ee0();
	void sub_10033f60(int);
	void sub_10040390();
};
struct CListNode { int pad; CListNode *next; int pad2; CPlrObj *m_p; };
extern CListNode *g_10939fdc;
CPlrE *__cdecl sub_101cd9e0(int);
struct CCycleSampler { void Sample(CUnknownCycle100335e0 *p) { unsigned long *q = (unsigned long *)p; __asm { mov ecx, q
 rdtsc
 mov [ecx], eax
 mov [ecx+4], edx } } };

// TARGET: sub_1003bad0
void sub_1003bad0(CSimEnt *pEntity)
{
	ScopeTrace trace("Physics_SimulateEntity", g_106b8540, g_106b8540);
	if (pEntity->sub_100b3700() & 0x40000)
		return;
	if (pEntity->m_n2e0) {
		if (pEntity->sub_100b4b20()) {
			CTimeObj *p = pEntity->sub_100b4010();
			if (p) {
				float t = p->m_t2358;
				if (t > gpGlobals->curtime - 1.0f)
					return;
			}
			pEntity->sub_100b3ee0();
		}
		if (pEntity->m_sub.sub_1042d6b0()) {
			CPlrE *e = pEntity->vfunc97();
			if (e) {
				CPlrObj *pObj = e->m_p;
				if (pObj) {
					CPlrE *p2 = sub_101cd9e0(pEntity->m_sub.sub_1042d700() + 1);
					if (p2)
						p2 = (CPlrE *)p2->m_p;
					if ((CPlrObj *)p2 == pObj && ((CPlrObj *)p2)->m_b23a0) {
						for (CListNode *n = g_10939fdc; n; n = n->next)
							n->m_p = pObj;
					}
				}
			}
		}
		CVProfile *pr = g_109f3648;
		if (pr->m_enabled || !pr->m_bAtRoot) {
			if (pr->m_pCurNode->m_pszName != "pEntity->PhysicsSimulate")
				pr->m_pCurNode = pr->m_pCurNode->GetSubNode("pEntity->PhysicsSimulate", 0, "Unaccounted");
			CVProfNode *node = pr->m_pCurNode;
			node->m_nCurFrameCalls++;
			if (node->m_nRecursions++ == 0) {
				CCycleSampler s;
				s.Sample(&node->m_CurFrameTime);
				g_109f3648->PushGroup(node->m_nBudgetGroupID);
			}
			pr->m_bAtRoot = false;
		}
		pEntity->sub_10040390();
		g_109f3648->ExitScopeInlined();
		for (CListNode *n = g_10939fdc; n; n = n->next)
			n->m_p = 0;
	} else {
		pEntity->sub_10033f60(0);
	}
}
// END FUNCTION
