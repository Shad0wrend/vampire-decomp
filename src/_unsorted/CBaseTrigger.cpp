// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c4980 size=0x6
#include "CBaseTrigger.h"
namespace lifted {
extern char g_1059d570;
}
datamap_t * CBaseTrigger::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059d570);
}
// END FUNCTION

// FUNCTION: 0x101c4b50 size=0x8
#include "CBaseTrigger.h"
// TARGET: CBaseTrigger::sub_101c4b50
unsigned char CBaseTrigger::sub_101c4b50()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x101c4b70 size=0x3
// TARGET: sub_101c4b70
void __stdcall sub_101c4b70(int a, int b, int c, int d, int e) {
}
// END FUNCTION

// FUNCTION: 0x101c4b90 size=0x3
// TARGET: sub_101c4b90
void __stdcall sub_101c4b90(int a, int b, int c) {
}
// END FUNCTION

// FUNCTION: 0x101c4bb0 size=0x8
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc241(int unused)
{
	sub_101c4bf0();
}
// END FUNCTION

// FUNCTION: 0x101c4bd0 size=0x8
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc242(int unused)
{
	sub_101c4dd0();
}
// END FUNCTION

// FUNCTION: 0x101c4d60 size=0x4b
#include "CBaseTrigger.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;

// TARGET: CBaseTrigger::vfunc113
void CBaseTrigger::vfunc113()
{
	if (m_iFilterName) {
		CBaseEntity *pFilter = g_106eb5d8.sub_100f7770(0, m_iFilterName, 0, 0);
		if (pFilter)
			m_i564 = *pFilter->vfunc1();
		else
			m_i564 = -1;
	}
	CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x101c4f40 size=0xff
#include "CBaseTrigger.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);
void sub_101434b0(int entIndex, int line, const char *text, int a, int r, int g, int b, int alpha);

int CBaseTrigger::vfunc124()
{
	char text[256];
	int line = CBaseEntity::vfunc124();
	if (((unsigned char *)this)[0x224] & 1) {
		bool bEnabled;
		{
			ScopeTrace trace("CBaseEntity::IsSolidFlagSet", m_name26c ? m_name26c : g_106b8540);
			bEnabled = (((unsigned char *)this)[0x2b4] >> 3) & 1;
		}
		if (bEnabled)
			Q_strncpy(text, "State: Enabled", 255);
		else
			Q_strncpy(text, "State: Disabled", 255);
		int edict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(edict), line, text, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x101c5590 size=0x26
#include "CBaseTrigger.h"

struct CBaseTriggerSub568 {
    void sub_10010794(void *a, CBaseTrigger *b, int c);
};

// TARGET: CBaseTrigger::vfunc174
void CBaseTrigger::vfunc174(CBaseEntity *p)
{
    if (sub_101c5460(p)) {
        ((CBaseTriggerSub568 *)((char *)this + 0x568))->sub_10010794(p, this, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x101c55d0 size=0x26
#include "CBaseTrigger.h"

struct CBaseTriggerSub568 {
    void sub_10010794(void *a, CBaseTrigger *b, int c);
};

// TARGET: CBaseTrigger::vfunc176
void CBaseTrigger::vfunc176(CBaseEntity *p)
{
    if (sub_101c5460(p)) {
        ((CBaseTriggerSub568 *)((char *)this + 0x580))->sub_10010794(p, this, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x101c5610 size=0x16e
#include "CBaseTrigger.h"
struct TraceFrame { const char *a; const char *b; const char *c; };
extern TraceFrame *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern char g_105387dc[];
extern char g_1053aa9c[];
extern char g_1055bc44[];
extern char g_1053dbfc[];
struct SolidHelper { char pad[0x44]; unsigned short m_f; void sub_1000e9a8(int); };
struct EntHelper { void sub_10005bcd(int); };

// TARGET: CBaseTrigger::vfunc243
void CBaseTrigger::vfunc243(unsigned int)
{
	char *base = (char *)this;
	const char *name;
	if (this) {
		name = *(const char **)(base + 0x26c);
		if (!name) name = g_106b8540;
	} else {
		name = g_105387dc;
	}
	g_109f3620[*g_109f3680].a = g_1053aa9c;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	bool solid = (*(unsigned char *)(base + 0x2b4) >> 3) & 1;
	(*g_109f3680)--;
	name = *(const char **)(base + 0x26c);
	if (solid) {
		if (!name) name = g_106b8540;
		g_109f3620[*g_109f3680].a = g_1055bc44;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
		SolidHelper *p = (SolidHelper *)(base + 0x270);
		int f = p->m_f & ~8;
		p->sub_1000e9a8(f);
	} else {
		if (!name) name = g_106b8540;
		g_109f3620[*g_109f3680].a = g_1053dbfc;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
		SolidHelper *p = (SolidHelper *)(base + 0x270);
		int f = p->m_f | 8;
		p->sub_1000e9a8(f);
	}
	(*g_109f3680)--;
	((EntHelper *)this)->sub_10005bcd(0);
}
// END FUNCTION

// FUNCTION: 0x101c5e10 size=0x4c
#include "CBaseTrigger.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CBaseTrigger::vfunc5
void *CBaseTrigger::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
