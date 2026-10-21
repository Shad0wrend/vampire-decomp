// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c4f40 size=0xff
#include "CBaseTrigger.h"
#include "ScopeTrace.h"
#include "IVEngineServer.h"

extern IVEngineServer *g_1070b22c;
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
		sub_101434b0(g_1070b22c->vfunc35(edict), line, text, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
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
