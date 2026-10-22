// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011a330 size=0x8e
#include "CServerGameDLL.h"

struct IFile101c4580;
bool __fastcall sub_101c4580(void *p, int a, IFile101c4580 *pFile, const char *pszName);

#define SRV(n) virtual void s##n();
struct ISaveRestoreBlockSetX
{
	SRV(0) SRV(1) SRV(2) SRV(3) SRV(4) SRV(5) SRV(6) SRV(7) SRV(8) SRV(9)
	virtual void vfunc10(void *pHandler);	// AddBlockHandler
};
extern ISaveRestoreBlockSetX *g_10592db0;
extern IFile101c4580 *g_1070b238;
extern char g_1072cdf8[];

void *sub_1019b360();
void *sub_1030c390();
void *sub_10045700();
void *sub_100cffa0();
void *sub_101a3b00();
void sub_1042c5b0();

// TARGET: CServerGameDLL::vfunc8
void CServerGameDLL::vfunc8()
{
	g_10592db0->vfunc10(sub_1019b360());
	g_10592db0->vfunc10(sub_1030c390());
	g_10592db0->vfunc10(sub_10045700());
	g_10592db0->vfunc10(sub_100cffa0());
	g_10592db0->vfunc10(sub_101a3b00());
	sub_101c4580(g_1072cdf8, (int)g_1070b238, g_1070b238, "stats.txt");
	sub_1042c5b0();
}
// END FUNCTION

// FUNCTION: 0x1011aaf0 size=0x91
#include "CServerGameDLL.h"
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
#include "CUnknown100a8220.h"
#include "ConVar.h"

extern CGlobalEntityList g_106eb5d8;
extern ConVar g_106bd868;
extern ConVar *g_1070af4c;
extern "C" __declspec(dllimport) void __cdecl Msg(const char *fmt, ...);
void sub_1042c640();

struct CGameFrameHooks
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12();	// slot 12 (offset 0x30)
};
extern CGameFrameHooks *g_1070ba0c;

// TARGET: CServerGameDLL::vfunc4
void CServerGameDLL::vfunc4(int a, int b, int c)
{
	if (g_106eb5d8.sub_100f6d60())
		Msg("ERROR: Entity delete queue not emtpy on level start!\n");
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0); pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt)) {
		if (!((CUnknown100a8220 *)pEnt)->sub_100a8220())
			pEnt->vfunc113();
	}
	sub_1042c640();
	g_1070ba0c->v12();
	ConVar *pVar = g_1070af4c;
	if (!pVar->GetInt())
		g_106bd868.sub_10246160(0);
}
// END FUNCTION

// FUNCTION: 0x1011aec0 size=0x85
#include "CServerGameDLL.h"
#include "CSave.h"
#include "CRestore.h"

struct CSaveLocal
{
	CSave save;
	CSaveLocal(void *pData) : save(pData) {}
	~CSaveLocal() { ((CRestoreVec *)&save.m_pSections)->~CRestoreVec(); }
};

// TARGET: CServerGameDLL::vfunc13
void CServerGameDLL::vfunc13(void *pData, int a, int b, int c, int d, int e)
{
	CSaveLocal local(pData);
	local.save.CSave::vfunc3(a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x1011af80 size=0x85
#include "CServerGameDLL.h"
#include "CRestore.h"

// TARGET: CServerGameDLL::vfunc14
void CServerGameDLL::vfunc14(void *pData, int a, int b, int c, int d, int e)
{
	CRestore restore(pData);
	restore.CRestore::vfunc3(a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x1011b890 size=0xb
struct IUnk10592db0 {
	virtual void v0();
	virtual void v1();
};
extern IUnk10592db0 *g_10592db0;

void CServerGameDLL::vfunc17()
{
	g_10592db0->v1();
}
// END FUNCTION

// FUNCTION: 0x1011b8b0 size=0x7e
#include "CServerGameDLL.h"

extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *pMemory);

struct CUnk1011b8b0List {
    int m_dword0;
    char *m_pMemory;	// 0x04
    int m_allocationCount;	// 0x08
    int m_growSize;	// 0x0c
    int m_size;	// 0x10
    char *m_pElements;	// 0x14
    int m_pad18[2];
    void sub_1019f870(void *pArg);
};
struct IUnk10592db0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void vfunc3(CUnk1011b8b0List *pList);
    virtual void vfunc4();
};
extern IUnk10592db0 *g_10592db0;

void CServerGameDLL::vfunc19(void *pArg)
{
    CUnk1011b8b0List list;
    list.sub_1019f870(pArg);
    g_10592db0->vfunc3(&list);
    g_10592db0->vfunc4();
    // inlined destructor of the list
    list.m_size = 0;
    if (list.m_growSize != -1) {
        if (list.m_pMemory) {
            Plat_Free(list.m_pMemory);
            list.m_pMemory = 0;
        }
        list.m_allocationCount = 0;
    }
    list.m_pElements = list.m_pMemory;
    if (list.m_growSize != -1 && list.m_pMemory)
        Plat_Free(list.m_pMemory);
}
// END FUNCTION

// FUNCTION: 0x1011b950 size=0x7e
#include "CRestore.h"

struct CSaveRestoreMgr
{
	virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3(); virtual void vf4();
	virtual void vf5();
	virtual void vf6(CRestore *pRestore);
};
extern CSaveRestoreMgr *g_10592db0;

void CServerGameDLL::vfunc20(void *pData)
{
	CRestore restore(pData);
	g_10592db0->vf5();
	g_10592db0->vf6(&restore);
}
// END FUNCTION
