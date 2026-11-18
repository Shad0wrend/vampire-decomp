// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10130ef0 size=0x6
#include "datamap.h"
#include "CLogicCompare.h"

extern datamap_t g_10575cd8;

// TARGET: CLogicCompareInteger::vfunc82
datamap_t *CLogicCompareInteger::vfunc82()
{
	return &g_10575cd8;
}
// END FUNCTION

// FUNCTION: 0x10135d50 size=0x41
#include "CLogicCompare.h"
#include "COutputEvent.h"

struct CListHolder100cdb50;
void __fastcall sub_100cdb50(CListHolder100cdb50 *p);
void sub_100aa7b0(void *p);

CBaseEntity *CLogicCompareInteger::vfunc5(unsigned int flags)
{
	sub_100cdb50((CListHolder100cdb50 *)((char *)this + 0x488));
	((COutputEvent *)((char *)this + 0x468))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x450))->sub_100cd2d0();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION
