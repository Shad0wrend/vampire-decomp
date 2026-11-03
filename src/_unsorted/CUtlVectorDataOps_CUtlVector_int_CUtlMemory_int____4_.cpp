// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bdd90 size=0x10
#include "CUtlVectorDataOps.h"
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >,4>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >,4>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION

// FUNCTION: 0x101bddb0 size=0x13
#include "CUtlVectorDataOps.h"

// TARGET: CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >,4>::vfunc2
template <class VEC, int N>
bool CUtlVectorDataOps<VEC, N>::vfunc2(void *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}

template class CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int> >,4>;
// END FUNCTION
