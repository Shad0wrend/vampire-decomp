// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010c900 size=0x1e
#include "CFuncAreaPortalBase.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncAreaPortalBase::vfunc5
CFuncAreaPortalBase *CFuncAreaPortalBase::vfunc5(unsigned int flags)
{
	sub_100156b8();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
