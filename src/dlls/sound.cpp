// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 26 blocks
#include "vampire.h"

// FUNCTION: 0x101ac1a0 size=0x6
#include "CAmbientGeneric.h"
#include "datamap.h"
namespace lifted {
extern char g_105969a4;
}
datamap_t *CAmbientGeneric::vfunc82()
{
    return (datamap_t *)&lifted::g_105969a4;
}
// END FUNCTION

// FUNCTION: 0x101ac1c0 size=0x5
int sub_101ac200(void);
int g_1072bc0c = ((int (*)(int))sub_101ac200)(0);
// END FUNCTION

// FUNCTION: 0x101ac200 size=0x1a
namespace lifted {
extern int g_105969a4;
extern int g_105969a8;
extern char g_105969ec;
}
int sub_101ac200()
{
    lifted::g_105969a8 = 0x16;
    lifted::g_105969a4 = (int)&lifted::g_105969ec;
    return (int)&lifted::g_105969a4;
}
// END FUNCTION

// FUNCTION: 0x101ac230 size=0x44
#include "CAmbientGeneric.h"

// TARGET: CAmbientGeneric::CAmbientGeneric
CAmbientGeneric::CAmbientGeneric()
{
	m_b04dc = 0;
	m_b04dd = 0;
	m_b04de = 0;
	m_b04df = 0;
	m_n04e0 = 0;
}
// END FUNCTION

// FUNCTION: 0x101ac2a0 size=0x3
#include "CAmbientGeneric.h"
bool CAmbientGeneric::vfunc136()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101ac2c0 size=0x1e
#include "CAmbientGeneric.h"

void sub_100aa7b0(void *p);

// TARGET: CAmbientGeneric::vfunc5
CBaseEntity *CAmbientGeneric::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101ac2f0 size=0xa
#include "CAmbientGeneric.h"
unsigned int CAmbientGeneric::sub_101ac2f0()
{
	return m_flags204 & 1;
}
// END FUNCTION

// FUNCTION: 0x101ac310 size=0x1df
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <string.h>
#include "CAmbientGeneric.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) void __cdecl Warning(const char *fmt, ...);
int sub_101ac570(float flVolume, char bFlag);
void sub_1000969c();
void sub_100131e2();
void sub_101cd940(CBaseEntity *pEnt);

inline const char *STRING(const char *pszString)
{
	if (pszString)
		return pszString;
	return g_106b8540;
}

// TARGET: CAmbientGeneric::vfunc103
void CAmbientGeneric::vfunc103()
{
	m_n0454 = sub_101ac570(m_flVolume0450, (char)sub_101ac2f0());
	const char *pszSound = STRING(m_pszSoundFile);
	if (m_pszSoundFile && strlen(pszSound) >= 1) {
		{
			ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
		}
		((CEntityVSlots *)this)->slot93(0, 0);
		((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000969c, 0, 0);
		m_flNextThink = 0;
		m_pfnUse = static_cast<void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float)>(&CAmbientGeneric::sub_101ad470);	// SetUse(ToggleUse)
		m_b04bc = 0;
		if (!m_b04df && (m_flags204 & 0x20))
			m_b04bd = 0;
		else
			m_b04bd = 1;
		if (m_b04dc)
			m_n04e0 |= 0x800;
		if (m_b04dd)
			m_n04e0 |= 0x1000;
		if (m_b04de)
			m_n04e0 |= 0x200;
		if (m_b04df)
			m_n04e0 |= 0x100;
		CEntityVSlots *pThis = (CEntityVSlots *)this;
		unsigned int *pHandle = (unsigned int *)&m_hSoundEnt;
		*pHandle = 0xffffffff;
		pThis->slot104();
		return;
	}
	Warning("EMPTY AMBIENT AT: %f, %f, %f\n", ((CEntityVSlots *)this)->slot217()->x, ((CEntityVSlots *)this)->slot217()->y, ((CEntityVSlots *)this)->slot217()->z);
	sub_101cd940((CBaseEntity *)this);
}
// END FUNCTION

// FUNCTION: 0x101ac570 size=0x41
#include <math.h>
extern float g_10462950;
int sub_101ac570(float x, bool b)
{
	int r = 0;
	if (x > 0.0f && !b)
		r = (int)(20.0 * log10(x * 0.027777777777777776) + g_10462950);
	return r;
}
// END FUNCTION

// FUNCTION: 0x101ac5e0 size=0x6a
#include "CBaseEntity.h"
#include "CAmbientGeneric.h"
#include "CEntityVSlots.h"

extern char g_106b8540[];
void sub_101cdac0(int edict, int pOrigin, const char *pszName, int a, int b, unsigned int flags, int c);
typedef void (*PFN_EmitAt)(int edict, int pOrigin, const char *pszName, float flVolume, int a, unsigned int flags, int c);

void CAmbientGeneric::vfunc180()
{
	CEntityVSlots *pEnt = (CEntityVSlots *)((EHANDLE *)&m_hSoundEnt)->Get();
	if (pEnt) {
		const char *pszName = m_pszSoundFile;
		if (!pszName)
			pszName = g_106b8540;
		int edict = *(int *)((char *)pEnt + 0x2e0);
		((PFN_EmitAt)sub_101cdac0)(edict, (int)pEnt->slot217(), pszName, 0.0f, 0, 4, 0);
	}
	((CBaseEntity *)this)->CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x101ac670 size=0xf
struct CUnknown101ac670 { int sub_101ac670(int); };
int CUnknown101ac670::sub_101ac670(int a0)
{
    return (*(int *)((char *)this + 0x4e0)) | a0;
}
// END FUNCTION

// FUNCTION: 0x101ac690 size=0xf5
#include "CBaseEntity.h"
// TARGET: ?sub_101ac690@CAmbientGenericInput@@QAEXPAUinputdata_t@@@Z
#include "CAmbientGeneric.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
#include "inputdata_t.h"

extern CGlobalEntityList *g_10566458;
extern float g_104454c4;
extern double g_1044e658;
extern char g_106b8540[];

void sub_101cdac0(int edict, int pOrigin, const char *pszName, int a, int b, unsigned int flags, int c);
typedef void (*PFN_EmitAt)(int edict, int pOrigin, const char *pszName, float flVolume, int a, unsigned int flags, int c);

struct CAmbientGenericInput : CAmbientGeneric
{
	void sub_101ac690(inputdata_t *pInput);
	int sub_101ac670(int flags);
};

int CAmbientGenericInput::sub_101ac670(int flags)
{
	return m_n04e0 | flags;
}

inline float VariantFloat(const variant_t &v)
{
	return v.fieldType == 1 ? v.flValue : g_104454c4;
}

inline const char *StringPtr(const char *p)
{
	return p ? p : g_106b8540;
}

void CAmbientGenericInput::sub_101ac690(inputdata_t *pInput)
{
	int nPitch = (int)(VariantFloat(pInput->value) > 255.0f ? 255.0f
		: (VariantFloat(pInput->value) < 0.0f ? 0.0f : VariantFloat(pInput->value)));
	m_dpv.pitch = nPitch;

	CBaseEntity *pSoundEnt = m_hSoundEnt.Get();
	if (pSoundEnt) {
		CEntityVSlots *pEnt = (CEntityVSlots *)pSoundEnt;
		const char *pszName = StringPtr(m_pszSoundFile);
		int edict = pSoundEnt->m_pEdict2e0;
		((PFN_EmitAt)sub_101cdac0)(edict, (int)pEnt->slot217(), pszName, (float)(m_dpv.vol * g_1044e658), m_n0454, sub_101ac670(2), nPitch);
	}
}
// END FUNCTION

// FUNCTION: 0x101ac7d0 size=0x101
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
// TARGET: ?sub_101ac7d0@CAmbientGenericInput@@QAEXPAUinputdata_t@@@Z
#include "CAmbientGeneric.h"
#include "CEntityVSlots.h"
#include "inputdata_t.h"

extern float g_104454c4;
void sub_101cdac0(int edict, int pOrigin, const char *pszName, int a, int b, unsigned int flags, int c);
typedef void (*PFN_EmitAt)(int edict, int pOrigin, const char *pszName, float flVolume, int a, unsigned int flags, int c);

namespace block_101ac7d0 {
struct CAmbientGenericUnit : CAmbientGeneric
{
	int sub_101ac670(int flags);
};
int CAmbientGenericUnit::sub_101ac670(int flags)
{
	return m_n04e0 | flags;
}
}
using namespace block_101ac7d0;

inline float VariantFloat(const variant_t &v)
{
	return v.fieldType == 1 ? v.flValue : g_104454c4;
}

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct CAmbientGenericInput : CAmbientGeneric
{
	void sub_101ac7d0(inputdata_t *pInput);
};

void CAmbientGenericInput::sub_101ac7d0(inputdata_t *pInput)
{
	int nVol = (int)(((VariantFloat(pInput->value) > 10.0f) ? 10.0f : ((VariantFloat(pInput->value) < 0.0f) ? 0.0f : VariantFloat(pInput->value))) * 10.0f);
	m_dpv.vol = nVol;
	CBaseEntity *pSource = m_hSoundEnt.Get();
	if (pSource) {
		CEntityVSlots *pEnt = (CEntityVSlots *)pSource;
		const char *pszName = STRINGR(*(const char *const *)&m_pszSoundFile);
		int edict = *(int *)((char *)pEnt + 0x2e0);
		float flVol = (float)(nVol * 0.01);
		((PFN_EmitAt)sub_101cdac0)(edict, (int)pEnt->slot217(), pszName, flVol, m_n0454, ((CAmbientGenericUnit *)this)->sub_101ac670(1), m_dpv.pitch);
	}
}
// END FUNCTION

// FUNCTION: 0x101ac930 size=0x66
#include "CAmbientGeneric.h"

extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)
extern const char g_106b8540[];

struct SoundSystemLike {
    virtual void Precache(const char *pszName, int a);
};
extern SoundSystemLike *g_1070b248;

// TARGET: CAmbientGeneric::vfunc104
void CAmbientGeneric::vfunc104()
{
    const char *p = m_pszSoundFile;
    const char *pszName = p ? p : g_106b8540;
    if (m_pszSoundFile) {
        if (strlen(pszName) > 1 && *pszName != '!')
            g_1070b248->Precache(pszName, 0);
    }
    sub_101ad0f0();
    if (!(m_flags204 & 0x10) && m_b04bd)
        m_b04bc = 1;
}
// END FUNCTION

// FUNCTION: 0x101ac9c0 size=0x14f
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
// TARGET: ?vfunc113@CAmbientGeneric@@QAEXXZ
#include "CAmbientGeneric.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"

extern CGlobalEntityList g_106eb5d8;
void sub_101cdac0(int edict, const Vector *pOrigin, const char *pszName, float flVolume, int soundlevel, int flags, int pitch);
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
inline const char *STRINGV(const char *s) { return s ? s : g_106b8540; }
struct CEdictView { char pad[0x2e0]; int m_edict; int edict() { return m_edict; } };

namespace block_101ac9c0 {
struct CAmbientGenericUnit : CAmbientGeneric
{
	int sub_101ac670(int flags);
};
int CAmbientGenericUnit::sub_101ac670(int flags)
{
	return m_n04e0 | flags;
}
}
using namespace block_101ac9c0;

void CAmbientGeneric::vfunc113()
{
	if (0 == m_hSoundEnt.Get()) {
		if (m_pszSoundEntName) {
			m_hSoundEnt = g_106eb5d8.sub_100f7770(0, m_pszSoundEntName, 0, 0);
		}
		if (m_hSoundEnt.Get() == 0)
			m_hSoundEnt = (CBaseEntity *)this;
	}
	if (!(m_b04bc)) return; CBaseEntity *pSource = m_hSoundEnt.Get();
		if (pSource) {
			const char *szSoundFile = *(const char **)&m_pszSoundFile;
			if (!szSoundFile)
				szSoundFile = g_106b8540;
			int edict;
			if ((char)(int)szSoundFile == -1) edict = ((CEdictView *)pSource)->edict(); else edict = ((CEdictView *)pSource)->edict();
			sub_101cdac0(edict, ((CEntityVSlots *)pSource)->slot217(), szSoundFile, (float)(m_dpv.vol * 0.01), m_n0454, ((CAmbientGenericUnit *)this)->sub_101ac670(8), m_dpv.pitch);
		}
		m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x101acb70 size=0x460
#include <stdlib.h>
#include "CAmbientGeneric.h"
#include "CBaseEntity.h"
#include "CEntitySoundOriginView.h"
#include "engineiface.h"
#include "globalvars.h"

extern char g_106b8540[];
void sub_101cdac0(int edict, const float *origin, const char *file, float vol, int atten, int flags, int pitch);

namespace block_101acb70 {
struct CAmbientGenericUnit : CAmbientGeneric {
	int sub_101ac670(int flags);
};
int CAmbientGenericUnit::sub_101ac670(int flags)
{
	return m_n04e0 | flags;
}
}
using namespace block_101acb70;

// TARGET: ?sub_101acb70@CAmbientGeneric@@QAEXXZ
void CAmbientGeneric::sub_101acb70()
{
	const char *szSoundFile = m_pszSoundFile;
	if (!szSoundFile)
		szSoundFile = g_106b8540;
	int pitch = m_dpv.pitch;
	int vol = m_dpv.vol;
	int flags = ((CAmbientGenericUnit *)this)->sub_101ac670(0);
	int fChanged = 0;
	int prev;

	if (!m_dpv.spinup && !m_dpv.spindown && !m_dpv.fadein && !m_dpv.fadeout && !m_dpv.lfotype)
		return;

	if (m_dpv.spinup || m_dpv.spindown) {
		prev = m_dpv.pitchfrac >> 8;
		if (m_dpv.spinup > 0)
			m_dpv.pitchfrac += m_dpv.spinup;
		else if (m_dpv.spindown > 0)
			m_dpv.pitchfrac -= m_dpv.spindown;
		pitch = m_dpv.pitchfrac >> 8;
		if (pitch > m_dpv.pitchrun) {
			pitch = m_dpv.pitchrun;
			m_dpv.spinup = 0;
		}
		if (pitch < m_dpv.pitchstart) {
			pitch = m_dpv.pitchstart;
			m_dpv.spindown = 0;
			CBaseEntity *pSoundEnt = m_hSoundEnt.Get();
			if (pSoundEnt) {
				int edict = pSoundEnt->m_pEdict2e0;
				sub_101cdac0(edict, ((CEntitySoundOriginView *)pSoundEnt)->GetAbsOrigin(), szSoundFile, 0, 0, 4, 0);
			}
			return;
		}
		if (pitch > 255)
			pitch = 255;
		if (pitch < 1)
			pitch = 1;
		m_dpv.pitch = pitch;
		fChanged |= prev != pitch;
		flags |= 2;
	}

	if (m_dpv.fadein || m_dpv.fadeout) {
		prev = m_dpv.volfrac >> 8;
		if (m_dpv.fadein > 0)
			m_dpv.volfrac += m_dpv.fadein;
		else if (m_dpv.fadeout > 0)
			m_dpv.volfrac -= m_dpv.fadeout;
		vol = m_dpv.volfrac >> 8;
		if (vol > m_dpv.volrun) {
			vol = m_dpv.volrun;
			m_dpv.fadein = 0;
		}
		if (vol < m_dpv.volstart) {
			vol = m_dpv.volstart;
			m_dpv.fadeout = 0;
			CBaseEntity *pSoundEnt = m_hSoundEnt.Get();
			if (pSoundEnt) {
				int edict = pSoundEnt->m_pEdict2e0;
				sub_101cdac0(edict, ((CEntitySoundOriginView *)pSoundEnt)->GetAbsOrigin(), szSoundFile, 0, 0, 4, 0);
			}
			return;
		}
		if (vol > 100)
			vol = 100;
		if (vol < 1)
			vol = 1;
		m_dpv.vol = vol;
		fChanged |= prev != vol;
		flags |= 1;
	}

	if (m_dpv.lfotype) {
		int pos;
		if (m_dpv.lfofrac > 0x6fffffff)
			m_dpv.lfofrac = 0;
		m_dpv.lfofrac += m_dpv.lforate;
		pos = m_dpv.lfofrac >> 8;
		if (m_dpv.lfofrac < 0) {
			m_dpv.lfofrac = 0;
			m_dpv.lforate = abs(m_dpv.lforate);
			pos = 0;
		} else if (pos > 255) {
			pos = 255;
			m_dpv.lfofrac = 255 << 8;
			m_dpv.lforate = -abs(m_dpv.lforate);
		}
		switch (m_dpv.lfotype) {
		case 1:
			if (pos < 128)
				m_dpv.lfomult = 255;
			else
				m_dpv.lfomult = 0;
			break;
		case 3:
			if (pos == 255)
				m_dpv.lfomult = enginerandom->vfunc2(0, 255);
			break;
		default:
			m_dpv.lfomult = pos;
			break;
		}
		if (m_dpv.lfomodpitch) {
			prev = pitch;
			pitch += ((m_dpv.lfomult - 128) * m_dpv.lfomodpitch) / 100;
			if (pitch > 255)
				pitch = 255;
			if (pitch < 1)
				pitch = 1;
			fChanged |= prev != pitch;
			flags |= 2;
		}
		if (m_dpv.lfomodvol) {
			prev = vol;
			vol += ((m_dpv.lfomult - 128) * m_dpv.lfomodvol) / 100;
			if (vol > 100)
				vol = 100;
			if (vol < 0)
				vol = 0;
			fChanged |= prev != vol;
			flags |= 1;
		}
	}

	if (flags && fChanged) {
		if (pitch == 100)
			pitch = 101;
		CBaseEntity *pSoundEnt = m_hSoundEnt.Get();
		if (pSoundEnt) {
			int edict = pSoundEnt->m_pEdict2e0;
			sub_101cdac0(edict, ((CEntitySoundOriginView *)pSoundEnt)->GetAbsOrigin(), szSoundFile, (float)(vol * 0.01), m_n0454, ((CAmbientGenericUnit *)this)->sub_101ac670(flags), pitch);
		}
	}
	m_flNextThink = gpGlobals->curtime + 0.2;
}
// END FUNCTION

// FUNCTION: 0x101ad0f0 size=0x24e
#include <stdlib.h>
#pragma intrinsic(abs)
#include "CAmbientGeneric.h"
extern dynpitchvol_t g_10595f18[];

void CAmbientGeneric::sub_101ad0f0()
{
	int pitchinc;

	m_dpv.volrun = m_iHealth * 10;
	if (m_dpv.volrun > 100) m_dpv.volrun = 100;
	if (m_dpv.volrun < 0) m_dpv.volrun = 0;

	if (m_dpv.preset != 0 && m_dpv.preset <= 27)
	{
		m_dpv = g_10595f18[m_dpv.preset - 1];

		if (m_dpv.spindown > 0)
			m_dpv.spindown = (101 - m_dpv.spindown) * 64;
		if (m_dpv.spinup > 0)
			m_dpv.spinup = (101 - m_dpv.spinup) * 64;

		m_dpv.volstart *= 10;
		m_dpv.volrun *= 10;

		if (m_dpv.fadein > 0)
			m_dpv.fadein = (101 - m_dpv.fadein) * 64;
		if (m_dpv.fadeout > 0)
			m_dpv.fadeout = (101 - m_dpv.fadeout) * 64;

		m_dpv.lforate *= 256;

		m_dpv.fadeinsav = m_dpv.fadein;
		m_dpv.fadeoutsav = m_dpv.fadeout;
		m_dpv.spinupsav = m_dpv.spinup;
		m_dpv.spindownsav = m_dpv.spindown;
	}

	m_dpv.fadein = m_dpv.fadeinsav;
	m_dpv.fadeout = 0;

	if (m_dpv.fadein)
		m_dpv.vol = m_dpv.volstart;
	else
		m_dpv.vol = m_dpv.volrun;

	m_dpv.spinup = m_dpv.spinupsav;
	m_dpv.spindown = 0;

	if (m_dpv.spinup)
		m_dpv.pitch = m_dpv.pitchstart;
	else
		m_dpv.pitch = m_dpv.pitchrun;

	if (m_dpv.pitch == 0)
		m_dpv.pitch = 100;

	m_dpv.pitchfrac = m_dpv.pitch << 8;
	m_dpv.volfrac = m_dpv.vol << 8;

	m_dpv.lfofrac = 0;
	m_dpv.lforate = abs(m_dpv.lforate);

	m_dpv.cspincount = 1;

	if (m_dpv.cspinup)
	{
		pitchinc = (255 - m_dpv.pitchstart) / m_dpv.cspinup;

		m_dpv.pitchrun = m_dpv.pitchstart + pitchinc;
		if (m_dpv.pitchrun > 255) m_dpv.pitchrun = 255;
	}

	if ((m_dpv.spinupsav || m_dpv.spindownsav || (m_dpv.lfotype && m_dpv.lfomodpitch))
		&& (m_dpv.pitch == 100))
		m_dpv.pitch = 101;
}
// END FUNCTION

// FUNCTION: 0x101ad3e0 size=0x17
namespace lifted {
struct C100131e2 { int sub_100131e2(int, int, int, int); };
}
struct CUnknown101ad3e0 { int sub_101ad3e0(int); };
int CUnknown101ad3e0::sub_101ad3e0(int a0)
{
    return ((lifted::C100131e2 *)this)->sub_100131e2(*(int *)((char *)a0), *(int *)((char *)a0 + 4), 1, 0);
}
// END FUNCTION

// FUNCTION: 0x101ad410 size=0x17
namespace lifted {
struct C100131e2 { int sub_100131e2(int, int, int, int); };
}
struct CUnknown101ad410 { int sub_101ad410(int); };
int CUnknown101ad410::sub_101ad410(int a0)
{
    return ((lifted::C100131e2 *)this)->sub_100131e2(*(int *)((char *)a0), *(int *)((char *)a0 + 4), 0, 0);
}
// END FUNCTION

// FUNCTION: 0x101ad440 size=0x17
namespace lifted {
struct C100131e2 { int sub_100131e2(int, int, int, int); };
}
struct CUnknown101ad440 { int sub_101ad440(int); };
int CUnknown101ad440::sub_101ad440(int a0)
{
    return ((lifted::C100131e2 *)this)->sub_100131e2(*(int *)((char *)a0), *(int *)((char *)a0 + 4), 3, 0);
}
// END FUNCTION

// FUNCTION: 0x101ad470 size=0x41e
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAmbientGeneric.h"
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CEntitySoundOriginView.h"

extern int g_1072bccc[];
extern double g_1044fab0;
__declspec(dllimport) void Warning(const char *, ...);
void sub_101cdac0(int edict, const float *origin, const char *file, float vol, int atten, int flags, int pitch);
void sub_101bac90(int nEvent, int pOrigin, int nLevel, float flDuration, int a, int b);

namespace block_101ad470 {
struct CAmbientGenericUnit : CAmbientGeneric
{
	int sub_101ac670(int flags);
};
int CAmbientGenericUnit::sub_101ac670(int flags)
{
	return m_n04e0 | flags;
}
}
using namespace block_101ad470;


inline IHandleEntity *LookV1(const CBaseHandle &handle)
{
	if (handle.m_Index == 0xffffffff)
		return 0;
	const EHandleEntInfo *pInfo = &(*(EHandleDetail::EntityList * *)&EHandleDetail::g_10566458)->m_EntPtrArray[handle.GetEntryIndex()];
	if (pInfo->m_SerialNumber == handle.GetSerialNumber())
		return pInfo->m_pEntity;
	else
		return 0;
}
inline IHandleEntity *LookV2(const CBaseHandle &handle)
{
	if (handle.m_Index == 0xffffffff)
		return 0;
	EHandleDetail::EntityList *list = EHandleDetail::g_10566458;
	const EHandleEntInfo *pInfo = &list->m_EntPtrArray[handle.GetEntryIndex()];
	if (pInfo->m_SerialNumber == handle.GetSerialNumber())
		return pInfo->m_pEntity;
	else
		return 0;
}
inline IHandleEntity *LookV3(const CBaseHandle &handle)
{
	if (handle.m_Index == 0xffffffff)
		return 0;
	const EHandleEntInfo *pInfo = &EHandleDetail::g_10566458->m_EntPtrArray[handle.GetEntryIndex()];
	if (pInfo->m_SerialNumber == handle.GetSerialNumber())
		return pInfo->m_pEntity;
	else
		return 0;
}
inline IHandleEntity *LookV4(const CBaseHandle &handle)
{
	if (handle.m_Index == 0xffffffff)
		return 0;
	const EHandleEntInfo *pInfo = &EHandleDetail::g_10566458->m_EntPtrArray[(*(unsigned int *)&handle.m_Index) & 0x1fff];
	if (pInfo->m_SerialNumber == handle.GetSerialNumber())
		return pInfo->m_pEntity;
	else
		return 0;
}
inline int Clamp3(int lvl) { if (lvl > 3) lvl = 3; else if (lvl < 1) lvl = 1; return lvl; }
void CAmbientGeneric::sub_101ad470(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value)
{
	const char *pName = m_pszSoundFile;
	const char *pszName = pName ? pName : g_106b8540;
	if (useType != 3) {
		if ((m_b04bc && useType == 1) || (!m_b04bc && useType == 0))
			return;
	}
	if (useType == 2 && m_b04bc) {
		float fraction = value;
		if (value > 1.0)
			fraction = 1.0f;
		if (fraction < g_1044fab0)
			fraction = 0.01f;
		m_dpv.pitch = (int)(fraction * 255.0f);
		CBaseEntity *pSoundEnt = m_hSoundEnt.Get();
		if (!pSoundEnt)
			return;
		int edict = pSoundEnt->m_pEdict2e0;
		sub_101cdac0(edict, ((CEntitySoundOriginView *)pSoundEnt)->GetAbsOrigin(), pszName, 0, 0, ((CAmbientGenericUnit *)this)->sub_101ac670(2), m_dpv.pitch);
		return;
	}
	if (m_b04bc) {
		if (m_dpv.cspinup) {
			if (m_dpv.cspincount > m_dpv.cspinup)
				return;
			int n = m_dpv.cspincount + 1;
			m_dpv.spindown = 0;
			m_dpv.spinup = m_dpv.spinupsav;
			m_dpv.cspincount = n;
			m_dpv.pitchrun = ((0xff - m_dpv.pitchstart) / m_dpv.cspinup) * n + m_dpv.pitchstart;
			if (m_dpv.pitchrun > 0xff)
				m_dpv.pitchrun = 0xff;
			m_flNextThink = gpGlobals->curtime + 0.1;
			return;
		}
		m_b04bc = 0;
		m_flags204 |= 0x10;
		if (m_dpv.spindownsav == 0 && m_dpv.fadeoutsav == 0) {
			CBaseEntity *pSoundEnt = m_hSoundEnt.Get();
			if (!pSoundEnt)
				return;
			int edict = pSoundEnt->m_pEdict2e0;
			sub_101cdac0(edict, ((CEntitySoundOriginView *)pSoundEnt)->GetAbsOrigin(), pszName, 0, 0, 4, 0);
			return;
		}
		m_dpv.spindown = m_dpv.spindownsav;
		m_dpv.spinup = 0;
		m_dpv.fadeout = m_dpv.fadeoutsav;
		m_dpv.fadein = 0;
		m_flNextThink = gpGlobals->curtime + 0.1;
		return;
	} else {
		if (m_b04bd) {
			m_b04bc = 1;
		} else {
			CBaseEntity *pSoundEnt = (CBaseEntity *)LookV3(m_hSoundEnt);
			if (pSoundEnt) {
				int edict = pSoundEnt->m_pEdict2e0;
				sub_101cdac0(edict, ((CEntitySoundOriginView *)pSoundEnt)->GetAbsOrigin(), pszName, 0, 0, 4, 0);
			}
		}
		sub_101ad0f0();
		CEntityVSlots *pEnt = (CEntityVSlots *)m_hSoundEnt.Get();
		if (pEnt) {
			int edict = *(int *)((char *)pEnt + 0x2e0);
			sub_101cdac0(edict, (const float *)pEnt->slot217(), pszName, (float)(m_dpv.vol * 0.01), m_n0454, ((CAmbientGenericUnit *)this)->sub_101ac670(0), m_dpv.pitch);
			if (m_nSoundEvent) {
				int bOk = sub_101ad9a0();
				if (!bOk && m_nSoundEvent != 0x20 && m_nSoundEvent != 0x800) {
					Warning("%s has invalid NPC sound event parameters\n", sub_100ab4f0());
				} else {
					if (m_nSoundEventLevel < 1 || m_nSoundEventLevel > 3) {
						Warning("%s has an invalid sound event level: %d\n", sub_100ab4f0(), m_nSoundEventLevel);
						int lvl = m_nSoundEventLevel;
						if (lvl > 3)
							lvl = 3;
						else if (lvl < 1)
							lvl = 1;
						m_nSoundEventLevel = lvl;
					}
					float flDuration = enginesound->vfunc12(pszName);
					if (flDuration < 1.0)
						flDuration = 1.0f;
					int nRadius = g_1072bccc[m_nSoundEventLevel];
					sub_101bac90(m_nSoundEvent, (int)pEnt->slot217(), nRadius, flDuration, 0, bOk);
				}
			}
		}
	}
	m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x101ad9a0 size=0xae
#include "CBaseEntity.h"
#include "CUnknown101ad9a0.h"
#include "CGlobalEntityList.h"

extern char g_106b8540[];
extern CGlobalEntityList g_106eb5d8;

CGlobalEntityList_Ent *CUnknown101ad9a0::sub_101ad9a0()
{
	if (m_hTarget.Get())
		return (CGlobalEntityList_Ent *)m_hTarget.Get();
	const char *name = m_pszTargetName;
	if (!name)
		name = g_106b8540;
	m_hTarget = (CBaseEntity *)g_106eb5d8.sub_100f7770(0, name, (CBaseEntity *)this, 0);
	return (CGlobalEntityList_Ent *)m_hTarget.Get();
}
// END FUNCTION

// FUNCTION: 0x101ada80 size=0x456
#include "CAmbientGeneric.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);
extern "C" int __cdecl atoi(const char *);

struct CAmbientKVBase { bool sub_1009e430(const char *szKeyName, const char *szValue); };

// TARGET: CAmbientGeneric::vfunc110
bool CAmbientGeneric::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "preset")) {
		m_dpv.preset = atoi(szValue);
		return true;
	}
	if (!_strcmpi(szKeyName, "pitch")) {
		m_dpv.pitchrun = atoi(szValue);
		if (m_dpv.pitchrun > 255)
			m_dpv.pitchrun = 255;
		if (m_dpv.pitchrun < 0)
			m_dpv.pitchrun = 0;
	} else if (!_strcmpi(szKeyName, "pitchstart")) {
		m_dpv.pitchstart = atoi(szValue);
		if (m_dpv.pitchstart > 255)
			m_dpv.pitchstart = 255;
		if (m_dpv.pitchstart < 0)
			m_dpv.pitchstart = 0;
	} else if (!_strcmpi(szKeyName, "spinup")) {
		m_dpv.spinup = atoi(szValue);
		if (m_dpv.spinup > 100)
			m_dpv.spinup = 100;
		if (m_dpv.spinup < 0)
			m_dpv.spinup = 0;
		if (m_dpv.spinup > 0)
			m_dpv.spinup = (101 - m_dpv.spinup) * 64;
		m_dpv.spinupsav = m_dpv.spinup;
		return true;
	} else if (!_strcmpi(szKeyName, "spindown")) {
		m_dpv.spindown = atoi(szValue);
		if (m_dpv.spindown > 100)
			m_dpv.spindown = 100;
		if (m_dpv.spindown < 0)
			m_dpv.spindown = 0;
		if (m_dpv.spindown > 0)
			m_dpv.spindown = (101 - m_dpv.spindown) * 64;
		m_dpv.spindownsav = m_dpv.spindown;
		return true;
	} else if (!_strcmpi(szKeyName, "volstart")) {
		m_dpv.volstart = atoi(szValue);
		if (m_dpv.volstart > 10)
			m_dpv.volstart = 10;
		if (m_dpv.volstart < 0)
			m_dpv.volstart = 0;
		m_dpv.volstart = m_dpv.volstart * 10;
		return true;
	} else if (!_strcmpi(szKeyName, "fadein")) {
		m_dpv.fadein = (int)((100.0 / atof(szValue)) * 0.2) << 8;
		m_dpv.fadeinsav = m_dpv.fadein;
		return true;
	} else if (!_strcmpi(szKeyName, "fadeout")) {
		m_dpv.fadeout = (int)((100.0 / atof(szValue)) * 0.2) << 8;
		m_dpv.fadeoutsav = m_dpv.fadeout;
		return true;
	} else if (!_strcmpi(szKeyName, "lfotype")) {
		m_dpv.lfotype = atoi(szValue);
		if (m_dpv.lfotype > 4) {
			m_dpv.lfotype = 2;
			return true;
		}
	} else if (!_strcmpi(szKeyName, "lforate")) {
		m_dpv.lforate = atoi(szValue);
		if (m_dpv.lforate > 1000)
			m_dpv.lforate = 1000;
		if (m_dpv.lforate < 0)
			m_dpv.lforate = 0;
		m_dpv.lforate *= 256;
		return true;
	} else if (!_strcmpi(szKeyName, "lfomodpitch")) {
		m_dpv.lfomodpitch = atoi(szValue);
		if (m_dpv.lfomodpitch > 100)
			m_dpv.lfomodpitch = 100;
		if (m_dpv.lfomodpitch < 0) {
			m_dpv.lfomodpitch = 0;
			return true;
		}
	} else if (!_strcmpi(szKeyName, "lfomodvol")) {
		m_dpv.lfomodvol = atoi(szValue);
		if (m_dpv.lfomodvol > 100)
			m_dpv.lfomodvol = 100;
		if (m_dpv.lfomodvol < 0) {
			m_dpv.lfomodvol = 0;
			return true;
		}
	} else if (!_strcmpi(szKeyName, "cspinup")) {
		m_dpv.cspinup = atoi(szValue);
		if (m_dpv.cspinup > 100)
			m_dpv.cspinup = 100;
		if (m_dpv.cspinup < 0)
			m_dpv.cspinup = 0;
	} else {
		return ((CAmbientKVBase *)this)->sub_1009e430(szKeyName, szValue);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x101aeb60 size=0x1d2
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"

extern int g_1072bc10;
__declspec(dllimport) void Warning(const char *, ...);
int sub_101af070(const char *pszName);

struct SPlayEdictUnknown
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual CEntitySoundOriginView *vfunc4();
};

struct SPlayEdict
{
	char m_pad0000[0x40];
	SPlayEdictUnknown *m_pUnknown;
};

int sub_101aeb60(SPlayEdict *pEdict, const char *pszGroup, float flVolume, int iSoundlevel, int iFlags, int iPitch)
{
	if (g_1072bc10) {
		char szName[64];
		szName[0] = 0;
		int nGroup = engine->vfunc55(pszGroup);
		if (nGroup < 0) {
			Warning("No such sentence group %s\n", pszGroup);
		} else if (engine->vfunc51(nGroup, szName, sizeof(szName)) >= 0 && szName[0]) {
			int iSentence = sub_101af070(szName);
			CEntitySoundOriginView *pEntity = (pEdict && pEdict->m_pUnknown) ? pEdict->m_pUnknown->vfunc4() : 0;
			CPASAttenuationFilter filter(pEntity, (soundlevel_t)iSoundlevel);
			enginesound->vfunc4(&filter, engine->vfunc35((int)pEdict), 2, iSentence, flVolume, iSoundlevel, iFlags, iPitch, 0, 0, 1, 0);
			return iSentence;
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x101aedc0 size=0x1e3
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "engineserver.h"
#include "engineiface.h"

extern int g_1072bc10;
int sub_101af070(const char *pszName);

struct SPlayEdictUnknown
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual CEntitySoundOriginView *vfunc4();
};

struct SPlayEdict
{
	char m_pad0000[0x40];
	SPlayEdictUnknown *m_pUnknown;
};

int sub_101aedc0(SPlayEdict *pEdict, const char *pszGroup, float flVolume, int iSoundlevel, int iFlags, int iPitch, int a, int b)
{
	if (g_1072bc10) {
		char szName[64];
		szName[0] = 0;
		int nGroup = engine->vfunc55(pszGroup);
		if (nGroup >= 0 && engine->vfunc52(nGroup, szName, sizeof(szName), a, b) >= 0 && szName[0]) {
			int iSentence = sub_101af070(szName);
			CEntitySoundOriginView *pEntity = (pEdict && pEdict->m_pUnknown) ? pEdict->m_pUnknown->vfunc4() : 0;
			CPASAttenuationFilter filter(pEntity, (soundlevel_t)iSoundlevel);
			enginesound->vfunc4(&filter, engine->vfunc35((int)pEdict), 2, iSentence, flVolume, iSoundlevel, iFlags, iPitch, 0, 0, 1, 0);
			return iSentence;
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x101af030 size=0x26
#include "CUnknown1070b22c.h"

extern CUnknown1070b22c *g_1070b22c;
extern int g_1072bc10;

// TARGET: sub_101af030
void sub_101af030()
{
    if (g_1072bc10 == 0) {
        void (CUnknown1070b22c::*pSlot15)(const char *, int);
        void **vt = *(void ***)g_1070b22c;
        *(void **)&pSlot15 = vt[0x3c / 4];
        (g_1070b22c->*pSlot15)("scripts/sentences.txt", 0);
        g_1072bc10 = 1;
    }
}
// END FUNCTION
