// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10043c20 size=0x6
#include "CPhysSaveRestoreBlockHandler.h"
namespace lifted {
extern char g_10539b54;
}
int CPhysSaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_10539b54;
}
// END FUNCTION

// FUNCTION: 0x10043c40 size=0x11
struct CSaveBlockFields10043c40 {
    char pad[0x98];
    int field98;
    int field9c;
    void sub_10043c40(int a);
};
void CSaveBlockFields10043c40::sub_10043c40(int a)
{
    field98 = 0;
    field9c = 0;
}
// END FUNCTION

// FUNCTION: 0x10043f70 size=0x2e
// TARGET: CPhysSaveRestoreBlockHandler::vfunc3
#include "CPhysSaveRestoreBlockHandler.h"
#include "CSave.h"

extern char g_1053c340[];
extern char g_1053c344[];  // a datamap_t the game's initializer fills in, not a string

void CPhysSaveRestoreBlockHandler::vfunc3(CSave *pSave) {
    pSave->vfunc8(g_1053c340, 1);
    pSave->vfunc2(m_data98, g_1053c344);
}
// END FUNCTION

// FUNCTION: 0x10043fb0 size=0x41
#include "CPhysSaveRestoreBlockHandler.h"
#include "CAnchorList.h"

void CPhysSaveRestoreBlockHandler::vfunc4()
{
	m_pqSize = 0;
	if (m_pqGrowSize != -1) {
		if (m_pqMemory) {
			g_109f3624(m_pqMemory);
			m_pqMemory = 0;
		}
		m_pqAllocationCount = 0;
	}
	m_pqElements = m_pqMemory;
}
// END FUNCTION

// FUNCTION: 0x10044020 size=0x3c
#include "CPhysSaveRestoreBlockHandler.h"
#include "CUnknown100f6d80.h"

extern CUnknown100f6d80 g_106eb5d8;
extern void *g_10723940;

struct CUnknown10723940
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38(); virtual void vfunc39();
	virtual void vfunc40(); virtual void vfunc41(); virtual void vfunc42(); virtual void vfunc43(); virtual void vfunc44();
	virtual void vfunc45(); virtual void vfunc46(); virtual void vfunc47(); virtual void vfunc48();
	virtual void vfunc49(int *pResult);
};

// TARGET: CPhysSaveRestoreBlockHandler::vfunc5
void CPhysSaveRestoreBlockHandler::vfunc5()
{
	int local[3];
	g_106eb5d8.sub_100f6d80(this ? (int)this + 8 : 0);
	if (g_10723940) {
		local[0] = 0;
		((CUnknown10723940 *)g_10723940)->vfunc49(local);
	}
}
// END FUNCTION

// FUNCTION: 0x10044070 size=0x34
#include "CPhysSaveRestoreBlockHandler.h"

extern short g_1053c340;
extern char g_1053c344[];

struct ISaveSourceView
{
	virtual void s0(); virtual void s1();
	virtual void s2(void *pBlock, const char *pszName);
	virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12();
	virtual short s13();
};

// TARGET: CPhysSaveRestoreBlockHandler::vfunc6
void CPhysSaveRestoreBlockHandler::vfunc6(void *pSource)
{
	ISaveSourceView *pView = (ISaveSourceView *)pSource;
	m_bMatch40 = pView->s13() == g_1053c340;
	pView->s2(&m_data98, g_1053c344);
}
// END FUNCTION

// FUNCTION: 0x100440c0 size=0x27b
#include "vampire_all.h"
#include "CPhysSaveRestoreBlockHandler.h"
#include "CRestore.h"
#include "CUtlRBTreeFind16.h"
#include "CBaseEntity.h"

struct PhysTracer
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
	virtual void v49(void *p); virtual void v50(void *p);
};
struct PhysTrace49 { int type; int count; int ver; };
struct PhysTrace50 { CRestore *pRestore; void *item; int key; CBaseEntity *pEnt; const char *psz; int zero; PhysTracer *pTracer; int g; };
struct PhysItemVec { CPhysObjectDesc *m_pData; int a; int b; int m_nCount;
	CPhysObjectDesc *FindItem(int key)
	{
		for (int i = 0; i < m_nCount; i++)
			if (m_pData[i].m_nKey == key)
				return &m_pData[i];
		return 0;
	}
};
struct PhysHeader
{
	int m_nId;
	EHANDLE hEntity;
	int m_nKey;
	int m_nItems;
	const char *m_pszName;
	int m_rest[8];
	PhysHeader() { memset(this, 0, sizeof(*this)); }
};
struct PhysEntList : EHandleEntityList
{
	CBaseEntity *sub_100290c0(const CBaseHandle &h);
};
extern PhysTracer *g_10723940;
extern int g_10723938;
extern int g_10580180;
extern int g_109f0b7c;
extern int g_1053c410;	// the datamap of the physics object header
struct PhysQueueNode { CBaseEntity *key; PhysItemVec *elem; };
struct PhysQueueMap
{
	int m_t0, m_t4, m_t8, m_tc, m_t10, m_t14;
	int m_n18;
	unsigned short Find(CBaseEntity *const &key)
	{
		PhysQueueNode dummyNode;
		dummyNode.key = key;
		if (m_n18)
			g_109f0b7c = m_n18;
		return ((CUtlRBTreeFind16 *)this)->sub_10046390(&dummyNode.key);
	}
	PhysItemVec *Element(unsigned short i) { return *(PhysItemVec **)((char *)((CUtlRBTreeFind16 *)this)->m_pElements + i * 16 + 0xc); }
};

void CPhysSaveRestoreBlockHandler::vfunc7(CRestore *pRestore, int unused, const char *pszName)
{
	if (m_bMatch40)
	{
		if (g_10723940)
		{
			PhysTrace49 req;
			req.type = 1;
			req.ver = g_10723938;
			req.count = *(int *)(m_data98 + 4);
			g_10723940->v49(&req);
		}
		PhysHeader header;
		while ((*(int *)m_data98)--)
		{
			pRestore->vfunc2((CBaseEntity *)&header, (int)&g_1053c410);
			pRestore->vfunc5();
			if (header.hEntity != 0)
			{
				CBaseEntity *pOwner = ((PhysEntList *)EHandleDetail::g_10566458)->sub_100290c0(header.hEntity);
				unsigned short iQueued = ((PhysQueueMap *)&m_Tree24)->Find(pOwner);
				if (iQueued != 0xffff)
				{
					if (pOwner->vfunc128() && header.m_nItems > 0)
					{
						CPhysObjectDesc *pItem = ((PhysQueueMap *)&m_Tree24)->Element(iQueued)->FindItem(header.m_nKey);
						if (pItem)
						{
							int nObjects = header.m_nItems < pItem->m_nItems ? header.m_nItems : pItem->m_nItems;
							if (pItem->m_nType == 1 && nObjects == 1)
							{
								sub_100443e0(pRestore, (CPhysRestoreRecord *)&header, pItem, nObjects);
							}
							else
							{
								void **ppPhysObj = pItem->m_pItems;
								for (int i = 0; i < nObjects; i++)
								{
									pRestore->vfunc5();
									if (g_10723940)
									{
										PhysTrace50 r;
										r.pRestore = pRestore;
										r.item = ppPhysObj + i;
										r.key = header.m_nId;
										r.pEnt = header.hEntity.Get();
										r.psz = header.m_pszName ? header.m_pszName : g_106b8540;
										r.zero = 0;
										r.pTracer = g_10723940;
										r.g = g_10580180;
										g_10723940->v50(&r);
									}
									pRestore->vfunc8();
								}
							}
						}
					}
					else
						(*(void (__fastcall ***)(CBaseEntity *))pOwner)[223](pOwner);
				}
			}
			pRestore->vfunc8();
		}
	}
}
// END FUNCTION
