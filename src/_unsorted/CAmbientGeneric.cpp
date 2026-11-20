// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
