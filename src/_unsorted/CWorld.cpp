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

// FUNCTION: 0x1023b5e0 size=0x5
#include "CWorld.h"
#include "CBaseEntity.h"

// TARGET: CWorld::vfunc126
// the game's 0x1023b5e0: a tail call (jmp) of CBaseEntity::vfunc126
int CWorld::vfunc126(int a0)
{
	return CBaseEntity::vfunc126(a0);
}
// END FUNCTION

// FUNCTION: 0x1023b600 size=0x5
#include "CWorld.h"
#include "CBaseEntity.h"

// TARGET: CWorld::vfunc127
// the game's 0x1023b600: a tail call (jmp) of CBaseEntity::vfunc127
int CWorld::vfunc127(int a0)
{
	return CBaseEntity::vfunc127(a0);
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

// FUNCTION: 0x1023b640 size=0x12
#include "CWorld.h"

// TARGET: CWorld::vfunc73
bool CWorld::vfunc73(CBaseEntity *pOther)
{
	if (pOther->m_p9c == 0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x1023b670 size=0x168
#include "CWorld.h"

struct CWorldConVar
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void SetFloat(float value);
	virtual void SetString(const char *value);
};
struct CWorldCvarSystem
{
	virtual void v0(); virtual void v1();
	virtual CWorldConVar *FindVar(const char *name);
};
struct CWorldGlobals
{
	char pad[0x34];
	int m_nSounds;
};
extern CWorldCvarSystem *g_1070b234;
extern CWorldGlobals *g_1070b228;
extern "C" int _strcmpi(const char *, const char *);
extern "C" int atoi(const char *);
extern "C" double atof(const char *);
extern "C" int sscanf(const char *, const char *, ...);
void sub_1011a430();

struct CWorldWave
{
	char pad[0x1b1];
	char m_bDirty;
	char pad2[0x45c - 0x1b2];
	float m_flHeight;
	void Set(float v) { m_flHeight = v; char *p = &m_bDirty; *p = 1; }
};

// TARGET: CWorld::vfunc110
bool CWorld::vfunc110(const char *key, const char *value)
{
	if (!_strcmpi(key, "skyname"))
	{
		CWorldConVar *pVar = g_1070b234->FindVar("sv_skyname");
		if (pVar)
		{
			pVar->SetString(value);
			return true;
		}
		return true;
	}
	if (!_strcmpi(key, "sounds"))
	{
		g_1070b228->m_nSounds = atoi(value);
		return true;
	}
	if (!_strcmpi(key, "WaveHeight"))
	{
		CWorldWave *w = (CWorldWave *)this;
		w->Set((float)(atof(value) * 0.125));
		CWorldConVar *pVar = g_1070b234->FindVar("sv_wateramp");
		if (pVar)
		{
			pVar->SetFloat(w->m_flHeight);
			return true;
		}
		return true;
	}
	if (!_strcmpi(key, "newunit"))
	{
		if (atoi(value))
		{
			sub_1011a430();
			return true;
		}
		return true;
	}
	float *p;
	if (!_strcmpi(key, "world_mins"))
		p = m_vecWorldMins;
	else if (!_strcmpi(key, "world_maxs"))
		p = m_vecWorldMaxs;
	else
		return CBaseEntity::vfunc110(key, value);
	sscanf(value, "%f %f %f", p, p + 1, p + 2);
	return true;
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
void CWorld::vfunc230(int a0, void *a1)
{
}
// END FUNCTION

// FUNCTION: 0x1023b9e0 size=0x3
#include "CWorld.h"
void CWorld::vfunc231(void *a0, float a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x1023ba00 size=0x1e
#include "CWorld.h"

void sub_100aa7b0(void *p);

// TARGET: CWorld::vfunc5
CBaseEntity *CWorld::vfunc5(unsigned int flags)
{
	sub_1000fe98();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1023ba30 size=0x3c
#include "CWorld.h"
#include "CSprite.h"

void sub_1028d800();
void sub_104121f0();
void sub_1023e6b0();
void sub_10353000(void *p);

class CUnk1070ba0c {
public:
    virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
    virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
    virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
};
extern CUnk1070ba0c *g_1070ba0c;

// TARGET: CWorld::~CWorld
CWorld::~CWorld()
{
    sub_1028d800();
    sub_104121f0();
    if (g_1070ba0c)
        g_1070ba0c->vfunc14();
    sub_10353000(&g_1070ba0c);
    sub_1023e6b0();
    ((CSprite *)this)->sub_1000cb8a();
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
	vfunc212(string_t(sub_NullIfEmpty(engine->vfunc19(vfunc8()))));
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

// FUNCTION: 0x1023c020 size=0x33f
#include "CWeaponThrown_Grenade_Frag.h"
#include "CWorld.h"
#include "engineserver.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Tier1.h"

struct CWorldConVar
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void SetInt(int value);
};
struct CWorldCvarSystem
{
	virtual void v0(); virtual void v1();
	virtual CWorldConVar *FindVar(const char *name);
};
struct CWorldRules
{
	virtual void Delete(int bFree);
	virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
	virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
	virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33();
	virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
	virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
	virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
	virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53();
	virtual void v54(); virtual void v55(); virtual void v56();
	virtual void v57();
};
struct CWorldSound
{
	virtual void Precache(const char *name, int preload);
};
struct CWorldNameOut { const char *p; };
struct CWorldDecal { const char *name; int index; };
struct CWorldSlotsView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual CWorldNameOut *GetName(CWorldNameOut *out); };

extern CWorldCvarSystem *g_1070b234;
extern CWorldRules *g_1070ba0c;
extern CWorldSound *g_1070b248;
extern CWorld *g_107532e8;
extern char g_1070ba2c;
extern int g_107260ac;
extern void *g_1072c464;
extern int g_1070ba24;
extern char g_1070d1b0[];
extern char g_106b8540[];
extern CWorldDecal g_105c2308[];
extern void (*g_109f362c)(const char *, ...);
extern void (*g_109f3650)(int, const char *, ...);
CWorldRules *sub_10352f70();
void *sub_100a99d0(const char *, void *, void *, void *);
void sub_1042c5d0(const char *);
void sub_104121f0(); void sub_1023bb60(); void sub_10355e00(); void sub_101af030();
void sub_1024eda0(); void sub_10230320(); void sub_1023ef40(); void sub_1028d7e0();
void sub_1034fee0(); void sub_100d1d50(); void sub_1033f750();
void sub_10050a40(); void sub_102f6690(); void sub_10321ec0(); void sub_1042d5a0();
struct CUnknown1030c560 { void sub_1030c560(); };
extern CUnknown1030c560 g_10936b68;
extern char g_105758c4[], g_10540a3c[];

inline const char *WorldString(const char *const &s)
{
	return s ? s : g_106b8540;
}

void CWorld::vfunc104()
{
	g_107532e8 = this;
	g_1070ba2c = 0;
	g_107260ac = 0;
	CWorldConVar *stepsize = g_1070b234->FindVar("sv_stepsize");
	if (stepsize)
		stepsize->SetInt(18);
	if (g_1070ba0c)
		g_1070ba0c->Delete(1);
	g_1070ba0c = sub_10352f70();
	g_1070ba0c->v13();
	void *pSoundEnt = sub_100a99d0("soundent", g_1070d1b0, g_1070d9d0, this);
	void (*pWarn)(const char *, ...) = g_109f362c;
	g_1072c464 = pSoundEnt;
	if (!pSoundEnt)
		pWarn("**COULD NOT CREATE SOUNDENT**\n");
	CWorldNameOut out;
	const char *pName = ((CWorldSlotsView *)this)->GetName(&out)->p;
	if (!pName)
		pName = g_106b8540;
	sub_1042c5d0(pName);
	sub_104121f0();
	sub_1023bb60();
	sub_10355e00();
	sub_101af030();
	sub_1024eda0();
	sub_10230320();
	sub_1023ef40();
	sub_1028d7e0();
	sub_1034fee0();
	sub_100d1d50();
	for (unsigned int i = 0; i < 0x4f; i++)
	{
		g_105c2308[i].index = engine->vfunc16(g_105c2308[i].name, 0);
		if (g_105c2308[i].index < 0)
			pWarn("Decal Network error!\n");
		if (g_105c2308[i].index != i)
			pWarn("Decal %d does not match it's precached index.  Could cause network errors.\n");
	}
	sub_1033f750();
	sub_1023bd20();
	g_1070ba0c->v11();
	sub_10050a40();
	if (m_psz454 != 0)
		g_1070b248->Precache(WorldString(m_psz454), 0);
	engine->vfunc62(0, g_105758c4);
	engine->vfunc62(1, "mmnmmommommnonmmonqnmmo");
	engine->vfunc62(2, "abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba");
	engine->vfunc62(3, "mmmmmaaaaammmmmaaaaaabcdefgabcdefg");
	engine->vfunc62(4, "mamamamamama");
	engine->vfunc62(5, "jklmnopqrstuvwxyzyxwvutsrqponmlkj");
	engine->vfunc62(6, "nmonqnmomnmomomno");
	engine->vfunc62(7, "mmmaaaabcdefgmmmmaaaammmaamm");
	engine->vfunc62(8, "mmmaaammmaaammmabcdefaaaammmmabcdefmmmaaaa");
	engine->vfunc62(9, "aaaaaaaazzzzzzzz");
	engine->vfunc62(10, "mmamammmmammamamaaamammma");
	engine->vfunc62(11, "abcdefghijklmnopqrrqponmlkjihgfedcba");
	engine->vfunc62(12, "mmnnmmnnnmmnn");
	engine->vfunc62(0x3f, g_10540a3c);
	sub_102f6690();
	g_10936b68.sub_1030c560();
	g_1070ba0c->v57();
	sub_10321ec0();
	sub_1042d5a0();
	if (m_psz450 != 0)
	{
		g_109f3650(2, "Chapter title: %s\n", WorldString(m_psz450));
		CWorld *pMsg = (CWorld *)sub_100a99d0("env_message", g_1070d1b0, g_1070d9d0, 0);
		if (pMsg)
		{
			pMsg->m_psz450 = m_psz450;
			m_psz450 = 0;
		}
	}
	CWorldConVar *dark = g_1070b234->FindVar("v_dark");
	if (dark)
		dark->SetInt(m_b478 != 0);
	g_1070ba24 = m_b479 != 0;
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
