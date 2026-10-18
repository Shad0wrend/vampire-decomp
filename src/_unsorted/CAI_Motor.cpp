// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102623e0 size=0x9
extern float g_104492dc;
float CAI_Motor::vfunc11(int a) { return g_104492dc; }
// END FUNCTION

// FUNCTION: 0x102e0990 size=0x1e
#include "CAI_Motor.h"

// TARGET: CAI_Motor::vfunc0
CAI_Motor *CAI_Motor::vfunc0(unsigned int flags)
{
	sub_10014b32();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
