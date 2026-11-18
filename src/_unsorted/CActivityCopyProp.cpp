// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018e110 size=0x6
#include "CActivityCopyProp.h"
namespace lifted {
extern char g_1058d008;
}
datamap_t * CActivityCopyProp::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058d008);
}
// END FUNCTION

// FUNCTION: 0x1018e1a0 size=0x1
#include "CActivityCopyProp.h"
void CActivityCopyProp::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x1018e210 size=0x1e
#include "CActivityCopyProp.h"

void sub_100aa7b0(void *p);

// TARGET: CActivityCopyProp::vfunc5
CBaseEntity *CActivityCopyProp::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1018e270 size=0x13
#include "CActivityCopyProp.h"
#include "CBaseEntitySlots.h"

struct CActivityCopyPropView2
{
	void sub_1018df70();
};

void CActivityCopyProp::vfunc103()
{
	((CBaseEntitySlots *)this)->slot66();
	((CActivityCopyPropView2 *)this)->sub_1018df70();
}
// END FUNCTION
