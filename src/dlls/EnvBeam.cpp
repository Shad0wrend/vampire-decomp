// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 15 blocks
#include "vampire.h"

// FUNCTION: 0x100feb50 size=0x6
#include "CEnvBeam.h"
namespace lifted {
extern char g_10568420;
}
datamap_t * CEnvBeam::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10568420);
}
// END FUNCTION

// FUNCTION: 0x100feb70 size=0x5
int sub_100febb0(void);
int g_1070909c = ((int (*)(int))sub_100febb0)(0);
// END FUNCTION

// FUNCTION: 0x100febb0 size=0x1a
namespace lifted {
extern int g_10568420;
extern int g_10568424;
extern char g_10568464;
}
int sub_100febb0()
{
    lifted::g_10568424 = 0x13;
    lifted::g_10568420 = (int)&lifted::g_10568464;
    return (int)&lifted::g_10568420;
}
// END FUNCTION

// FUNCTION: 0x100febe0 size=0x19
#include "CEnvBeam.h"

extern int vt_104583fc[];

// TARGET: CEnvBeam::sub_100febe0
CEnvBeam *CEnvBeam::sub_100febe0()
{
	sub_100bac50();
	*(int **)(void *)this = vt_104583fc;
	m_bFlag5a8 = 1;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100fec10 size=0x1e
#include "CEnvBeam.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvBeam::vfunc5
CBaseEntity *CEnvBeam::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100fec40 size=0x13a
#include "CEnvBeam.h"
#include "CEntityVSlots.h"

extern float g_104454c4;
void sub_10015b68();
void sub_10004bec();
void sub_1000752c();

void CEnvBeam::vfunc103()
{
	if (m_iszSpriteName == 0) {
		sub_100ac4e0((int)sub_10015b68, 0, 0);
		return;
	}
	CBeam::vfunc103();
	m_fEndWidth = (m_fWidth = m_nBoltWidth) * 0.1;
	if (m_flLife == g_104454c4 && !(m_flags204 & 8)) {
		sub_100ac4e0((int)sub_10004bec, 0, 0);
		m_flNextThink = gpGlobals->curtime;
		m_flStartTime = gpGlobals->curtime;
		if (m_name26c) {
			if (!(m_flags204 & 1)) {
				m_nActive = 0;
				m_flNextThink = 0;
				m_nEffectFlags |= 0x40;
			} else {
				m_nActive = 1;
			}
		}
	} else {
		m_nActive = 0;
		if (!m_name26c || (m_flags204 & 1)) {
			sub_100ac4e0((int)sub_1000752c, 0, 0);
			m_flNextThink = gpGlobals->curtime + 1.0;
		}
	}
	if (!m_bFlag5a8) {
		Vector *pOrigin = (Vector *)((CEntityVSlots *)this)->slot217();
		*(Vector *)m_vecSavedPos = *pOrigin;
	}
}
// END FUNCTION

// FUNCTION: 0x100fedd0 size=0x66
#include "CEnvBeam.h"
extern char g_106b8540[];
void __cdecl sub_10014e93(const char *src, char *dst, int len);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CEnvBeam::vfunc104()
{
	*(int *)m_pad0514 = engine->vfunc13(STRINGR(m_iszSpriteName), 0);
	if (m_iszFileName) {
		sub_10014e93(STRINGR(m_iszFileName), m_szFileName, 0x80);
		engine->vfunc17(m_szFileName, 1);
	}
	sub_10015749();
}
// END FUNCTION

// FUNCTION: 0x100fee60 size=0x2e
#include "CEnvBeam.h"
// TARGET: vfunc113
extern float g_104454c4;

void CEnvBeam::vfunc113()
{
    CBaseEntity::vfunc113();
    if (m_flLife == g_104454c4 && !(m_flags204 & 8))
    {
        sub_10100b60();
    }
}
// END FUNCTION

// FUNCTION: 0x100feea0 size=0x12
void sub_10014d03();

struct CFieldHolder {
    char pad_0000[0x4f4];
    int m_nField4f4;
    void sub_100feea0(int unused);
};

// TARGET: sub_100feea0
void CFieldHolder::sub_100feea0(int unused)
{
    if (m_nField4f4 == 0) {
        sub_10014d03();
    }
}
// END FUNCTION

// FUNCTION: 0x100feed0 size=0x12
#include "vampire.h"

void __fastcall sub_100ff020(void *pThis);

// TARGET: sub_100feed0
void __fastcall sub_100feed0(void *pThis, int, int)
{
	if (*(int *)((char *)pThis + 0x4f4))
		sub_100ff020(pThis);
}
// END FUNCTION

// FUNCTION: 0x100fef00 size=0x1a
struct CUnk100fef00
{
	char m_pad0000[0x4f4];
	int m_n4f4;

	void sub_100ff020();
	void sub_100fef50();
	void sub_100fef00(int a);
};

// TARGET: sub_100fef00
void CUnk100fef00::sub_100fef00(int a)
{
	if (m_n4f4 != 0) {
		sub_100ff020();
		return;
	}
	sub_100fef50();
}
// END FUNCTION

// FUNCTION: 0x100fef30 size=0x8
namespace lifted {
int sub_10009877();
}
int __stdcall sub_100fef30(int a0)
{
    return lifted::sub_10009877();
}
// END FUNCTION

// FUNCTION: 0x100fef50 size=0x9c
#include "CEnvBeam.h"
#include "CBeam.h"

extern float g_104454c4;

struct CBeamY : CBeam {
    int sub_100bb440();
    void sub_100bbe70(float *pEndPos, int a);
};
void sub_10004bec();
void sub_1000752c();

void CEnvBeam::sub_100fef50()
{
    *(int *)((char *)this + 0x4f4) = 1;
    if (*(float *)((char *)this + 0x500) == 0.0f && !(m_flags204 & 8)) {
        *(unsigned int *)((char *)this + 0x19c) &= ~0x40;
        CBeamY *pBeam = (CBeamY *)this;
        pBeam->sub_100bbe70(pBeam->sub_100bb270(), pBeam->sub_100bb440());
        sub_100ac4e0((int)sub_10004bec, 0, 0);
        *(float *)((char *)this + 0x17c) = gpGlobals->curtime;
        *(float *)((char *)this + 0x454) = gpGlobals->curtime;
    } else {
        sub_100ac4e0((int)sub_1000752c, 0, 0);
        *(float *)((char *)this + 0x17c) = gpGlobals->curtime;
    }
}
// END FUNCTION

// FUNCTION: 0x100ff020 size=0x41
#include "CEnvBeam.h"
void CEnvBeam::sub_100ff020()
{
	m_nActive = 0;
	if (m_flLife == 0.0f && !(m_flags204 & 8)) {
		m_nEffectFlags |= 0x40;
	}
	m_flNextThink = 0;
	CBaseEntity::sub_100ac4e0(0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x100ff090 size=0xd5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEnvBeam.h"
#include "CEntityVSlots.h"
#include "CUnknown1070b244.h"
#include "ScopeTrace.h"


extern CUnknown1070b244 *g_1070b244;
__declspec(dllimport) void __cdecl DevMsg(const char *pszFormat, ...);

static inline const char *StringOf(const char *const &s)
{
	return s ? s : g_106b8540;
}

void CEnvBeam::sub_100ff090()
{
	if (m_flLife != 0.0f)
	{
		float flNext;
		if (m_flags204 & 4)
			flNext = g_1070b244->vfunc1(0, m_flRestrike) + gpGlobals->curtime;
		else
			flNext = m_flRestrike + gpGlobals->curtime;
		m_flNextThink = flNext + m_flLife;
	}
	m_nActive = 1;
	if (m_iszEndEntity == 0)
	{
		if (m_iszStartEntity == 0)
		{
			sub_101001e0();
			return;
		}
		CBaseEntity *pEnt = sub_100bbdf0(StringOf(m_iszStartEntity));
		if (pEnt)
		{
			sub_10100860((const float *)((CEntityVSlots *)pEnt)->slot217());
			return;
		}
		DevMsg("env_beam: unknown entity \"%s\"\n", StringOf(m_iszStartEntity));
		return;
	}
	sub_100ff310();
}
// END FUNCTION
