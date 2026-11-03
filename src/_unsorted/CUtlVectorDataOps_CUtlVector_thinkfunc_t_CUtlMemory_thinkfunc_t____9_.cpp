// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b45c0 size=0x10
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"
struct thinkfunc_t;

struct VecHead { int m_a, m_b, m_c, m_size; };

// TARGET: CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc3
template<> int CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc3(void *pFieldData)
{
	VecHead *pVec = *(VecHead **)pFieldData;
	pVec->m_size = 0;
	return (int)pVec;
}
// END FUNCTION

// FUNCTION: 0x100b45e0 size=0x13
#include "utlmemory.h"
#include "utlvector.h"
#include "CUtlVectorDataOps.h"

struct thinkfunc_t;

// TARGET: CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>::vfunc2
template <class VEC, int N>
bool CUtlVectorDataOps<VEC, N>::vfunc2(void *pFieldData)
{
	return *(int *)(*(char **)pFieldData + 0xc) == 0;
}

template class CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t> >,9>;
// END FUNCTION
