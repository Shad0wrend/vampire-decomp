// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023b620 size=0xd
void CWorld::vfunc130(int a)
{
	volatile int *p = &a;
	*p = *p;
	CBaseEntity::vfunc130(a);
}
// END FUNCTION

// FUNCTION: 0x1023ba00 size=0x1e
#include "CWorld.h"

void sub_100aa7b0(void *p);

// TARGET: CWorld::vfunc5
CWorld *CWorld::vfunc5(unsigned int flags)
{
	sub_1000fe98();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1023ba80 size=0xa8
#include "CWorld.h"
#include "CBroadcastRecipientFilter.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct CEngineSoundX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3)
	PV(40)
	virtual void vfunc41(CRecipientFilter *pFilter, int a, const float *pOrigin, int nSound);
};

struct CSoundTableEntryX
{
	int m_nSound;
	int m_unused;
};

extern CEngineSoundX *g_10540528;
extern CSoundTableEntryX g_105c230c[];

// TARGET: CWorld::vfunc241
void CWorld::vfunc241(void *pSource, int nSound, int unused1, int unused2)
{
	if (nSound >= 0) {
		int sound = g_105c230c[nSound].m_nSound;
		if (sound >= 0) {
			CBroadcastRecipientFilter filter;
			g_10540528->vfunc41(&filter, 0, (const float *)((char *)pSource + 0xc), sound);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1023bc20 size=0xae
#include "CWorld.h"
#include "ConVar.h"

struct CCvar_1023bc20
{
	virtual void v0();
	virtual void v1();
	virtual ConVar *FindVar(const char *pszName);
};
struct CGlobalVars_1023bc20
{
	char m_pad0000[0x14];
	int maxClients;	// 0x14
};
extern CCvar_1023bc20 *g_1070b234;
extern CGlobalVars_1023bc20 *g_1070b228;
extern int g_10752e9c;
extern int g_109247e0;
extern char g_10924fb8;
extern int g_109247e4;
CWorldPlayer *sub_101cd9e0(int index);

void CWorld::vfunc113()
{
	CBaseEntity::vfunc113();
	ConVar *pCheats = g_1070b234->FindVar("sv_cheats");
	int nCheats = pCheats ? pCheats->GetInt() : 0;
	g_10752e9c = nCheats;
	int n = m_n49c > 2 ? 2 : (m_n49c < 0 ? 0 : m_n49c);
	if (n != m_n49c) {
		m_n49c = n;
		for (int i = 1; i <= g_1070b228->maxClients; i++) {
			CWorldPlayer *pPlayer = sub_101cd9e0(i);
			if (pPlayer)
				pPlayer->sub_10170750();
		}
		*((char *)this + 0x1b1) = 1;
	}
	g_109247e0 = -1;
	g_10924fb8 = 0;
	g_109247e4 = -1;
}
// END FUNCTION
