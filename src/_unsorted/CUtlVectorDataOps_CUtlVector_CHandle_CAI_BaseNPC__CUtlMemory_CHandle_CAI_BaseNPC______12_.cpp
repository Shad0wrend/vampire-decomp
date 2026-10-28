// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ce0b0 size=0x10
#include "CUtlVectorDataOps.h"
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<CHandle<CAI_BaseNPC>,CUtlMemory<CHandle<CAI_BaseNPC> > >,12>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<CHandle<CAI_BaseNPC>,CUtlMemory<CHandle<CAI_BaseNPC> > >,12>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION
