// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101302d0 size=0x6
#include "datamap.h"
#include "CLight.h"
namespace lifted {
extern char g_105754f8;
}
datamap_t *CLight::vfunc82()
{
    return (datamap_t *)&lifted::g_105754f8;
}
// END FUNCTION

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

// FUNCTION: 0x10130460 size=0xd4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CLight.h"
#include "ScopeTrace.h"

extern float g_10453b74;
extern char g_10540a3c[];
extern char g_105758c4[];
void sub_101cd970(CLight *);

inline const char *Str(const char **pp)
{
	return *pp ? *pp : g_106b8540;
}

void CLight::vfunc103()
{
	if (*(int *)((char *)this + 0x26c) == 0) {
		sub_101cd970(this);
		return;
	}
	m_flFadeTime = m_flFadeTime > g_10453b74 ? m_flFadeTime : g_10453b74;
	int style = m_iStyle;
	if (style >= 32) {
		if (*((unsigned char *)this + 0x204) & 1) {
			engine->vfunc62(style, g_10540a3c);
			m_pattern = *g_10540a3c ? g_10540a3c : 0;
			return;
		}
		if (m_pattern) {
			engine->vfunc62(style, Str(&m_pattern));
		} else {
			engine->vfunc62(style, g_105758c4);
			m_pattern = *g_105758c4 ? g_105758c4 : 0;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10130580 size=0x33
// TARGET: CLight::vfunc173
#include "CLight.h"

void CLight::vfunc173(int a, int b, int useType, int d)
{
    if (m_iStyle >= 0x20) {
        if (((CBaseEntity *)this)->sub_100a98f0(useType, !(m_flags204 & 1))) {
            sub_100115fe();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101305d0 size=0x10
#include "CLight.h"

void __fastcall sub_100012cb(void *pThis);
void __fastcall sub_100a8710(void *pThis);

// TARGET: CLight::vfunc77
void CLight::vfunc77()
{
	sub_100012cb(this);
	sub_100a8710(this);
}
// END FUNCTION

// FUNCTION: 0x101305f0 size=0x10
#include "CLight.h"

void __fastcall sub_10014556(void *pThis);
void __fastcall sub_100a8990(void *pThis);

// TARGET: CLight::vfunc78
void CLight::vfunc78()
{
	sub_10014556(this);
	sub_100a8990(this);
}
// END FUNCTION

// FUNCTION: 0x101306d0 size=0x10
#include "CLight.h"

void __fastcall sub_100012cb(void *pThis);
void __fastcall sub_100acf90(void *pThis);

// TARGET: CLight::vfunc119
void CLight::vfunc119()
{
	sub_100012cb(this);
	sub_100acf90(this);
}
// END FUNCTION
