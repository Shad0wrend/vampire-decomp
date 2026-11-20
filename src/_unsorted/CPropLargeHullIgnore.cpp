// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101942e0 size=0x3e
#include "vampire.h"
#include "CBaseEntity.h"
#include "CBaseProp.h"
#include "CUnknown101466e0.h"
#include "CPropLargeHullIgnore.h"

// TARGET: CPropLargeHullIgnore::vfunc103
void CPropLargeHullIgnore::vfunc103()
{
    CBaseProp::vfunc103();
    ((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
    ((CBaseEntity *)this)->sub_100a9470(0);
    ((CBaseEntity *)this)->sub_100a9290(1);
    ((CBaseEntity *)this)->sub_100b3580(0x40000);
    ((CBaseEntity *)this)->sub_100b3840(8);
}
// END FUNCTION

// FUNCTION: 0x101945c0 size=0x1e
#include "CPropLargeHullIgnore.h"

void sub_100aa7b0(void *p);

// TARGET: CPropLargeHullIgnore::vfunc5
CBaseEntity *CPropLargeHullIgnore::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
