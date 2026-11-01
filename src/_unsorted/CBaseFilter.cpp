// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10107700 size=0x6
#include "CBaseFilter.h"
namespace lifted {
extern char g_1056c1e8;
}
datamap_t *CBaseFilter::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c1e8;
}
// END FUNCTION

// FUNCTION: 0x10107840 size=0x5
#include "CBaseFilter.h"
bool CBaseFilter::vfunc241(CBaseFilter::Arg241 a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10108530 size=0x36
#include "CBaseFilter.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseFilter *CBaseFilter::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
