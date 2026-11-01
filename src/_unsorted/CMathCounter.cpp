// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101333f0 size=0x6
#include "CMathCounter.h"
namespace lifted {
extern char g_105766dc;
}
CMathCounter::Datamap82 CMathCounter::vfunc82()
{
    return (CMathCounter::Datamap82)&lifted::g_105766dc;
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
