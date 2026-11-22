// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ee810 size=0x8
#include "CGameStringPool.h"
namespace lifted {
struct C10138140 { int sub_10138140(); };
}
void CGameStringPool::vfunc5()
{
    ((lifted::C10138140 *)((int)this + 4))->sub_10138140();
}
// END FUNCTION

// FUNCTION: 0x100ee850 size=0x2e
#include "CGameStringPool.h"
CGameStringPool *CGameStringPool::vfunc8(unsigned int flags)
{
	sub_100f3f80();
	CStringPool *pPool = this ? &m_StringPool : 0;
	pPool->sub_10137d90();
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION
