// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10178e10 size=0xd4
#include "CStripWeapons.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct RulesSlots
{
	SL10(a0) SL10(a1)
	virtual void b0(); virtual void b1();
	virtual bool IsDeathmatch();	// slot 22
};

struct EngineSlots
{
	SL10(a0) SL10(a1) SL10(a2)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void b5(); virtual void b6(); virtual void b7();
	virtual void *PEntityOfEntIndex(int index);	// slot 38
};

struct UnkSlots
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual void *GetBaseEntity();	// slot 4
};

struct EdictT
{
	char m_pad0000[0x40];
	UnkSlots *m_pUnk;	// 0x40
};

struct PlayerSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8) SL10(b9)
	SL10(c0) SL10(c1) SL10(c2) SL10(c3) SL10(c4) SL10(c5) SL10(c6) SL10(c7) SL10(c8) SL10(c9)
	SL10(d0) SL10(d1) SL10(d2) SL10(d3) SL10(d4) SL10(d5) SL10(d6) SL10(d7) SL10(d8) SL10(d9)
	SL10(e0) SL10(e1) SL10(e2) SL10(e3)
	virtual void f0(); virtual void f1();
	virtual void RemoveAllItems(int bRemoveSuit);	// slot 442
};

struct ActivatorT
{
	char m_pad0000[0xa8];
	void *m_pPlayer;	// 0xa8
};

extern RulesSlots *g_1070ba0c;
extern EngineSlots *g_1070b22c;

static __forceinline PlayerSlots *Instance(EdictT *pEdict)
{
	g_109f3620[*g_109f3680].a = "CBaseEntity::Instance";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	PlayerSlots *pRet;
	if ((pEdict || (pEdict = (EdictT *)g_1070b22c->PEntityOfEntIndex(0)) != 0) && pEdict->m_pUnk)
		pRet = (PlayerSlots *)pEdict->m_pUnk->GetBaseEntity();
	else
		pRet = 0;
	--*g_109f3680;
	return pRet;
}

void CStripWeapons::vfunc173(void *pActivator, void *pCaller, int useType, float value)
{
	PlayerSlots *pPlayer = 0;
	if (pActivator && ((ActivatorT *)pActivator)->m_pPlayer) {
		pPlayer = (PlayerSlots *)pActivator;
	} else if (!g_1070ba0c->IsDeathmatch()) {
		pPlayer = Instance((EdictT *)g_1070b22c->PEntityOfEntIndex(1));
	}
	if (pPlayer)
		pPlayer->RemoveAllItems(0);
}
// END FUNCTION

// FUNCTION: 0x10184480 size=0x1e
#include "CStripWeapons.h"

void sub_100aa7b0(void *p);

// TARGET: CStripWeapons::vfunc5
CStripWeapons *CStripWeapons::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
