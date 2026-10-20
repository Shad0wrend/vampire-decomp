// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10184700 size=0x10
#include "CUtlVectorDataOps.h"
struct ASSIGNED_QUEST;
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<ASSIGNED_QUEST,CUtlMemory<ASSIGNED_QUEST> >,9>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<ASSIGNED_QUEST,CUtlMemory<ASSIGNED_QUEST> >,9>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION
