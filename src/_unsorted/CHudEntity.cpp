// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012e730 size=0x6
#include "CHudEntity.h"
namespace lifted {
extern char g_105748e0;
}
CHudEntity::Datamap82 CHudEntity::vfunc82()
{
    return (CHudEntity::Datamap82)&lifted::g_105748e0;
}
// END FUNCTION

// FUNCTION: 0x1012e830 size=0x6
#include "CHudEntity.h"
namespace lifted {
extern char g_1070c08c;
}
int CHudEntity::vfunc80()
{
    return (int)&lifted::g_1070c08c;
}
// END FUNCTION

// FUNCTION: 0x1012e850 size=0x3
#include "CHudEntity.h"
int CHudEntity::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1012eb70 size=0x28
#include "CHudEntity.h"

extern char g_106b8540[];

// TARGET: CHudEntity::vfunc104
void CHudEntity::vfunc104()
{
    char *p = m_p454;
    if (!p)
        p = g_106b8540;
    m_n458 = engine->vfunc13(p, 0);
}
// END FUNCTION

// FUNCTION: 0x1012ebb0 size=0x1b3
#include "CHudEntity.h"
extern "C" __declspec(dllimport) int __cdecl Q_snprintf(char *pDest, unsigned int maxLen, const char *pFormat, ...);
void sub_101434b0(int nEntity, int nLine, const char *pszText, int nDuration, int r, int g, int b, int a);

inline int ENTINDEX(int pEdict)
{
	return engine->vfunc35(pEdict);
}

int CHudEntity::vfunc124()
{
	char buf[256];
	int line = sub_100a02b0();
	if (m_bDebugOverlays224 & 1) {
		Q_snprintf(buf, 255, "Frame: %i", m_nFrame45c);
		sub_101434b0(ENTINDEX(m_nEdict2e0), line, buf, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(buf, 255, "Pos: %5.2f %5.2f", m_flX460, m_flY464);
		sub_101434b0(ENTINDEX(m_nEdict2e0), line, buf, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(buf, 255, "XSize: %5.2f %5.2f", m_flW468, m_flH46c);
		sub_101434b0(ENTINDEX(m_nEdict2e0), line, buf, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(buf, 255, "Color: %i %i %i", m_r1a0, m_g1a1, m_b1a2);
		sub_101434b0(ENTINDEX(m_nEdict2e0), line, buf, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x1012ede0 size=0x1e
#include "CHudEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CHudEntity::vfunc5
CHudEntity *CHudEntity::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
