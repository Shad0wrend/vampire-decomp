// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10245510 size=0x1e
#include "ConCommandBase.h"

// TARGET: ConCommandBase::vfunc0
ConCommandBase *ConCommandBase::vfunc0(unsigned int flags)
{
	sub_100049d0();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
