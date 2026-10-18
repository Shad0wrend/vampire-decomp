// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103dcdc0 size=0x8
#include "CNPC_VWolfMorph.h"
int CNPC_VWolfMorph::vfunc375(int unused) { return 0x1145; }
// END FUNCTION

// FUNCTION: 0x103dcf20 size=0x1e
#include "CNPC_VWolfMorph.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VWolfMorph::vfunc5
CNPC_VWolfMorph *CNPC_VWolfMorph::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
