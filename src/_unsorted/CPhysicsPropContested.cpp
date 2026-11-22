// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10194510 size=0x41
#include "CPhysicsPropContested.h"
#include "COutputEvent.h"
#include "CBaseAnimating.h"

void sub_100aa7b0(void *p);

CBaseEntity *CPhysicsPropContested::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x790))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x748))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x730))->sub_100cd2d0();
	((CBaseAnimating *)this)->sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION
