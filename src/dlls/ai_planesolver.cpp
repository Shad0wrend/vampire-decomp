// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 13 blocks
#include "vampire.h"

// FUNCTION: 0x10307e30 size=0x81
#include "CAI_PlaneSolver.h"

CAI_PlaneSolver::CAI_PlaneSolver(int owner) : m_owner(owner), m_f08(3.402823466e+38F), m_f0c(3.402823466e+38F), m_f10(3.402823466e+38F), m_b14(0), m_i18(0), m_f28(3.402823466e+38F), m_f2c(3.402823466e+38F), m_b30(0), m_timer(g_1049df80 - g_10445e08)
{
}
// END FUNCTION

// FUNCTION: 0x10307ef0 size=0x1d4
#include "CAI_PlaneSolver.h"
#include "CVProfile.h"
#include "CAI_MoveProbe.h"
#include "CAI_BaseNPCTroika.h"

struct CAI_MoveProbeLimitView
{
	bool sub_102e6d70(int navType, const float *vecStart, const float *vecEnd, unsigned int collisionMask, const CBaseEntity *pTarget, float pctToCheckStandPositions, int flags, AIMoveTrace_t *pTrace, int a9, int a10);
};

// TARGET: CAI_PlaneSolver::sub_10307ef0
char CAI_PlaneSolver::sub_10307ef0(void *pNavType, Vector *pEnd, bool bCheckStep, int mask, CAI_PlaneSolverTrace *pResult)
{
	CVProfile *prof = g_109f3648;
	if (prof->m_enabled || !prof->m_bAtRoot) {
		if (prof->m_pCurNode->m_pszName != "CAI_PlaneSolver_MoveLimit")
			prof->m_pCurNode = prof->m_pCurNode->GetSubNode("CAI_PlaneSolver_MoveLimit", 0, "Unaccounted");
		CVProfNode *node = prof->m_pCurNode;
		node->m_nCurFrameCalls++;
		if (node->m_nRecursions++ == 0) {
			unsigned long *p = (unsigned long *)&node->m_CurFrameTime;
			__asm {
				mov ecx, p
				rdtsc
				mov [ecx], eax
				mov [ecx + 4], edx
			}
			g_109f3648->PushGroup(node->m_nBudgetGroupID);
		}
		prof->m_bAtRoot = false;
	}

	int nNavType = (int)pNavType;
	CAI_MoveProbeLimitView *pProbe = (CAI_MoveProbeLimitView *)((CAI_BaseNPCTroika *)m_owner)->m_pMoveProbe5d40;
	const float *pOrigin = (const float *)((CAI_BaseNPCTroika *)m_owner)->vfunc220();
	char bResult = pProbe->sub_102e6d70(nNavType, pOrigin, (const float *)pEnd, mask, (const CBaseEntity *)((CAI_BaseNPCTroika *)m_owner)->sub_102729d0(), bCheckStep ? 100 : 0, nNavType == 0, (AIMoveTrace_t *)pResult, 0, 0);

	prof = g_109f3648;
	if (!prof->m_bAtRoot || prof->m_enabled) {
		CVProfNode *node = prof->m_pCurNode;
		if (--node->m_nRecursions == 0 && node->m_nCurFrameCalls != 0) {
			CUnknownCycle100335e0 now;
			now.m_Int64 = 0;
			unsigned long *p = (unsigned long *)&now;
			__asm {
				mov ecx, p
				rdtsc
				mov [ecx], eax
				mov [ecx + 4], edx
			}
			CUnknownCycle100335e0 *pc = &node->m_CurFrameTime;
			pc->m_Int64 = now.m_Int64 - pc->m_Int64;
			node->m_TotalTime += pc->m_Int64;
			CVProfile *g = g_109f3648;
			--g->m_nGroupStackDepth;
			int nOld = g->m_GroupIDStack[g->m_nGroupStackDepth + 1];
			if (g->m_GroupIDStack[g->m_nGroupStackDepth] != nOld && g->m_bVTuneGroupsEnabled && nOld == g->m_nVTuneGroupID)
				vtune(false);
		}
		if (node->m_nRecursions == 0)
			prof->m_pCurNode = prof->m_pCurNode->m_pParent;
		prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot);
	}
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x10308150 size=0x21
namespace lifted {
struct C10003ddc { int sub_10003ddc(int, int, int, int, int); };
}
struct CUnknown10308150 { int sub_10308150(int, int, int, int); };
int CUnknown10308150::sub_10308150(int a0, int a1, int a2, int a3)
{
    return ((lifted::C10003ddc *)this)->sub_10003ddc(a0, a1, a2, 0x202400b, a3);
}
// END FUNCTION

// FUNCTION: 0x10308190 size=0xd8
#include "CUnknown1030a6e0.h"
#include "CEntityVSlots.h"
bool CUnknown1030a6e0::sub_10308190(const Vector *pGoal)
{
    Vector *pOrigin = ((CEntityVSlots *)m_pOuter)->slot220();
    Vector d;
    d = *pGoal - *pOrigin;
    float flDist = d.Length2D();
    if (!(m_vecGoal == *pGoal))
    {
        m_flBestTime = gpGlobals->curtime;
        m_bStuck = 0;
        m_flBestDist = flDist;
        return false;
    }
    if (m_bStuck)
        return true;
    if (m_flBestDist - flDist > 0.0f)
    {
        m_flBestTime = gpGlobals->curtime;
        m_flBestDist = flDist;
        return false;
    }
    if (gpGlobals->curtime - m_flBestTime > 0.75)
    {
        m_bStuck = 1;
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x103082b0 size=0x198
#include "Vector.h"

struct Vec2 {
	float x, y;
	Vec2() {}
	Vec2(const Vec2 &o) { x = o.x; y = o.y; }
};
struct CMotorVel { char m_pad[0x3c]; Vec2 m_vel; };
struct CNPCView { char m_pad[0x94]; void *m_p94; char m_pad2[0x5d44 - 0x98]; CMotorVel *m_pMotor; };
struct CNavView {
	int m_0;
	CNPCView *m_pOwner;
	float sub_103082b0(CNPCView *pOther, float flValue);
};

inline float Vec2Normalize(const Vec2 &in, Vec2 &out)
{
	float len = FastSqrt(in.y * in.y + in.x * in.x);
	if (len != 0) {
		float inv = 1.0f / len;
		out.x = in.x * inv;
		out.y = inv * in.y;
	} else {
		out.y = 0;
		out.x = 0;
	}
	return len;
}

// TARGET: ?sub_103082b0@CNavView@@QAEMPAUCNPCView@@M@Z
float CNavView::sub_103082b0(CNPCView *pOther, float flValue)
{
	if (pOther->m_p94) {
		Vec2 a = m_pOwner->m_pMotor->m_vel;
		Vec2 b = pOther->m_pMotor->m_vel;
		Vec2 na, nb;
		float lenA = Vec2Normalize(a, na);
		float lenB = Vec2Normalize(b, nb);
		float dot = na.x * nb.x + na.y * nb.y;
		if (lenB > 0 && dot > 0 && lenB >= lenA * 0.9) {
			if (dot > 0.86)
				return 0;
			if (dot > 0.7)
				return flValue * flValue * flValue;
			return flValue * flValue;
		}
	}
	return flValue;
}
// END FUNCTION

// FUNCTION: 0x103084c0 size=0x60
struct CUnknown103084c0
{
	float sub_103082b0(int a, float b);
	float sub_103084c0(int *p, float x);
};

float CUnknown103084c0::sub_103084c0(int *p, float x)
{
	if (x > 0.9)
		return 1.0f;
	if (x < 0.1)
		return 0.0f;
	float t = (x - 0.1) * 1.25;
	return sub_103082b0(p[7], t * t);
}
// END FUNCTION

// FUNCTION: 0x10308540 size=0x934
#include "CHL2_Player.h"
#include "CAI_PlaneSolver.h"
#include "Elem280_t.h"
#include "CUtlVector280.h"
#include "utlvector.h"
#include "ehandle.h"
#include "Vector.h"

extern Vector g_1070d1b0;	// vec3_origin
extern float g_104454c4;	// 0.0f
__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_1030b250(Elem280_t *pMemory, const Elem280_t &src);	// CopyConstruct<Elem280_t>

struct AILocalMoveGoal280_t
{
	int m_n[13];
	IHandleEntity *pMoveTarget;	// 0x34
};

struct AIMoveTrace280_t
{
	int fStatus;
	Vector vEndPosition;	// 0x04
	Vector vHitNormal;	// 0x10
	IHandleEntity *pObstruction;	// 0x1c
	float flTotalDist;	// 0x20
	float flDistObstructed;	// 0x24
};

struct COriginView280
{
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
	virtual const Vector &GetLocalOrigin();	// 220
};

__forceinline float AngleMod280(float a)
{
	if (a < 0.0)
		a = a + 360.0;
	else if (a >= 360.0)
		a = a - 360.0;
	return a;
}

__forceinline void SetSuggName280(Elem280_t &s, int type)
{
	switch (type)
	{
	case 0: Q_snprintf(s.name, 0x100, "TR_MOVE"); break;
	case 1: Q_snprintf(s.name, 0x100, "TR_DANGER"); break;
	case 2: Q_snprintf(s.name, 0x100, "TR_OBJECT"); break;
	case 3: Q_snprintf(s.name, 0x100, "TR_NPC"); break;
	case 4: Q_snprintf(s.name, 0x100, "TR_WORLD"); break;
	case 5: Q_snprintf(s.name, 0x100, "TR_NOKNOW"); break;
	case 6: Q_snprintf(s.name, 0x100, "TR_OSCILL"); break;
	case 7: Q_snprintf(s.name, 0x100, "TR_INVLD"); break;
	}
}

__forceinline void SetHandle280(CBaseHandle &h, IHandleEntity *pEntity)
{
	if (pEntity)
		h.m_Index = *pEntity->vfunc1();
	else
		h.m_Index = 0xffffffff;
}

__forceinline void SetSugg280(Elem280_t &s, int type, float weight, float center, float span, IHandleEntity *pEntity)
{
	s.type = type;
	s.weight = weight;
	SetHandle280(s.hObstacleEntity, pEntity);
	s.m_14 = 0;
	s.arc.center = AngleMod280(center);
	s.arc.span = AngleMod280(span);
	SetSuggName280(s, type);
}

__forceinline int GrowShift280(CUtlVector<Elem280_t> &v)
{
	int elem = v.m_Size;
	if (v.m_Size + 1 > v.m_Memory.m_nAllocationCount)
		((CUtlVector280 *)&v)->sub_102e9e50(v.m_Size + 1 - v.m_Memory.m_nAllocationCount);
	v.m_Size += 1;
	v.m_pElements = v.m_Memory.m_pMemory;
	int numToMove = v.m_Size - elem - 1;
	if (numToMove > 0)
		memmove(&v.m_Memory.m_pMemory[elem + 1], &v.m_Memory.m_pMemory[elem], numToMove * sizeof(Elem280_t));
	return elem;
}

struct CAI_PlaneSolver280 : CAI_PlaneSolver
{
	float sub_103084c0(const AIMoveTrace280_t &trace, float pctBlocked);
};

#define suggestions (*(CUtlVector<Elem280_t> *)&m_lists.m_pBuf50)

// TARGET: CAI_PlaneSolver::sub_10308540
void CAI_PlaneSolver::sub_10308540(CAI_PlaneSolverObj *pObj, CAI_PlaneSolverTrace *pTrace, float probeDist, float arcCenter, float arcSpan)
{
	const AILocalMoveGoal280_t &goal = *(const AILocalMoveGoal280_t *)pObj;
	const AIMoveTrace280_t &directTrace = *(const AIMoveTrace280_t *)pTrace;

	int type;
	Elem280_t suggestion;

	switch (directTrace.fStatus)
	{
	case -1: type = 2; break;
	case -2: type = 4; break;
	case -3: type = 3; break;
	case -4: type = 1; break;
	default: type = 5; break;
	}

	SetSuggName280(suggestion, type);

	if (goal.pMoveTarget != 0 && goal.pMoveTarget == directTrace.pObstruction)
	{
		suggestion.type = type;
		suggestion.weight = 0;
		SetHandle280(suggestion.hObstacleEntity, directTrace.pObstruction);
		suggestion.m_14 = 0;
		suggestion.arc.Set(arcCenter, arcSpan);
		CUtlVector280 *v = (CUtlVector280 *)&m_lists.m_pBuf50;
		int elem = v->m_size;
		v->sub_1030b100(1);
		v->sub_1030b1d0(elem, 1);
		CopyConstruct((Elem280_t *)v->m_pMemory + elem, suggestion);
		return;
	}

	float clearDist = probeDist - directTrace.flDistObstructed;
	float pctBlocked = 1.0 - (clearDist / probeDist);

	float weight = ((CAI_PlaneSolver280 *)this)->sub_103084c0(directTrace, pctBlocked);

	if (weight < 0.001)
		return;

	if (pctBlocked < 0.5)
		arcSpan = pctBlocked * arcSpan * 2.0;

	Vector vecToEnd = directTrace.vEndPosition - ((COriginView280 *)m_owner)->GetLocalOrigin();
	Vector crossProduct;
	bool favorLeft = false, favorRight = false;

	if (directTrace.fStatus == -3)
	{
		COriginView280 *pOuter = (COriginView280 *)m_owner;
		const Vector &otherOrigin = ((COriginView280 *)directTrace.pObstruction)->GetLocalOrigin();
		Vector vecToOther = otherOrigin - pOuter->GetLocalOrigin();
		CrossProduct(vecToEnd, vecToOther, crossProduct);
		favorLeft = (crossProduct.z < g_104454c4);
		favorRight = (crossProduct.z > g_104454c4);
	}
	else if (directTrace.vHitNormal != g_1070d1b0)
	{
		CrossProduct(vecToEnd, directTrace.vHitNormal, crossProduct);
		favorLeft = (crossProduct.z > g_104454c4);
		favorRight = (crossProduct.z < g_104454c4);
	}

	float thirdSpan = arcSpan / 3.0;
	float weightBlocked = weight * pctBlocked;

	SetSugg280(suggestion, type, weight, arcCenter, thirdSpan, directTrace.pObstruction);
	{
		int elem = GrowShift280(suggestions);
		sub_1030b250(&suggestions.m_Memory.m_pMemory[elem], suggestion);
	}

	SetSugg280(suggestion, type, (favorRight) ? weightBlocked : weight, arcCenter - thirdSpan, thirdSpan, directTrace.pObstruction);
	{
		int elem = GrowShift280(suggestions);
		CopyConstruct(&suggestions.m_Memory.m_pMemory[elem], suggestion);
	}

	SetSugg280(suggestion, type, (favorLeft) ? weightBlocked : weight, arcCenter + thirdSpan, thirdSpan, directTrace.pObstruction);
	{
		int elem = GrowShift280(suggestions);
		CopyConstruct(&suggestions.m_Memory.m_pMemory[elem], suggestion);
	}
}
// END FUNCTION

// FUNCTION: 0x103090d0 size=0x36
// TARGET: sub_103090d0
float sub_103090d0(float x)
{
    if (x < 0.0) {
        return x + 360.0;
    }
    if (360.0 <= x) {
        return x - 360.0;
    }
    return x;
}
// END FUNCTION

// FUNCTION: 0x10309120 size=0xd0
extern float g_104454c4;

void __stdcall sub_10309120(float flAngle, float flStep, int nCount, float *pFirst, float *pLast)
{
	if (nCount != 0) {
		float flSign = (float)(nCount > 0 ? 1 : -1);
		flAngle = nCount * flStep + flAngle;
		*pLast = flAngle;
		if (flAngle < g_104454c4)
			*pLast = flAngle + 360.0f;
		else if (flAngle >= 360.0f)
			*pLast = flAngle - 360.0f;
		float flStart = *pLast - flSign * flStep * 0.5;
		*pFirst = flStart;
		if (flStart < g_104454c4)
			*pFirst = flStart + 360.0f;
		else if (flStart >= 360.0f)
			*pFirst = flStart - 360.0f;
	} else {
		*pFirst = flAngle;
		*pLast = flAngle;
	}
}
// END FUNCTION

// FUNCTION: 0x10309230 size=0x319
#include "CUnknown1030a6e0.h"
#include "CUnknown102652d0.h"
#include "CGlobalEntityList.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"

extern CGlobalEntityList *g_10566458;

struct CUnknown102e4f20
{
	void *sub_102e4f20(int a);
};

void sub_10309620(float *a, float *b, float *c);
CBaseEntity *sub_101cd9e0(int index);

// TARGET: CUnknown1030a6e0::sub_10309230
void CUnknown1030a6e0::sub_10309230(void *pGoal, float flTolerance)
{
	CBaseEntity **base = (CBaseEntity **)g_1090fe10.sub_102652d0();

	Vector maxs, mins;
	((CCollisionProperty *)((char *)m_pOuter + 0x270))->vfunc15(&maxs, &mins);

	float radiusSelf;
	{
		float size[2];
		sub_10309620((float *)&maxs, (float *)&mins, size);
		radiusSelf = pfSqrt((size[0] * size[0]) + (size[1] * size[1])) * 0.5;
	}
	maxs.z -= 12.0f;
	mins.z += 12.0f;

	for (int i = 0; i < g_1090fe10.sub_102652f0(); i++)
	{
		CBaseEntity *pEntity = base[i];
		if (pEntity == (CBaseEntity *)m_pOuter)
			continue;

		void *pBlocker = *(void **)((char *)pGoal + 0x3c);
		if (pBlocker != 0)
		{
			if (pEntity == g_10566458->sub_100290c0((const unsigned int *)((char *)pBlocker + 0x30)))
				continue;
		}

		Vector emaxs, emins;
		((CCollisionProperty *)((char *)pEntity + 0x270))->vfunc15(&emaxs, &emins);

		if (!(emaxs.z < mins.z))
			continue;
		if (!(emins.z > maxs.z))
			continue;

		float dxz[2];
		dxz[0] = emaxs.x - emins.x;
		dxz[1] = emaxs.y - emins.y;
		float dxzCopy[2];
		((CUnknown102e4f20 *)dxzCopy)->sub_102e4f20((int)dxz);
		float otherHalf = pfSqrt(dxzCopy[0] * dxzCopy[0] + dxzCopy[1] * dxzCopy[1]) * 0.5;

		Vector *pOwnerOrigin = ((CEntityVSlots *)m_pOuter)->slot217();
		Vector *pEntityOrigin = ((CEntityVSlots *)pEntity)->slot217();
		float dd[2];
		dd[0] = pEntityOrigin->x - pOwnerOrigin->x;
		dd[1] = pEntityOrigin->y - pOwnerOrigin->y;
		float ddCopy[2];
		((CUnknown102e4f20 *)ddCopy)->sub_102e4f20((int)dd);

		if (pfSqrt(ddCopy[0] * ddCopy[0] + ddCopy[1] * ddCopy[1]) - otherHalf < radiusSelf + flTolerance)
		{
			sub_1030a6e0(((CEntityVSlots *)pEntity)->slot192(), otherHalf, pEntity, 3);
		}
	}

	CBaseEntity *pPlayer = sub_101cd9e0(1);
	if (pPlayer != 0)
	{
		Vector pmaxs, pmins;
		((CCollisionProperty *)((char *)pPlayer + 0x270))->vfunc15(&pmaxs, &pmins);

		if (pmaxs.z < mins.z && pmins.z > maxs.z)
		{
			float pdx = pmaxs.x - pmins.x;
			float pdy = pmaxs.y - pmins.y;
			float pOtherHalf = pfSqrt(pdx * pdx + pdy * pdy) * 0.5;

			Vector *pOwnerOrigin = ((CEntityVSlots *)m_pOuter)->slot217();
			Vector *pPlayerOrigin = ((CEntityVSlots *)pPlayer)->slot217();
			float ddx; ddx = pPlayerOrigin->x - pOwnerOrigin->x;
			float ddy; ddy = pPlayerOrigin->y - pOwnerOrigin->y;

			if (pfSqrt((ddy * ddy) + (ddx * ddx)) - pOtherHalf < radiusSelf + flTolerance)
			{
				sub_1030a6e0(((CEntityVSlots *)pPlayer)->slot192(), pOtherHalf, pPlayer, 3);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10309620 size=0x1c
// TARGET: sub_10309620
void __cdecl sub_10309620(float *a, float *b, float *out)
{
	out[0] = a[0] - b[0];
	out[1] = a[1] - b[1];
}
// END FUNCTION

// FUNCTION: 0x10309650 size=0x120
#include "CAI_PlaneSolver.h"
#include "CEntityVSlots.h"
#include <string.h>

Vector *sub_101d2f40(Vector *pOut, float flYaw);

struct CAI_PlaneSolverUnit309650 : CAI_PlaneSolver
{
	void sub_10309120(float a, float b, int c, float *pOut1, float *pOut2);
};

int CAI_PlaneSolver::sub_10309650(CAI_PlaneSolverObj *pObj, float flYaw, float flScale, float flStep, int nIndex)
{
	CAI_PlaneSolverTrace trace;
	memset(&trace, 0, sizeof(trace));
	int nStepBits = *(int *)&flStep;
	((CAI_PlaneSolverUnit309650 *)this)->sub_10309120(flYaw, *(float *)&nStepBits, nIndex, (float *)&nIndex, &flStep);
	Vector vecTemp;
	Vector *pDir = sub_101d2f40(&vecTemp, *(float *)&nIndex);
	Vector vecScaled;
	vecScaled.x = flScale * pDir->x;
	vecScaled.y = flScale * pDir->y;
	vecScaled.z = flScale * pDir->z;
	const Vector *pOrigin = ((CEntityVSlots *)m_owner)->slot220();
	Vector vecEnd = vecScaled + *pOrigin;
	if (!sub_10307ef0(pObj->m_p30, &vecEnd, 0, 0x2400b, &trace))
	{
		sub_10308540(pObj, &trace, flScale, flStep, nStepBits);
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103097c0 size=0x521
#include "utlrbtree.h"
#include "utlvector.h"
#include "Elem280_t.h"
#include "CAI_PlaneSolver.h"
#include "globalvars.h"
#include "Tier1.h"
#include <math.h>

float sub_101d2c70(const Vector &v);
extern float g_104454c4;

struct PlaneGoalV	// AI_MoveSolverGoal-like: origin, direction
{
	Vector m_vecOrigin;
	Vector m_vecDir;
};

struct PlaneTraceV	// AIMoveTrace_t: fStatus first, the distance at +0x24
{
	int m_n[9];
	float m_f24;
	int m_n2[4];
};

struct CAI_PlaneSolverV : CAI_PlaneSolver
{
	CUtlVector<Elem280_t> &Suggestions() { return *(CUtlVector<Elem280_t> *)&m_lists.m_pBuf50; }
	void sub_10309230(const PlaneGoalV &goal, float probeDist);
	char sub_1030a7f0(float probeDist);
	int sub_10309650(const PlaneGoalV &goal, float yaw, float probeDist, float step, int i);
	void sub_10309120(float yaw, float step, int i, float *pYawTest, float *pYawCenter);
	void sub_10308540(const PlaneGoalV &goal, const PlaneTraceV &trace, float probeDist, float arcCenter, float arcSpan);

};

void sub_1030b250(Elem280_t *pMemory, const Elem280_t &src);	// CopyConstruct<Elem280_t>
struct ElemCopyV { void sub_1030b2a0(const Elem280_t &src); };	// Elem280_t copy ctor
struct SuggV : CUtlVector<Elem280_t>
{
	void sub_1030b100(int num);			// GrowVector
	void sub_1030b1d0(int elem, int num);	// ShiftElementsRight
	int AddLoop(const Elem280_t &src)
	{
		int elem = m_Size;
		if (m_Size + 1 > m_Memory.NumAllocated())
			m_Memory.Grow(m_Size + 1 - m_Memory.NumAllocated());
		m_Size += 1;
		ResetDbgInfo();
		sub_1030b1d0(elem, 1);
		sub_1030b250(&Element(elem), src);
		return elem;
	}
	int AddFinal(const Elem280_t &src)
	{
		int elem = m_Size;
		sub_1030b100(1);
		sub_1030b1d0(elem, 1);
		Elem280_t *p = &Element(elem);
		if (p)
			((ElemCopyV *)p)->sub_1030b2a0(src);
		return elem;
	}
};

struct SimTimerV : CAI_PlaneSolverTimer	// CSimTimer
{
	void Force() { m_next = -1; }
	bool Expired() const { return ( gpGlobals->curtime - m_next > -0.001 ); }
	void Reset() { m_next = gpGlobals->curtime + m_interval; }
};
#define TIMER ((SimTimerV *)&m_timer)

namespace block_103097c0 {
#pragma auto_inline(off)
struct PSView : CAI_PlaneSolver
{
	void sub_10309120(float flAngle, float flStep, int nCount, float *pFirst, float *pLast);
};
void PSView::sub_10309120(float flAngle, float flStep, int nCount, float *pFirst, float *pLast)
{
	if (nCount != 0) {
		float flSign = (float)(nCount > 0 ? 1 : -1);
		flAngle = nCount * flStep + flAngle;
		*pLast = flAngle;
		if (flAngle < g_104454c4)
			*pLast = flAngle + 360.0f;
		else if (flAngle >= 360.0f)
			*pLast = flAngle - 360.0f;
		float flStart = *pLast - flSign * flStep * 0.5;
		*pFirst = flStart;
		if (flStart < g_104454c4)
			*pFirst = flStart + 360.0f;
		else if (flStart >= 360.0f)
			*pFirst = flStart - 360.0f;
	} else {
		*pFirst = flAngle;
		*pLast = flAngle;
	}
}
#pragma auto_inline(on)
}

// TARGET: CAI_PlaneSolver::vfunc0
int CAI_PlaneSolver::vfunc0(float *pVec, int *pEnt, float distClear, float probeDist, float degreesToProbe, int nProbes)
{
#define V ((CAI_PlaneSolverV *)this)
	const PlaneGoalV &goal = *(const PlaneGoalV *)pVec;
	const PlaneTraceV &directTrace = *(const PlaneTraceV *)pEnt;
	float yaw;
	int result = 0;
	if (!m_b14 || *(Vector *)&m_f08 != goal.m_vecOrigin)
		TIMER->Force();
	if (g_1049df80 == 0.0 || TIMER->Expired()) {
		V->Suggestions().RemoveAll();
		V->sub_10309230(goal, probeDist);
		if (V->sub_1030a7f0(probeDist))
			result = 1;
		float step = degreesToProbe / (float)nProbes;
		int half = (nProbes - 1) / 2;
		yaw = sub_101d2c70(goal.m_vecDir);
		if (fabs(probeDist - (distClear + directTrace.m_f24)) < 0.1 && directTrace.m_n[0] != -3) {
			if (directTrace.m_n[0] != 0) {
				result = 1;
				V->sub_10308540(goal, directTrace, probeDist, yaw, step);
			}
		} else {
			if (V->sub_10309650(goal, yaw, probeDist, step, 0) == 1)
				result = 1;
		}
		bool bBlocked = false;
		int i;
		for (i = 1; i <= half; i++) {
			if (!bBlocked) {
				if (V->sub_10309650(goal, yaw, probeDist, step, i) == 1)
					result = 1;
				else
					bBlocked = true;
			} else {
				float yawTest, yawCenter;
				((block_103097c0::PSView *)this)->sub_10309120(yaw, step, i, &yawTest, &yawCenter);
				((SuggV *)&V->Suggestions())->AddLoop(Elem280_t(5, 1.0f, yawCenter, step));
			}
		}
		bBlocked = false;
		for (i = -1; i >= -half; i--) {
			if (!bBlocked) {
				if (V->sub_10309650(goal, yaw, probeDist, step, i) == 1)
					result = 1;
				else
					bBlocked = true;
			} else {
				float yawTest, yawCenter;
				((block_103097c0::PSView *)this)->sub_10309120(yaw, step, i, &yawTest, &yawCenter);
				((SuggV *)&V->Suggestions())->AddLoop(Elem280_t(5, 1.0f, yawCenter, step));
			}
		}
		if (result == 1) {
			float flBack = yaw - 180.0f;
			if (flBack < g_104454c4)
				flBack += 360.0f;
			((SuggV *)&V->Suggestions())->AddFinal(Elem280_t(5, 1.0f, flBack, 360.0f - degreesToProbe));
		}
		TIMER->Reset();
	}
	else if (V->Suggestions().Count() > 0)
		result = 1;
	return result;
#undef V
}
// END FUNCTION
