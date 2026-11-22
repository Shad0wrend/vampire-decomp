// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 70 blocks
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

// FUNCTION: 0x1011a050 size=0x5
#define PCD_INITIALIZERS
#include "InterfaceReg.h"
void * sub_1011a0a0(void);
InterfaceReg g_1070b1c8(sub_1011a0a0, "ServerGameDLL002");
// END FUNCTION

// FUNCTION: 0x1011a0a0 size=0x6
namespace lifted {
extern char g_1070b17c;
}
int sub_1011a0a0()
{
    return (int)&lifted::g_1070b17c;
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

// FUNCTION: 0x1011a430 size=0x8
extern char g_1070b264;
void sub_1011a430() { g_1070b264 = 1; }
// END FUNCTION

// FUNCTION: 0x1011a450 size=0xa
#include "utlvector.h"
CUtlVector<int> g_1070b0d0;
// END FUNCTION

// FUNCTION: 0x1011a540 size=0x6
namespace lifted {
extern char g_1070b266;
}
char sub_1011a540()
{
    return lifted::g_1070b266;
}
// END FUNCTION

// FUNCTION: 0x1011a560 size=0x6
namespace lifted {
extern char g_1070b267;
}
char sub_1011a560()
{
    return lifted::g_1070b267;
}
// END FUNCTION

// FUNCTION: 0x1011a580 size=0x7d
#include "UtlMem.h"

void *sub_10430fa0(void *, const void *, unsigned);

struct SHandleVec {
    UtlMem m_mem;
    int m_size;
    int *m_pElements;
};
extern SHandleVec g_1070b0d0;

struct SHandleHolder {
    virtual void v0();
    virtual int *GetHandle();
};

void sub_1011a580(SHandleHolder *holder)
{
    if (holder) {
        int h = *holder->GetHandle();
        int idx = g_1070b0d0.m_size;
        int next = g_1070b0d0.m_size + 1;
        if (next > g_1070b0d0.m_mem.m_allocationCount)
            g_1070b0d0.m_mem.sub_10055ec0(g_1070b0d0.m_size - g_1070b0d0.m_mem.m_allocationCount + 1);
        g_1070b0d0.m_size++;
        g_1070b0d0.m_pElements = g_1070b0d0.m_mem.m_pMemory;
        int move = g_1070b0d0.m_size - idx - 1;
        if (move > 0)
            sub_10430fa0(g_1070b0d0.m_mem.m_pMemory + next, g_1070b0d0.m_mem.m_pMemory + idx, move * 4);
        int *slot = g_1070b0d0.m_mem.m_pMemory + idx;
        if (slot)
            *slot = h;
    }
}
// END FUNCTION

// FUNCTION: 0x1011a620 size=0xb1
#include "CBaseEntity.h"
#include "CUnknown100a8220.h"
struct HandleEntry { CBaseEntity *ent; int serial; int pad; };
struct HandleTable { int pad; HandleEntry e[1]; };
extern HandleTable *g_10566458;
struct HandleVec {
    unsigned int *m_pMemory;
    int m_allocationCount;
    int m_growSize;
    int m_size;
    unsigned int *m_pElements;
};
extern HandleVec g_1070b0d0;
extern char g_1070b265;
extern char g_1070b268;
extern void (*g_109f3624)(void *);
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
struct EntView130 {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9) V10(b0) V10(b1) V10(b2)
    virtual void vf130(char flag);
};

void sub_1011a620()
{
    if (!g_1070b265)
        return;
    for (int i = g_1070b0d0.m_size - 1; i >= 0; i--) {
        unsigned int h = g_1070b0d0.m_pMemory[i];
        if (h != 0xffffffff) {
            HandleEntry *p = &g_10566458->e[h & 0x1fff];
            if (p->serial == (int)(h >> 13)) {
                CBaseEntity *ent = p->ent;
                if (ent && !((CUnknown100a8220 *)ent)->sub_100a8220())
                    ((EntView130 *)ent)->vf130(g_1070b268);
            }
        }
    }
    g_1070b0d0.m_size = 0;
    if (g_1070b0d0.m_growSize != -1) {
        if (g_1070b0d0.m_pMemory) {
            g_109f3624(g_1070b0d0.m_pMemory);
            g_1070b0d0.m_pMemory = 0;
        }
        g_1070b0d0.m_allocationCount = 0;
    }
    g_1070b0d0.m_pElements = g_1070b0d0.m_pMemory;
    g_1070b265 = 0;
}
// END FUNCTION

// FUNCTION: 0x1011a710 size=0x6c
struct HandleVec {
    unsigned int *m_pMemory;
    int m_allocationCount;
    int m_growSize;
    int m_size;
    unsigned int *m_pElements;
};

extern HandleVec g_1070b0d0;
extern char g_1070b265;
extern char g_1070b268;
extern void (__cdecl *g_109f3624)(void *);
extern void (__cdecl *g_109f3650)(int, const char *, ...);
void sub_1011a620();

// TARGET: sub_1011a710
void sub_1011a710(char flag)
{
    if (g_1070b265) {
        g_109f3650(2, "BeginRestoreEntities without previous EndRestoreEntities.\n");
        sub_1011a620();
    }
    g_1070b0d0.m_size = 0;
    if (g_1070b0d0.m_growSize != -1) {
        if (g_1070b0d0.m_pMemory) {
            g_109f3624(g_1070b0d0.m_pMemory);
            g_1070b0d0.m_pMemory = 0;
        }
        g_1070b0d0.m_allocationCount = 0;
    }
    g_1070b0d0.m_pElements = g_1070b0d0.m_pMemory;
    g_1070b268 = flag;
    g_1070b265 = 1;
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
	((CSaveVecX *)&save.m_pSections)->Destroy();
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1011b2d0 size=0x20
#include "ISave.h"

// VC6 writes ISave's scalar deleting destructor where it emits the class's vtable; its inline
// destructor called in a function nothing calls makes it emit both here
void pcd_emit_1011b2d0(ISave *p) { p->ISave::~ISave(); }

// TARGET: ??_GISave@@UAEPAXI@Z
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

// FUNCTION: 0x1011b560 size=0x20
#include "IRestore.h"

extern char g_104626bc;
void sub_10430964(void *p);

// TARGET: IRestore::vfunc34
void *IRestore::vfunc34(unsigned char bFree)
{
	*(void **)this = &g_104626bc;
	if (bFree & 1)
		sub_10430964(this);
	return this;
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

// FUNCTION: 0x1011bc40 size=0x1c
struct CUnk1011bc40Iface { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(int, int, int, int); };
extern CUnk1011bc40Iface *g_1070b23c;
extern int g_10571c24;

// TARGET: sub_1011bc40
void sub_1011bc40(int a)
{
	g_1070b23c->a3(g_10571c24, a, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1011bc70 size=0x21
struct CUnkVT1011bc70
{
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual int vf8(int a, int b);
};

extern CUnkVT1011bc70 *g_1070b23c;
extern int g_10571c24;

// TARGET: sub_1011bc70
int sub_1011bc70(int param)
{
    if (param != 0) {
        int result = g_1070b23c->vf8(g_10571c24, param);
        if (result >= 0) {
            return result;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1011bcb0 size=0xa
#define PCD_INITIALIZERS
#include "CServerGameEnts.h"
CServerGameEnts g_1070b1c4;
// END FUNCTION

// FUNCTION: 0x1011bd30 size=0x20
#include "IServerGameEnts.h"

extern char g_10462780;
void sub_10430964(void *p);

// TARGET: IServerGameEnts::vfunc0
void *IServerGameEnts::vfunc0(unsigned char bFree)
{
	*(void **)this = &g_10462780;
	if (bFree & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1011bd60 size=0x20
#include "vampire.h"
extern char g_10462780;
void sub_10430964(void *p);
struct CUnk1011bd60
{
    void *sub_1011bd60(unsigned char bFree);
};
// TARGET: CUnk1011bd60::sub_1011bd60
void *CUnk1011bd60::sub_1011bd60(unsigned char bFree)
{
    *(void **)this = &g_10462780;
    if (bFree & 1) {
        sub_10430964(this);
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x1011bd90 size=0x5
#define PCD_INITIALIZERS
#include "InterfaceReg.h"
void * sub_1011bde0(void);
InterfaceReg g_1070b0e4(sub_1011bde0, "ServerGameEnts001");
// END FUNCTION

// FUNCTION: 0x1011bde0 size=0x6
namespace lifted {
extern char g_1070b1c4;
}
int sub_1011bde0()
{
    return (int)&lifted::g_1070b1c4;
}
// END FUNCTION

// FUNCTION: 0x1011be00 size=0xc
extern int g_1070b258;
void __fastcall sub_1011be00(void *, int, int value)
{
	g_1070b258 = value;
}
// END FUNCTION

// FUNCTION: 0x1011be20 size=0x69
#include "CBaseEntity.h"
#include "CServerGameEnts.h"
struct CServerGameEntsUnknown {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual CBaseEntity *GetBaseEntity();
};
struct CTraceRecord54 { char m_pad[0x54]; };
void sub_101cf210(CTraceRecord54 *p);

void CServerGameEnts::vfunc2(CServerGameEntsEdict *pFirst, CServerGameEntsEdict *pSecond)
{
    if (pFirst && pFirst->m_pUnk) {
        CBaseEntity *pEnt = pFirst->m_pUnk->GetBaseEntity();
        if (pEnt) {
            CTraceRecord54 rec;
            sub_101cf210(&rec);
            CBaseEntity *pOther = (pSecond && pSecond->m_pUnk) ? pSecond->m_pUnk->GetBaseEntity() : 0;
            pEnt->sub_1003e2e0(pOther, &rec);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1011beb0 size=0xe
// TARGET: sub_1011beb0
void sub_10136600(int x);

void __stdcall sub_1011beb0(int x)
{
    sub_10136600(x);
}
// END FUNCTION

// FUNCTION: 0x1011bed0 size=0xa
#define PCD_INITIALIZERS
#include "CServerGameClients.h"
CServerGameClients g_1070b074;
// END FUNCTION

// FUNCTION: 0x1011bf50 size=0x20
#include "IServerGameClients.h"

extern char g_104627e0;
void sub_10430964(void *p);

// TARGET: IServerGameClients::vfunc0
void *IServerGameClients::vfunc0(unsigned char bFree)
{
	*(void **)this = &g_104627e0;
	if (bFree & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1011bf80 size=0x20
#include "vampire.h"
extern char g_104627e0;
void sub_10430964(void *p);
struct CUnk1011bf80
{
    void *sub_1011bf80(unsigned char bFree);
};
// TARGET: CUnk1011bf80::sub_1011bf80
void *CUnk1011bf80::sub_1011bf80(unsigned char bFree)
{
    *(void **)this = &g_104627e0;
    if (bFree & 1) {
        sub_10430964(this);
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x1011bfb0 size=0x5
#define PCD_INITIALIZERS
#include "InterfaceReg.h"
void * sub_1011c000(void);
InterfaceReg g_1070b21c(sub_1011c000, "ServerGameClients002");
// END FUNCTION

// FUNCTION: 0x1011c000 size=0x6
namespace lifted {
extern char g_1070b074;
}
int sub_1011c000()
{
    return (int)&lifted::g_1070b074;
}
// END FUNCTION

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

// FUNCTION: 0x1011c040 size=0x3
#include "CServerGameClients.h"
void CServerGameClients::vfunc2(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1011c060 size=0x2a9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CServerGameClients.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "CReliableBroadcastFilter.h"

extern int g_10726048;
extern char g_1070ba2c;
CBaseEntity *sub_100ab250(void *pEdict);
void *sub_101bb220(void *pEdict);
void *sub_101bb150(void *p);
void sub_1003d8f0(CBaseEntity *p);
void sub_101cf600(CBaseEntity *p);
__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);

struct CUnk101b98d0 { void sub_101b98d0(); };
struct CUnitP3View { void sub_1017c580(); };
struct CFlagsUnit
{
	char m_pad[0x44];
	unsigned short m_nFlags;
	void sub_100dc580(unsigned int flags);
};
struct CGlobalList1070ba0c
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
	virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(void *pEdict);
};
extern CGlobalList1070ba0c *g_1070ba0c;

struct CPlayerView102
{
	char m_pad0[0x2078];
	const char *m_pszName;
	char m_pad1[0x2310 - 0x207c];
	int m_n2310;
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline CBaseEntity *Instance102(void *pent)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	if (!pent)
		pent = engine->vfunc38(0);
	return sub_100ab250(pent);
}

// TARGET: CServerGameClients::vfunc3
void CServerGameClients::vfunc3(void *pEdict)
{
	ScopeTrace trace("CServerGameClients::ClientDisconnect", g_106b8540, g_106b8540);
	CBaseEntity *pPlayer = Instance102(pEdict);
	if (pPlayer) {
		if (!g_1070ba2c) {
			char msg[256];
			CPlayerView102 *pv = (CPlayerView102 *)pPlayer;
			pv->m_n2310 = 0;
			Q_snprintf(msg, 256, "- %s has left the game\n", STRINGR(pv->m_pszName));
			CReliableBroadcastFilter filter;
			engine->vfunc65(&filter, g_10726048);
			engine->vfunc67(engine->vfunc35((int)pEdict));
			engine->vfunc78(msg);
			engine->vfunc66();
			CUnk101b98d0 *pObj = (CUnk101b98d0 *)sub_101bb150(sub_101bb220(pEdict));
			if (pObj)
				pObj->sub_101b98d0();
			pPlayer->sub_100b3640(0x10000);
			pPlayer->sub_100b3580(0x400000);
			pPlayer->sub_100b3580(0x8000);
			{
				ScopeTrace trace3("CBaseEntity::AddSolidFlags", pPlayer->m_name26c ? pPlayer->m_name26c : g_106b8540);
				CFlagsUnit *pFlags = (CFlagsUnit *)((char *)pPlayer + 0x270);
				pFlags->sub_100dc580(pFlags->m_nFlags | 4);
			}
			sub_101cf600(pPlayer);
			if (g_1070ba0c)
				g_1070ba0c->v28(pEdict);
		}
		sub_1003d8f0(pPlayer);
		((CUnitP3View *)pPlayer)->sub_1017c580();
	}
}
// END FUNCTION

// FUNCTION: 0x1011c3c0 size=0xa2
#include "CRelieableBroadcastRecipientFilter.h"

// TARGET: ??_GCRelieableBroadcastRecipientFilter@@UAEPAXI@Z
CRelieableBroadcastRecipientFilter *CRelieableBroadcastRecipientFilter_Emit()	// the inline constructor emits the
{	// vtable, and with it this scalar deleting destructor
	return new CRelieableBroadcastRecipientFilter;
}
// END FUNCTION

// FUNCTION: 0x1011c4a0 size=0x15
#include "CServerGameClients.h"

int sub_10352d70(int a, int b);

// TARGET: CServerGameClients::vfunc4
int CServerGameClients::vfunc4(int a, int b)
{
	return sub_10352d70(a, b);
}
// END FUNCTION

// FUNCTION: 0x1011c4d0 size=0x34
struct CClientViewA8 {
    char pad0[0xa8];
    int m_a8;
};

struct CVirtSlot4View {
    virtual int f0();
    virtual int f1();
    virtual int f2();
    virtual int f3();
    virtual CClientViewA8 *f4();
};

struct CServerClientsView {
    char pad0[0x40];
    CVirtSlot4View *m40;
};

void sub_100095ac(int a);

// TARGET: sub_1011c4d0
void __stdcall sub_1011c4d0(CServerClientsView *p)
{
    CClientViewA8 *pClient = 0;
    if (p && p->m40)
        pClient = p->m40->f4();
    sub_100095ac(!pClient ? 0 : pClient->m_a8);
}
// END FUNCTION

// FUNCTION: 0x1011c520 size=0x19c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CServerGameClients.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"
#include "string_t.h"
#include <string.h>

struct CPlayerView1011c520
{
	char m_pad0000[0x2078];
	string_t m_netname;	// 0x2078
};

#define ES(n) virtual void s##n();
#define ES10(p) ES(p##0) ES(p##1) ES(p##2) ES(p##3) ES(p##4) ES(p##5) ES(p##6) ES(p##7) ES(p##8) ES(p##9)

struct CEngineView1011c520
{
	ES10(0) ES10(1) ES10(2)
	ES(30) ES(31) ES(32) ES(33)
	virtual int slot34(void *edict);
	ES(35) ES(36) ES(37) ES(38) ES(39)
	ES10(4) ES10(5) ES10(6) ES10(7) ES10(8)
	ES(90) ES(91) ES(92) ES(93) ES(94)
	virtual const char *slot95(int clientIndex, const char *pszName);
};

struct CGameEntsView1011c520
{
	ES10(0) ES10(1) ES10(2) ES10(3)
	ES(40) ES(41)
	virtual void slot42(CPlayerView1011c520 *pPlayer, int clientIndex);
};

extern CEngineView1011c520 *g_1070b22c;
extern CGameEntsView1011c520 *g_1070ba0c;
void sub_101d10e0(const char *fmt, ...);
string_t sub_1042bff0(const char *pszString);

static inline const char *STRING(const string_t &s)
{
	if (s.pszValue)
		return s.pszValue;
	return g_106b8540;
}

inline CPlayerView1011c520 *Instance1011c520(CServerGameClients_Edict *pent)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
	return pent->m_pUnk ? (CPlayerView1011c520 *)pent->m_pUnk->vfunc4() : 0;
}

// TARGET: CServerGameClients::vfunc6
void CServerGameClients::vfunc6(CServerGameClients_Edict *pEdict, int clientIndex)
{
	if (!pEdict->m_bFlag || !pEdict->m_pUnk)
		return;
	CPlayerView1011c520 *pPlayer = Instance1011c520(pEdict);
	if (!pPlayer)
		return;
	if (pPlayer->m_netname.pszValue && STRING(pPlayer->m_netname)[0] != 0
		&& strcmp(STRING(pPlayer->m_netname), g_1070b22c->slot95(clientIndex, "name")))
	{
		sub_101d10e0("\"%s<%i>\" changed name to \"%s<%i>\"\n", STRING(pPlayer->m_netname), g_1070b22c->slot34(pEdict), g_1070b22c->slot95(clientIndex, "name"), g_1070b22c->slot34(pEdict));
		pPlayer->m_netname = sub_1042bff0(g_1070b22c->slot95(clientIndex, "name"));
	}
	g_1070ba0c->slot42(pPlayer, clientIndex);
}
// END FUNCTION

// FUNCTION: 0x1011c730 size=0x13e
#include "utlrbtree.h"
#include "CServerGameClients.h"
#include "CBasePlayer.h"
#include "CUnknown1006e890.h"

#define VIS_V1(p) virtual void p();
#define VIS_V10(p) VIS_V1(p##0) VIS_V1(p##1) VIS_V1(p##2) VIS_V1(p##3) VIS_V1(p##4) VIS_V1(p##5) VIS_V1(p##6) VIS_V1(p##7) VIS_V1(p##8) VIS_V1(p##9)
#define VIS_V100(p) VIS_V10(p##0) VIS_V10(p##1) VIS_V10(p##2) VIS_V10(p##3) VIS_V10(p##4) VIS_V10(p##5) VIS_V10(p##6) VIS_V10(p##7) VIS_V10(p##8) VIS_V10(p##9)

struct VisAreaPortal
{
	VIS_V100(a) VIS_V100(b) VIS_V10(c0) VIS_V10(c1) VIS_V10(c2) VIS_V10(c3) VIS_V1(d0)
	virtual void vfunc241(const Vector &org);
};
struct VisAreaPortalElem
{
	VisAreaPortal *m_Element;
	unsigned short m_Previous;
	unsigned short m_Next;
};
struct VisAreaPortalList
{
	VisAreaPortalElem *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	unsigned short m_Head;
	unsigned short m_Tail;
	unsigned short Head() const { return m_Head; }
	static unsigned short InvalidIndex() { return 0xffff; }
	unsigned short Next(unsigned short i) const { return m_pMemory[i].m_Next; }
	VisAreaPortal *&operator[](unsigned short i) { return m_pMemory[i].m_Element; }
};
extern VisAreaPortalList g_10709680;

struct VisUnknown
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual CBasePlayer *GetBaseEntity();
};
struct VisEdict
{
	char m_pad[0x40];
	VisUnknown *m_pUnk;
};
struct Holder;
void *__fastcall sub_1017cf90(Holder *);

inline CBasePlayer *VisGetContainingEntity(VisEdict *pent)
{
	if (pent && pent->m_pUnk)
		return pent->m_pUnk->GetBaseEntity();
	return 0;
}
inline Vector VisFogColor(CUnknown1006e890 *p) { return *(Vector *)((char *)p + 0x5ec); }

void CServerGameClients::vfunc7(int edictA, int edictB, int c)
{
	Vector org;
	engine->vfunc100((unsigned char *)c);
	CUnknown1006e890 *pFog = 0;
	CBasePlayer *pVE = VisGetContainingEntity((VisEdict *)edictA);
	if (pVE) {
		org = pVE->vfunc193();
		engine->vfunc101((int)&org);
	} else {
		CBasePlayer *pPlayer = VisGetContainingEntity((VisEdict *)edictB);
		if (pPlayer) {
			org = pPlayer->vfunc193();
			pPlayer->vfunc430((unsigned char *)c, 0);
			pFog = (CUnknown1006e890 *)sub_1017cf90((Holder *)pPlayer);
		}
	}
	unsigned short i = g_10709680.Head();
	while (i != g_10709680.InvalidIndex()) {
		if (pFog && pFog->sub_1006e890())
			org = VisFogColor(pFog);
		g_10709680[i]->vfunc241(org);
		i = g_10709680.Next(i);
	}
}
// END FUNCTION

// FUNCTION: 0x1011c8c0 size=0x29a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CServerGameClients.h"
#include "CUserCmd.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "Tier1.h"

extern float g_104454c4;
CBaseEntity *sub_100ab250(void *pEdict);
void sub_1011ccc0(void *pBuf, CUserCmd *pTo, CUserCmd *pFrom);

struct CUnknown1002c920 { void sub_1002c920(int a, int b, int c); };

#define PV(n) virtual void s##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)
struct CPlayerSlots461
{
	PV100(0) PV100(1) PV100(2) PV100(3)
	PV10(40) PV10(41) PV10(42) PV10(43) PV10(44) PV10(45)
	PV(460)
	virtual void slot461(void *pCmds, int numcmds, int totalcmds, int dropped, int paused);
};

struct CUnk1013ecd0
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void vfunc15(void *pPlayer);
};
CUnk1013ecd0 *sub_1013ecd0();

struct CmdReset
{
	int m_vptr;
	int i10; float f14; int i18; float f1c, f20, f24, f28, f2c, f30, f34;
	unsigned char b38; unsigned char pad39[3];
	int i3c; int i40;
	unsigned char b44; unsigned char pad45[3];
	int i48; int i4c;
	unsigned char b50, b51, b52, b53;
	int i54; int i58;
};

#define RESET ((CmdReset *)&cmdNull)

inline CBaseEntity *Instance8(void *pent)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	if (!pent)
		pent = engine->vfunc38(0);
	return sub_100ab250(pent);
}

float CServerGameClients::vfunc8(CServerGameClients_Edict *pEdict, void *pBuf, int numcmds, int totalcmds, int dropped, char bIgnore, int paused)
{
	CUserCmd cmds[30];
	CUserCmd cmdNull;
	CBaseEntity *pPlayer = 0;
	CBaseEntity *pEnt = Instance8(pEdict);
	if (pEnt && *(int *)((char *)pEnt + 0xa8))
		pPlayer = pEnt;
	if (totalcmds >= 0 && totalcmds < 29) {
		RESET->i10 = 0; RESET->f14 = 0; RESET->i18 = 0; RESET->f1c = 0; RESET->f20 = 0; RESET->f24 = 0;
		RESET->f28 = 0; RESET->f2c = 0; RESET->f30 = 0; RESET->f34 = 0;
		RESET->b38 = 0;
		RESET->i3c = 0; RESET->i40 = 0;
		RESET->b44 = 0;
		RESET->i48 = 0; RESET->i4c = 0;
		RESET->b50 = 1; RESET->b51 = 1; RESET->b52 = 0; RESET->b53 = 0;
		RESET->i54 = 0; RESET->i58 = 0;
		((CUnknown1002c920 *)&cmdNull.m_vec50)->sub_1002c920(0, 0, 0);
		cmdNull.m_b5c = 0;
		CUserCmd *pFrom = &cmdNull;
		for (int i = totalcmds - 1; i >= 0; i--) {
			CUserCmd *pTo = &cmds[i];
			sub_1011ccc0(pBuf, pTo, pFrom);
			pFrom = pTo;
		}
		if (!bIgnore && pPlayer) {
			sub_1013ecd0()->vfunc15(pPlayer);
			((CPlayerSlots461 *)pPlayer)->slot461(cmds, numcmds, totalcmds, dropped, paused);
			return cmds[0].frametime;
		}
		return 0.0f;
	}
	const char *pName = "unknown";
	if (pPlayer) {
		const char *s = *(const char **)((char *)pPlayer + 0x2078);
		pName = s ? s : g_106b8540;
	}
	g_109f3628("CBasePlayer::ProcessUsercmds: too many cmds %i sent for player %s\n", totalcmds, pName);
	*((char *)pBuf + 0x10) = 1;
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x1011cc10 size=0x53
struct SInit {
	int m_n0;
	int m_n4, m_n8, m_nc, m_n10, m_n14, m_n18, m_n1c, m_n20, m_n24, m_n28;
	char m_b2c;
	int m_n30, m_n34;
	char m_b38;
	int m_n3c, m_n40;
	char m_b44, m_b45, m_b46, m_b47;
	int m_n48, m_n4c, m_n50, m_n54, m_n58;
	char m_b5c;

	void sub_1011cc10();
};

void SInit::sub_1011cc10()
{
	m_n4 = 0; m_n8 = 0; m_nc = 0; m_n10 = 0; m_n14 = 0; m_n18 = 0; m_n1c = 0; m_n20 = 0; m_n24 = 0; m_n28 = 0;
	m_b2c = 0;
	m_n30 = 0; m_n34 = 0;
	m_b38 = 0;
	m_n3c = 0; m_n40 = 0;
	m_b44 = 1; m_b45 = 1; m_b46 = 0; m_b47 = 0;
	m_n48 = 0; m_n4c = 0; m_n50 = 0; m_n54 = 0; m_n58 = 0;
	m_b5c = 0;
}
// END FUNCTION

// FUNCTION: 0x1011cc90 size=0x20
#include "CUserCmd.h"

struct DummyCmd : CUserCmd
{
};

DummyCmd g_dummy;
// TARGET: ??_GCUserCmd@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1011ccc0 size=0x4d8
// TARGET: sub_1011ccc0
#include "bf_read.h"
#include "CUserCmd.h"
#include "QAngle.h"

struct bf_readQ : bf_read {
	bool sub_1011d310(int nBits) { if (m_iCurBit + nBits > m_nDataBits) m_bOverflow = true; return m_bOverflow; }
	int ReadOneBit() { return (!sub_1011d310(1)) ? sub_100bedf0() : 0; }
};
#define RB(b) ((bf_readQ *)(b))->ReadOneBit()
struct CUnk1011d310 { char sub_1011d310(int n); };

inline int ReadOneBitFlag(bf_read *buf)
{
	if (((CUnk1011d310 *)buf)->sub_1011d310(1))
		return 0;
	return buf->sub_100bedf0();
}

inline int ReadOneBitFlag2(bf_read *buf)
{
	if (!((CUnk1011d310 *)buf)->sub_1011d310(1))
		return buf->sub_100bedf0();
	return 0;
}

inline void CopyUserCmd(CUserCmd *dst, const CUserCmd *src)
{
	if (dst == src)
		return;
	dst->command_number = src->command_number;
	dst->m_fl08 = src->m_fl08;
	dst->msec = src->msec;
	dst->frametime = src->frametime;
	*(QAngle *)&dst->viewangles = *(const QAngle *)&src->viewangles;
	dst->forwardmove = src->forwardmove;
	dst->sidemove = src->sidemove;
	dst->upmove = src->upmove;
	dst->m_b2c = src->m_b2c;
	dst->buttons = src->buttons;
	dst->m_n34 = src->m_n34;
	dst->impulse = src->impulse;
	dst->m_n3c = src->m_n3c;
	dst->m_n40 = src->m_n40;
	dst->m_b44 = src->m_b44;
	dst->m_b45 = src->m_b45;
	dst->m_b46 = src->m_b46;
	dst->m_b47 = src->m_b47;
	dst->m_n48 = src->m_n48;
	dst->m_n4c = src->m_n4c;
	dst->m_vec50 = src->m_vec50;
	dst->m_b5c = src->m_b5c;
}

void sub_1011ccc0(bf_read *buf, CUserCmd *move, CUserCmd *from)
{
	CopyUserCmd(move, from);

	if (RB(buf))
		move->command_number = buf->ReadUBitLong(32);
	else
		move->command_number = from->command_number + 1;

	if (RB(buf))
		move->viewangles.x = buf->sub_100be3d0(16);
	if (RB(buf))
		move->viewangles.y = buf->sub_100be3d0(16);
	if (RB(buf))
		move->viewangles.z = buf->sub_100be3d0(8);

	if (RB(buf))
		move->forwardmove = (float)buf->sub_100be590(16);
	if (RB(buf))
		move->sidemove = (float)buf->sub_100be590(16);
	if (RB(buf))
		move->upmove = (float)buf->sub_100be590(16);

	if (RB(buf))
		move->buttons = buf->ReadUBitLong(32);
	if (RB(buf))
		move->impulse = (unsigned char)buf->ReadUBitLong(8);

	int msec;
	move->m_b2c = (unsigned char)buf->ReadUBitLong(8);
	msec = buf->ReadUBitLong(8);
	move->msec = msec;
	move->msec = (move->msec > 0xfa) ? 0xfa : ((move->msec < 0) ? 0 : move->msec);
	move->frametime = (float)move->msec * 0.001f;
	move->frametime = (move->frametime > 0.25f) ? 0.25f : ((move->frametime < 0.0f) ? 0.0f : move->frametime);

	move->m_b44 = RB(buf) != 0;
	move->m_b45 = RB(buf) != 0;

	if (RB(buf))
		move->m_n4c = buf->ReadUBitLong(5);
	if (RB(buf))
		buf->sub_100bea10(move->m_vec50);
	if (RB(buf))
		move->m_fl08 = (float)buf->ReadUBitLong(8);
	if (RB(buf))
		move->m_b47 = (unsigned char)buf->ReadUBitLong(8);

	if (RB(buf))
		move->m_b46 = (unsigned char)buf->ReadUBitLong(8);
}
// END FUNCTION

// FUNCTION: 0x1011d2e0 size=0x19
#include "Vector.h"
Vector &Vector::sub_1011d2e0(const Vector &v)
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
// END FUNCTION

// FUNCTION: 0x1011d310 size=0x1a
struct CUnk1011d310
{
	int m_n0;
	int m_n4;
	int m_nLimit8;
	int m_nCurrentC;
	char m_bFlag10;

	char sub_1011d310(int a);
};

// TARGET: sub_1011d310
char CUnk1011d310::sub_1011d310(int a)
{
	int sum = m_nCurrentC + a;
	if (sum > m_nLimit8) {
		m_bFlag10 = 1;
	}
	return m_bFlag10;
}
// END FUNCTION

// FUNCTION: 0x1011d340 size=0x77
#include "bf_read.h"

// TARGET: bf_read::ReadUBitLong
#pragma inline_depth(0)
unsigned int pcd_ReadUBitLong_1011d340(bf_read *p, int numbits)
{
	return p->ReadUBitLong(numbits);
}
// END FUNCTION

// FUNCTION: 0x1011d3e0 size=0x42
#include "CServerGameClients.h"
#include "CGlobalEntityList.h"
struct CSGC_EntView { char m_pad[0xa8]; int m_n0a8; };
void sub_100d1f70(int a, int b);
void CServerGameClients::vfunc9(CServerGameClients_Edict *pEdict, int a)
{
	CSGC_EntView *pEnt = 0;
	if (pEdict && pEdict->m_pUnk)
		pEnt = (CSGC_EntView *)pEdict->m_pUnk->vfunc4();
	sub_100d1f70(!pEnt ? 0 : pEnt->m_n0a8, a);
}
// END FUNCTION

// FUNCTION: 0x1011d450 size=0x30
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CServerGameClients.h"
extern CGlobalEntityList g_106eb5d8;
struct CEntV114 { virtual void v0(); };
void CServerGameClients::vfunc10()
{
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0);
	while (pEnt) {
		(*(void (__fastcall ***)(CBaseEntity *))pEnt)[114](pEnt);
		pEnt = g_106eb5d8.sub_100f7060(pEnt);
	}
}
// END FUNCTION

// FUNCTION: 0x1011d490 size=0xc
extern int g_1070b25c;
void __fastcall sub_1011d490(void *, int, int value)
{
	g_1070b25c = value;
}
// END FUNCTION

// FUNCTION: 0x1011d4b0 size=0xe0
#include "CBaseEntity.h"
#include "CServerGameClients.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
struct SUnknown { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual CBaseEntity *GetBaseEntity(); };
struct SEdict { char pad[0x40]; SUnknown *pUnk; };
extern float g_1070d1b0[3];

struct IEngineEntFull {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
    virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
    virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
    virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37();
    virtual SEdict *PEntityOfEntIndex(int index);
};
extern IEngineEntFull *g_1070b22c;
typedef float *(__fastcall *Slot196Fn)(CBaseEntity *, void **, int);

// TARGET: CServerGameClients::vfunc13
void CServerGameClients::vfunc13(void *pEdict, float *pOut)
{
    CBaseEntity *pEnt;
    SEdict *e = (SEdict *)pEdict;
    {
        ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
        if (!e)
            e = g_1070b22c->PEntityOfEntIndex(0);
        if (e && e->pUnk)
            pEnt = e->pUnk->GetBaseEntity();
        else
            pEnt = 0;
    }
    if (pEnt) {
        float tmp[3];
        void **vt = *(void ***)pEnt;
        float *p = ((Slot196Fn)vt[196])(pEnt, vt, (int)tmp);
        pOut[0] = p[0];
        pOut[1] = p[1];
        pOut[2] = p[2];
        return;
    }
    pOut[0] = g_1070d1b0[0];
    pOut[1] = g_1070d1b0[1];
    pOut[2] = g_1070d1b0[2];
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
