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

// FUNCTION: 0x1011a410 size=0x5
#include "CServerGameDLL.h"
void __cdecl sub_10057b50();
// TARGET: CServerGameDLL::vfunc7
// the game's 0x1011a410: a tail call (jmp) of sub_10057b50
void CServerGameDLL::vfunc7()
{
	sub_10057b50();
}
// END FUNCTION

// FUNCTION: 0x1011a7a0 size=0x2a0
#include "CServerGameDLL.h"
#include "CVProfile.h"
#include "engineserver.h"
#include "CGlobalEntityList.h"
#include <string.h>

struct CCycleSample
{
	unsigned __int64 m_Int64;
	void Sample() { unsigned int *p = (unsigned int *)&m_Int64; __asm { mov ecx, p
		rdtsc
		mov [ecx], eax
		mov [ecx + 4], edx } }
	void Add(const CCycleSample &rhs) { m_Int64 += rhs.m_Int64; }
};

struct CLevelInitPlayerView
{
	void sub_101707c0(const char *pMapName, const char *pOldLevel, const char *pLandmarkName);
};

extern CGlobalEntityList g_106eb5d8;
extern char g_1070b266;
extern char g_1070b264;
void sub_100fe550();
void sub_103505e0();
void sub_1011a710(bool);
void sub_10136650(const char *);
CLevelInitPlayerView *sub_101cd9e0(int);
void sub_1011a620();
void sub_10199e20();
void sub_101c31c0();

// TARGET: CServerGameDLL::vfunc3
bool CServerGameDLL::vfunc3(const char *pMapName, const char *pMapEntities, const char *pOldLevel, const char *pLandmarkName, char loadGame)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot) {
		if (p->m_pCurNode->m_pszName != "CServerGameDLL::LevelInit")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CServerGameDLL::LevelInit", 0, "Unaccounted");
		CVProfNode *n = p->m_pCurNode;
		n->m_nCurFrameCalls++;
		if (n->m_nRecursions++ == 0) {
			((CCycleSample *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroupInlined(n->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}

	g_1070b266 = 1;
	sub_100fe550();
	sub_103505e0();
	if (loadGame)
	{
		g_1070b264 = 0;
		bool bTransition = true;
		if (!pOldLevel)
			bTransition = false;
		sub_1011a710(bTransition);
		if (!engine->vfunc115(pMapName, 1))
			sub_10136650(pMapEntities);
		if (pOldLevel)
			engine->vfunc116(pOldLevel, pLandmarkName);
		if (g_1070b264)
			engine->vfunc117();
		CLevelInitPlayerView *pPlayer = sub_101cd9e0(1);
		if (pPlayer)
			pPlayer->sub_101707c0(pMapName, pOldLevel, pLandmarkName);
		sub_1011a620();
	}
	else
	{
		if (!strcmp(pMapName, "sp_genesisdevice_1"))
			sub_10199e20();
		sub_10136650(pMapEntities);
	}
	sub_101c31c0();
	g_106eb5d8.sub_100f6ce0();
	g_1070b266 = 0;
	if (loadGame && pOldLevel)
		engine->vfunc59("autosave\n");

	p = g_109f3648;
	if (!p->m_bAtRoot || p->m_enabled) {
		CVProfNode *n = p->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleSample s;
			s.m_Int64 = 0;
			s.Sample();
			n->m_CurFrameTime.m_Int64 = s.m_Int64 - n->m_CurFrameTime.m_Int64;
			((CCycleSample *)&n->m_TotalTime)->Add(*(CCycleSample *)&n->m_CurFrameTime);
			CVProfile *q = g_109f3648;
			--q->m_nGroupStackDepth;
			int nNew = q->m_GroupIDStack[q->m_nGroupStackDepth];
			int nOld = q->m_GroupIDStack[q->m_nGroupStackDepth + 1];
			if (nNew != nOld && q->m_bVTuneGroupsEnabled && nOld == q->m_nVTuneGroupID)
				vtune(false);
		}
		if (n->m_nRecursions == 0)
			p->m_pCurNode = p->m_pCurNode->m_pParent;
		p->m_bAtRoot = (p->m_pCurNode == p->m_pRoot);
	}
	return true;
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

// FUNCTION: 0x1011abc0 size=0x186
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CServerGameDLL.h"
#include "CBaseAnimating.h"
#include "CAI_BaseNPC.h"
#include "ConVar.h"
#include "ScopeTrace.h"
#include "engineserver.h"

extern ConVar *g_1070b184;
extern char g_106eb5d8[];

void __cdecl sub_1042c6c0();
void __cdecl sub_10352f00();
void __cdecl sub_1003bdd0(int a);
void __cdecl sub_1042c6e0();
void *__cdecl sub_101bdb50();
void __cdecl sub_100cfac0();
void __cdecl sub_10119980();
void __cdecl sub_1027ee90();
void __fastcall sub_100f6ce0(void *pThis);
void __cdecl sub_1018be60();

class CVfuncView
{
public:
	virtual void v0() = 0;
	virtual void v1() = 0;
	virtual void v2() = 0;
	virtual void v3() = 0;
	virtual CBaseEntity *v4() = 0;
};

void CServerGameDLL::vfunc5(int a)
{
	ScopeTrace trace("CServerGameDLL::GameFrame", g_106b8540);

	sub_1042c6c0();
	sub_10352f00();
	sub_1003bdd0(a);
	sub_1042c6e0();
	((CVfuncView *)sub_101bdb50())->v1();
	sub_100cfac0();
	sub_10119980();
	sub_1027ee90();

	if (g_1070b184->vfunc1() || g_1070b184->m_nValue != -1)
	{
		int index = g_1070b184->vfunc1() ? 0 : g_1070b184->m_nValue;
		void *pEdict = engine->vfunc38(index);
		CBaseEntity *pEnt;
		{
			ScopeTrace trace2("CBaseEntity::Instance", g_106b8540);
			if (!pEdict)
				pEdict = engine->vfunc38(0);
			if (!pEdict)
				pEnt = 0;
			else
			{
				CVfuncView *pUnknown = *(CVfuncView **)((char *)pEdict + 0x40);
				pEnt = pUnknown ? pUnknown->v4() : 0;
			}
		}
		CBaseAnimating *pAnim = dynamic_cast<CBaseAnimating *>(pEnt);
		if (pAnim)
			((CAI_BaseNPC *)pAnim)->vfunc264();
	}

	sub_100f6ce0(g_106eb5d8);
	sub_1018be60();
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

// FUNCTION: 0x1011ae30 size=0x5
#include "CServerGameDLL.h"
char const * __cdecl sub_10352df0();
// TARGET: CServerGameDLL::vfunc10
// the game's 0x1011ae30: a tail call (jmp) of sub_10352df0
char const * CServerGameDLL::vfunc10()
{
	return sub_10352df0();
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

// FUNCTION: 0x1011b080 size=0x1cb
#include "CServerGameDLL.h"
#include "CVProfile.h"
#include "CSave.h"

struct IBlockSetX { virtual void v0(); virtual void v1(); virtual void Save(CSave *pSave); };
extern IBlockSetX *g_10592db0;

struct CCycleCountX
{
	__int64 m_Int64;
	void Sample()
	{
		__int64 *pSample = &m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		CCycleCountX t;
		t.m_Int64 = 0;
		t.Sample();
		m_Int64 = t.m_Int64 - m_Int64;
	}
	void Add(const CCycleCountX &r) { m_Int64 += r.m_Int64; }
};

static inline bool NodeExit(CVProfNode *n)
{
	if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
		((CCycleCountX *)&n->m_CurFrameTime)->End();
		((CCycleCountX *)&n->m_TotalTime)->Add(*(CCycleCountX *)&n->m_CurFrameTime);
		g_109f3648->PopGroup();
	}
	return n->m_nRecursions == 0;
}

struct CVProfScopeX
{
	CVProfScopeX(const char *pszName, int detail, const char *pszGroup)
	{
		CVProfile *prof = g_109f3648;
		if (prof->m_enabled || !prof->m_bAtRoot) {
			if (prof->m_pCurNode->m_pszName != pszName)
				prof->m_pCurNode = prof->m_pCurNode->GetSubNode(pszName, detail, pszGroup);
			CVProfNode *node = prof->m_pCurNode;
			++node->m_nCurFrameCalls;
			if (node->m_nRecursions++ == 0) {
				((CCycleCountX *)&node->m_CurFrameTime)->Sample();
				g_109f3648->PushGroupInlined(node->m_nBudgetGroupID);
			}
			prof->m_bAtRoot = false;
		}
	}
	~CVProfScopeX()
	{
		CVProfile *prof = g_109f3648;
		if (!prof->m_bAtRoot || prof->m_enabled) {
			if (NodeExit(prof->m_pCurNode))
				prof->m_pCurNode = prof->m_pCurNode->m_pParent;
			prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot);
		}
	}
};

struct CSaveVecX
{
	CUtlVector<int> m_Sections;
	void Destroy() { m_Sections.~CUtlVector<int>(); }
};

// TARGET: CServerGameDLL::vfunc18
int CServerGameDLL::vfunc18(void *pSaveData)
{
	CVProfScopeX scope("CServerGameDLL::Save", 0, "Unaccounted");
	CSave save(pSaveData);
	g_10592db0->Save(&save);
	((CSaveVecX *)(CSaveSections *)&save)->Destroy();
	return 1;
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

// FUNCTION: 0x1011b590 size=0x260
#include "CServerGameDLL.h"
#include "CVProfile.h"
#include "CRestore.h"

struct IBlockHandler
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void Restore(CRestore *pRestore, int a, int b);
	virtual void PostRestore();
};

IBlockHandler *sub_100cffa0();
IBlockHandler *sub_10045700();
IBlockHandler *sub_1030c390();
IBlockHandler *sub_1019b360();
int sub_101a3c40(void *pSaveData, __int64 ab);

struct CRestoreFrameVec
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;
};
void __fastcall sub_100047aa(CRestoreFrameVec *p);	// CUtlVector<int>::RemoveAll
void __fastcall sub_10007275(CRestoreFrameVec *p);	// CUtlMemory<int>::Purge

// A CRestore on the stack whose vector teardown is the out-of-line RemoveAll / Purge form.
struct CRestoreFrame
{
	void *m_vptr;
	CRestoreFrameVec m_vec;
	void *m_pData;
	char *m_pData2;
	int m_field20;
	bool m_bField24;

	~CRestoreFrame()
	{
		sub_100047aa(&m_vec);
		sub_10007275(&m_vec);
		m_vec.m_pElements = m_vec.m_pMemory;
		if (m_vec.m_growSize != -1 && m_vec.m_pMemory)
			g_109f3624(m_vec.m_pMemory);
	}
};

struct CCycleCountX
{
	unsigned __int64 m_Int64;
	CCycleCountX() { m_Int64 = 0; }
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
};

inline void CycleEnd(CUnknownCycle100335e0 *p)
{
	CCycleCountX cnt;
	cnt.Sample();
	p->m_Int64 = cnt.m_Int64 - p->m_Int64;
}

inline bool NodeExitScope(CVProfNode *n)
{
	if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
		CUnknownCycle100335e0 *pc = &n->m_CurFrameTime;
		CycleEnd(pc);
		n->m_TotalTime += pc->m_Int64;
		g_109f3648->PopGroup();
	}
	return n->m_nRecursions == 0;
}

// TARGET: CServerGameDLL::vfunc22
int CServerGameDLL::vfunc22(void *pSaveData, __int64 ab)
{
	CVProfile *prof = g_109f3648;
	if (prof->m_enabled || !prof->m_bAtRoot) {
		if (prof->m_pCurNode->m_pszName != "CServerGameDLL::CreateEntityTransitionList")
			prof->m_pCurNode = prof->m_pCurNode->GetSubNode("CServerGameDLL::CreateEntityTransitionList", 0, "Unaccounted");
		CVProfNode *node = prof->m_pCurNode;
		++node->m_nCurFrameCalls;
		if (node->m_nRecursions++ == 0) {
			((CCycleCountX *)&node->m_CurFrameTime)->Sample();
			g_109f3648->PushGroupInlined(node->m_nBudgetGroupID);
		}
		prof->m_bAtRoot = false;
	}
	int result = sub_101a3c40(pSaveData, ab);
	if (result) {
		CRestoreFrame frame;
		CRestore *restore = (CRestore *)&frame;
		restore->CRestore::CRestore(pSaveData);
		sub_100cffa0()->Restore(restore, 0, 0);
		sub_10045700()->Restore(restore, 0, 0);
		sub_1030c390()->Restore(restore, 0, 0);
		sub_1019b360()->Restore(restore, 0, 0);
	}
	sub_100cffa0()->PostRestore();
	sub_10045700()->PostRestore();
	sub_1030c390()->PostRestore();
	sub_1019b360()->PostRestore();
	prof = g_109f3648;
	if (!prof->m_bAtRoot || prof->m_enabled) {
		if (NodeExitScope(prof->m_pCurNode))
			prof->m_pCurNode = prof->m_pCurNode->m_pParent;
		prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot);
	}
	return result;
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
