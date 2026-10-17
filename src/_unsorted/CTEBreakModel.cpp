// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005e6d0 size=0x1e
#include "CTEBreakModel.h"

// TARGET: CTEBreakModel::vfunc2
CTEBreakModel *CTEBreakModel::vfunc2(unsigned int flags)
{
	sub_1000f53d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
