// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011c020 size=0xb
#include "CServerGameClients.h"
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlots
{
	T(a0) T(a1)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
	virtual void target();
};
extern CSlots *g_1070ba0c;

// TARGET: CServerGameClients::vfunc1
void CServerGameClients::vfunc1()
{
	g_1070ba0c->target();
}
// END FUNCTION

// FUNCTION: 0x1011d490 size=0xc
extern int g_1070b25c;
void __fastcall sub_1011d490(void *, int, int value)
{
	g_1070b25c = value;
}
// END FUNCTION

// FUNCTION: 0x1011d5d0 size=0x96
#include "CServerGameClients.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct IUnk { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual char *v4(); };
struct Edict { char pad[0x40]; IUnk *m_pUnk; char m_flag; };

void *CServerGameClients::vfunc12(void *pEdict)
{
	Edict *e = (Edict *)pEdict;
	if (e && e->m_flag && e->m_pUnk) {
		g_109f3620[*g_109f3680].a = "CBaseEntity::Instance";
		g_109f3620[*g_109f3680].b = g_106b8540;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
		char *ent = e->m_pUnk ? e->m_pUnk->v4() : 0;
		(*g_109f3680)--;
		if (ent)
			return ent + 0x2068;
	}
	return 0;
}
// END FUNCTION
