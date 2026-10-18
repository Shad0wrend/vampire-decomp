// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103683f0 size=0x1e
#include "CNPC_VCamera.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VCamera::vfunc5
CNPC_VCamera *CNPC_VCamera::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10368f20 size=0x10
#include "CNPC_VCamera.h"
int CNPC_VCamera::sub_10368f20()
{
	m_n1b2c = 9;
	return 0x156;
}
// END FUNCTION
