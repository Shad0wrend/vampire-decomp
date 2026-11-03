// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101333f0 size=0x6
#include "CMathCounter.h"
namespace lifted {
extern char g_105766dc;
}
datamap_t *CMathCounter::vfunc82()
{
    return (datamap_t *)&lifted::g_105766dc;
}
// END FUNCTION

// FUNCTION: 0x101335c0 size=0x5e
#include "CMathCounter.h"
#include <stdlib.h>

extern "C" int __cdecl _strcmpi(const char *, const char *);

bool CMathCounter::vfunc110(const char *pszKey, const char *pszValue)
{
	if (!_strcmpi(pszKey, "startvalue")) {
		float f = (float)atoi(pszValue);
		m_OutValue.sub_100d0390(1, &f);
		return true;
	}
	return sub_1009e430(pszKey, pszValue);
}
// END FUNCTION

// FUNCTION: 0x10135f60 size=0x41
#include "CMathCounter.h"
#include "COutputEvent.h"

void sub_100aa7b0(void *p);

CLogicalEntity *CMathCounter::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x48c))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x474))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x45c))->sub_100cd2d0();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
