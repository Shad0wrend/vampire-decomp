// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x100c0e20 size=0x1e
#include "CFuncRotating.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncRotating::vfunc5
CFuncRotating *CFuncRotating::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
