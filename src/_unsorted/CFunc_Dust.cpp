// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10113cc0 size=0x1e
#include "CFunc_Dust.h"

void sub_100aa7b0(void *p);

// TARGET: CFunc_Dust::vfunc5
CFunc_Dust *CFunc_Dust::vfunc5(unsigned int flags)
{
	sub_10004fca();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10113e70 size=0xca
#include "CFunc_Dust.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);

bool CFunc_Dust::vfunc110(const char *szKeyName, const char *szValue)
{
	unsigned int *pFlags = (unsigned int *)((char *)this + 0x474);
	if (_strcmpi(szKeyName, "StartDisabled") == 0) {
		if (*szValue == '1')
			*pFlags &= ~1u;
		else
			*pFlags |= 1;
		return true;
	}
	if (_strcmpi(szKeyName, "Alpha") == 0) {
		*((unsigned char *)this + 0x453) = (unsigned char)atoi(szValue);
		return true;
	}
	if (_strcmpi(szKeyName, "Frozen") == 0) {
		if (*szValue == '1')
			*pFlags |= 4;
		else
			*pFlags &= ~4u;
		return true;
	}
	return sub_1009e430(szKeyName, szValue);
}
// END FUNCTION
