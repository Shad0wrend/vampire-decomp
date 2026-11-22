// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 34 blocks
#include "vampire.h"

// FUNCTION: 0x100bf740 size=0x8
#include "CFuncIllusionary.h"
// TARGET: CFuncIllusionary::sub_100bf740
unsigned char CFuncIllusionary::sub_100bf740()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x100bf760 size=0xc4
#include "CFuncIllusionary.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "CUnknown101466e0.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern float g_1070d9d0[3];

void CFuncIllusionary::vfunc103()
{
	((CEntityVSlots *)this)->slot64(g_1070d9d0);
	vfunc93(0, 0);
	const char *name = m_name26c ? m_name26c : g_106b8540;
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	(*g_109f3680)--;
	int tmp;
	const char *pszModel = *vfunc9(&tmp);
	if (!pszModel)
		pszModel = g_106b8540;
	vfunc105(pszModel);
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
}
// END FUNCTION

// FUNCTION: 0x100bf870 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1045243c[];	// CFuncRotating vftable
extern const char g_1055bc1c[];

// TARGET: func_rotating
DLL_EXPORT CBaseEntity *func_rotating()
{
	void *mem = sub_100aa720(0x470);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1045243c;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1055bc1c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100bf8e0 size=0x8
#include "CFuncRotating.h"
// TARGET: CFuncRotating::sub_100bf8e0
unsigned char CFuncRotating::sub_100bf8e0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x100bf900 size=0x3
#include "CFuncRotating.h"
bool CFuncRotating::vfunc128()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bf920 size=0x6
#include "datamap.h"
#include "CFuncRotating.h"
namespace lifted {
extern char g_1055b4c0;
}
datamap_t * CFuncRotating::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1055b4c0);
}
// END FUNCTION

// FUNCTION: 0x100bf940 size=0x5
int sub_100bf980(void);
int g_106d2d7c = ((int (*)(int))sub_100bf980)(0);
// END FUNCTION

// FUNCTION: 0x100bf980 size=0x1a
namespace lifted {
extern int g_1055b4c0;
extern int g_1055b4c4;
extern char g_1055b504;
}
int sub_100bf980()
{
    lifted::g_1055b4c4 = 0x15;
    lifted::g_1055b4c0 = (int)&lifted::g_1055b504;
    return (int)&lifted::g_1055b4c0;
}
// END FUNCTION

// FUNCTION: 0x100bf9b0 size=0xbd
#include "CFuncRotating.h"
#include <string.h>
#include <stdlib.h>

bool CFuncRotating::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "fanfriction")) {
		m_flFanFriction = atof(szValue) * 0.01;
		return true;
	}
	if (!_strcmpi(szKeyName, "Volume")) {
		float v = atof(szValue) * 0.1;
		m_flVolume = v;
		m_flVolume = (v > 1.0f) ? 1.0 : ((v < 0.0) ? 0.0 : v);
		return true;
	}
	return CBaseEntity::vfunc110(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x100bfaa0 size=0x30e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CFuncRotating.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "CFloatPair3f4.h"
#include "globalvars.h"
#include "ScopeTrace.h"

void sub_100a47b0();

// TARGET: CFuncRotating::vfunc103
void CFuncRotating::vfunc103()
{
	Vector *pMove = (Vector *)m_vecMovedir;
	if (m_flVolume == 0.0)
		m_flVolume = 1.0f;
	if (m_flags204 & 0x80)
		m_flAttenuation = 2.0f;
	else if (m_flags204 & 0x100)
		m_flAttenuation = 1.25f;
	else
		m_flAttenuation = 0.8f;
	if (m_flFanFriction == 0.0f)
		m_flFanFriction = 1.0f;
	if (m_flags204 & 4)
		*pMove = Vector(0, 0, 1);
	else if (m_flags204 & 8)
		*pMove = Vector(1, 0, 0);
	else
		*pMove = Vector(0, 1, 0);
	if (m_flags204 & 2)
		*pMove = *pMove * -1.0f;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
	if (m_flags204 & 0x40) {
		{
			ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
			pCol->AddSolidFlags(4);
		}
		pSlots->slot93(8, 0);
	} else {
		{
			ScopeTrace trace("CBaseEntity::RemoveSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
			pCol->RemoveSolidFlags(4);
		}
		pSlots->slot93(8, 0);
	}
	sub_100b3b00();
	{
		int buf;
		const char *pszName = *pSlots->slot9(&buf);
		if (!pszName)
			pszName = g_106b8540;
		pSlots->slot105(pszName);
	}
	m_f460 = fabs(m_f460);
	m_pfnUse = (void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float))&CFloatPair3f4::sub_100c0ad0;
	if (m_f460 == 0.0f)
		m_f460 = 100.0f;
	if (m_flags204 & 1) {
		sub_100ac4e0((int)sub_100a47b0, 0, 0);
		m_flNextThink = gpGlobals->curtime + 1.5;
	}
	if (m_flags204 & 0x20)
		m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CFuncRotating::sub_100c0010;
	m_flSpeed164 = 0;
	vfunc104();
	pSlots->slot223();
}
// END FUNCTION

// FUNCTION: 0x100bfe80 size=0x92
#include "CFuncRotating.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

bool CFuncRotating::vfunc223()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::IsSolidFlagSet";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	unsigned char bit = (*((unsigned char *)this + 0x2b4) >> 2) & 1;
	(*g_109f3680)--;
	if (!bit)
		sub_100a6150(0, 0, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x100bff50 size=0x8a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFuncRotating.h"
#include "engineiface.h"
#include "ScopeTrace.h"

extern Vector g_1070d9d0;

void CFuncRotating::vfunc104()
{
	const char *pszFirst = m_pszNoiseRunning ? m_pszNoiseRunning : g_106b8540;
	if (pszFirst[0])
	{
		const char *pszSecond = *(const char *volatile *)&m_pszNoiseRunning;
		if (!pszSecond)
			pszSecond = g_106b8540;
		enginesound->vfunc0(pszSecond, 0);
	}
	if (*(Vector *)((char *)this + 0x3c8) != g_1070d9d0)
	{
		m_pfn0114 = (void (CBaseEntity::*)())&CFuncRotating::sub_100c0690;
		*(float *)((char *)this + 0x3fc) = *(float *)((char *)this + 0x3f4) + 1.5;
	}
}
// END FUNCTION

// FUNCTION: 0x100c0010 size=0x160
// TARGET: ?sub_100c0010@CFuncRotating@@QAEXPAVCBaseEntity@@@Z
#include "CFuncRotating.h"
#include "CTakeDamageInfo.h"
#include "CEntityVSlots.h"

void CFuncRotating::sub_100c0010(CBaseEntity *pOther)
{
	if (!pOther->m_nTakeDamage)
		return;

	float flSpeed = VectorLength(*(Vector *)m_angVel3c8) * 0.1f;
	m_f464 = flSpeed;

	CTakeDamageInfo info;
	pOther->sub_100a1250(info.sub_101c26d0(this, this, flSpeed, 1, 0, 0, -1));

	{
		Vector vecDelta = *((CEntityVSlots *)pOther)->slot220() - ((CEntityVSlots *)this)->slot192();
		pOther->sub_100b2e30((const float *)&vecDelta);
	}

	Vector vecDir = *(Vector *)pOther->m_vel3d4;
	VectorNormalize(vecDir);
	{
		Vector vecScale = vecDir * m_f464;
		pOther->sub_100b2e30((const float *)&vecScale);
	}
}
// END FUNCTION

// FUNCTION: 0x100c01d0 size=0x1c5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFuncRotating.h"
#include "CPASAttenuationFilter.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "engineiface.h"
#include <math.h>

#define RV1(n) virtual void v##n();
#define RV10(p) RV1(p##0) RV1(p##1) RV1(p##2) RV1(p##3) RV1(p##4) RV1(p##5) RV1(p##6) RV1(p##7) RV1(p##8) RV1(p##9)
#define RV100(p) RV10(p##0) RV10(p##1) RV10(p##2) RV10(p##3) RV10(p##4) RV10(p##5) RV10(p##6) RV10(p##7) RV10(p##8) RV10(p##9)

struct CFuncRotatingSlots
{
	RV100(a) RV100(b) RV10(c) RV1(d0) RV1(d1) RV1(d2) RV1(d3) RV1(d4) RV1(d5) RV1(d6)
	virtual float *vfunc217();
};

extern float g_104454c4;

void CFuncRotating::sub_100c01d0()
{
	float fpct = fabs(m_flSpeed164) / m_f460;
	float fvol = (fpct * m_flVolume > 1.0f) ? 1.0f : ((fpct * m_flVolume < g_104454c4) ? 0.0f : fpct * m_flVolume);
	float fpitch = 30.0f + 70.0f * fpct;
	fpitch = (fpitch > 255.0f) ? 255.0f : ((fpitch < g_104454c4) ? g_104454c4 : fpitch);
	int pitch = (int)fpitch;
	if (pitch == 100)
		pitch = 99;
	const char *pszNoise = m_pszNoiseRunning ? m_pszNoiseRunning : g_106b8540;
	if (*pszNoise) {
		float flAtten = m_flAttenuation;
		CPASAttenuationFilter filter(*(Vector *)((CFuncRotatingSlots *)this)->vfunc217(), flAtten);
		filter.MakeReliable();
		const char *pszName = m_pszNoiseRunning ? m_pszNoiseRunning : g_106b8540;
		int nIndex = engine->vfunc35(m_pEdict2e0);
		enginesound->vfunc3(&filter, nIndex, 6, pszName, fvol, m_flAttenuation, 3, pitch, 0, 0, 1, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x100c0420 size=0x1f0
#include "CFuncRotating.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "engineserver.h"
#include "engineiface.h"

extern float g_104454c4;
extern char g_106b8540[];

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
inline const char *STRINGV(const char *s) { return s ? s : g_106b8540; }

#define clamp_100c0420(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

inline int edict_100c0420(CFuncRotating *p) { return p->m_pEdict2e0; }
inline int entindex_100c0420(CFuncRotating *p) { return engine->vfunc35(edict_100c0420(p)); }

void CFuncRotating::sub_100c0420(float flSpeed)
{
	float flOld = m_flSpeed164;

	m_flSpeed164 = clamp_100c0420(flSpeed, -m_f460, m_f460);

	if (flOld == g_104454c4 && m_flSpeed164 != g_104454c4) {
		if (STRINGR(m_pszNoiseRunning)[0]) {
			CPASAttenuationFilter filter(*(const Vector *)((CEntitySoundOriginView *)this)->GetAbsOrigin(), m_flAttenuation);
			filter.MakeReliable();
			const char *pszNoise = STRINGR(m_pszNoiseRunning);
			int index = engine->vfunc35(m_pEdict2e0);
			enginesound->vfunc3(&filter, index, 6, pszNoise, 0.01f, m_flAttenuation, 0, 0x1e, 0, 0, 1, 0);
			sub_100c01d0();
		}
	} else if (flOld != g_104454c4 && m_flSpeed164 == g_104454c4) {
		if (STRINGR(m_pszNoiseRunning)[0]) {
			enginesound->vfunc7(entindex_100c0420(this), 6, STRINGV(m_pszNoiseRunning));
		}
	} else {
		sub_100c01d0();
	}

	Vector vecVel = m_flSpeed164 * *(Vector *)m_vecMovedir;
	sub_100b2f50(&vecVel.x);
}
// END FUNCTION

// FUNCTION: 0x100c0690 size=0x9a
#include "CFloatPair3f4.h"
#include <math.h>

void CFloatPair3f4::sub_100c0690()
{
    bool bSwitch = false;
    float flTarget = fabs(m_f164) + m_f460 * m_f450;
    if (fabs(flTarget) >= fabs(m_f45c)) {
        flTarget = m_f45c;
        bSwitch = true;
    } else if (m_f45c < 0.0f) {
        flTarget = flTarget * -1.0f;
    }
    sub_100c0420(flTarget);
    if (bSwitch) {
        m_pfn114 = sub_100c08d0;
        sub_100c08d0();
    }
    m_f3fc = m_f3f4 + 0.1;
}
// END FUNCTION

// FUNCTION: 0x100c0760 size=0x9b
#include "CFuncRotating.h"
#include <math.h>

struct CFuncRotatingSpeedView
{
	char m_pad0000[0x164];
	float m_flSpeed;	// 0x164
};

bool CFuncRotating::sub_100c0760(float flStep)
{
	bool bDone = false;
	float flNew = (float)fabs(((CFuncRotatingSpeedView *)this)->m_flSpeed) - m_f460 * m_flFanFriction * 0.5;
	if (flNew < 0.0f)
		flNew = 0.0f;
	if (fabs(flNew) <= fabs(flStep)) {
		bDone = true;
		flNew = flStep;
	} else if (((CFuncRotatingSpeedView *)this)->m_flSpeed < 0.0f) {
		flNew = flNew * -1.0f;
	}
	sub_100c0420(flNew);
	return bDone;
}
// END FUNCTION

// FUNCTION: 0x100c0830 size=0x39
#include "CFloatPair3f4.h"

char __stdcall sub_10014691(int a);

// TARGET: CFloatPair3f4::sub_100c0830
void CFloatPair3f4::sub_100c0830()
{
    if (sub_10014691(m_n45c))
    {
        m_pfn114 = &CFloatPair3f4::sub_100c08d0;
        sub_100c08d0();
        return;
    }
    m_f3fc = m_f3f4 + 0.1;
}
// END FUNCTION

// FUNCTION: 0x100c0880 size=0x32
#include "CFuncRotating.h"
void CFuncRotating::sub_100c0880()
{
	if (sub_100c0760(0)) {
		sub_100c0970(m_flTargetSpeed);
		return;
	}
	m_flNextThink3fc = m_flLocalTime3f4 + 0.1;
}
// END FUNCTION

// FUNCTION: 0x100c08d0 size=0x13
struct CFloatPair3f4 {
    char pad_0000[0x3f4];
    float m_f3f4;
    float m_f3f8;
    float m_f3fc;
    void sub_100c08d0();
};

// TARGET: sub_100c08d0
void CFloatPair3f4::sub_100c08d0()
{
    m_f3fc = m_f3f4 + 10.0f;
}
// END FUNCTION

// FUNCTION: 0x100c0900 size=0x49
#include "CFuncRotating.h"

float CFuncRotating::sub_100c0900(float flSpeed)
{
	if (m_vecMovedir[0] != 0.0f)
		return flSpeed * m_vecMovedir[0];
	if (m_vecMovedir[1] != 0.0f)
		return flSpeed * m_vecMovedir[1];
	return flSpeed * m_vecMovedir[2];
}
// END FUNCTION

// FUNCTION: 0x100c0970 size=0x109
#include "CFloatPair3f4.h"
#include <math.h>

extern float g_104454c4;

void CFloatPair3f4::sub_100c0970(float flValue)
{
	flValue = (float)fabs(flValue);
	if (m_b46c)
		flValue = flValue * -1.0f;
	m_f45c = flValue;
	if (!(m_b204 & 0x10))
	{
		sub_100c0420(flValue);
		m_pfn114 = sub_100c08d0;
	}
	else if ((m_f164 > g_104454c4 && flValue < g_104454c4) || (m_f164 < g_104454c4 && flValue > g_104454c4))
		m_pfn114 = sub_10011586;
	else if (fabs(m_f164) < fabs(flValue))
		m_pfn114 = sub_100c0690;
	else if (fabs(m_f164) > fabs(flValue))
		m_pfn114 = sub_100c0830;
	else
		m_pfn114 = sub_100c08d0;
	m_f3fc = m_f3f4 + 0.1;
}
// END FUNCTION

// FUNCTION: 0x100c0ad0 size=0x2c
#include "CFloatPair3f4.h"

// TARGET: CFloatPair3f4::sub_100c0ad0
void CFloatPair3f4::sub_100c0ad0(int a, int b, int c, int d)
{
	if (m_f164 != 0.0f) {
		sub_100c0970(0.0f);
	} else {
		sub_100c0970(m_f460);
	}
}
// END FUNCTION

// FUNCTION: 0x100c0b10 size=0x20
#include "vampire.h"
struct CUnk100c0b10
{
    char m_pad0000[0x164];
    int m_n164;  // 0x164
    void sub_100c0970(int a);
    void sub_100c0b10(int unused);
};
// TARGET: CUnk100c0b10::sub_100c0b10
void CUnk100c0b10::sub_100c0b10(int unused)
{
    char *p = (char *)this;
    p[0x46c] = (p[0x46c] == 0);
    unused = m_n164;
    sub_100c0970(unused);
}
// END FUNCTION

// FUNCTION: 0x100c0b40 size=0x7e
#include <math.h>

struct SInput100c0b40 {
	char m_pad0000[8];
	float m_flValue;
	char m_pad000c[0x18 - 0xc];
	int m_nType;
};

struct CUnit100c0b40 {
	char m_pad0000[0x460];
	float m_flScale;
	char m_pad0464[0x46c - 0x464];
	char m_bNegative;
	void sub_100c0970(float f);
	void sub_100c0b40(SInput100c0b40 *p);
};

// TARGET: CUnit100c0b40::sub_100c0b40
void CUnit100c0b40::sub_100c0b40(SInput100c0b40 *p)
{
	float v;
	bool neg;
	if (p->m_nType == 1) {
		v = p->m_flValue;
		neg = v < 0.0f;
	} else {
		v = 0.0f;
		neg = false;
	}
	v = fabs(v);
	m_bNegative = neg;
	if (v > 1.0f)
		v = 1.0f;
	else if (v < 0.0f)
		v = 0.0f;
	sub_100c0970(v * m_flScale);
}
// END FUNCTION

// FUNCTION: 0x100c0be0 size=0xf
// TARGET: sub_100c0be0
struct CUnknown100c0be0
{
    char pad[0x460];
    int m_i460;

    void sub_100c0970(int v);
    void sub_100c0be0(int v);
};

void CUnknown100c0be0::sub_100c0be0(int v)
{
    v = m_i460;
    sub_100c0970(v);
}
// END FUNCTION

// FUNCTION: 0x100c0c00 size=0x16
#include "CFloatPair3f4.h"

// TARGET: CFloatPair3f4::sub_100c0c00
void CFloatPair3f4::sub_100c0c00(float flUnused)
{
	m_b46c = 0;
	sub_100c0970(m_f460);
}
// END FUNCTION

// FUNCTION: 0x100c0c30 size=0x16
#include "CFloatPair3f4.h"

// TARGET: CFloatPair3f4::sub_100c0c30
void CFloatPair3f4::sub_100c0c30(float flUnused)
{
	m_b46c = 1;
	sub_100c0970(m_f460);
}
// END FUNCTION

// FUNCTION: 0x100c0c60 size=0xd
#include "CUnknown100c0c60.h"
void CUnknown100c0c60::sub_100c0c60(float value)
{
	value = 0.0f;
	sub_100c0970(value);
}
// END FUNCTION

// FUNCTION: 0x100c0c80 size=0x31
#include "CFloatPair3f4.h"
void CFloatPair3f4::sub_100c0c80(float flUnused)
{
	if (m_f164 > 0.0f)
	{
		sub_100c0970(0.0f);
	}
	else
	{
		sub_100c0970(m_f460);
	}
}
// END FUNCTION

// FUNCTION: 0x100c0cd0 size=0x2d
// TARGET: CFuncRotating::vfunc178
#include "CFuncRotating.h"
#include "CUnknown101c26d0.h"

void CFuncRotating::vfunc178(CBaseEntity *pOther) {
    CUnknown101c26d0 info;
    pOther->sub_100a1250(info.sub_101c26d0(this, this, m_f464, 1, 0, 0, -1));
}
// END FUNCTION

// FUNCTION: 0x100c0d10 size=0xa1
#include "CFuncRotating.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
void sub_101434b0(int, int, const char *, int, int, int, int, int);

int CFuncRotating::vfunc124()
{
	int line = CBaseEntity::vfunc124();
	if (*(unsigned char *)((char *)this + 0x224) & 1) {
		char text[512];
		Q_snprintf(text, 512, "Speed cur (target): %3.2f (%3.2f)", sub_100c0900(*(float *)((char *)this + 0x164)), sub_100c0900(*(float *)((char *)this + 0x45c)));
		int edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(engine->vfunc35(edict), line, text, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x100c0df0 size=0x1e
#include "CFuncIllusionary.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncIllusionary::vfunc5
CBaseEntity *CFuncIllusionary::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100c0e20 size=0x1e
#include "CFuncRotating.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncRotating::vfunc5
CBaseEntity *CFuncRotating::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
