// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ddde0 size=0x6
#include "CNPC_VZombie.h"
namespace lifted {
extern char g_10664090;
}
datamap_t * CNPC_VZombie::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10664090);
}
// END FUNCTION

// FUNCTION: 0x103de2b0 size=0x6
#include "CNPC_VZombie.h"
namespace lifted {
extern char g_10940398;
}
int CNPC_VZombie::vfunc580()
{
    return (int)&lifted::g_10940398;
}
// END FUNCTION

// FUNCTION: 0x103de2d0 size=0x6
#include "CNPC_VZombie.h"
namespace lifted {
extern int g_10664268;
}
int CNPC_VZombie::vfunc451()
{
    return lifted::g_10664268;
}
// END FUNCTION

// FUNCTION: 0x103de2f0 size=0x2b
#include "CNPC_VZombie.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_100123af();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CNPC_VZombie::vfunc5
CBaseEntity *CNPC_VZombie::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x66e8))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_100123af();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103de470 size=0x6
extern unsigned char g_10664260;
// TARGET: sub_103de470
unsigned char sub_103de470()
{
    return g_10664260;
}
// END FUNCTION

// FUNCTION: 0x103de4d0 size=0x1d
#include "CNPC_VZombie.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_109403e0;
extern B g_10936c74;
int CNPC_VZombie::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_109403e0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103df120 size=0x35
#include "CNPC_VZombie.h"

void sub_1000bcb7();
void sub_101d0ec0(const char *pszName);

// TARGET: CNPC_VZombie::vfunc104
void CNPC_VZombie::vfunc104()
{
	sub_1000bcb7();
	engine->vfunc17((const char *)"zombie_headshot_death_emitter", 0);
	engine->vfunc17((const char *)"zombie_headshot_dmg_emitter", 0);
	sub_101d0ec0("item_w_zombie_fists");
}
// END FUNCTION

// FUNCTION: 0x103df170 size=0xb7
#include "CNPC_VZombie.h"

unsigned int sub_1042fde0(int a);

struct ZRecord
{
	ZRecord() {}
	ZRecord(unsigned int v) { m_hash = (((v & 0x68d8635) ^ 0xae8746f) + 0xffa91d8 & 0x197279ca) ^ v ^ 0xa641cacd; }
	ZRecord &operator=(const ZRecord &o) { m_b1 = o.m_b1; m_hash = o.m_hash; m_b0 = o.m_b0; return *this; }
	char m_b0;
	char m_b1;
	unsigned int m_hash;
};

struct CNPC_VZombieSpawnView
{
	char m_pad0000[0x1a98];
	int m_n1a98;
	char m_pad1a9c[0x5dec - 0x1a9c];
	int m_n5dec;
	char m_pad5df0[0x6348 - 0x5df0];
	int m_nDistances[5];
	char m_pad635c[0x6360 - 0x635c];
	ZRecord m_rec6360;
	int m_n6368;
	char m_pad636c[0x641c - 0x636c];
	int m_n641c;
};

void CNPC_VZombie::vfunc103()
{
	CNPC_VZombieSpawnView *p = (CNPC_VZombieSpawnView *)this;
	sub_10012855(0x4000000);
	sub_10012855(0x200000);
	sub_10012855(0x8000);
	p->m_n1a98 = 0;
	p->m_n5dec = 0;
	p->m_n641c = 0;
	p->m_nDistances[0] = 999999;
	p->m_nDistances[1] = 999999;
	p->m_nDistances[2] = 999999;
	p->m_nDistances[3] = 999999;
	p->m_nDistances[4] = 999999;
	p->m_rec6360 = ZRecord(sub_1042fde0(0));
	p->m_n6368 = 0;
	sub_100117ca();
}
// END FUNCTION

// FUNCTION: 0x103df260 size=0x6
#include "CNPC_VZombie.h"
int CNPC_VZombie::vfunc473()
{
    return 0x17;
}
// END FUNCTION

// FUNCTION: 0x103df280 size=0x6
#include "CNPC_VZombie.h"
int CNPC_VZombie::vfunc138()
{
    return 0xe;
}
// END FUNCTION

// FUNCTION: 0x103df2a0 size=0x5
#include "CNPC_VZombie.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VZombie::vfunc463
// the game's 0x103df2a0: a tail call (jmp) of CNPC_VAnimal::vfunc463
void CNPC_VZombie::vfunc463(int a0, int a1)
{
	((CNPC_VAnimal *)this)->CNPC_VAnimal::vfunc463(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x103df2c0 size=0x5
#include "CNPC_VZombie.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VZombie::vfunc259
// the game's 0x103df2c0: a tail call (jmp) of CNPC_VAnimal::vfunc259
void CNPC_VZombie::vfunc259(int *a0)
{
	((CNPC_VAnimal *)this)->CNPC_VAnimal::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x103df580 size=0x44
#include "CBaseEntity.h"
#include "CNPC_VZombie.h"
extern void (*g_109f3630)(const char *fmt, ...);
// TARGET: CNPC_VZombie::vfunc440
int CNPC_VZombie::vfunc440(int nSchedule)
{
	switch (nSchedule) {
	case 0x5b:
		g_109f3630("npc_zombie: encountered schedule:[investigate unknown] ...ignoring!\n");
		return 0x165;
	case 0x156:
		return 0x15e;
	case 0x157:
		return 0x15f;
	}
	return sub_10012283(nSchedule);
}
// END FUNCTION

// FUNCTION: 0x103df850 size=0x16c
#include "CNPC_VZombie.h"
#include "CEHandleGet.h"
#include "CUnknown10739d08.h"
#include "CUnknown1070b244.h"

__declspec(dllimport) void __cdecl DevMsg(const char *pszFormat, ...);

extern CUnknown10739d08 g_10739d08;
extern CUnknown1070b244 *g_1070b244;

struct CEntityPlayerView
{
	char m_pad0000[0xa8];
	void *m_pPlayer;	// 0xa8
};

// TARGET: CNPC_VZombie::vfunc432
void CNPC_VZombie::vfunc432(int a)
{
	if (m_nMode6678 == 1 && m_flPlayerDist6264 > m_flMaxDist66dc) {
		DevMsg("zombie %s: player too far away, killing self (%.1f > %.1f)...\n", sub_100ab4f0(), m_flPlayerDist6264, m_flMaxDist66dc);
		vfunc119();
	}
	sub_10360160(a);
	if ((m_nMode6678 == 1 || m_nMode6678 == 0) && m_nState0fec != 0x4b && sub_10269aa0(0x46)) {
		if (g_10739d08.sub_101e8a90() <= m_flPlayerDist6264 && g_10739d08.sub_101e8ab0() >= m_flPlayerDist6264 && gpGlobals->curtime >= m_flNextLunge66d8) {
			CEntityPlayerView *pEnemy = (CEntityPlayerView *)EHandle_Get(m_hEnemy628c);
			if (pEnemy && pEnemy->m_pPlayer) {
				int roll = g_1070b244->vfunc2(0, 99);
				if (g_10739d08.sub_101e8b30() > roll) {
					sub_102ae750(0x16a, 0);
					m_flNextLunge66d8 = g_10739d08.sub_101e8c10() + gpGlobals->curtime;
				}
			}
		}
	}
	m_bActive05ac = 1;
}
// END FUNCTION

// FUNCTION: 0x103dfa20 size=0xc5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VZombie.h"
#include "CNPCSlots614.h"
#include "CUnknown1028fb70.h"

// TARGET: CNPC_VZombie::vfunc431
void CNPC_VZombie::vfunc431()
{
	ScopeTrace trace("CNPC_VZombie::NPCThink", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!sub_1029f2e0()) {
		if (*(int *)((char *)this + 0x6678) == 1)
			sub_103e0a00();
		if (((CUnknown1028fb70 *)this)->m_flVisionDistance <= 1.0f)
			((CUnknown1028fb70 *)this)->sub_1028fb70();
		sub_10292de0();
		if ((int)*(float *)((char *)this + 0x17c) <= 0)
			((CNPCSlots614 *)this)->slot614();
	}
}
// END FUNCTION

// FUNCTION: 0x103dfb30 size=0x5
#include "CNPC_VZombie.h"
void __cdecl sub_10360180();
// TARGET: CNPC_VZombie::vfunc434
// the game's 0x103dfb30: a tail call (jmp) of sub_10360180
void CNPC_VZombie::vfunc434()
{
	sub_10360180();
}
// END FUNCTION

// FUNCTION: 0x103dfb50 size=0x5
#include "CNPC_VZombie.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VZombie::vfunc390
// the game's 0x103dfb50: a tail call (jmp) of CNPC_VAnimal::vfunc390
void CNPC_VZombie::vfunc390(CVAnimalArg *a0)
{
	((CNPC_VAnimal *)this)->CNPC_VAnimal::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x103dfb70 size=0x5
#include "CNPC_VZombie.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VZombie::vfunc366
// the game's 0x103dfb70: a tail call (jmp) of CNPC_VAnimal::vfunc366
bool CNPC_VZombie::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VAnimal *)this)->CNPC_VAnimal::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x103dfb90 size=0x5
#include "CNPC_VZombie.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VZombie::vfunc144
// the game's 0x103dfb90: a tail call (jmp) of CNPC_VAnimal::vfunc144
void CNPC_VZombie::vfunc144(int a0)
{
	((CNPC_VAnimal *)this)->CNPC_VAnimal::vfunc144(a0);
}
// END FUNCTION

// FUNCTION: 0x103dfd80 size=0x364
#include "CNPC_VZombie.h"
#include "CAI_Navigator.h"
#include "CAI_Motor.h"
#include "CUnknown10739d08.h"
#include "CUnknown102ee120.h"
#include "CEHandleGet.h"

extern CUnknown10739d08 g_10739d08;
extern int g_106c994c;
extern float g_104d1d00;
extern int g_10940390;
extern Vector g_10934060;

struct CEnemiesViewZ
{
	void sub_102dfed0(Vector *pOut, void *pEnemy);
};

#define V(n) virtual void a##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)

struct CZombieTaskSlots
{
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5)
	V(60) V(61) V(62) V(63) V(64) V(65) V(66)
	virtual void vfunc67();
	V(68) V(69)
	V10(7) V10(8) V10(9) V10(10) V10(11) V10(12) V10(13) V10(14) V10(15)
	V(160) V(161) V(162) V(163) V(164) V(165) V(166)
	virtual void *vfunc167();
	V(168) V(169)
	V10(17) V10(18) V10(19) V10(20) V10(21)
	virtual const Vector *vfunc220();
	V(221) V(222) V(223) V(224) V(225) V(226) V(227) V(228) V(229)
	V10(23) V10(24)
	V(250)
	virtual char vfunc251();
	V(252) V(253) V(254) V(255) V(256) V(257) V(258) V(259)
	V10(26) V10(27) V10(28) V10(29) V10(30)
	V10(31)
	V10(32) V10(33) V10(34) V10(35) V10(36) V10(37) V10(38) V10(39)
	V10(40) V10(41) V10(42) V10(43)
	V(440) V(441) V(442) V(443) V(444) V(445) V(446) V(447)
	virtual void vfunc448(int a);
	V(449)
	V10(45) V10(46) V10(47) V10(48) V10(49) V10(50) V10(51) V10(52) V10(53)
	V(540)
	virtual CEnemiesViewZ *vfunc541();
};

struct CZombieSlot425
{
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
	V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17) V10(18) V10(19)
	V10(20) V10(21) V10(22) V10(23) V10(24) V10(25) V10(26) V10(27) V10(28) V10(29)
	V10(30) V10(31) V10(32) V10(33) V10(34) V10(35) V10(36) V10(37) V10(38) V10(39)
	V10(40) V10(41) V(420) V(421) V(422) V(423) V(424)
	virtual void vfunc425(CNPC_VZombie *p);
};

struct CZombieGoal
{
	int m_type;
	Vector m_pos;
	int m_h[4];
	float m_f8;
	float m_i9;
	int m_i10;
	Vector m_v11;
	int m_i14;
	int m_i15;
	CZombieGoal(int type, const Vector &pos, int a, int b, int c, int d, float f, int i10)
	{
		m_type = type;
		m_pos = pos;
		m_h[0] = a;
		m_h[1] = b;
		m_h[2] = c;
		m_h[3] = d;
		m_f8 = f;
		m_i9 = 0.0f;
		m_i10 = i10;
		m_v11 = g_10934060;
		m_i14 = 0;
		m_i15 = 0;
	}
};

inline CAI_NavProvider *ZombieGetNode(CAI_NavProviderList *pList, int i)
{
	if (i >= 0 && i < pList->m_nCount)
		return pList->m_ppItems[i];
	g_106c994c++;
	return 0;
}

#define SLOTS ((CZombieTaskSlots *)this)

// TARGET: CNPC_VZombie::vfunc442
void CNPC_VZombie::vfunc442(int *pTask)
{
	Vector vecPos;
	Vector vecTmp;
	switch (*pTask) {
	case 0x36:
	{
		sub_10280a50();
		sub_102e0b40((float *)m_pMotor5d44);
		SLOTS->vfunc541()->sub_102dfed0(&vecPos, SLOTS->vfunc167());
		m_pMotor5d44->sub_102e20b0(&vecPos.x, -2.0f);
		sub_10289ee0(0x4b);
		if (SLOTS->vfunc251())
			sub_10273e80(0);
		break;
	}
	case 0x14c:
		if (m_b667c)
			m_b667c = 0;
		SLOTS->vfunc67();
		sub_10289ee0(0x1053);
		break;
	case 0x14e:
		sub_10272650(0x1081);
		break;
	case 0x14f:
		sub_10272650(0x4a);
		break;
	case 0x150:
	{
		CAI_Navigator *pNav = m_pNavigator5d34;
		pNav->m_i08 = *(int *)(pNav->m_pOuter + 0x156c);
		pNav->m_i0c = gpGlobals->framecount;
		CAI_NavProviderList *pProv = m_pNavigator5d34->m_pProviders;
		int node = pProv->sub_102f3c10((int)this, SLOTS->vfunc220());
		if (node != -1) {
			CZombieGoal goal(4, *ZombieGetNode(m_pNavigator5d34->m_pProviders, node)->sub_102fb0d0(&vecTmp, m_nHull1568), -1, -1, -1, -1, g_104d1d00, g_10940390);
			m_pNavigator5d34->sub_102ecd20(&goal, 4);
		} else {
			SLOTS->vfunc448(0x18);
		}
		break;
	}
	case 0x151:
		m_b1a40 = 1;
		((CUnknown102ee120 *)m_pNavigator5d34)->sub_102ee250(0x1014);
		m_flNextTime5db4 = enginerandom->vfunc1(g_10739d08.sub_101e8a90(), g_10739d08.sub_101e8ab0()) + gpGlobals->curtime;
		break;
	case 0x152:
	{
		CGlobalEntityList_Ent *pEnt = EHandle_Get(m_hEnemy628c);
		if (pEnt) {
			CZombieSlot425 *pObj = *(CZombieSlot425 **)((char *)pEnt + 0xa8);
			if (pObj)
				pObj->vfunc425(this);
		}
		sub_10273e80(0);
		break;
	}
	case 0x153:
	{
		int act = m_nState0fec;
		switch (m_nVariant66e4) {
		case 1: act = 0x1098; break;
		case 2: act = 0x109b; break;
		case 3: act = 0x109e; break;
		}
		sub_10289ee0(act);
		if (m_nIdealActivity0ff0 != act)
			SLOTS->vfunc448(0x15);
		break;
	}
	default:
		sub_10009b06(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103e01d0 size=0x17c
#include "CBaseCombatCharacter.h"
#include "CNPC_VZombie.h"
#include "CNPC_VAnimal.h"
#include "CAI_Motor.h"
#include "CUnknown102ee270.h"

struct S_Comb { void sub_10293a60(void *a, void *b); };
struct S_Nav : CUnknown102ee270 { int sub_102ee620(); };
struct S_Mot : CAI_Motor { void sub_102e2020(void *p); };

void CNPC_VZombie::vfunc444(int *pTask)
{
    switch (*pTask) {
    case 0x14e:
        if (vfunc251()) {
            sub_10273e80(0);
            ((CBaseCombatCharacter *)this)->sub_1033c6b0(0x80000);
            ((S_Comb *)this)->sub_10293a60(m_a6680, m_a668c);
        }
        break;
    case 0x14f:
        if (vfunc251())
            sub_10273e80(0);
        break;
    case 0x150:
        if (vfunc251())
            sub_10273e80(0);
        break;
    case 0x151:
        if (gpGlobals->curtime > m_flNextTime5db4 || ((S_Nav *)m_pNavigator5d34)->sub_102ee620() == 0) {
            m_b1a40 = 0;
            sub_10273e80(0);
            ((S_Nav *)m_pNavigator5d34)->sub_102ee270();
        }
        break;
    case 0x14c:
        if (vfunc251())
            sub_10273e80(0);
        break;
    case 0x153:
        if (vfunc251()) {
            sub_10273e80(0);
            break;
        }
        if (m_nMode6678 == 7) {
            CBaseEntity *e = ((EHANDLE *)&m_hEnemy628c)->Get();
            if (e) {
                CAI_Motor *m = m_pMotor5d44;
                ((S_Mot *)m)->sub_102e2020((void *)((CNPC_VZombie *)e)->vfunc217(0));
                m_pMotor5d44->sub_102e1e20(-1);
            }
        }
        break;
    default:
        ((CNPC_VAnimal *)this)->sub_1035f940(pTask);
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x103e03b0 size=0x5
#include "CNPC_VZombie.h"
bool CNPC_VZombie::vfunc566(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e03d0 size=0x5
#include "CNPC_VZombie.h"
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VZombie::vfunc375
// the game's 0x103e03d0: a tail call (jmp) of CNPC_VAnimal::vfunc375
int CNPC_VZombie::vfunc375(int a0)
{
	return ((CNPC_VAnimal *)this)->CNPC_VAnimal::vfunc375(a0);
}
// END FUNCTION

// FUNCTION: 0x103e03f0 size=0x5
#include "CNPC_VZombie.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VZombie::vfunc433
// the game's 0x103e03f0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc433
void CNPC_VZombie::vfunc433()
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc433();
}
// END FUNCTION

// FUNCTION: 0x103e0410 size=0x5
#include "CNPC_VZombie.h"
// TARGET: CNPC_VZombie::vfunc301
// the game's 0x103e0410: a tail call (jmp) of CNPC_VZombie::sub_103dfbb0
void CNPC_VZombie::vfunc301(int *a0, int *a1)
{
	((CNPC_VZombie *)this)->CNPC_VZombie::sub_103dfbb0(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x103e0430 size=0xc3
#include "CNPC_VZombie.h"
#include "CUnknown101c2a50.h"
#include "CEntityVSlots.h"
#include "ConVar.h"

extern ConVar *g_10940404;
extern ConVar *g_1094044c;

void CNPC_VZombie::vfunc141(CUnknown101c2a50 *pInfo, int b, char *pTrace)
{
	float body, head;
	*((char *)this + 0x66e1) = 0;
	head = g_10940404->vfunc1() ? 0.0f : g_10940404->m_fValue;
	body = g_1094044c->vfunc1() ? 0.0f : g_1094044c->m_fValue;
	switch (*(int *)(pTrace + 0x44)) {
	case 1:
		*((char *)this + 0x66e1) = 1;
		pInfo->sub_101c2a50(*(int *)&body);
		break;
	default:
		*((char *)this + 0x66e1) = 0;
		char *pAttacker = *(char **)((char *)pInfo + 0x28);
		if (pAttacker) {
			CEntityVSlots *pWeapon = *(CEntityVSlots **)(pAttacker + 0xa0);
			if (pWeapon && (pWeapon->slot360() & 0x18000))
				pInfo->sub_101c2a50(*(int *)&head);
		}
		break;
	}
	sub_10015b13(pInfo, b, pTrace);
}
// END FUNCTION

// FUNCTION: 0x103e0540 size=0x77
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "ScopeTrace.h"
#include "CNPC_VZombie.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
extern CUnknown1073dc28 g_1073dc28;

inline const char *STRINGR_103e0540(const string_t &s)
{
	return s.pszValue ? s.pszValue : g_106b8540;
}

struct CNPC_VZombieUnit : CNPC_VZombie {
	void sub_10298ce0(const char *pszModel);
};

void CNPC_VZombie::vfunc105(const char *pszModel)
{
	((CNPC_VZombieUnit *)this)->sub_10298ce0(pszModel);
	if (((CBaseCombatCharacter *)this)->sub_10336920()) {
		m_iszVSoundGroup = string_t("Zombie_Male"[0] ? "Zombie_Male" : 0);
		m_nVSoundTableIdx = 2;
		m_nVSoundGroup = g_1073dc28.sub_101f55a0(this, STRINGR_103e0540(m_iszVSoundGroup), 0);
	} else {
		m_iszVSoundGroup = string_t("Zombie_Female"[0] ? "Zombie_Female" : 0);
		m_nVSoundTableIdx = 2;
		m_nVSoundGroup = g_1073dc28.sub_101f55a0(this, STRINGR_103e0540(m_iszVSoundGroup), 0);
	}
}
// END FUNCTION

// FUNCTION: 0x103e0940 size=0x5
#include "CNPC_VZombie.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VZombie::vfunc460
// the game's 0x103e0940: a tail call (jmp) of CAI_BaseNPCTroika::vfunc460
int CNPC_VZombie::vfunc460()
{
	return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc460();
}
// END FUNCTION

// FUNCTION: 0x103e0bc0 size=0xca
#include "CNPC_VZombie.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
struct CZombieEnemy167 { char pad[0x9c]; CBaseCombatCharacter *m_pChar9c; };

bool CNPC_VZombie::vfunc201(CBaseCombatCharacter *pEnt, int b, int c, int d)
{
	ScopeTrace trace("CNPC_VZombie::FVisible", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CZombieEnemy167 *pEnemy = vfunc167();
	CBaseCombatCharacter *pChar;
	if (!(pEnemy)) pChar = (CBaseCombatCharacter *)pEnemy; else pChar = pEnemy->m_pChar9c;
	if (pChar == pEnt) {
		if (pChar->sub_10146a80())
			return false;
		return true;
	}
	return sub_1000dbcf(pEnt, b, c, 0);
}
// END FUNCTION

// FUNCTION: 0x103e0e80 size=0xe0
#include "CBaseEntity.h"
#include "CNPC_VZombie.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CConditionTable
{
	int sub_102ea280(int id);	// stub 0x100102b2
};

// The condition name object behind slot 580: its sub-object at +0x30 maps a condition id to a name index.
struct CConditionNames
{
	char pad[0x30];
	CConditionTable m_table;
};

// The NPC's virtual table up to slot 580.
struct CNPC_VZombieSlots
{
	SV100(a) SV100(b) SV100(c) SV100(d) SV10(e0) SV10(e1) SV10(e2) SV10(e3) SV10(e4)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();
	virtual const char *vfunc458(int index);
	SV100(g) SV10(h0) SV10(h1) virtual void i0();
	virtual CConditionNames *vfunc580();
};

__declspec(dllimport) int Q_snprintf(char *buf, int n, const char *fmt, ...);
void sub_101434b0(int index, int line, const char *text, int a, int r, int g, int b, int al);

// TARGET: CNPC_VZombie::vfunc124
int CNPC_VZombie::vfunc124()
{
    char buf[512];
    int line = sub_1029d4e0();
    if (*(unsigned int *)((char *)this + 0x224) & 0x40000) {
        for (int i = 0; i < 192; i++) {
            if (*(int *)((char *)this + 0x5c5c + (i >> 5) * 4) & (1 << (i & 0x1f))) {
                int id = (i != -1) ? i + 1000000000 : -1;
                CConditionNames *names = ((CNPC_VZombieSlots *)this)->vfunc580();
                int nameIndex = names->m_table.sub_102ea280(id);
                const char *name = ((CNPC_VZombieSlots *)this)->vfunc458(nameIndex);
                Q_snprintf(buf, 512, "Cond: %s\n", name);
                int ed = m_pEdict2e0;
                sub_101434b0(engine->vfunc35(ed), line, buf, 0, 255, 255, 255, 255);
                line++;
            }
        }
    }
    return line;
}
// END FUNCTION

// FUNCTION: 0x103e0fa0 size=0xa6
#include "CNPC_VZombie.h"
#include "CEHandleGet.h"

struct IEngine1070b244 { virtual void v0(); virtual void v1(); virtual int v2(int a, int b); };
extern IEngine1070b244 *g_1070b244;

struct CNpcScheduleV { char m_pad[0x1c]; int m_iScheduleId; int GetId() const { return m_iScheduleId; } };
inline bool IsCurSchedule(CNPC_VZombie *p, int schedId, bool fTranslate = true)
{
	CNpcScheduleV *pSchedule = *(CNpcScheduleV **)((char *)p + 0x5c38);
	return (pSchedule &&
	        ((fTranslate && (void *)pSchedule == (void *)p->vfunc447(schedId)) ||
	         (!fTranslate && p->vfunc447(pSchedule->GetId()) == schedId)));
}

// TARGET: CNPC_VZombie::vfunc509
bool CNPC_VZombie::vfunc509()
{
	if (m_b1480 && !EHandle_Get(m_hFe8) && !sub_1000caae())
	{
		int v = 999;
		if (IsCurSchedule(this, 0x12f, false))
			v = 20;
		else if (vfunc510_slot())
		{
			vfunc507();
			return false;
		}
		if (g_1070b244->v2(0, v) == 0)
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103e1080 size=0x183
#include "CNPC_VZombie.h"
#include "CGlobalEntityList.h"
#include "StatDefault.h"

extern CGlobalEntityList *g_10566458;
extern const char g_105d8c4c[];

struct SZombieStat
{
	float sub_1000c874(int index);
};

struct StatOwner
{
	StatDefault *sub_1006cff0(int index);
	int sub_1000fb46(const char *pszName);
};
extern StatOwner g_106c7c34;

struct SZHandle
{
	unsigned int m_Index;
	CBaseEntity *Get() const
	{
		if (m_Index != 0xffffffff) {
			CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (s->m_Serial == (int)(m_Index >> 13))
				return (CBaseEntity *)s->m_pEntity;
		}
		return 0;
	}
};

bool CNPC_VZombie::vfunc510()
{
	*(int *)((char *)this + 0x10e8) = 9;
	if (sub_1000b005())
		return false;
	if (((SZHandle *)((char *)this + 0x1538))->Get() && *(int *)((char *)this + 0x153c) != -1)
		return false;
	if (sub_1000b212())
		return false;
	if (*(unsigned int *)((char *)this + 0x14b8) & 0x20000)
		return false;
	if (!((SZHandle *)((char *)this + 0x628c))->Get())
		return false;
	CBaseEntity *pEnemy = ((SZHandle *)((char *)this + 0x628c))->Get();
	if (((SZHandle *)((char *)pEnemy + 0xfe8))->Get())
		return false;
	static int s_hInfo = g_106c7c34.sub_1000fb46(g_105d8c4c);
	static float s_flValue = ((SZombieStat *)g_106c7c34.sub_1006cff0(s_hInfo))->sub_1000c874(3);
	if (!(*(float *)((char *)this + 0x6264) > s_flValue))
		return sub_10005f97();
	return false;
}
// END FUNCTION

// FUNCTION: 0x103e1280 size=0x22
struct CNPC_VZombieX;

struct CUnkZombie66e8
{
    void sub_10010794(int a, CNPC_VZombieX *pOwner, int b);
};

struct CNPC_VZombieX
{
    void sub_10006136(int a);
    void sub_103e1280(int a);
};

// TARGET: sub_103e1280
void CNPC_VZombieX::sub_103e1280(int a)
{
    sub_10006136(a);
    ((CUnkZombie66e8 *)((char *)this + 0x66e8))->sub_10010794(a, this, 0);
}
// END FUNCTION

// FUNCTION: 0x103e12c0 size=0x16
#include "CNPC_VZombie.h"
#include "CPhysBox.h"

// TARGET: CNPC_VZombie::vfunc25
void CNPC_VZombie::vfunc25(int a)
{
	((CPhysBoxHelper498 *)((char *)this + 0x66e8))->sub_10010794(a, this, 0);
}
// END FUNCTION

// FUNCTION: 0x103e12f0 size=0x16
#include "CNPC_VZombie.h"
#include "CPhysBox.h"

// TARGET: CNPC_VZombie::vfunc26
void CNPC_VZombie::vfunc26(int a)
{
	((CPhysBoxHelper498 *)((char *)this + 0x66e8))->sub_10010794(a, this, 0);
}
// END FUNCTION
