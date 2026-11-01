// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c0970 size=0x6
#include "CBaseDMStart.h"
namespace lifted {
extern char g_1059b680;
}
CBaseDMStart::Datamap82 CBaseDMStart::vfunc82()
{
    return (CBaseDMStart::Datamap82)&lifted::g_1059b680;
}
// END FUNCTION

// FUNCTION: 0x101c2060 size=0x1e
#include "CBaseDMStart.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseDMStart::vfunc5
CBaseDMStart *CBaseDMStart::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
