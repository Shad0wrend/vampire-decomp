// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10366270 size=0x5
#include "CNPC_VBaseBoss.h"
#include "CAI_BaseNPC.h"

// TARGET: CNPC_VBaseBoss::vfunc420
// the game's 0x10366270: a tail call (jmp) of CAI_BaseNPC::vfunc420
void CNPC_VBaseBoss::vfunc420()
{
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc420();
}
// END FUNCTION

// FUNCTION: 0x10366290 size=0x24
void sub_10119750(const char *pszFormat, double value);
void __fastcall sub_10006e0b(void *pSelf);

// TARGET: sub_10366290
void __fastcall sub_10366290(void *pSelf)
{
    sub_10119750("Dist to player: %.3f", *(float *)((char *)pSelf + 0x6264));
    sub_10006e0b(pSelf);
}
// END FUNCTION

// FUNCTION: 0x10366510 size=0x4db
#include "CNPC_VBaseBoss.h"
#include "CEntityVSlots.h"
#include "CBaseAnimating.h"
#include "CGameTrace.h"
#include "CTraceFilterSimpleList.h"
#include "CTraceEntList.h"
#include "UTIL_Trace.h"
#include "CUnknown1003ff80.h"

struct CBossView
{
	char m_pad0000[0x6f0];
	int m_nSequence6f0;
	char m_pad06f4[0x1568 - 0x6f4];
	void *m_pHull1568;
};

struct CTargetEntityView
{
	char m_pad0000[0x9c];
	CEntityVSlots *m_pChar;
};

class CUnknown1004f860
{
public:
	void *sub_1004f860();
};

// CTraceFilterSimpleList::m_PassEntities (CUtlVector<IHandleEntity *>) as its out-of-line members
struct CBossPassList
{
	void **m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	int m_Size;
	void **m_pElements;
	void sub_10366b30();	// Purge
	void sub_1003c1c0();	// RemoveAll
	void sub_1003c1e0();	// CUtlMemory::Purge
};

const Vector &sub_102d6100(void *pHull);
const Vector &sub_102d6120(void *pHull);

inline void BossTraceLine(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	Ray_t ray;
	((CUnknown1004f860 *)&ray)->sub_1004f860();
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

inline void BossTraceLine_Calls(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	Ray_t ray;
	((CUnknown1004f860 *)&ray)->sub_1004f860();
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

bool CNPC_VBaseBoss::vfunc617(Vector vecA, bool bNoCheck, bool bUseHitbox, Vector vecD)
{
	CEntityVSlots *pTarget = (CEntityVSlots *)((CEntityVSlots *)this)->slot167();
	if (!pTarget)
		return false;
	CEntityVSlots *pChar = ((CTargetEntityView *)pTarget)->m_pChar;
	if (!pChar)
		return false;

	CGameTrace tr;
	((CUnknown1003ff80 *)&tr)->sub_1003ff80();
	Vector vecEye;
	pChar->slot193(&vecEye);

	Vector vecMins, vecMaxs;
	CBossView *pBoss = (CBossView *)this;
	if (bUseHitbox && ((CBaseAnimating *)this)->sub_1008d990(pBoss->m_nSequence6f0))
	{
		((CBaseAnimating *)this)->ComputeHitboxSurroundingBox(&vecMins, &vecMaxs);
	}
	else
	{
		vecMins = vecA + sub_102d6100(pBoss->m_pHull1568);
		vecMaxs = vecA + sub_102d6120(pBoss->m_pHull1568);
	}

	vecMins -= vecD;
	vecMaxs += vecD;

	Vector vecCenter = (vecMins + vecMaxs) * 0.5f;
	vecCenter.z = enginerandom->vfunc1(vecMins.z, vecMaxs.z);

	CTraceFilterSimpleList filter(0);
	CBossPassList *pList = (CBossPassList *)&filter.m_i0c;
	((CTraceEntList *)&filter)->sub_101d3430((int)this);
	((CTraceEntList *)&filter)->sub_101d3430((int)pChar);

	if (bNoCheck || pChar->slot362(&vecCenter))
	{
		BossTraceLine(vecEye, vecCenter, 0x4081, &filter, &tr);
		if (!(tr.m_fraction < 1.0f) && !tr.m_allsolid && !tr.m_startsolid)
		{
			pList->sub_10366b30();
			pList->sub_1003c1e0();
			return true;
		}
	}
	if (bNoCheck || pChar->slot362(&vecMins))
	{
		BossTraceLine(vecEye, vecMins, 0x4081, &filter, &tr);
		if (!(tr.m_fraction < 1.0f) && !tr.m_allsolid && !tr.m_startsolid)
		{
			pList->sub_10366b30();
			pList->sub_1003c1e0();
			return true;
		}
	}
	if (bNoCheck || pChar->slot362(&vecMaxs))
	{
		BossTraceLine_Calls(vecEye, vecMaxs, 0x4081, &filter, &tr);
		if (!(tr.m_fraction < 1.0f) && !tr.m_allsolid && !tr.m_startsolid)
		{
			pList->sub_1003c1c0();
			pList->sub_1003c1e0();
			pList->m_pElements = pList->m_pMemory;
			pList->sub_1003c1e0();
			return true;
		}
	}
	pList->sub_1003c1c0();
	pList->sub_1003c1e0();
	pList->m_pElements = pList->m_pMemory;
	pList->sub_1003c1e0();
	return false;
}
// END FUNCTION

// FUNCTION: 0x10390fd0 size=0x1
// TARGET: sub_10390fd0
void sub_10390fd0()
{
}
// END FUNCTION

// FUNCTION: 0x10390ff0 size=0x1
// TARGET: sub_10390ff0
void sub_10390ff0()
{
}
// END FUNCTION

// FUNCTION: 0x10391010 size=0x5
#include "CNPC_VBaseBoss.h"

// TARGET: CNPC_VBaseBoss::vfunc587
bool CNPC_VBaseBoss::vfunc587(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10391170 size=0x86
#include "CNPC_VBaseBoss.h"
#include "utlvector.h"

struct CNPC_VBaseBossRecord {
	int m_data[2];
};
void sub_100aa7b0(void *pEntity);

CNPC_VBaseBoss *CNPC_VBaseBoss::vfunc5(unsigned int flags)
{
	((CUtlVector<CNPC_VBaseBossRecord> *)((char *)this + 0x665c))->~CUtlVector<CNPC_VBaseBossRecord>();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
