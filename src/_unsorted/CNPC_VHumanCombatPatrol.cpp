// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10387750 size=0x1e
#include "CNPC_VHumanCombatPatrol.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VHumanCombatPatrol::vfunc5
CNPC_VHumanCombatPatrol *CNPC_VHumanCombatPatrol::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
