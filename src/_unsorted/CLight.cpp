// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10130390 size=0x1e
#include "CLight.h"

void sub_100aa7b0(void *p);

// TARGET: CLight::vfunc5
CLight *CLight::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101303c0 size=0x7a
#include "CLight.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SVec3 {
	float x, y, z;
};

struct SlotLight {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20)
	SV(210) SV(211) SV(212) SV(213) SV(214) SV(215) SV(216) SV(217)
	virtual void v218(SVec3 *pAngles);
	SV(219) SV(220)
	virtual SVec3 *v221();
};

bool CLight::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "pitch")) {
		SVec3 ang = *((SlotLight *)this)->v221();
		ang.x = (float)atof(szValue);
		((SlotLight *)this)->v218(&ang);
		return true;
	}
	return sub_1000fc86(szKeyName, szValue);
}
// END FUNCTION
