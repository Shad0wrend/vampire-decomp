// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aaee0 size=0x77
#include "CPayphone.h"

inline bool BitSet(unsigned int v, int n)
{
	return ((v >> n) & 1) != 0;
}

bool CPayphone::vfunc295(void *pOther)
{
	if (!pOther)
		return false;
	if (!*(int *)((char *)this + 0x128))
		return false;
	if (sub_10014da8())
		return false;
	if (!*((char *)this + 0x1088))
		return false;
	if (BitSet(*(unsigned int *)((char *)this + 0x5b64), 2))
		return false;
	if (*(unsigned int *)((char *)this + 0x14b8) & 0x80000)
		return false;
	return sub_1000b005() ? false : true;
}
// END FUNCTION

// FUNCTION: 0x101ab1b0 size=0x1e
#include "CPayphone.h"

void sub_100aa7b0(void *p);

// TARGET: CPayphone::vfunc5
CPayphone *CPayphone::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
