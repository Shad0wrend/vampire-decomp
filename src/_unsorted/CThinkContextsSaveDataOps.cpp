// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100a1e30 size=0x10d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CThinkContextsSaveDataOps.h"
#include "CUtlVectorDataOps.h"
#include "CThinkSaveViews.h"
#include "ScopeTrace.h"

#define TV1(n) virtual void v##n();
#define TV10(n) TV1(n##0) TV1(n##1) TV1(n##2) TV1(n##3) TV1(n##4) TV1(n##5) TV1(n##6) TV1(n##7) TV1(n##8) TV1(n##9)
struct ISaveView12 { TV10(0) TV10(1) TV10(2) TV1(30) virtual void WriteFunction(void *pMap, const char *pname, int *data, int count); };
struct COwnerView12 { TV10(0) TV10(1) TV10(2) TV10(3) TV10(4) TV10(5) TV10(6) TV10(7) TV1(80) TV1(81) virtual void *GetDataDescMap(); };

void CThinkContextsSaveDataOps::vfunc0(void *pFieldInfo, void *pSave)
{
	ScopeTrace trace("CThinkContextsSaveDataOps::Save", g_106b8540);
	SaveRestoreFieldInfoView &fieldInfo = *(SaveRestoreFieldInfoView *)pFieldInfo;
	CUtlVector<thinkfunc_t> *pUtlVector = (CUtlVector<thinkfunc_t> *)fieldInfo.m_pField;
	{
		CThinkVecOps *pOps = GetThinkVecOps();
		SaveRestoreFieldInfoView info = { (CThinkVec *)pUtlVector, 0, 0 };
		pOps->vfunc0(&info, pSave);
	}
	COwnerView12 *pOwner = (COwnerView12 *)fieldInfo.m_pOwner;
	for (int i = 0; i < pUtlVector->Size(); i++)
	{
		void *pV = &((*pUtlVector)[i].m_a);
		((ISaveView12 *)pSave)->WriteFunction(pOwner->GetDataDescMap(), "m_pfnThink", (int *)(char *)pV, 1);
	}
}
// END FUNCTION

// FUNCTION: 0x100a1f90 size=0x125
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "datamap.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "CThinkContextsSaveDataOps.h"
#include "CUtlVectorDataOps.h"
#include "CThinkSaveViews.h"
#include "ScopeTrace.h"

struct datamap_t;
struct CThinkTypeDescView { int pad[4]; short fieldSize; };
struct CThinkRestoreOwnerView
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9();
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8(); virtual void g9();
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9();
	virtual void i0(); virtual void i1();
	virtual datamap_t *GetDataDescMap();
};
struct CThinkRestoreFieldInfo
{
	CThinkVec *pField;
	CThinkRestoreOwnerView *pOwner;
	CThinkTypeDescView *pTypeDesc;
};
struct CThinkRestoreView
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6();
	virtual int ReadFunction(datamap_t *pMap, void **ppValue, int count, int nBytesAvailable);
};

void CThinkContextsSaveDataOps::vfunc1(void *pFieldInfo, void *pRestoreIn)
{
	ScopeTrace trace("CThinkContextsSaveDataOps::Restore", g_106b8540);
	CThinkRestoreFieldInfo *pInfo = (CThinkRestoreFieldInfo *)pFieldInfo;
	CThinkVec *pUtlVector = pInfo->pField;
	CThinkVecOps *pOps = GetThinkVecOps();
	SaveRestoreFieldInfoView vectorFieldInfo = { pUtlVector, 0, 0 };
	pOps->vfunc1(&vectorFieldInfo, pRestoreIn);
	CThinkRestoreOwnerView *pOwner = pInfo->pOwner;
	for (int i = 0; i < pUtlVector->m_nSize; i++)
	{
		void *ppV = &pUtlVector->m_pMem[i].m_a;
		((CThinkRestoreView *)pRestoreIn)->ReadFunction(pOwner->GetDataDescMap(), &ppV, 1, pInfo->pTypeDesc->fieldSize);
	}
}
// END FUNCTION

// FUNCTION: 0x100a2110 size=0x6a
struct SScope { const char *a; const char *b; const char *c; };
struct SVec { char pad[0xc]; int count; };
extern "C" __declspec(dllimport) SScope g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern char g_106b8540[];
struct S100a2110 { bool sub_100a2110(SVec **pp); };
// TARGET: S100a2110::sub_100a2110
bool S100a2110::sub_100a2110(SVec **pp)
{
    g_ScopeTraceStack[g_ScopeTraceStackDepth].a = "CThinkContextsSaveDataOps::IsEmpty";
    g_ScopeTraceStack[g_ScopeTraceStackDepth].b = g_106b8540;
    g_ScopeTraceStack[g_ScopeTraceStackDepth].c = g_106b8540;
    g_ScopeTraceStackDepth++;
    int n = (*pp)->count;
    g_ScopeTraceStackDepth--;
    if (n == 0)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x100a21a0 size=0x58
#include "CThinkContextsSaveDataOps.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

void CThinkContextsSaveDataOps::vfunc3(void *pField)
{
	g_109f3620[*g_109f3680].m_pszFunc = "CThinkContextsSaveDataOps::MakeEmpty";
	g_109f3620[*g_109f3680].m_pszName = "";
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	(*g_109f3680)--;
}
// END FUNCTION
