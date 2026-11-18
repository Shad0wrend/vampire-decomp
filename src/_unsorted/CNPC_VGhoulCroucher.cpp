// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037a6e0 size=0x6
#include "CNPC_VGhoulCroucher.h"
namespace lifted {
extern char g_1063a9f0;
}
datamap_t * CNPC_VGhoulCroucher::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1063a9f0);
}
// END FUNCTION

// FUNCTION: 0x1037a8f0 size=0x6
extern unsigned char g_1063abc0;
// TARGET: sub_1037a8f0
unsigned char sub_1037a8f0()
{
    return g_1063abc0;
}
// END FUNCTION

// FUNCTION: 0x1037a950 size=0x1d
#include "CNPC_VGhoulCroucher.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b0e0;
extern B g_10936c74;
int CNPC_VGhoulCroucher::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b0e0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1037afb0 size=0x6
#include "CNPC_VGhoulCroucher.h"
namespace lifted {
extern char g_1093b0f8;
}
int CNPC_VGhoulCroucher::vfunc580()
{
    return (int)&lifted::g_1093b0f8;
}
// END FUNCTION

// FUNCTION: 0x1037afd0 size=0x6
#include "CNPC_VGhoulCroucher.h"
namespace lifted {
extern int g_1063abc8;
}
int CNPC_VGhoulCroucher::vfunc451()
{
    return lifted::g_1063abc8;
}
// END FUNCTION

// FUNCTION: 0x1037aff0 size=0x36
#include "CNPC_VGhoulCroucher.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1028d610();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CNPC_VGhoulCroucher::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x668c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x6674))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1037b040 size=0x10b
#include "CNPC_VGhoulCroucher.h"
#include "CBaseEntitySlots.h"

extern int (__cdecl *g_109f3868)(int, int);

#define MAKE_NAME(s) ((s)[0] ? (s) : 0)

// TARGET: CNPC_VGhoulCroucher::vfunc103
void CNPC_VGhoulCroucher::vfunc103()
{
	sub_10012855(0x4000000);
	sub_10012855(0x200000);
	sub_10012855(0x8000);
	m_n1a98 = 0;
	m_n5dec = 0;
	if (m_b6665)
		m_pszName10e4 = MAKE_NAME("MalkMansionStalkerBurning");
	else if (m_b6664)
		m_pszName10e4 = MAKE_NAME("MalkMansionStalker");
	else
		m_pszName10e4 = MAKE_NAME("MalkMansionCroucher");
	sub_1000bc08();
	if (m_b6664)
	{
		m_b6666 = 1;
		m_b6667 = 1;
		((CBaseEntitySlots *)this)->slot105("models/character/npc/unique/Malkavian_mansion/Stalker/stalker.mdl");
	}
	else
	{
		m_b6666 = 0;
		m_b6667 = 0;
		((CBaseEntitySlots *)this)->slot105("models/character/npc/unique/Malkavian_mansion/Stalker_Female/stalker_female.mdl");
	}
	m_n6668 = g_109f3868(0, 3);
	m_n6348[0] = 999999;
	m_n6348[1] = 999999;
	m_n6348[2] = 999999;
	m_n6348[3] = 999999;
	m_n6348[4] = 999999;
}
// END FUNCTION

// FUNCTION: 0x1037b1a0 size=0x37
#include "CNPC_VGhoulCroucher.h"

void sub_101d0ec0(const char *pszName);
void sub_10009dbd();

// TARGET: CNPC_VGhoulCroucher::vfunc104
void CNPC_VGhoulCroucher::vfunc104()
{
	sub_10009dbd();
	sub_101d0ec0("item_w_claws_ghoul");
	engine->vfunc13("models/character/npc/unique/Malkavian_mansion/Stalker/stalker.mdl", 0);
	engine->vfunc13("models/character/npc/unique/Malkavian_mansion/Stalker_Female/stalker_female.mdl", 0);
}
// END FUNCTION

// FUNCTION: 0x1037b1f0 size=0x77
#include "CNPC_VGhoulCroucher.h"

extern char g_106b8540[];

struct CSoundTableX {
	int sub_101f55a0(CBaseEntity &entity, const char *pszName, bool bFemale);
};
extern CSoundTableX g_1073dc28;

// TARGET: CNPC_VGhoulCroucher::vfunc105
void CNPC_VGhoulCroucher::vfunc105(const char *pszModel)
{
	const char **ppName = (const char **)((char *)this + 0xc0);
	sub_10298ce0(pszModel);
	if (sub_10336920()) {
		*ppName = "Zombie_Male"[0] ? "Zombie_Male" : 0;
		m_nVSoundTableIdx = 2;
		m_nVSoundGroup = g_1073dc28.sub_101f55a0(*this, *ppName ? *ppName : g_106b8540, false);
	} else {
		*ppName = "Zombie_Female"[0] ? "Zombie_Female" : 0;
		m_nVSoundTableIdx = 2;
		m_nVSoundGroup = g_1073dc28.sub_101f55a0(*this, *ppName ? *ppName : g_106b8540, false);
	}
}
// END FUNCTION

// FUNCTION: 0x1037b290 size=0x107
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VGhoulCroucher.h"
#include "ScopeTrace.h"

extern char g_1070d1b0[];
extern char g_1070d9d0[];
extern char g_1063b128[];	// "item_w_claws_ghoul"
extern char g_10587630[];	// "item_w_knife"
CBaseEntity *sub_100fbc90(const char *pszName, void *pOrigin, void *pAngles, float flLifetime);
void sub_1021fe50(CBaseEntity *pOwner, const char *pszWeapon, int a);

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct GhoulFireSlots
{
	virtual void s0();
	virtual unsigned int *slot1();
	virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
	V100(b)
	V10(c0) V10(c1) V10(c2) V10(c3)
	virtual void c40(); virtual void c41(); virtual void c42();
	virtual void slot243(CBaseEntity *pOwner, int a, const char *pszAttachment);
};

void CNPC_VGhoulCroucher::vfunc420()
{
	ScopeTrace trace("CNPC_VWerewolf::NPCInit", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_1000dcba();
	sub_10334b10();
	if (!m_b6664)
		sub_1021fe50(this, g_10587630, 0);
	else
		sub_1021fe50(this, g_1063b128, 0);
	sub_1033c6b0(0x10);
	if (m_b6665) {
		GhoulFireSlots *pFire = (GhoulFireSlots *)sub_100fbc90("la_malkavian_4_ghoul_body_fire_emitter", g_1070d1b0, g_1070d9d0, -1.0f);
		if (pFire) {
			pFire->slot243(this, 1, g_106b8540);
			m_h6670 = *pFire->slot1();
		}
	}
	sub_10332aa0(1, 1, 10);
}
// END FUNCTION

// FUNCTION: 0x1037b3f0 size=0xca
#include "CNPC_VGhoulCroucher.h"
#include "CEnvParticle.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
float sub_101beed0(float flValue, float flMin, float flMax);

static inline CEnvParticle *GetEmitter(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13))
			return (CEnvParticle *)pSlot->m_pEntity;
	}
	return 0;
}

// TARGET: CNPC_VGhoulCroucher::vfunc431
void CNPC_VGhoulCroucher::vfunc431()
{
	sub_10292de0();
	if (m_b6665 && GetEmitter(m_h6670)) {
		float flScale = 1.0f - sub_101beed0(m_fl6264, 200.0f, 600.0f);
		if (flScale < 0.1)
			flScale = 0.1f;
		GetEmitter(m_h6670)->sub_100fb980(flScale);
	}
}
// END FUNCTION

// FUNCTION: 0x1037b500 size=0x45
#include "CNPC_VGhoulCroucher.h"
struct CGhoulEntView
{
	char m_pad00[0xa8];
	void *m_pObj;	// 0xa8
};

// TARGET: CNPC_VGhoulCroucher::vfunc379
char CNPC_VGhoulCroucher::vfunc379(void *pEnt, int b, int c, int d, int e, float f, float g)
{
	CGhoulEntView *p = (CGhoulEntView *)pEnt;
	if (m_b6665 && p && p->m_pObj) {
		sub_1037c090(p->m_pObj, 10.0f);
		return 0;
	}
	return sub_1000f2b3(pEnt, b, c, d, e, f, g);
}
// END FUNCTION

// FUNCTION: 0x1037b570 size=0x120
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VGhoulCroucher.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CUnknown103160c0.h"

struct CDebugHook { virtual void vfunc0(); virtual void vfunc1(); };
extern CDebugHook *g_10924a6c;

void CNPC_VGhoulCroucher::vfunc433()
{
    ScopeTrace trace("CNPC_VGhoulCroucher::GatherConditions", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (!m_b6666) {
        if (sub_10269aa0(0x54)) {
            sub_1037b6e0((int)this);
            return;
        }
    }
    if (m_b6666) {
        sub_102b27f0();
        if (sub_10269aa0(0x54) && m_n5bb0 <= 0 && m_n5da4 && ((CEntityVSlots *)this)->slot167()) {
            CUnknown103160c0 *pSquad = (CUnknown103160c0 *)(m_n5bb0 <= 0 ? m_n5da4 : 0);
            pSquad->sub_103161a0(((CEntityVSlots *)this)->slot167());
        }
    } else {
        g_10924a6c->vfunc1();
        sub_10269a20(0x79);
    }
}
// END FUNCTION

// FUNCTION: 0x1037b8b0 size=0xfa
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VGhoulCroucher.h"
#include "ScopeTrace.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CroucherSlots {
	SV100(0) SV100(1) SV100(2) SV100(3)
	SV10(40) SV10(41) SV10(42) SV10(43)
	SV(440) SV(441) SV(442) SV(443) SV(444) SV(445) SV(446) SV(447)
	virtual void s448(int a);
};

extern int g_1063abcc[];
extern int g_1063abdc[];

namespace block_1037b8b0 {
struct CCrouchUnit : CNPC_VGhoulCroucher {
	int sub_1037b870();
	int sub_1037b890();
};
int CCrouchUnit::sub_1037b870() { return g_1063abcc[m_n6668]; }
int CCrouchUnit::sub_1037b890() { return g_1063abdc[m_n6668]; }
}
using namespace block_1037b8b0;

// TARGET: CNPC_VGhoulCroucher::vfunc442
void CNPC_VGhoulCroucher::vfunc442(int *pTask)
{
	ScopeTrace trace("CNPC_VGhoulCroucher::StartTask", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	switch (*pTask) {
	case 0x14a:
		sub_10014524(((CCrouchUnit *)this)->sub_1037b870());
		if (m_nActivityff0 != ((CCrouchUnit *)this)->sub_1037b870())
			((CroucherSlots *)this)->s448(0x15);
		break;
	case 0x14b:
		sub_10014524(((CCrouchUnit *)this)->sub_1037b890());
		if (m_nActivityff0 != ((CCrouchUnit *)this)->sub_1037b890()) {
			m_b6667 = 1;
			((CroucherSlots *)this)->s448(0x15);
		}
		break;
	default:
		sub_1000a0c9(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1037b9f0 size=0xc6
#include "CNPC_VGhoulCroucher.h"
#include "CEntityVSlots.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNPC_VGhoulCroucher::vfunc444(void *pTask)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::RunTask";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	switch (*(int *)pTask) {
	case 0x14a:
		if (((CEntityVSlots *)this)->slot251())
			sub_10273e80(0);
		break;
	case 0x14b:
		if (((CEntityVSlots *)this)->slot251()) {
			*((char *)this + 0x6667) = 1;
			sub_10273e80(0);
		}
		break;
	default:
		sub_100080da(pTask);
		(*g_109f3680)--;
		return;
	}
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1037bb00 size=0x5
#include "CNPC_VGhoulCroucher.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VGhoulCroucher::vfunc375
// the game's 0x1037bb00: a tail call (jmp) of CNPC_VHuman::vfunc375
int CNPC_VGhoulCroucher::vfunc375(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc375(a0);
}
// END FUNCTION

// FUNCTION: 0x1037bbc0 size=0x9a
#include "CNPC_VGhoulCroucher.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
bool __fastcall sub_1037bb20(char *p);

char CNPC_VGhoulCroucher::vfunc294(int a)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::IsValidStealthKillTarget";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (!sub_1037bb20((char *)this)) {
        (*g_109f3680)--;
        return 1;
    }
    char r = sub_1000c081(a);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1037bc90 size=0x96
#include "CNPC_VGhoulCroucher.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VGhoulCroucher::vfunc390(void *pInfo)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::OnTakeDamage_Alive";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1037b6e0(*(int *)((char *)pInfo + 0x2c));
	*((char *)this + 0x6667) = 1;
	int r = sub_10001b45(pInfo);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x1037be80 size=0xac
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VGhoulCroucher.h"

void CNPC_VGhoulCroucher::vfunc24(void *pVictim)
{
	ScopeTrace trace("CNPC_VGhoulCroucher::OnVictimHitByMe", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int nObject;
	if (pVictim == 0)
		nObject = 0;
	else
		nObject = *(int *)((char *)pVictim + 0xa8);
	if (m_b6665 && nObject)
		sub_1037c090((void *)nObject, 10.0f);
	sub_10006136(pVictim);
}
// END FUNCTION

// FUNCTION: 0x1037bf60 size=0xe8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VGhoulCroucher.h"
#include "ScopeTrace.h"



static inline void *GetCharacter(CBaseEntity *pEnt)
{
    if (!pEnt)
        return 0;
    return *(void **)((char *)pEnt + 0xa8);
}

void CNPC_VGhoulCroucher::vfunc174(CBaseEntity *pOther)
{
    ScopeTrace trace("CNPC_VGhoulCroucher::StartTouch", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    sub_100a49d0(pOther);
    void *pCharacter = GetCharacter(pOther);
    if (pCharacter || *(void **)((char *)pOther + 0x94))
        sub_1037b6e0((int)pOther);
    if (m_b6665 && pCharacter && gpGlobals->curtime > m_flNext666c) {
        m_flNext666c = gpGlobals->curtime + 5.0;
        sub_1037c090(pCharacter, 5.0f);
    }
}
// END FUNCTION

// FUNCTION: 0x1037c1c0 size=0xe8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CNPC_VGhoulCroucher.h"
#include "ScopeTrace.h"

extern CGlobalEntityList *g_10566458;

inline CGlobalEntityList_Ent *LookupEntity(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

void CNPC_VGhoulCroucher::vfunc77()
{
	ScopeTrace t("CNPC_VGhoulCroucher::ScriptHide", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_102c1ce0();
	if (LookupEntity(m_h6670))
		((CBaseEntity *)LookupEntity(m_h6670))->vfunc77();
}
// END FUNCTION

// FUNCTION: 0x1037c2f0 size=0xe8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CNPC_VGhoulCroucher.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

static inline CBaseEntity *ResolveHandle(volatile unsigned int *pHandle)
{
	unsigned int h = *pHandle;
	EntInfo *e;
	return (h != 0xffffffff && (e = &g_10566458->m_entries[h & 0x1fff], e->m_serial == (int)(h >> 13))) ? e->m_pEntity : 0;
}

void CNPC_VGhoulCroucher::vfunc78()
{
	ScopeTrace trace("CNPC_VGhoulCroucher::ScriptUnhide", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_102c1ec0();
	if (ResolveHandle(&m_h6670))
		ResolveHandle(&m_h6670)->vfunc78();
}
// END FUNCTION

// FUNCTION: 0x1037c420 size=0x8f
#include "CNPC_VGhoulCroucher.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

char CNPC_VGhoulCroucher::vfunc615()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::CanBeSetOnFire";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (*((char *)this + 0x6665)) {
		(*g_109f3680)--;
		return 0;
	}
	char r = sub_1000c5db();
	(*g_109f3680)--;
	return r;
}
// END FUNCTION
