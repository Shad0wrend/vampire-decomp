// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10132ee0 size=0x8d
#include "CMultiSource.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

bool CMultiSource::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "style")
		|| !_strcmpi(szKeyName, "height")
		|| !_strcmpi(szKeyName, "killtarget")
		|| !_strcmpi(szKeyName, "value1")
		|| !_strcmpi(szKeyName, "value2")
		|| !_strcmpi(szKeyName, "value3"))
		return true;
	return sub_1009e430(szKeyName, szValue);
}
// END FUNCTION
