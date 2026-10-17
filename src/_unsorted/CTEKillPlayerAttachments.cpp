// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100659b0 size=0x1e
#include "CTEKillPlayerAttachments.h"

// TARGET: CTEKillPlayerAttachments::vfunc2
CTEKillPlayerAttachments *CTEKillPlayerAttachments::vfunc2(unsigned int flags)
{
	sub_1000afb0();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
