// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10389db0 size=0x6
#include "CNPC_VManBat.h"
namespace lifted {
extern char g_1093b778;
}
int CNPC_VManBat::vfunc580()
{
    return (int)&lifted::g_1093b778;
}
// END FUNCTION

// FUNCTION: 0x10389dd0 size=0x6
#include "CNPC_VManBat.h"
namespace lifted {
extern int g_10640d3c;
}
int CNPC_VManBat::vfunc451()
{
    return lifted::g_10640d3c;
}
// END FUNCTION

// FUNCTION: 0x10389df0 size=0x1e
#include "CNPC_VManBat.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VManBat::vfunc5
CNPC_VManBat *CNPC_VManBat::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10389ef0 size=0x6
extern char g_10640d34;
// TARGET: sub_10389ef0
char sub_10389ef0() { return g_10640d34; }
// END FUNCTION

// FUNCTION: 0x10389f50 size=0x1d
#include "CNPC_VManBat.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b89c;
extern B g_10936c74;
int CNPC_VManBat::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b89c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1038ac80 size=0x6
#include "datamap.h"
#include "CNPC_VManBat.h"
namespace lifted {
extern char g_10640d40;
}
datamap_t *CNPC_VManBat::vfunc82()
{
    return (datamap_t *)&lifted::g_10640d40;
}
// END FUNCTION

// FUNCTION: 0x1038aec0 size=0x118
#include "CNPC_VManBat.h"

struct CPrecacheIface248
{
	virtual void slot0(const char *pszName, int bPreload);
};
extern CPrecacheIface248 *g_1070b248;
extern const char *g_10640ce0[4];
extern const char *g_10640d10[3];
extern const char *g_10640d1c[3];
extern const char *g_10640d28[3];
void sub_101d0ec0(const char *name);

// TARGET: CNPC_VManBat::vfunc104
void CNPC_VManBat::vfunc104()
{
	sub_100013f7();
	for (unsigned int i = 0; i < 4; i++)
		engine->vfunc13(g_10640ce0[i], 0);
	engine->vfunc17((const char *)"Manbat_screechcone_emitter", 1);
	engine->vfunc17((const char *)"Manbat_player_emitter", 1);
	engine->vfunc17((const char *)"HUD_Manbat_emitter", 1);
	engine->vfunc17((const char *)"Manbat_blast_player", 1);
	for (unsigned int j = 0; j < 3; j++)
		g_1070b248->slot0(g_10640d10[j], 0);
	for (unsigned int k = 0; k < 3; k++)
		g_1070b248->slot0(g_10640d1c[k], 0);
	for (unsigned int m = 0; m < 3; m++)
		g_1070b248->slot0(g_10640d28[m], 0);
	g_1070b248->slot0("character/male/sheriff_manbat/screech.wav", 0);
	g_1070b248->slot0("character/male/sheriff_manbat/fall.wav", 0);
	engine->vfunc17((const char *)"sheriff_teleport_emitter", 1);
	engine->vfunc17((const char *)"sheriff_teleport_emitter", 1);
	sub_101d0ec0("item_w_manbat_claw");
}
// END FUNCTION

// FUNCTION: 0x1038b030 size=0x23
#include "CNPC_VVampire.h"
#include "CNPC_VManBat.h"
#include "CAI_BaseNPC.h"

struct CUnk1038b030Call {
	void sub_10014876();
};

// TARGET: CNPC_VManBat::vfunc103
void CNPC_VManBat::vfunc103()
{
	((CUnk1038b030Call *)this)->sub_10014876();
	((CAI_BaseNPC *)this)->vfunc416(1);
	sub_10332aa0(1, 1, 10);
}
// END FUNCTION

// FUNCTION: 0x1038b070 size=0x47
#include "CNPC_VManBat.h"
#include "globalvars.h"
extern int g_109340d8;
void CNPC_VManBat::vfunc420()
{
    m_f6678 = gpGlobals->curtime + 2.3;
    m_f667c = gpGlobals->curtime + 0.1;
    m_b66b0 = 0;
    m_b66b8 = 0;
    sub_1029a0b0();
    g_109340d8 = 0x14;
}
// END FUNCTION

// FUNCTION: 0x1038b0e0 size=0x6
#include "CNPC_VManBat.h"
int CNPC_VManBat::vfunc138()
{
    return 0x21;
}
// END FUNCTION

// FUNCTION: 0x1038b100 size=0x6
#include "CNPC_VManBat.h"
int CNPC_VManBat::vfunc337()
{
    return 0x100000;
}
// END FUNCTION

// FUNCTION: 0x1038b120 size=0x60
#include "CNPC_VManBat.h"

int sub_1042fbf0(unsigned int v);

inline unsigned int SecUnscramble(unsigned int n)
{
	unsigned int r = n;
	r &= 0x710935;
	r ^= 0x148739;
	r += 0x4094ab;
	r &= 0x18ef6ca;
	r ^= n;
	r ^= 0x412a96ec;
	return r;
}

#define HASH(x) (((((((x) & 0x710935) ^ 0x148739) + 0x4094ab) & 0x18ef6ca) ^ (x)) ^ 0x412a96ec)
// TARGET: CNPC_VManBat::vfunc525
char CNPC_VManBat::vfunc525(float a)
{
	if (sub_1027d990() == 2)
	{
		sub_1038b1a0(a);
		return 1;
	}
	int v = HASH(m_n6670);
	return sub_1042fbf0(v) == sub_1042fbf0(0xfa0b0699);
}
// END FUNCTION

// FUNCTION: 0x1038e000 size=0x281
#include "CNPC_VManBat.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

#define MB_V(n) virtual void v##n();
#define MB_V10(p) MB_V(p##0) MB_V(p##1) MB_V(p##2) MB_V(p##3) MB_V(p##4) MB_V(p##5) MB_V(p##6) MB_V(p##7) MB_V(p##8) MB_V(p##9)

struct CManBatView
{
	MB_V10(0) MB_V10(1) MB_V10(2) MB_V10(3) MB_V10(4) MB_V10(5) MB_V10(6) MB_V10(7) MB_V10(8) MB_V10(9)
	MB_V10(10) MB_V10(11) MB_V10(12) MB_V10(13) MB_V10(14) MB_V10(15) MB_V10(16) MB_V10(17) MB_V10(18) MB_V10(19)
	MB_V10(20)
	MB_V(210) MB_V(211) MB_V(212) MB_V(213) MB_V(214) MB_V(215) MB_V(216) MB_V(217) MB_V(218) MB_V(219) MB_V(220) MB_V(221)
	virtual Vector GetSoundEmissionOrigin();	// slot 222
	char m_pad04[0x2e0 - 0x4];
	int m_pEdict2e0;
	int edict() { return m_pEdict2e0; }
};

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10640d10[];
extern const char *g_10640d1c[];

void CNPC_VManBat::vfunc259(int *pEvent)
{
	CManBatView *p = (CManBatView *)this;
	switch (*pEvent)
	{
	case 1:
	{
		CPASAttenuationFilter filter(p);
		filter.MakeReliable();
		int index = engine->vfunc35(p->edict());
		g_1070b248->vfunc3(&filter, index, 4, g_10640d10[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		break;
	}
	case 2:
	{
		CPASAttenuationFilter filter(p);
		filter.MakeReliable();
		g_1070b248->vfunc3(&filter, engine->vfunc35(p->edict()), 4, "character/male/sheriff_manbat/screech.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		break;
	}
	case 3:
	{
		CPASAttenuationFilter filter(p);
		filter.MakeReliable();
		int index = engine->vfunc35(p->edict());
		g_1070b248->vfunc3(&filter, index, 4, g_10640d1c[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		return;
	}
	default:
		sub_100076bc(pEvent);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x1038e340 size=0xf8
#include "CVTraitEffect_t.h"
#include "CNPC_VManBat.h"

struct DebugCvarMB
{
	virtual void v0();
	virtual char vfunc1();
	int m_n04; int m_n08; int m_n0c; int m_n10; int m_n14; int m_n18; int m_n1c; int m_n20; int m_n24; int m_n28;
	int m_nValue;	// 0x2c
};
extern DebugCvarMB *g_1093b814;
int sub_1042fbf0(int v);

#define HASH(n) (((((n) & 0x710935) ^ 0x148739) + 0x4094ab) & 0x18ef6ca) ^ (n) ^ 0x412a96ec

int CNPC_VManBat::vfunc438()
{
	int iDecoded;
	if (sub_1027d990() == 2)
	{
		int v = HASH(m_n6670);
		iDecoded = sub_1042fbf0(v);
		int k = sub_1042fbf0(0xfa0b0694);
		if (iDecoded != k && (iDecoded != k || iDecoded == -1))
		{
			m_n6674 = 1;
			return 0x159;
		}
		if (sub_10269d30(0x4d))
			return 0x15f;
		if (!g_1093b814->vfunc1() && g_1093b814->m_nValue)
			return 0x15d;
		switch (enginerandom->vfunc2(1, 10))
		{
		case 1:
			return 0x15c;
		case 2:
			return 0x15d;
		case 3:
			return 0x161;
		case 4:
		case 5:
		case 6:
			return 0x163;
		default:
			return 0x159;
		}
	}
	m_n6674 = 1;
	return 0x158;
}
// END FUNCTION

// FUNCTION: 0x1038e480 size=0x160
#include "CBaseEntity.h"
#include "CNPC_VManBat.h"

extern "C" int __cdecl sprintf(char *, const char *, ...);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" char *__cdecl strcpy(char *, const char *);
#pragma intrinsic(strlen, strcpy)
extern char g_106b8540[];
int sub_1042fbf0(int);

struct NamedEnt {
    char m_pad0000[0x26c];
    const char *m_iName;
    char m_pad0270[0x5dc - 0x270];
    int m_nType;
};

#define HASH(x) ((((((x) & 0x710935) ^ 0x148739) + 0x4094ab) & 0x18ef6ca) ^ (x) ^ 0x412a96ec)

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline bool NamesMatch(const char *pszName, const char *const &nameToMatch)
{
    int len = strlen(pszName);
    int r;
    if (len == 0)
        r = (int)nameToMatch;
    else if (pszName[len - 1] != '*')
        r = _strcmpi(STRINGR(nameToMatch), pszName);
    else
        r = _strnicmp(STRINGR(nameToMatch), pszName, len - 1);
    return r == 0;
}

inline bool NameMatches(NamedEnt *pEnt, const char *pszName)
{
    if (pEnt->m_iName && pEnt->m_iName == pszName)
        return true;
    return NamesMatch(pszName, pEnt->m_iName);
}

// TARGET: CNPC_VManBat::vfunc566
bool CNPC_VManBat::vfunc566(CBaseEntity *pEntity)
{
    char name[80];
    NamedEnt *pEnt = (NamedEnt *)pEntity;
    if (pEnt->m_nType != 20000)
        return false;
    int v = HASH(m_n6670);
    switch (sub_1042fbf0(v)) {
    case 2:
    case 4:
        sprintf(name, "ManBat Divepoint %d", m_n6674);
        break;
    case 3:
        sprintf(name, "ManBat Divepoint %d Bottom", m_n6674);
        break;
    case 1:
        strcpy(name, "ManBat Landpoint");
        break;
    case 8:
        sprintf(name, "ManBat Script Node %d", m_n6674);
        break;
    default:
        sprintf(name, "ManBat %d", m_n6674);
        break;
    }
    if (NameMatches(pEnt, name))
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1038e880 size=0x2f
#include "CNPC_VManBat.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VManBat::vfunc390
int CNPC_VManBat::vfunc390(void *info)
{
	if (*(int *)((char *)this + 0x210) < 0x19) {
		if (*(int *)(*(int *)((char *)info + 0x2c) + 0xa8) == 0) {
			return 1;
		}
	}
	return ((CNPC_VHuman *)this)->sub_10001b45(info);
}
// END FUNCTION

// FUNCTION: 0x1038e8c0 size=0x9f
#include "CNPC_VManBat.h"
#include "CEHandleGet.h"

void sub_101cd940(CGlobalEntityList_Ent *pEnt);

// TARGET: CNPC_VManBat::vfunc144
void CNPC_VManBat::vfunc144(int arg)
{
	sub_1038f020(1);
	sub_1038c170(2);
	sub_1038f660();
	sub_1038fd40();
	if (EHandle_Get(m_h66a4)) {
		sub_101cd940(EHandle_Get(m_h66a4));
		m_h66a4 = 0xffffffff;
	}
	sub_103c4f40(arg);
}
// END FUNCTION

// FUNCTION: 0x1038e990 size=0x1a
#include "CNPC_VManBat.h"

// TARGET: CNPC_VManBat::vfunc432
void CNPC_VManBat::vfunc432(int a)
{
	sub_1038f020(0);
	sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x1038fb00 size=0x6
#include "CNPC_VManBat.h"
int CNPC_VManBat::vfunc464()
{
    return 2;
}
// END FUNCTION

// FUNCTION: 0x1038fb20 size=0x68
#include "CBaseEntity.h"
#include "CGameTrace.h"
#include "CNPC_VManBat.h"
#include "CTraceFilterManBatNoIBeamEntity.h"
#include "CUnknown1070b254.h"
struct CManBatCollideable
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8();
	virtual const float *vfunc9(int a);
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual int vfunc14();
};

struct CManBatTraceEnt { virtual void v0(); virtual void v1(); virtual CManBatCollideable *vfunc2(); };

// TARGET: CNPC_VManBat::vfunc102
void CNPC_VManBat::vfunc102(CBaseEntity *pEnt, int a2, int a3, int a4, int a5)
{
	CManBatCollideable *pCollision = ((CManBatTraceEnt *)pEnt)->vfunc2();
	CTraceFilterManBatNoIBeamEntity filter(pEnt, pCollision->vfunc14());
	g_1070b254->vfunc5(pCollision, (const float *)a2, (const float *)a3, pCollision->vfunc9(0), a4, &filter, (CGameTrace *)a5);
}
// END FUNCTION
