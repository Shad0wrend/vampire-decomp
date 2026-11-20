// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012a7f0 size=0x42
#include "utlrbtree.h"
#include "CRestore.h"
#include "utlvector.h"

struct CRestoreSlot1 { virtual void a(); virtual void vfunc1(int v); };

// TARGET: CRestore::vfunc8
void CRestore::vfunc8()
{
	const CUtlVector<int> *pVec = (const CUtlVector<int> *)&m_vec;
	int v = pVec->Element(pVec->Count() - 1);
	((CUtlVector<int> *)&m_vec)->Remove(pVec->Count() - 1);
	((CRestoreSlot1 *)this)->vfunc1(v);
}
// END FUNCTION
