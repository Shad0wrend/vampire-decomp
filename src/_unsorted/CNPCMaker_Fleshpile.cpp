// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034c8e0 size=0x7a
#include "CNPCMaker_Fleshpile.h"

struct SBossCounts {
	char pad[0x66b8];
	float m_flA;
	float m_flB;
};

struct SRunner {
	char pad[0x6671];
	char m_bCounted;
};

extern SBossCounts *g_10938040;
extern char g_10538764[];
extern char g_10625270[];

void CNPCMaker_Fleshpile::vfunc139(CBaseEntity *pEnt)
{
	if (g_10938040) {
		SRunner *pRunner = (SRunner *)__RTDynamicCast(pEnt, 0, g_10538764, g_10625270, 0);
		if (pRunner && !pRunner->m_bCounted) {
			g_10938040->m_flA = g_10938040->m_flA - 1.0f;
			g_10938040->m_flB = g_10938040->m_flB + 1.0f;
			pRunner->m_bCounted = 1;
		}
	}
	sub_10009c41(pEnt);
}
// END FUNCTION
