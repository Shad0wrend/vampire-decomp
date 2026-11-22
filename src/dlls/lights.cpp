// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 26 blocks
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

// FUNCTION: 0x101302f0 size=0x5
int sub_10130330(void);
int g_1070c5bc = ((int (*)(int))sub_10130330)(0);
// END FUNCTION

// FUNCTION: 0x10130330 size=0x1a
namespace lifted {
extern int g_105754f8;
extern int g_105754fc;
extern char g_1057553c;
}
int sub_10130330()
{
    lifted::g_105754fc = 0xb;
    lifted::g_105754f8 = (int)&lifted::g_1057553c;
    return (int)&lifted::g_105754f8;
}
// END FUNCTION

// FUNCTION: 0x10130360 size=0x1e
#include "CLight.h"

struct CBase100090fc
{
	void sub_100090fc(int a);
};

extern char g_10464d74[];

// TARGET: CLight::sub_10130360
CLight *CLight::sub_10130360()
{
	((CBase100090fc *)this)->sub_100090fc(0);
	*(void **)this = g_10464d74;
	m_flFadeTime = 0.05f;
	return this;
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

// FUNCTION: 0x10130610 size=0x57
#include "CLight.h"
#include <string.h>
void CLight::sub_10130610()
{
	const char *pszPattern = m_pattern;
	if (!pszPattern)
		pszPattern = "";
	if (pszPattern[0] == 'a' || strlen(pszPattern) <= 1)
		engine->vfunc62(m_iStyle, "m");
	else
		engine->vfunc62(m_iStyle, pszPattern);
	m_flags204 &= ~1;
}
// END FUNCTION

// FUNCTION: 0x10130690 size=0x2d
#include "CLight.h"


// TARGET: CLight::sub_10130690
void CLight::sub_10130690()
{
	engine->vfunc62(m_iStyle, "a");
	m_flags204 |= 1;
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

// FUNCTION: 0x101306f0 size=0x13
#include "CEnvFireSource.h"

struct CEnvFireSourceStubs {
    void sub_10014556();
    void sub_100012cb();
};

// TARGET: CEnvFireSource::sub_101306f0
void CEnvFireSource::sub_101306f0()
{
    if (m_flags204 & 1) {
        ((CEnvFireSourceStubs *)this)->sub_10014556();
    } else {
        ((CEnvFireSourceStubs *)this)->sub_100012cb();
    }
}
// END FUNCTION

// FUNCTION: 0x10130720 size=0x8
namespace lifted {
int sub_10014556();
}
int __stdcall sub_10130720(int a0)
{
    return lifted::sub_10014556();
}
// END FUNCTION

// FUNCTION: 0x10130740 size=0x8
namespace lifted {
int sub_100012cb();
}
int __stdcall sub_10130740(int a0)
{
    return lifted::sub_100012cb();
}
// END FUNCTION

// FUNCTION: 0x10130760 size=0x8
namespace lifted {
int sub_100115fe();
}
int __stdcall sub_10130760(int a0)
{
    return lifted::sub_100115fe();
}
// END FUNCTION

// FUNCTION: 0x10130780 size=0x55
#include "inputdata_t.h"
#include "engineserver.h"
extern char g_106b8540[];

struct CLightStyleX
{
	char m_pad0000[0x204];
	unsigned int m_flags204;
	char m_pad0208[0x450 - 0x208];
	int m_iStyle;	// 0x450
	const char *m_pszPattern;	// 0x454
	void sub_10130780(inputdata_t *pInput);
};

// TARGET: CLightStyleX::sub_10130780
void CLightStyleX::sub_10130780(inputdata_t *pInput)
{
	variant_t *pv = &pInput->value;
	if (pv->fieldType != 2) {
		pInput = 0;
		pv = (variant_t *)&pInput;
	}
	const char *psz = pv->iszValue;
	m_pszPattern = psz;
	if (!psz)
		psz = g_106b8540;
	engine->vfunc62(m_iStyle, psz);
	m_flags204 &= 0xfffffffe;
}
// END FUNCTION

// FUNCTION: 0x10130800 size=0x93
#include "CLight.h"
#include "inputdata_t.h"
#include "globalvars.h"
extern char g_106b8540[];
void sub_10012215();

struct string_tL
{
	const char *pszValue;
	string_tL() { pszValue = 0; }
	const char *ToCStr() const { return pszValue ? pszValue : g_106b8540; }
};
#define NULL_STRING_L string_tL()
struct variantL
{
	string_tL iszVal;
	char m_pad04[0xc];
	int fieldType;
	const char *sub_10008805();
	const char *String() { return (fieldType == 2) ? iszVal.ToCStr() : sub_10008805(); }
	string_tL StringID() const { return (fieldType == 2) ? iszVal : NULL_STRING_L; }
};
struct inputL { char pad[8]; variantL value; };
struct LightL : CLight
{
	void SetNextThink(float t) { m_flNextThink = t; }
};

void CLight::sub_10130800(inputdata_t *pIn)
{
	inputL &inputdata = *(inputL *)pIn;
	m_cCurrent = (m_pattern ? m_pattern : g_106b8540)[0];
	m_cTarget = inputdata.value.String()[0];
	m_pattern = inputdata.value.StringID().pszValue;
	sub_100ac4e0((int)sub_10012215, 0, 0);
	m_flNextThink = gpGlobals->curtime;
	m_flags204 &= ~1;
}
// END FUNCTION

// FUNCTION: 0x101308d0 size=0x99
#include "CLight.h"

#define V4(x) virtual void x##a(); virtual void x##b(); virtual void x##c(); virtual void x##d();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)

struct EngineSrv {
	V16(a) V16(b) V16(c) V4(d) V4(e) V4(f)
	virtual void s60();
	virtual void s61();
	virtual void LightStyle(int style, const char *value);
};
extern EngineSrv *g_1070b22c;

extern char g_106b8540[];

void CLight::sub_101308d0()
{
	char cur = m_cCurrent;
	char target = m_cTarget;
	if (cur < target) {
		cur++;
		m_cCurrent = cur;
	} else if (cur > target) {
		cur--;
		m_cCurrent = cur;
	}
	if (m_cCurrent == target) {
		const char *pattern = m_pattern;
		if (!pattern)
			pattern = g_106b8540;
		g_1070b22c->LightStyle(m_iStyle, pattern);
		*(float *)((char *)this + 0x17c) = 0;
	} else {
		char buf[2];
		buf[0] = m_cCurrent;
		buf[1] = 0;
		g_1070b22c->LightStyle(m_iStyle, buf);
		*(float *)((char *)this + 0x17c) = m_flFadeTime + gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x101309a0 size=0x43
#include "platform.h"
#include "CLight.h"

void *sub_100aa720(int size);
extern char g_105758c8[];

#define VD10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CLightVt
{
	VD10(a) VD10(b) VD10(c) VD10(d) VD10(e) VD10(f) VD10(g) VD10(h) VD10(i) VD10(j)
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105();
	virtual void vfunc106(const char *pszName);
};

// TARGET: light_spot
DLL_EXPORT CBaseEntity *light_spot()
{
	void *mem = sub_100aa720(0x460);
	CLight *p;
	if (mem)
		p = ((CLight *)mem)->sub_10130360();
	else
		p = 0;
	((CLightVt *)p)->vfunc106(g_105758c8);
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x10130a10 size=0x43
#include "platform.h"
#include "CLight.h"

void *sub_100aa720(int size);
extern char g_105758d8[];

#define VD10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CLightVt
{
	VD10(a) VD10(b) VD10(c) VD10(d) VD10(e) VD10(f) VD10(g) VD10(h) VD10(i) VD10(j)
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105();
	virtual void vfunc106(const char *pszName);
};

// TARGET: light_glspot
DLL_EXPORT CBaseEntity *light_glspot()
{
	void *mem = sub_100aa720(0x460);
	CLight *p;
	if (mem)
		p = ((CLight *)mem)->sub_10130360();
	else
		p = 0;
	((CLightVt *)p)->vfunc106(g_105758d8);
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x10130a80 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100121c5(GP *);
extern int vt_10465204;
extern char g_10575904[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: light_environment
DLL_EXPORT GP *light_environment()
{
	GP *p = (GP *)sub_1000db89(0x460);
	if (p) {
		sub_100121c5(p);
		*(int **)p = &vt_10465204;
	} else {
		p = 0;
	}
	p->name(g_10575904);
	return p;
}
// END FUNCTION

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
