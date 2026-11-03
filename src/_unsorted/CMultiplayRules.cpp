// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10141090 size=0x8
#include "CMultiplayRules.h"

const char *CMultiplayRules::vfunc63(int)
{
	return "";
}
// END FUNCTION

// FUNCTION: 0x101410b0 size=0x3
bool CMultiplayRules::vfunc72()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101410d0 size=0x8
#include "CMultiplayRules.h"

void CMultiplayRules::vfunc75()
{
	vfunc80();
}
// END FUNCTION

// FUNCTION: 0x101410f0 size=0x24
#include "CMultiplayRules.h"

extern int vt_1046b934[];

// TARGET: CMultiplayRules::vfunc0
CGameRules *CMultiplayRules::vfunc0(unsigned int flags)
{
    *(int **)this = vt_1046b934;
    this->sub_1000d189();
    if (flags & 1) {
        delete this;
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x10141150 size=0x13a
#include "CMultiplayRules.h"
#include "ConVar.h"

extern char g_1070ba2c;
extern ConVar *g_1070ae7c;
extern ConVar *g_1070aa8c;

struct PlayerView10141150 {
	char pad[0x22bc];
	int m_nFrags;
};
PlayerView10141150 *sub_1000ac8b(int index);

struct RulesView10141150 {
	char pad[8];
	float m_f08;
	char m_b0c;
};

void CMultiplayRules::vfunc16()
{
	sub_10128f50();
	RulesView10141150 *r = (RulesView10141150 *)this;
	if (g_1070ba2c) {
		if (r->m_f08 < gpGlobals->curtime && (r->m_b0c || r->m_f08 + 120.0f < gpGlobals->curtime))
			vfunc79();
	} else {
		float flTimeLimit = (g_1070ae7c->vfunc1() ? 0.0f : g_1070ae7c->m_fValue) * 60.0f;
		float flFragLimit;
		if (g_1070aa8c->vfunc1())
			flFragLimit = 0.0f;
		else
			flFragLimit = g_1070aa8c->m_fValue;
		if (flTimeLimit != 0.0f && gpGlobals->curtime >= flTimeLimit) {
			vfunc80();
			return;
		}
		if (flFragLimit != 0.0f) {
			for (int i = 1; i <= gpGlobals->maxClients; i++) {
				PlayerView10141150 *p = sub_1000ac8b(i);
				if (p && (float)p->m_nFrags >= flFragLimit) {
					vfunc80();
					return;
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101412e0 size=0x3
bool CMultiplayRules::vfunc21()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10141300 size=0x3
bool CMultiplayRules::vfunc22()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10141320 size=0x11
extern char *g_1070b228;

bool sub_10141320()
{
    return g_1070b228[0x31] != 0;
}
// END FUNCTION

// FUNCTION: 0x10141350 size=0x65
#include "CMultiplayRules.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
struct CBCCCallX : CBaseCombatCharacter {
    char sub_1032db60(CBaseEntity *pWeapon);
    void *sub_1032e7b0();
};

// TARGET: CMultiplayRules::vfunc19
char CMultiplayRules::vfunc19(CBaseEntity *pPlayer, CBaseEntity *pWeapon)
{
    CBCCCallX *p = (CBCCCallX *)pPlayer;
    if (!p->sub_1032db60(pWeapon))
        return 0;
    if (!p->sub_10335a70(pWeapon))
        return 0;
    if (!p->sub_1032e7b0())
        return 1;
    int active = ((CBaseCombatWeapon *)p->sub_1032e7b0())->vfunc345();
    return ((CBaseCombatWeapon *)pWeapon)->vfunc345() > active;
}
// END FUNCTION

// FUNCTION: 0x101413e0 size=0x114
#include "CMultiplayRules.h"
#include "CBaseCombatCharacter.h"

#define D(x) virtual void x();
#define T(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)

struct CWeaponSlots
{
	H(a0) H(b0) H(c0)
	D(d0) D(d1) D(d2) D(d3) D(d4) D(d5) D(d6) D(d7) D(d8) D(d9) D(d10) D(d11)
	virtual bool slot312();
	virtual bool slot313();
	T(e0) T(e1) T(e2) D(e30)
	virtual int slot345();
};

CBaseEntity *CMultiplayRules::vfunc20(CBaseEntity *pPlayer, CBaseEntity *pCurrentWeapon)
{
	CBaseCombatCharacter *pOwner = (CBaseCombatCharacter *)pPlayer;
	int iCurrentWeight = -1;
	int iBestWeight = -1;
	CBaseEntity *pBest = 0;
	if (pCurrentWeapon) {
		if (!((CWeaponSlots *)pCurrentWeapon)->slot313())
			return 0;
		iCurrentWeight = ((CWeaponSlots *)pCurrentWeapon)->slot345();
	}
	for (int i = 0; i < 0xe0; i++) {
		CWeaponSlots *pCheck = (CWeaponSlots *)pOwner->sub_1032e8b0(i);
		if (!pCheck)
			continue;
		if (pCheck->slot345() > -1 && pCheck->slot345() == iCurrentWeight && (CBaseEntity *)pCheck != pCurrentWeapon) {
			if (pCheck->slot312() && pOwner->sub_1032db60((CBaseEntity *)pCheck) && pOwner->sub_10335a70((CBaseEntity *)pCheck))
				return (CBaseEntity *)pCheck;
		} else if (pCheck->slot345() > iBestWeight && (CBaseEntity *)pCheck != pCurrentWeapon) {
			if (pCheck->slot312() && pOwner->sub_10335a70((CBaseEntity *)pCheck)) {
				iBestWeight = pCheck->slot345();
				pBest = (CBaseEntity *)pCheck;
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x10141550 size=0x16
namespace lifted {
int __stdcall sub_100052ea(int);
struct C10008954 { int sub_10008954(); };
}
bool CMultiplayRules::vfunc26(int a0, int a1, int a2, int a3)
{
    ((lifted::C10008954 *)(lifted::sub_100052ea(a0)))->sub_10008954();
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10141580 size=0xb4
#include "CMultiplayRules.h"
#include "CSingleUserRecipientFilter.h"

extern int g_10726038;

void CMultiplayRules::vfunc29(void *pPlayer)
{
	CSingleUserRecipientFilter filter(pPlayer);
	filter.sub_1019cf50();
	engine->vfunc65(&filter, g_10726038);
	engine->vfunc67(0);
	engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x10141820 size=0xd6
#include "ScopeTrace.h"

void sub_101c0b80(const char *pszTarget, void *pActivator, void *pCaller, int useType, int value);
void sub_101d10e0(const char *pszFormat, const char *pszName, int nUserId);

struct CMPUnknown
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual struct CMPPlayer *vfunc4();
};

struct CMPEdict
{
	char m_pad0000[0x40];
	CMPUnknown *m_pUnk;
};

struct CMPPlayer
{
	virtual void v0();
	char m_pad0004[0x2dc];
	int m_nEdictIndex;
	char m_pad02e4[0x2078 - 0x2e4];
	const char *m_pszNetName;
	char m_pad207c[0x22dc - 0x207c];
	char m_bFlag22dc;
};

void CMultiplayRules::vfunc28(void *pEdict)
{
	if (!pEdict)
		return;
	CMPPlayer *pPlayer;
	{
		ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
		CMPUnknown *pUnk = ((CMPEdict *)pEdict)->m_pUnk;
		pPlayer = pUnk ? pUnk->vfunc4() : 0;
	}
	if (pPlayer) {
		sub_101c0b80("game_playerleave", pPlayer, pPlayer, 3, 0);
		const char *pszName = g_106b8540;
		const char *pszNet = pPlayer->m_pszNetName;
		int nIndex = pPlayer->m_nEdictIndex;
		if (pszNet)
			pszName = pszNet;
		sub_101d10e0("\"%s<%i>\" disconnected\n", pszName, engine->vfunc34(nIndex));
		((CBasePlayer *)pPlayer)->vfunc442(1);
	}
	pPlayer->m_bFlag22dc = 0;
}
// END FUNCTION

// FUNCTION: 0x10141940 size=0x9
extern float g_104454c0;
float CMultiplayRules::vfunc30(int a) { return g_104454c0; }
// END FUNCTION

// FUNCTION: 0x10141960 size=0x5
bool CMultiplayRules::vfunc31(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10141980 size=0x34
extern unsigned char g_1070ba2c;

// TARGET: CMultiplayRules::vfunc36
void CMultiplayRules::vfunc36(void *pOwner)
{
    if (g_1070ba2c != 0) {
        char *p = (char *)pOwner;
        if (*(unsigned int *)(p + 0x208c) & 0x440827)
            m_b0c = 1;
        *(unsigned int *)(p + 0x208c) = 0;
        *(unsigned int *)(p + 0x2088) = 0;
        *(unsigned int *)(p + 0x2090) = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x101419d0 size=0x7b
#include "CMultiplayRules.h"
#include "CGlobalEntityList.h"
#include "CBaseCombatCharacter.h"

extern CGlobalEntityList g_106eb5d8;

#define D(x) virtual void x();
#define T(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)

struct EquipSlots175
{
	H(a0) T(b0) T(b1) T(b2) T(b3) T(b4) T(b5) T(b6)
	D(c0) D(c1) D(c2) D(c3) D(c4)
	virtual void slot175(CBaseEntity *pPlayer);
};

struct PlayerSlots459
{
	H(a0) H(b0) H(c0) H(d0) T(e0) T(e1) T(e2) T(e3) T(e4)
	D(f0) D(f1) D(f2) D(f3) D(f4) D(f5) D(f6) D(f7) D(f8)
	virtual void slot459(const char *pszName, int a);
};

void CMultiplayRules::vfunc35(CBaseEntity *pPlayer)
{
	CBaseEntity *pEquip = g_106eb5d8.sub_100f7380(0, "game_player_equip");
	if (pEquip) {
		do {
			((EquipSlots175 *)pEquip)->slot175(pPlayer);
			pEquip = g_106eb5d8.sub_100f7380(pEquip, "game_player_equip");
		} while (pEquip);
		return;
	}
	((PlayerSlots459 *)pPlayer)->slot459("weapon_crowbar", 0);
	((PlayerSlots459 *)pPlayer)->slot459("weapon_9mmhandgun", 0);
	((CBaseCombatCharacter *)pPlayer)->sub_103343f0(0x44, "SmallRound");
}
// END FUNCTION

// FUNCTION: 0x10141a70 size=0x5
bool CMultiplayRules::vfunc37(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10141a90 size=0xb
float CMultiplayRules::vfunc38(int a)
{
	return gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10141af0 size=0x8
#include "CMultiplayRules.h"

int CMultiplayRules::vfunc43(int, int)
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10141bb0 size=0x9d
#include "CMultiplayRules.h"

void __cdecl sub_1000c3f6(const char *pszName, CBaseEntity *pActivator, CBaseEntity *pCaller, int nUseType, int nValue);

struct CMPPlayerView
{
	int m_pad0000[0x22bc / 4];
	int m_nScore;
	int m_nDeaths;

	void sub_10170d40();
};

void CMultiplayRules::vfunc44(CBaseEntity *pVictim, CMPDamageInfo *pInfo)
{
	CMPPlayerView *pV = (CMPPlayerView *)pVictim;
	vfunc45(pVictim, pInfo);
	CBaseEntity *pInflictor = pInfo->m_pInflictor;
	CBaseEntity *pAttacker = pInfo->m_pAttacker;
	CBaseEntity *pScorer = sub_10141b10(pAttacker, pInflictor);
	pV->m_nDeaths++;
	sub_1000c3f6("game_playerdie", pVictim, pVictim, 3, 0);
	if (pVictim != pScorer && pScorer) {
		CMPPlayerView *pS = (CMPPlayerView *)pScorer;
		pS->m_nScore += vfunc43((int)pScorer, (int)pVictim);
		pS->sub_10170d40();
		sub_1000c3f6("game_playerkill", pScorer, pScorer, 3, 0);
		return;
	}
	pV->m_nScore--;
}
// END FUNCTION

// FUNCTION: 0x10142010 size=0x49
#include "ConVar.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlot346View
{
	S10(q0) S10(q1) S10(q2) S10(q3) S10(q4) S10(q5) S10(q6) S10(q7) S10(q8) S10(q9)
	S10(q10) S10(q11) S10(q12) S10(q13) S10(q14) S10(q15) S10(q16) S10(q17) S10(q18) S10(q19)
	S10(q20) S10(q21) S10(q22) S10(q23) S10(q24) S10(q25) S10(q26) S10(q27) S10(q28) S10(q29)
	S10(q30) S10(q31) S10(q32) S10(q33)
	virtual void r0(); virtual void r1(); virtual void r2(); virtual void r3(); virtual void r4(); virtual void r5();
	virtual unsigned int vfunc346();
};
extern ConVar *g_1070adec;
float CMultiplayRules::vfunc49(CBaseEntity *pPlayer)
{
	if (!g_1070adec->vfunc1() && g_1070adec->m_nValue > 0 && (((CSlot346View *)pPlayer)->vfunc346() & 8) == 0)
		return gpGlobals->curtime;
	return gpGlobals->curtime + 20.0f;
}
// END FUNCTION

// FUNCTION: 0x10142080 size=0x4f
#include "CMultiplayRules.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "globalvars.h"
#define V4(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3();
#define V16(p) V4(p##a) V4(p##b) V4(p##c) V4(p##d)
struct S10142080Slots {
	V16(a) V16(b) V16(c) V16(d) V16(e) V16(f) V16(g) V16(h) V16(i) V16(j) V16(k) V16(l) V16(m) V16(n) V16(o) V16(p) V16(q) V16(r) V16(s) V16(t) V16(u)
	virtual void s336(); virtual void s337(); virtual void s338(); virtual void s339(); virtual void s340();
	virtual void s341(); virtual void s342(); virtual void s343(); virtual void s344(); virtual void s345();
	virtual unsigned int vfunc346();
};
struct S10142080Rules {
	V16(a) V16(b) V16(c)
	virtual void s48();
	virtual float vfunc49(CBaseEntity *pPlayer);
};
extern CGlobalEntityList g_106eb5d8;
float CMultiplayRules::vfunc50(CBaseEntity *pPlayer)
{
	if (pPlayer && (((S10142080Slots *)pPlayer)->vfunc346() & 8)
		&& g_106eb5d8.sub_100f7040() >= gpGlobals->m_nEdicts - 100)
		return ((S10142080Rules *)this)->vfunc49(pPlayer);
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x101420f0 size=0x29
#include "CBaseEntity.h"
Vector CMultiplayRules::vfunc51(CBaseEntity *pEnt)
{
	typedef Vector *(__fastcall *Fn)(CBaseEntity *);
	return *((Fn)(*(void ***)pEnt)[220])(pEnt);
}
// END FUNCTION

// FUNCTION: 0x10142130 size=0x19
// TARGET: CMultiplayRules::vfunc48
int CMultiplayRules::vfunc48(CBaseEntity *pPlayer)
{
	return (pPlayer->m_flags204 & 0x40000000) ? 2 : 1;
}
// END FUNCTION

// FUNCTION: 0x10142160 size=0x7a
#include "CMultiplayRules.h"
#include "ConVar.h"
#include "CEntityVSlots.h"
extern ConVar *g_1070adec;
char CMultiplayRules::vfunc47(CBaseEntity *pPlayer, CBaseEntity *pItem)
{
    if (!g_1070adec->vfunc1() && g_1070adec->m_nValue > 0) {
        if (((CEntityVSlots *)pItem)->slot346() & 8)
            return CGameRules::vfunc47(pPlayer, pItem);
        for (int i = 0; i < 0xe0; i++) {
            if (((CBaseCombatCharacter *)pPlayer)->sub_1032e8b0(i) == pItem)
                return 0;
        }
    }
    return CGameRules::vfunc47(pPlayer, pItem);
}
// END FUNCTION

// FUNCTION: 0x10142200 size=0x3
void CMultiplayRules::vfunc54(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x10142220 size=0x5
bool CMultiplayRules::vfunc17(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10142240 size=0x7
namespace lifted {
extern float g_104492a4;
}
float CMultiplayRules::vfunc59()
{
    return lifted::g_104492a4;
}
// END FUNCTION

// FUNCTION: 0x10142260 size=0x7
namespace lifted {
extern float g_104492a8;
}
float CMultiplayRules::vfunc60()
{
    return lifted::g_104492a8;
}
// END FUNCTION

// FUNCTION: 0x10142280 size=0x8
// TARGET: CMultiplayRules::vfunc61
int CMultiplayRules::vfunc61(int index)
{
	return 8;
}
// END FUNCTION

// FUNCTION: 0x101422a0 size=0x8
#include "CMultiplayRules.h"

int CMultiplayRules::vfunc62(int)
{
	return 11;
}
// END FUNCTION

// FUNCTION: 0x101422e0 size=0x1b
#include "CMultiplayRules.h"

// TARGET: CMultiplayRules::vfunc65
bool CMultiplayRules::vfunc65(int a, int b)
{
	return vfunc64(a, b) == 1;
}
// END FUNCTION

// FUNCTION: 0x10142310 size=0x5
int CMultiplayRules::vfunc64(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101423d0 size=0x3
bool CMultiplayRules::vfunc18()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101423f0 size=0x3
char CMultiplayRules::vfunc74()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10142410 size=0xe7
#include "CMultiplayRules.h"
#include "CReliableBroadcastFilter.h"

extern char g_1070ba2c;

// TARGET: CMultiplayRules::vfunc80
void CMultiplayRules::vfunc80()
{
	if (!g_1070ba2c) {
		CReliableBroadcastFilter filter;
		engine->vfunc65(&filter, 0x1a);
		engine->vfunc66();
		*(float *)&m_n08 = gpGlobals->curtime + 6.0f;
		g_1070ba2c = 1;
		m_b0c = 0;
	}
}
// END FUNCTION
