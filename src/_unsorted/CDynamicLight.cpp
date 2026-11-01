// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10056460 size=0x6
#include "CDynamicLight.h"
namespace lifted {
extern char g_1053f0b0;
}
datamap_t *CDynamicLight::vfunc82()
{
    return (datamap_t *)&lifted::g_1053f0b0;
}
// END FUNCTION

// FUNCTION: 0x10056560 size=0x6
#include "CDynamicLight.h"
namespace lifted {
extern char g_106be148;
}
int CDynamicLight::vfunc80()
{
    return (int)&lifted::g_106be148;
}
// END FUNCTION

// FUNCTION: 0x10056580 size=0x3
#include "CDynamicLight.h"
int CDynamicLight::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100568a0 size=0x10e
#include "CEntityVSlots.h"
#include "CDynamicLight.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double atof(const char *);
extern "C" int atoi(const char *);

void sub_101d0630(unsigned char *pColor, const char *pszValue);

bool CDynamicLight::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "_light")) {
		sub_101d0630((unsigned char *)&szValue, szValue);
		*((unsigned char *)this + 0x1a0) = ((unsigned char *)&szValue)[0];
		*((unsigned char *)this + 0x1a1) = ((unsigned char *)&szValue)[1];
		*((unsigned char *)this + 0x1a2) = ((unsigned char *)&szValue)[2];
		return true;
	}
	if (!_strcmpi(szKeyName, "pitch")) {
		*(float *)&szValue = (float)atof(szValue);
		if (*(float *)&szValue != 0.0f) {
			CEntityVSlots *pEnt = (CEntityVSlots *)this;
			Vector *pAngles = pEnt->slot219();
			Vector vecAngles = *pAngles;
			vecAngles.x = -*(float *)&szValue;
			pEnt->slot218(&vecAngles);
			return true;
		}
	} else {
		if (!_strcmpi(szKeyName, "spawnflags"))
			*((unsigned char *)this + 0x450) = *((unsigned char *)this + 0x451) = (unsigned char)atoi(szValue);
		else
			return sub_1009e430(szKeyName, szValue);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10056a90 size=0xaf
#include "CBaseEntity.h"
#include "CDynamicLight.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct CLightSlots
{
	SL100(a0)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
	virtual void v104();
};

extern char g_1070d1b0[];
extern void sub_101cf390(CDynamicLight *, void *, void *);

void CDynamicLight::vfunc103()
{
	((CLightSlots *)this)->v104();
	{
		const char *pszName = *(const char **)((char *)this + 0x26c);
		ScopeTrace trace("CBaseEntity::SetSolid", pszName ? pszName : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	*((char *)this + 0x453) = 1;
	sub_101cf390(this, g_1070d1b0, g_1070d1b0);
	((CBaseEntity *)this)->sub_100b3b00();
	*(unsigned int *)((char *)this + 0x268) |= 0x80;
}
// END FUNCTION

// FUNCTION: 0x10056b70 size=0x1e
#include "CDynamicLight.h"

void sub_100aa7b0(void *p);

// TARGET: CDynamicLight::vfunc5
CDynamicLight *CDynamicLight::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
