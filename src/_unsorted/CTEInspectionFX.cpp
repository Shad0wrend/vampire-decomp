// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100654a0 size=0x1e
#include "CTEInspectionFX.h"

// TARGET: CTEInspectionFX::vfunc2
CTEInspectionFX *CTEInspectionFX::vfunc2(unsigned int flags)
{
	sub_100043d6();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
