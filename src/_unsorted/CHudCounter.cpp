// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012df00 size=0x34
#include "CHudCounter.h"
// TARGET: CHudCounter::vfunc86
char CHudCounter::vfunc86(int unused, int edict, int c, int d, int e)
{
	if (*(int *)((char *)this + 0x450) >= 0) {
		if (engine->vfunc35(edict) == *(int *)((char *)this + 0x450))
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1012df50 size=0x6
#include "datamap.h"
#include "CHudCounter.h"
namespace lifted {
extern char g_10574318;
}
datamap_t * CHudCounter::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10574318);
}
// END FUNCTION

// FUNCTION: 0x1012e050 size=0x6
#include "CHudCounter.h"
namespace lifted {
extern char g_1070bfa4;
}
int CHudCounter::vfunc80()
{
    return (int)&lifted::g_1070bfa4;
}
// END FUNCTION

// FUNCTION: 0x1012e070 size=0x3
#include "CHudCounter.h"
int CHudCounter::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1012e300 size=0x151
#include "CHudCounter.h"

__declspec(dllimport) int Q_snprintf(char *buf, int n, const char *fmt, ...);
void sub_101434b0(int entityID, int text_offset, const char *text, float duration, int r, int g, int b, int a);

struct ColorView1a0
{
	char m_pad[0x1a0];
	unsigned char r, g, b;
};

inline int ENTINDEX(int pEdict) { return engine->vfunc35(pEdict); }

// TARGET: CHudCounter::vfunc124
int CHudCounter::vfunc124()
{
	int text_offset = CBaseEntity::vfunc124();
	if (*(unsigned char *)&m_fDebugOverlays224 & 1)
	{
		char tempstr[255];
		Q_snprintf(tempstr, sizeof(tempstr), "Value: %i", m_nValue);
		sub_101434b0(ENTINDEX(m_pEdict2e0), text_offset, tempstr, 0, 255, 255, 255, 255);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "Pos: %5.2f %5.2f", m_flXPos, m_flYPos);
		sub_101434b0(ENTINDEX(m_pEdict2e0), text_offset, tempstr, 0, 255, 255, 255, 255);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "Color: %i %i %i", ((ColorView1a0 *)this)->r, ((ColorView1a0 *)this)->g, ((ColorView1a0 *)this)->b);
		sub_101434b0(ENTINDEX(m_pEdict2e0), text_offset, tempstr, 0, 255, 255, 255, 255);
		text_offset++;
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x1012e4c0 size=0x1e
#include "CHudCounter.h"

void sub_100aa7b0(void *p);

// TARGET: CHudCounter::vfunc5
CBaseEntity *CHudCounter::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1012e580 size=0x9e
#include "CHudCounter.h"
#include "CCollisionProperty.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CHudCounter::vfunc103()
{
	vfunc104();
	const char *name = m_name26c ? m_name26c : g_106b8540;
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	(*g_109f3680)--;
	vfunc93(0, 0);
	*(int *)((char *)this + 0x450) = -1;
	sub_100b3b00();
}
// END FUNCTION
