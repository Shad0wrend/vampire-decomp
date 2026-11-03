// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10158cd0 size=0x46
#include "CFuncPlat.h"
extern "C" int __cdecl strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);
bool CFuncPlat::vfunc110(const char *pszKey, const char *pszValue)
{
	if (!strcmpi(pszKey, "rotation")) {
		m_flRotation = (float)atof(pszValue);
		return true;
	}
	return sub_10007428(pszKey, pszValue);
}
// END FUNCTION

// FUNCTION: 0x10158dc0 size=0x6
#include "datamap.h"
#include "CFuncPlat.h"

extern int g_10580538;

datamap_t *CFuncPlat::vfunc82()
{
	return (datamap_t *)&g_10580538;
}
// END FUNCTION

// FUNCTION: 0x10158ec0 size=0x8
#include "CBaseEntity.h"
#include "CFuncPlat.h"

char CFuncPlat::vfunc117()
{
	char caps = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
	caps &= 0xfd;
	return caps;
}
// END FUNCTION

// FUNCTION: 0x10158ee0 size=0x9
#include "CFuncPlat.h"
unsigned char CFuncPlat::vfunc241() { unsigned char r = m_spawnflags; r &= 1; return r; }
// END FUNCTION

// FUNCTION: 0x10158f00 size=0x3
#include "CFuncPlat.h"
// TARGET: CFuncPlat::vfunc128
char CFuncPlat::vfunc128() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10159190 size=0x20
#include "CFuncPlat.h"

void __cdecl sub_10159270(int edict);

void CFuncPlat::vfunc104()
{
	if (!vfunc241())
		sub_10159270((int)m_pEdict);
}
// END FUNCTION

// FUNCTION: 0x101591c0 size=0x66
#include "CFuncPlat.h"

struct FuncPlatBaseX { void sub_1000957f(); };
void __cdecl sub_100043cc(CFuncPlat *pEnt, float *pVec, int flag);
void sub_10001929();

void CFuncPlat::vfunc103()
{
	((FuncPlatBaseX *)this)->sub_1000957f();
	vfunc104();
	if (*(const char **)((char *)this + 0x26c)) {
		sub_100043cc(this, (float *)((char *)this + 0x508), 0);
		*(int *)((char *)this + 0x4f8) = 0;
		*(void **)((char *)this + 0x1f0) = (void *)sub_10001929;
	} else {
		sub_100043cc(this, (float *)((char *)this + 0x514), 0);
		*(int *)((char *)this + 0x4f8) = 1;
	}
	vfunc223();
}
// END FUNCTION

// FUNCTION: 0x10159250 size=0xe
#include "CFuncPlat.h"

char CFuncPlat::vfunc223()
{
	sub_100a6150(0, 0, 0);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101597a0 size=0x156
#include "CFuncPlat.h"
#include "CBaseToggle.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b248 *g_1070b248;
extern char g_106b8540[];
void sub_10004232();

// TARGET: CFuncPlat::vfunc243
void CFuncPlat::vfunc243()
{
	if (m_pszStartSound)
	{
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this, 0.8f);
		filter.MakeReliable();
		const char *pszSound = m_pszStartSound ? m_pszStartSound : g_106b8540;
		int entindex = engine->vfunc35((int)m_pEdict);
		g_1070b248->vfunc3(&filter, entindex, 6, pszSound, m_flVolume, 0.8f, 0, 100, 0, 0, 1, 0);
	}
	m_nToggleState = 3;
	m_pfnThink = (void *)sub_10004232;
	((CBaseToggle *)this)->sub_101c1520(&m_vecPosition514, m_flSpeed164);
}
// END FUNCTION

// FUNCTION: 0x10159b30 size=0x156
#include "CFuncPlat.h"
#include "CBaseToggle.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b248 *g_1070b248;
extern char g_106b8540[];
void sub_10015a14();

// TARGET: CFuncPlat::vfunc242
void CFuncPlat::vfunc242()
{
	if (m_pszStartSound)
	{
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this, 0.8f);
		filter.MakeReliable();
		const char *pszSound = m_pszStartSound ? m_pszStartSound : g_106b8540;
		int entindex = engine->vfunc35((int)m_pEdict);
		g_1070b248->vfunc3(&filter, entindex, 6, pszSound, m_flVolume, 0.8f, 0, 100, 0, 0, 1, 0);
	}
	m_nToggleState = 2;
	m_pfnThink = (void *)sub_10015a14;
	((CBaseToggle *)this)->sub_101c1520(&m_vecPosition508, m_flSpeed164);
}
// END FUNCTION

// FUNCTION: 0x1015a4d0 size=0x36
#include "CFuncPlat.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CFuncPlat *CFuncPlat::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
