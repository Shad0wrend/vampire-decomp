// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1039b0d0 size=0x1e
#include "CNPC_VMingXiaoTentacle.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VMingXiaoTentacle::vfunc5
CNPC_VMingXiaoTentacle *CNPC_VMingXiaoTentacle::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1039de00 size=0xd
struct TentacleField1b2c { char pad[0x1b2c]; int m; };
int CNPC_VMingXiaoTentacle::vfunc437()
{
	((TentacleField1b2c *)this)->m = 0x1a;
	return 0;
}
// END FUNCTION
