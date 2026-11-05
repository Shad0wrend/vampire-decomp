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
CAmbientGeneric::CAmbientGeneric() : CAmbientGenericBase(0)
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
CAmbientGeneric *CAmbientGeneric::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
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
	((CBaseEntity *)this)->vfunc180();
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
    if (!(m_spawnflags & 0x10) && m_b04bd)
        m_b04bc = 1;
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
