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
CNPC_VZombie *CNPC_VZombie::vfunc5(unsigned int flags)
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

// FUNCTION: 0x103e03b0 size=0x5
#include "CNPC_VZombie.h"
bool CNPC_VZombie::vfunc566(int a0)
{
    return 0;
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
