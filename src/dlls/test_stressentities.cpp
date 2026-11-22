// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 3 blocks
#include "vampire.h"

// FUNCTION: 0x101c3c90 size=0x1c4
#include "UtlVec8.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "ehandle.h"
#include "engineserver.h"
#include <stdlib.h>

extern "C" __declspec(dllimport) void __cdecl Msg(const char *fmt, ...);

struct CRandomSpawnFactory
{
	CRandomSpawnFactory *m_pNext;
};
extern CRandomSpawnFactory *g_1072cdb0;

extern CUtlVector<CRandomSpawnFactory *> g_1072cd10;
extern CUtlVector<EHANDLE> g_1072cd9c;


template <> inline void CUtlVector<EHANDLE>::ShiftElementsRight(int elem, int num)
{
	((UtlVec8 *)this)->sub_10055000(elem, num);
}
inline void StressSetSlots(int nSlots)
{
	g_1072cd9c.SetSize(nSlots);
}

void sub_101c3c90()
{
	g_1072cd10.Purge();
	for (CRandomSpawnFactory *pCur = g_1072cdb0; pCur; pCur = pCur->m_pNext)
		g_1072cd10.AddToTail(pCur);

	int nSlots = 100;
	if (engine->vfunc85() >= 2)
		nSlots = atoi(engine->vfunc84(1));

	g_1072cd9c.Purge();
	g_1072cd9c.SetSize(nSlots);
	Msg("Test_InitRandomEntitySpawner: created %d slots.\n", nSlots);
}
// END FUNCTION

// FUNCTION: 0x101c3ee0 size=0x13c
#include "CBaseEntity.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
extern "C" __declspec(dllimport) void __cdecl Error(const char *fmt, ...);
extern "C" __declspec(dllimport) int __cdecl RandomInt(int nMin, int nMax);
extern "C" int __cdecl atoi(const char *);

struct CStressRegBase
{
	int m_pad0;
	CBaseEntity *(*m_pfn)();
	CBaseEntity *(*GetFn())() { return m_pfn; }
};
extern CUtlVector<EHANDLE> g_1072cd9c;
extern CUtlVector<CStressRegBase *> g_1072cd10;
void sub_101cd970(CBaseEntity *pEntity);

// TARGET: sub_101c3ee0
void sub_101c3ee0()
{
	if (engine->vfunc85() < 3)
		Error("Test_SpawnRandomEntities <min # entities> <max # entities> missing arguments.");
	if (g_1072cd9c.Count() == 0)
		Error("Test_SpawnRandomEntities: not initialized (call Test_InitRandomEntitySpawner frst).");
	int nMin = atoi(engine->vfunc84(1));
	int nMax = atoi(engine->vfunc84(2));
	int count = RandomInt(nMin, nMax);
	for (int i = 0; i < count; i++)
	{
		int iSlot = RandomInt(0, g_1072cd9c.Count() - 1);
		if (g_1072cd9c[iSlot].Get())
			sub_101cd970(g_1072cd9c[iSlot].Get());
		int iType = RandomInt(0, g_1072cd10.Count() - 1);
		g_1072cd9c[iSlot] = g_1072cd10[iType]->GetFn()();
	}
}
// END FUNCTION

// FUNCTION: 0x101c4070 size=0xb3
#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct EngineSlots {
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
	virtual const char *Argv(int i);
	virtual int Argc();
};
struct EntEntry { void *pEnt; int serial; int pad; };
struct EntTable { int hdr; EntEntry entries[1]; };

extern EngineSlots *g_1070b22c;
extern void (*g_109f366c)(const char *fmt, ...);
extern "C" __declspec(dllimport) int RandomInt(int lo, int hi);
extern EntTable *g_10566458;
extern int g_1072cda8;
extern unsigned int *g_1072cd9c;
extern "C" int atoi(const char *);

void sub_101c4070()
{
    if (g_1070b22c->Argc() < 2)
        g_109f366c("Test_RandomizeInPVS <percentage chance to change>");
    int percentage = atoi(g_1070b22c->Argv(1));
    for (int i = 0; i < g_1072cda8; i++) {
        unsigned int h = g_1072cd9c[i];
        if (h != 0xffffffff) {
            EntEntry *e = &g_10566458->entries[h & 0x1fff];
            if ((unsigned int)e->serial == (h >> 13)) {
                char *pEnt = (char *)e->pEnt;
                if (pEnt) {
                    if (RandomInt(0, 100) < percentage) {
                        unsigned int f = *(unsigned int *)(pEnt + 0x19c);
                        if (f & 0x40)
                            f &= ~0x40;
                        else
                            f |= 0x40;
                        *(unsigned int *)(pEnt + 0x19c) = f;
                    }
                }
            }
        }
    }
}
// END FUNCTION
