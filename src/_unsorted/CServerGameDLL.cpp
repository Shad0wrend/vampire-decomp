// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011a020 size=0x20
#include "vampire.h"
extern char g_1046257c;
void sub_10430964(void *p);
struct CUnk1011a020
{
    void *sub_1011a020(unsigned char bFree);
};
// TARGET: CUnk1011a020::sub_1011a020
void *CUnk1011a020::sub_1011a020(unsigned char bFree)
{
    *(void **)this = &g_1046257c;
    if (bFree & 1) {
        sub_10430964(this);
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x1011a0c0 size=0x1e6
#include "IVEngineServer.h"
#include "CServerGameDLL.h"
#include "globalvars.h"
struct CFactoryTable { CreateInterfaceFn engineFn; CreateInterfaceFn physicsFn; CreateInterfaceFn fileSystemFn; };
struct CSaveRestoreBlockSetView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual void vfunc9(void *pHandler);
};
extern CSaveRestoreBlockSetView *g_10592db0;
extern void *g_1070b230;
extern void *g_1070b234;
extern void *g_1070b238;
extern void *g_1070b23c;
extern void *g_1070b240;
extern void *g_1070b244;
extern void *g_1070b248;
extern void *g_1070b24c;
extern void *g_1070b250;
extern void *g_1070b254;
void sub_1012ee10(CFactoryTable *p);
void sub_10118350();
void *sub_101a3b00();
void *sub_100cffa0();
void *sub_10045700();
void *sub_1030c390();
void *sub_1019b360();
int sub_1002d750();
void sub_1042c310(int a);
char sub_1042c4e0();
bool CServerGameDLL::vfunc1(CreateInterfaceFn engineFactory, CreateInterfaceFn physicsFactory, CreateInterfaceFn fileSystemFactory, void *pGlobals)
{
	engine = (EngineGlobals::IVEngineServer *)engineFactory("VEngineServer014", 0);
	if (engine) {
	g_1070b230 = engineFactory("VoiceServer001", 0);
	if (g_1070b230) {
	g_1070b234 = engineFactory("VEngineCvar001", 0);
	if (g_1070b234) {
	g_1070b23c = engineFactory("VEngineServerStringTable001", 0);
	if (g_1070b23c) {
	g_1070b240 = engineFactory("StaticPropMgrServer001", 0);
	if (g_1070b240) {
	g_1070b244 = engineFactory("VEngineRandom001", 0);
	if (g_1070b244) {
	g_1070b248 = engineFactory("IEngineSoundServer003", 0);
	if (g_1070b248) {
	g_1070b24c = engineFactory("SpatialPartition001", 0);
	if (g_1070b24c) {
	g_1070b250 = engineFactory("VModelInfoServer001", 0);
	if (g_1070b250) {
	g_1070b254 = engineFactory("EngineTraceServer003", 0);
	if (g_1070b254) {
	g_1070b238 = fileSystemFactory("VFileSystem005", 0);
	if (g_1070b238) {
	gpGlobals = (EngineGlobals::CGlobalVars *)pGlobals;
	CFactoryTable factories;
	factories.engineFn = engineFactory;
	factories.fileSystemFn = fileSystemFactory;
	factories.physicsFn = physicsFactory;
	sub_1012ee10(&factories);
	sub_10118350();
	g_10592db0->vfunc9(sub_101a3b00());
	g_10592db0->vfunc9(sub_100cffa0());
	g_10592db0->vfunc9(sub_10045700());
	g_10592db0->vfunc9(sub_1030c390());
	g_10592db0->vfunc9(sub_1019b360());
	sub_1042c310(sub_1002d750());
	return sub_1042c4e0();
	}}}}}}}}}}}
	return false;
}
// END FUNCTION

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

// FUNCTION: 0x1011a3f0 size=0x8
#include "CServerGameDLL.h"
namespace lifted {
int sub_1000da08();
}
bool CServerGameDLL::vfunc2()
{
    lifted::sub_1000da08();
    return 1;
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

// FUNCTION: 0x1011adc0 size=0x32
// TARGET: sub_1011adc0
#include "CGlobalEntityList.h"

void sub_1000e304();
void sub_100084a9();
void sub_1001587a();
extern unsigned char g_1070b267;
extern int g_1072c464;
extern int g_106eb5d8;

void sub_1011adc0()
{
    g_1070b267 = 1;
    sub_1000e304();
    sub_100084a9();
    g_1072c464 = 0;
    ((CGlobalEntityList *)&g_106eb5d8)->sub_100f6ec0();
    sub_1001587a();
    g_1070b267 = 0;
}
// END FUNCTION

// FUNCTION: 0x1011ae10 size=0x6
#include "CServerGameDLL.h"
namespace lifted {
extern int g_1072bbd8;
}
int CServerGameDLL::vfunc9()
{
    return lifted::g_1072bbd8;
}
// END FUNCTION

// FUNCTION: 0x1011ae50 size=0x3e
#include "CServerGameDLL.h"

struct CAllocatorLike
{
	virtual void *slot0(const char *pszName, int nSize);
};

extern CAllocatorLike *g_1070b23c;
extern void *g_10571c20;
extern void *g_10571c24;
extern char g_10572000[];
extern char g_10571ff4[];
extern char g_10571fe0[];
void sub_10004ef8(const char *pszName);

// TARGET: CServerGameDLL::vfunc11
void CServerGameDLL::vfunc11()
{
	g_10571c20 = g_1070b23c->slot0(g_10572000, 0x100);
	g_10571c24 = g_1070b23c->slot0(g_10571ff4, 0x400);
	sub_10004ef8(g_10571fe0);
}
// END FUNCTION

// FUNCTION: 0x1011aea0 size=0x10
#include "CServerGameDLL.h"
namespace lifted {
int sub_10004afc(int);
}
int CServerGameDLL::vfunc12(int a0)
{
    return lifted::sub_10004afc(a0);
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

// FUNCTION: 0x1011b040 size=0xe
// TARGET: sub_1011b040
void sub_10057a30(int x);

void __stdcall sub_1011b040(int x)
{
    sub_10057a30(x);
}
// END FUNCTION

// FUNCTION: 0x1011b060 size=0xe
// TARGET: sub_1011b060
void sub_10057ac0(int x);

void __stdcall sub_1011b060(int x)
{
    sub_10057ac0(x);
}
// END FUNCTION

// FUNCTION: 0x1011b300 size=0x1db
#include "CServerGameDLL.h"
#include "CSaveRestoreBlockSet.h"
#include "CRestore.h"
#include "CVProfile.h"
#include "utlvector.h"

struct IBlockSetX
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void Restore(CRestore *pRestore, int a, int b);
	virtual void PostRestore();
};

extern IBlockSetX *g_10592db0;
extern void *g_104626bc;

struct CycleCountX
{
	unsigned __int64 m_Int64;
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		CycleCountX t;
		t.m_Int64 = 0;
		t.Sample();
		m_Int64 = t.m_Int64 - m_Int64;
	}
	void Add(const CycleCountX &r) { m_Int64 += r.m_Int64; }
};

struct CProfScope
{
	CProfScope()
	{
		CVProfile *prof = g_109f3648;
		if (prof->m_enabled || !prof->m_bAtRoot) {
			if (prof->m_pCurNode->m_pszName != "CServerGameDLL::Restore")
				prof->m_pCurNode = prof->m_pCurNode->GetSubNode("CServerGameDLL::Restore", 0, "Unaccounted");
			CVProfNode *node = prof->m_pCurNode;
			node->m_nCurFrameCalls++;
			if (node->m_nRecursions++ == 0) {
				((CycleCountX *)&node->m_CurFrameTime)->Sample();
				g_109f3648->PushGroupInlined(node->m_nBudgetGroupID);
			}
			prof->m_bAtRoot = false;
		}
	}
	~CProfScope()
	{
		CVProfile *prof = g_109f3648;
		if (!prof->m_bAtRoot || prof->m_enabled) {
			CVProfNode *node = prof->m_pCurNode;
			if (--node->m_nRecursions == 0 && node->m_nCurFrameCalls != 0) {
				((CycleCountX *)&node->m_CurFrameTime)->End();
				((CycleCountX *)&node->m_TotalTime)->Add(*(CycleCountX *)&node->m_CurFrameTime);
				g_109f3648->PopGroup();
			}
			if (node->m_nRecursions == 0)
				prof->m_pCurNode = prof->m_pCurNode->m_pParent;
			prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot);
		}
	}
};

struct RestoreTail
{
	void *m_vptr;
	~RestoreTail() { m_vptr = &g_104626bc; }
};

struct RestoreLocal : RestoreTail
{
	CUtlVector<int> m_vec;
	void *m_pData;
	char *m_pData2;
	int m_field20;
	bool m_bField24;
};

union RestoreStorage
{
	char m_raw[0x28];
	int m_align;
};

// TARGET: CServerGameDLL::vfunc21
void CServerGameDLL::vfunc21(void *pSaveData, int a, int b)
{
	CProfScope scope;
	RestoreStorage storage;
	new (&storage, (CUtlPlacement *)0) CRestore(pSaveData);
	((IBlockSetX *)g_10592db0)->Restore((CRestore *)&storage, a, b);
	((IBlockSetX *)g_10592db0)->PostRestore();
	((RestoreLocal *)&storage)->~RestoreLocal();
}
// END FUNCTION

// FUNCTION: 0x1011b890 size=0xb
#include "CServerGameDLL.h"
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
#include "CServerGameDLL.h"
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

// FUNCTION: 0x1011b9f0 size=0x1cb
#include "CServerGameDLL.h"
#include "CVProfile.h"
#include "globalvars.h"

struct SVCycle
{
	unsigned long m_lo;
	unsigned long m_hi;

	void Sample()
	{
		__asm {
			mov ecx, this
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

struct SVCycle64
{
	unsigned __int64 m_Int64;

	void End()
	{
		SVCycle now;
		now.m_lo = 0;
		now.m_hi = 0;
		now.Sample();
		m_Int64 = *(unsigned __int64 *)&now - m_Int64;
	}
};

struct SVNode
{
	const char *m_pszName;	// 0x00
	char m_pad0004[4];
	SVCycle64 m_CurFrameTime;	// 0x08
	int m_nRecursions;	// 0x10
	int m_nCurFrameCalls;	// 0x14
	unsigned __int64 m_TotalTime;	// 0x18
	char m_pad0020[0x48 - 0x20];
	SVNode *m_pParent;	// 0x48
	char m_pad004c[0x54 - 0x4c];
	int m_nBudgetGroup;	// 0x54
};

struct SVProf
{
	char m_bVTune;	// 0x00
	char m_pad0001[3];
	int m_nVTuneGroup;	// 0x04
	int m_aGroupStack[1024];	// 0x08
	int m_nGroupStackDepth;	// 0x1008
	int m_enabled;	// 0x100c
	char m_bAtRoot;	// 0x1010
	char m_pad1011[3];
	SVNode *m_pCurNode;	// 0x1014
	SVNode *m_pRoot;	// 0x1018
};

__declspec(dllimport) void vtune(bool bEnable);
int sub_101c7f80(void *pList, int nSize, int a, int b);

void CServerGameDLL::vfunc23(int a, int b)
{
	SVProf *pProf = (SVProf *)g_109f3648;
	if (pProf->m_enabled || !pProf->m_bAtRoot) {
		if (pProf->m_pCurNode->m_pszName != "CServerGameDLL::BuildAdjacentMapList")
			pProf->m_pCurNode = (SVNode *)((CVProfNode *)pProf->m_pCurNode)->GetSubNode("CServerGameDLL::BuildAdjacentMapList", 0, "Unaccounted");
		SVNode *pNode = pProf->m_pCurNode;
		pNode->m_nCurFrameCalls++;
		int nPrev = pNode->m_nRecursions;
		pNode->m_nRecursions = nPrev + 1;
		if (nPrev == 0) {
			((SVCycle *)&pNode->m_CurFrameTime)->Sample();
			SVProf *p = (SVProf *)g_109f3648;
			int iGroup = pNode->m_nBudgetGroup;
			p->m_aGroupStack[p->m_nGroupStackDepth] = iGroup;
			p->m_nGroupStackDepth++;
			if (p->m_aGroupStack[p->m_nGroupStackDepth - 2] != iGroup && p->m_bVTune && iGroup == p->m_nVTuneGroup)
				vtune(true);
		}
		pProf->m_bAtRoot = 0;
	}
	char *pGlobal = *(char **)((char *)gpGlobals + 0x20);
	if (pGlobal)
		*(int *)(pGlobal + 0x18) = sub_101c7f80(pGlobal + 0x1c, 0x3c, a, b);
	pProf = (SVProf *)g_109f3648;
	if (!pProf->m_bAtRoot || pProf->m_enabled) {
		SVNode *pNode = pProf->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
			pNode->m_CurFrameTime.End();
			pNode->m_TotalTime += pNode->m_CurFrameTime.m_Int64;
			SVProf *p = (SVProf *)g_109f3648;
			p->m_nGroupStackDepth--;
			int iGroup = p->m_aGroupStack[p->m_nGroupStackDepth + 1];
			if (p->m_aGroupStack[p->m_nGroupStackDepth] != iGroup && p->m_bVTune && iGroup == p->m_nVTuneGroup)
				vtune(false);
		}
		if (pNode->m_nRecursions == 0)
			pProf->m_pCurNode = pProf->m_pCurNode->m_pParent;
		pProf->m_bAtRoot = (pProf->m_pCurNode == pProf->m_pRoot);
	}
}
// END FUNCTION
