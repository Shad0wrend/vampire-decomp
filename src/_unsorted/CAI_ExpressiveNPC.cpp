// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10260d70 size=0x1e
#include "CAI_ExpressiveNPC.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_ExpressiveNPC::vfunc5
CAI_ExpressiveNPC *CAI_ExpressiveNPC::vfunc5(unsigned int flags)
{
	sub_1000aa51();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10312d40 size=0x90
#include "CAI_ExpressiveNPC.h"
#include "CAI_Expresser.h"

CAI_Expresser *CAI_ExpressiveNPC::vfunc583()
{
	return new CAI_Expresser;
}
// END FUNCTION
