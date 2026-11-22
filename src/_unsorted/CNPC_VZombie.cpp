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

bool CNPC_VZombie::vfunc201(CBaseEntity *pEnt, int b, CBaseEntity **c, int d)
{
#define pEnt ((CBaseCombatCharacter *)pEnt)
#define c ((int)c)
	ScopeTrace trace("CNPC_VZombie::FVisible", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CZombieEnemy167 *pEnemy = (CZombieEnemy167 *)vfunc167();
	CBaseCombatCharacter *pChar;
	if (!(pEnemy)) pChar = (CBaseCombatCharacter *)pEnemy; else pChar = pEnemy->m_pChar9c;
	if (pChar == pEnt) {
		if (pChar->sub_10146a80())
			return false;
		return true;
	}
	return sub_1000dbcf(pEnt, b, c, 0);
#undef c
#undef pEnt
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
