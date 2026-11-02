// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042bf20 size=0x8
#include "CGameStringPool.h"

// TARGET: CGameStringPool::vfunc5
void CGameStringPool::vfunc5()
{
	m_StringPool.sub_101bfb00();
}
// END FUNCTION

// FUNCTION: 0x1042bf90 size=0x2e
#include "CGameStringPool.h"
CGameStringPool *CGameStringPool::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	CStringPool *pPool = this ? &m_StringPool : 0;
	pPool->sub_101bf640();
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION
