// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102cc480 size=0x1e
#include "CAI_SystemHook.h"

// TARGET: CAI_SystemHook::vfunc8
CAI_SystemHook *CAI_SystemHook::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
