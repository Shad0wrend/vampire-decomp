// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034c020 size=0x105
#include "CNPCMaker_Fleshpile.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CGlobalVarsX { char pad[0xc]; float curtime; };
extern CGlobalVarsX *g_1070b228;
void sub_10010dd4();
void sub_1000572c();

void CNPCMaker_Fleshpile::vfunc103()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	*(int *)((char *)this + 0x66b0) = 0;
	vfunc104();
	if (*((char *)this + 0x66c3))
		*((char *)this + 0x66c2) = 1;
	if (!*((char *)this + 0x66c0)) {
		sub_100ac4e0((int)sub_10010dd4, 0, 0);
		*(float *)((char *)this + 0x17c) = *(float *)((char *)this + 0x6664) + g_1070b228->curtime;
		sub_100b3b00();
		*(int *)((char *)this + 0x66b8) = 0;
	} else {
		sub_100ac4e0((int)sub_1000572c, 0, 0);
		sub_100b3b00();
		*(int *)((char *)this + 0x66b8) = 0;
	}
}
// END FUNCTION

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
