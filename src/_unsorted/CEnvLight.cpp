// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10130af0 size=0x33
// TARGET: CEnvLight::vfunc110
#include "CEnvLight.h"
#include "CLight.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

bool CEnvLight::vfunc110(const char *szKeyName, const char *szValue)
{
	if (_strcmpi(szKeyName, "_light") == 0) {
		return true;
	}
	return ((CLight *)this)->vfunc110(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x10130b40 size=0x5
#include "CEnvLight.h"
#include "CLight.h"

// TARGET: CEnvLight::vfunc103
// the game's 0x10130b40: a tail call (jmp) of CLight::vfunc103
void CEnvLight::vfunc103()
{
	CLight::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x10130b60 size=0x1e
#include "CEnvLight.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvLight::vfunc5
CEnvLight *CEnvLight::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
