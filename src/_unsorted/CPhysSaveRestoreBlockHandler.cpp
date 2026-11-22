// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10043c20 size=0x6
#include "CPhysSaveRestoreBlockHandler.h"
namespace lifted {
extern char g_10539b54;
}
const char *CPhysSaveRestoreBlockHandler::GetBlockName()
{
    return &lifted::g_10539b54;
}
// END FUNCTION

// FUNCTION: 0x10043c40 size=0x11
#include "CPhysSaveRestoreBlockHandler.h"

void CPhysSaveRestoreBlockHandler::PreSave(CSaveRestoreData *pData)
{
    ((int *)m_blockHeader)[0] = 0;
    ((int *)m_blockHeader)[1] = 0;
}
// END FUNCTION

// FUNCTION: 0x10043c70 size=0x25f
#include "CPhysSaveRestoreBlockHandler.h"
#include "CSave.h"
#include "CBaseEntity.h"

struct VectorOp : Vector
{
	VectorOp &sub_1003e4b0(const Vector &v);
};

struct PhysObjectHeader_t
{
	int type;
	unsigned int hEntity;
	int fieldName;
	int nObjects;
	int modelName;
	float bbminsx, bbminsy, bbminsz;
	Vector bbmaxs;
	float sphereRadius;
	int m30;

	PhysObjectHeader_t &sub_10047190(const PhysObjectHeader_t &src);
	PhysObjectHeader_t *sub_10046a90(const PhysObjectHeader_t *src);
};

struct QueuedItem_t
{
	PhysObjectHeader_t header;
	void **ppPhysObj;

	QueuedItem_t(const QueuedItem_t &src)
	{
		header.sub_10047190(src.header);
		ppPhysObj = src.ppPhysObj;
	}
	void Copy(const QueuedItem_t &src)
	{
		header.sub_10046a90(&src.header);
		ppPhysObj = src.ppPhysObj;
	}
	__forceinline void Assign(const QueuedItem_t &o)
	{
		header.type = o.header.type;
		header.hEntity = o.header.hEntity;
		header.fieldName = o.header.fieldName;
		header.nObjects = o.header.nObjects;
		header.modelName = o.header.modelName;
		header.bbminsx = o.header.bbminsx;
		header.bbminsy = o.header.bbminsy;
		header.bbminsz = o.header.bbminsz;
		((VectorOp &)header.bbmaxs).sub_1003e4b0(o.header.bbmaxs);
		header.sphereRadius = o.header.sphereRadius;
		header.m30 = o.header.m30;
		ppPhysObj = o.ppPhysObj;
	}
};

struct physsaveparams_t
{
	CSave *pSave;
	void *pObject;
	int type;
};

struct PhysSaveEnv
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
	virtual void Save(const physsaveparams_t &params);
};

struct PhysBlockHeader_t
{
	int nSaved;
	int nTick;
};

extern PhysSaveEnv *g_10723940;
extern int g_10723938;
extern char g_1053c410[];
extern "C" void *memmove(void *, const void *, unsigned int);

struct CPhysSavePQ
{
	typedef bool (*LessFunc)(QueuedItem_t const &, QueuedItem_t const &);

	CUtlVector<QueuedItem_t> m_heap;
	LessFunc m_LessFunc;

	int Count() const { return m_heap.Count(); }
	QueuedItem_t const &ElementAtHead() const { return m_heap.Element(0); }

	void Swap(int index1, int index2)
	{
		QueuedItem_t tmp = m_heap[index1];
		m_heap[index1].Copy(m_heap[index2]);
		m_heap[index2].Assign(tmp);
	}

	void RemoveAtHead()
	{
		if (m_heap.m_Size > 0)
		{
			memmove(&m_heap.Element(0), &m_heap.Element(m_heap.m_Size - 1), sizeof(QueuedItem_t));
			--m_heap.m_Size;
		}
		int index = 0;
		int count = Count();
		if (!count)
			return;
		int half = count / 2;
		int larger = index;
		while (index < half)
		{
			int child = ((index + 1) * 2) - 1;
			if (child < count)
			{
				if (m_LessFunc(m_heap[index], m_heap[child]))
					larger = child;
			}
			child++;
			if (child < count)
			{
				if (m_LessFunc(m_heap[larger], m_heap[child]))
					larger = child;
			}
			if (larger == index)
				break;
			Swap(index, larger);
			index = larger;
		}
	}
};

struct CPhysSaveHandlerView
{
	int m_pad0[3];
	CPhysSavePQ m_QueuedSaves;	// 0x0c
	int m_pad24[(0x98 - 0x24) / 4];
	PhysBlockHeader_t m_blockHeader;	// 0x98

	void Save(CSave *pSave)
	{
		m_blockHeader.nTick = g_10723938;
		m_blockHeader.nSaved = m_QueuedSaves.Count();
		while (m_QueuedSaves.Count())
		{
			const QueuedItem_t &item = m_QueuedSaves.ElementAtHead();
			CBaseEntity *pOwner = ((const EHANDLE &)item.header.hEntity).Get();
			if (pOwner)
			{
				pSave->vfunc2((void *)&item, g_1053c410);
				pSave->vfunc4();
				if (item.header.nObjects)
				{
					for (int i = 0; i < item.header.nObjects; i++)
					{
						pSave->vfunc4();
						void *pObj = item.ppPhysObj[i];
						if (g_10723940 && pObj)
						{
							physsaveparams_t params;
							params.pSave = pSave;
							params.pObject = pObj;
							params.type = item.header.type;
							g_10723940->Save(params);
						}
						pSave->vfunc6();
					}
				}
				pSave->vfunc6();
			}
			m_QueuedSaves.RemoveAtHead();
		}
	}
};

void CPhysSaveRestoreBlockHandler::Save(ISave *pSave)
{
	((CPhysSaveHandlerView *)this)->Save((CSave *)pSave);
}
// END FUNCTION

// FUNCTION: 0x10043f70 size=0x2e
// TARGET: CPhysSaveRestoreBlockHandler::WriteSaveHeaders
#include "CPhysSaveRestoreBlockHandler.h"
#include "CSave.h"

extern char g_1053c340[];
extern char g_1053c344[];  // a datamap_t the game's initializer fills in, not a string

void CPhysSaveRestoreBlockHandler::WriteSaveHeaders(ISave *pSave) {
    ((CSave *)pSave)->vfunc8(g_1053c340, 1);
    ((CSave *)pSave)->vfunc2(m_blockHeader, g_1053c344);
}
// END FUNCTION

// FUNCTION: 0x10043fb0 size=0x41
#include "CPhysSaveRestoreBlockHandler.h"
#include "CAnchorList.h"

// m_QueuedSaves' vector (CUtlPriorityQueue<QueuedItem_t>::m_heap) as this body reads it
struct CPhysSaveQueueView
{
	void *m_pqMemory;
	int m_pqAllocationCount;
	int m_pqGrowSize;
	int m_pqSize;
	void *m_pqElements;
};

void CPhysSaveRestoreBlockHandler::PostSave()
{
	((CPhysSaveQueueView *)&m_QueuedSaves)->m_pqSize = 0;
	if (((CPhysSaveQueueView *)&m_QueuedSaves)->m_pqGrowSize != -1) {
		if (((CPhysSaveQueueView *)&m_QueuedSaves)->m_pqMemory) {
			g_109f3624(((CPhysSaveQueueView *)&m_QueuedSaves)->m_pqMemory);
			((CPhysSaveQueueView *)&m_QueuedSaves)->m_pqMemory = 0;
		}
		((CPhysSaveQueueView *)&m_QueuedSaves)->m_pqAllocationCount = 0;
	}
	((CPhysSaveQueueView *)&m_QueuedSaves)->m_pqElements = ((CPhysSaveQueueView *)&m_QueuedSaves)->m_pqMemory;
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

// TARGET: CPhysSaveRestoreBlockHandler::PreRestore
void CPhysSaveRestoreBlockHandler::PreRestore()
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

// TARGET: CPhysSaveRestoreBlockHandler::ReadRestoreHeaders
void CPhysSaveRestoreBlockHandler::ReadRestoreHeaders(IRestore *pSource)
{
	ISaveSourceView *pView = (ISaveSourceView *)pSource;
	m_fDoLoad = pView->s13() == g_1053c340;
	pView->s2(&m_blockHeader, g_1053c344);
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

void CPhysSaveRestoreBlockHandler::Restore(IRestore *pRestore, bool fCreatePlayers, int nUnused)
{
	if (m_fDoLoad)
	{
		if (g_10723940)
		{
			PhysTrace49 req;
			req.type = 1;
			req.ver = g_10723938;
			req.count = *(int *)(m_blockHeader + 4);
			g_10723940->v49(&req);
		}
		PhysHeader header;
		while ((*(int *)m_blockHeader)--)
		{
			((CRestore *)pRestore)->vfunc2((CBaseEntity *)&header, (int)&g_1053c410);
			((CRestore *)pRestore)->vfunc5();
			if (header.hEntity != 0)
			{
				CBaseEntity *pOwner = ((PhysEntList *)EHandleDetail::g_10566458)->sub_100290c0(header.hEntity);
				unsigned short iQueued = ((PhysQueueMap *)&m_QueuedRestores)->Find(pOwner);
				if (iQueued != 0xffff)
				{
					if (pOwner->vfunc128() && header.m_nItems > 0)
					{
						CPhysObjectDesc *pItem = ((PhysQueueMap *)&m_QueuedRestores)->Element(iQueued)->FindItem(header.m_nKey);
						if (pItem)
						{
							int nObjects = header.m_nItems < pItem->m_nItems ? header.m_nItems : pItem->m_nItems;
							if (pItem->m_nType == 1 && nObjects == 1)
							{
								sub_100443e0((CRestore *)pRestore, (CPhysRestoreRecord *)&header, pItem, nObjects);
							}
							else
							{
								void **ppPhysObj = pItem->m_pItems;
								for (int i = 0; i < nObjects; i++)
								{
									((CRestore *)pRestore)->vfunc5();
									if (g_10723940)
									{
										PhysTrace50 r;
										r.pRestore = (CRestore *)pRestore;
										r.item = ppPhysObj + i;
										r.key = header.m_nId;
										r.pEnt = header.hEntity.Get();
										r.psz = header.m_pszName ? header.m_pszName : g_106b8540;
										r.zero = 0;
										r.pTracer = g_10723940;
										r.g = g_10580180;
										g_10723940->v50(&r);
									}
									((CRestore *)pRestore)->vfunc8();
								}
							}
						}
					}
					else
						(*(void (__fastcall ***)(CBaseEntity *))pOwner)[223](pOwner);
				}
			}
			((CRestore *)pRestore)->vfunc8();
		}
	}
}
// END FUNCTION
