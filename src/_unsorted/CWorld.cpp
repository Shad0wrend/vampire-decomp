// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023aeb0 size=0x6
#include "CWorld.h"
#include "datamap.h"
namespace lifted {
extern char g_105c2660;
}
datamap_t * CWorld::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105c2660);
}
// END FUNCTION

// FUNCTION: 0x1023afb0 size=0x6
#include "CWorld.h"
namespace lifted {
extern char g_10752d44;
}
int CWorld::vfunc80()
{
    return (int)&lifted::g_10752d44;
}
// END FUNCTION

// FUNCTION: 0x1023afd0 size=0x3
#include "CWorld.h"
int CWorld::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1023b620 size=0xd
#include "CBaseEntity.h"
#include "CWorld.h"
void CWorld::vfunc130(int a)
{
	volatile int *p = &a;
	*p = *p;
	CBaseEntity::vfunc130(a);
}
// END FUNCTION

// FUNCTION: 0x1023b840 size=0x10b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWorld.h"
#include "CCollisionProperty.h"
#include "CServerNetworkProperty.h"
#include "CUnknown101466e0.h"
#include "ScopeTrace.h"

void sub_104121d0();
void sub_1028d770();

// TARGET: CWorld::CWorld
CWorld::CWorld() : CBaseEntity(0)
{
    m_flags268 |= 0x400;
    m_bColdWorld = 0;
    ((CServerNetworkProperty *)((char *)this + 0x2d4))->sub_101ab5c0(engine->vfunc38(0));
    *(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.05;
    sub_104121d0();
    ((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
    const char *name = m_name26c;
    if (!name)
        name = g_106b8540;
    {
        ScopeTrace trace("CBaseEntity::SetSolid", name);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
    }
    vfunc93(8, 0);
    m_n518 = 0;
    m_f51c = 5.0f;
    m_f520 = 10.0f;
    sub_1028d770();
}
// END FUNCTION

// FUNCTION: 0x1023b9a0 size=0x3
#include "CWorld.h"
int CWorld::vfunc131()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1023b9c0 size=0x3
#include "CWorld.h"
void CWorld::vfunc230(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1023b9e0 size=0x3
#include "CWorld.h"
void CWorld::vfunc231(int a0, int a1, int a2, int a3)
{
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

// FUNCTION: 0x1023bba0 size=0x5e
#include "CWorld.h"
#include "engineserver.h"

struct sub_Obj106e7050 { void sub_100cdd80(); };
extern sub_Obj106e7050 g_106e7050;
void sub_1023e6b0();

inline char *sub_NullIfEmpty(char *p)
{
	if (!*p)
		return 0;
	return p;
}

// TARGET: CWorld::vfunc103
void CWorld::vfunc103()
{
	vfunc10(1);
	vfunc212_slot((int)sub_NullIfEmpty(engine->vfunc19(vfunc8())));
	sub_100b3580(0x1000000);
	g_106e7050.sub_100cdd80();
	sub_1023e6b0();
	vfunc104();
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
extern CCvar_1023bc20 *g_1070b234;
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
		for (int i = 1; i <= gpGlobals->maxClients; i++) {
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

// FUNCTION: 0x1023c6f0 size=0x47
#include "CWorld.h"
#include "globalvars.h"
struct ConVarFlag { virtual void v0(); virtual char v1(); char pad[0x28]; int m_n2c; };
extern ConVarFlag *g_107536ac;
void sub_1023c450();
void sub_1023ea20();
void CWorld::vfunc134()
{
    if (!g_107536ac->v1() && g_107536ac->m_n2c)
        sub_1023c450();
    sub_1023ca30();
    sub_1023ea20();
    m_flNextThink = gpGlobals->curtime + 0.05;
}
// END FUNCTION
