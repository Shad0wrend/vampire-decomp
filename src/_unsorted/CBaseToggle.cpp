// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c0e70 size=0x36
#include "CBaseToggle.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseToggle *CBaseToggle::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c1480 size=0x72
#include "CBaseToggle.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);

bool CBaseToggle::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "lip")) {
		*(float *)((char *)this + 0x504) = (float)atof(szValue);
		return true;
	}
	if (!_strcmpi(szKeyName, "distance")) {
		*(float *)((char *)this + 0x4fc) = (float)atof(szValue);
		return true;
	}
	return sub_1000fc86(szKeyName, szValue);
}
// END FUNCTION
