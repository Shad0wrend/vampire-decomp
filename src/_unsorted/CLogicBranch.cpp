// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10134eb0 size=0x6
#include "datamap.h"
#include "CLogicBranch.h"
namespace lifted {
extern char g_10577244;
}
datamap_t *CLogicBranch::vfunc82()
{
    return (datamap_t *)&lifted::g_10577244;
}
// END FUNCTION

// FUNCTION: 0x10136120 size=0x36
#include "CLogicBranch.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CLogicBranch *CLogicBranch::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
