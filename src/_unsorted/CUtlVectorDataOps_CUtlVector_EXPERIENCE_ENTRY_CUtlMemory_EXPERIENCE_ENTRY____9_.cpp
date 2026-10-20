// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10184970 size=0x10
#include "CUtlVectorDataOps.h"
struct EXPERIENCE_ENTRY;
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<EXPERIENCE_ENTRY,CUtlMemory<EXPERIENCE_ENTRY> >,9>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<EXPERIENCE_ENTRY,CUtlMemory<EXPERIENCE_ENTRY> >,9>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION
