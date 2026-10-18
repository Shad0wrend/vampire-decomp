// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f1810 size=0x1e
#include "CVampireProjectile_MingXiaoSpit.h"

void sub_100aa7b0(void *p);

// TARGET: CVampireProjectile_MingXiaoSpit::vfunc5
CVampireProjectile_MingXiaoSpit *CVampireProjectile_MingXiaoSpit::vfunc5(unsigned int flags)
{
	sub_1000a21d();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
