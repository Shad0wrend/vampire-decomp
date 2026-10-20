// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a01b0 size=0x8
#include "CNPC_VNewscaster.h"

int CNPC_VNewscaster::vfunc404(int)
{
	return 4;
}
// END FUNCTION

// FUNCTION: 0x103a0270 size=0xe1
#include "CNPC_VNewscaster.h"

void sub_100aa7b0(void *p);

CNPC_VNewscaster *CNPC_VNewscaster::vfunc5(unsigned int flags)
{
	m_listB.Destruct();
	m_listA.Destruct();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
