// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
#include "CUnknown1070b22c.h"

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

extern CUnknown1070b22c *g_1070b22c;
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
                sub_101434b0(g_1070b22c->vfunc35(ed), line, buf, 0, 255, 255, 255, 255);
                line++;
            }
        }
    }
    return line;
}
// END FUNCTION
