// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10045790 size=0x25e
#include "vampire_all.h"
#include "CPhysObjSaveRestoreOps.h"
#include "CBaseEntity.h"
#include "CUtlRBTreeFind16.h"
#include "CUtlRBTree36.h"
#include "Vector.h"
#include "string_t.h"

#define V5(a) virtual void v##a##0(); virtual void v##a##1(); virtual void v##a##2(); virtual void v##a##3(); virtual void v##a##4();
#define V10(a) V5(a) virtual void v##a##5(); virtual void v##a##6(); virtual void v##a##7(); virtual void v##a##8(); virtual void v##a##9();

__declspec(dllimport) void DevMsg(const char *, ...);

struct PhysObjSaveView
{
	V10(0) V10(1) V10(2) V10(3)
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
	virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
	virtual void *GetCollide();	// 49
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
	virtual void v55(); virtual void v56();
	virtual float GetSphereRadius();	// 57
};

struct ModelInfoSaveView
{
	virtual void v0();
	virtual const char *GetModelName(const void *model);
	virtual const void *GetModel(int index);
};

struct PhysCollideSaveView
{
	V10(0) V10(1) V10(2)
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36();
	virtual int CollideIndex(void *pCollide);	// 37
};

struct EntSaveView
{
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9) V10(10) V10(11)
	virtual void v120(); virtual void v121(); virtual void v122(); virtual void v123(); virtual void v124();
	virtual void v125(); virtual void v126(); virtual void v127();
	virtual bool ShouldSavePhysics();	// 128
};

struct HandleSaveView
{
	virtual void v0();
	virtual const CBaseHandle &GetRefEHandle() const;
};

struct SphereRadius_t
{
	float radius;
};

struct PhysObjectHeader_t
{
	PhysObjectHeader_t()
	{
		memset(this, 0, sizeof(*this));
	}

	int type;
	EHANDLE hEntity;
	string_t fieldName;
	int nObjects;
	string_t modelName;
	BBox_t bbox;
	SphereRadius_t sphere;
	int iCollide;
};

struct QueuedItem_t
{
	PhysObjectHeader_t header;
	void **ppPhysObj;
};

struct PQ { void sub_10046050(QueuedItem_t *item); };

struct TypeDescView
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	short fieldSize;
};

struct PhysMapNode
{
	PhysObjSaveView *key;
	int elem;
};

extern PhysCollideSaveView *g_1072393c;
extern CUtlRBTreeFind16 g_106bdaa4;
extern void *g_106bdabc;
extern void *g_109f0b6c;
extern CUtlRBTreeFind16 g_106bdac0;
extern void *g_106bdad8;
extern void *g_109f0b64;
extern CUtlRBTree36 g_106bdadc;
extern PQ g_106bda6c;
namespace SaveModelInfo { extern ModelInfoSaveView *g_1070b250; }

string_t sub_1042bff0(const char *psz);

inline string_t GetModelName(PhysObjSaveView *pObject)
{
	PhysMapNode dummyNode;
	dummyNode.key = pObject;
	if (g_106bdabc)
		g_109f0b6c = g_106bdabc;
	int i = g_106bdaa4.sub_10046570(&dummyNode);
	if (i == CUtlRBTreeFind16::InvalidIndex())
		return string_t(0);
	return sub_1042bff0(SaveModelInfo::g_1070b250->GetModelName(SaveModelInfo::g_1070b250->GetModel(*(int *)(g_106bdaa4.m_pElements[(unsigned short)i].m_Data + 4))));
}

inline BBox_t *GetBBox(PhysObjSaveView *pObject)
{
	PhysMapNode dummyNode;
	dummyNode.key = pObject;
	if (g_106bdad8)
		g_109f0b64 = g_106bdad8;
	int i = g_106bdac0.sub_10046750(&dummyNode);
	if (i == CUtlRBTreeFind16::InvalidIndex())
		return 0;
	int j = g_106bdadc.sub_10045de0((int *)(g_106bdac0.m_pElements[(unsigned short)i].m_Data + 4));
	if (j == CUtlRBTree36::InvalidIndex())
		return 0;
	return (BBox_t *)(g_106bdadc.m_pElements[(unsigned short)j].m_Data + 4);
}

inline void QueueSave(CBaseEntity *pOwner, TypeDescView *pTypeDesc, void **ppPhysObj, int type)
{
	bool fOnlyNotingExistence = !((EntSaveView *)pOwner)->ShouldSavePhysics();

	QueuedItem_t item;

	item.ppPhysObj = ppPhysObj;
	item.header.hEntity = ((HandleSaveView *)pOwner)->GetRefEHandle();
	item.header.type = type;
	item.header.nObjects = (!fOnlyNotingExistence) ? pTypeDesc->fieldSize : 0;
	item.header.fieldName = sub_1042bff0(pTypeDesc->fieldName);
	item.header.modelName = string_t(0);
	memset(&item.header.bbox, 0, sizeof(item.header.bbox));
	item.header.sphere.radius = 0;

	if (!fOnlyNotingExistence && type == 1)
	{
		PhysObjSaveView *pPhysObj = (PhysObjSaveView *)(*ppPhysObj);
		if (pPhysObj)
		{
			item.header.modelName = GetModelName(pPhysObj);
			item.header.iCollide = g_1072393c->CollideIndex(pPhysObj->GetCollide());
			if (item.header.modelName.pszValue == 0)
			{
				BBox_t *pBBox = GetBBox(pPhysObj);
				if (pBBox != 0)
				{
					item.header.bbox.mins = pBBox->mins;
					item.header.bbox.maxs.sub_1003e4b0(pBBox->maxs);
				}
				else
				{
					if (pPhysObj && pPhysObj->GetSphereRadius() != 0)
					{
						item.header.sphere.radius = pPhysObj->GetSphereRadius();
					}
					else
					{
						DevMsg("Don't know how to save model for physics object (class \"%s\")\n", pOwner->sub_1009f200());
					}
				}
			}
		}
	}

	g_106bda6c.sub_10046050(&item);
}

void CPhysObjSaveRestoreOps::vfunc0(SaveRestoreFieldInfo_t *pArg, ISave *unused)
{
#define pArg ((CPhysObjSaveRestoreOps_Arg *)pArg)
	if (!m_pObject04)
		return;
	QueueSave(pArg->m_pEntity, (TypeDescView *)pArg->m_pCount, (void **)pArg->m_pEntries, (int)m_pObject04);
#undef pArg
}
// END FUNCTION

// FUNCTION: 0x10045ab0 size=0x1db
#include "vampire_all.h"
#include "utlvector.h"
#include "CUtlVector56.h"
#include "CPhysObjSaveRestoreOps.h"
#include "CBaseEntity.h"

struct CPhysKey { CBaseEntity *key; CUtlVector56 *holder; };
struct CPhysHolderNew : CUtlVector56
{
	CPhysHolderNew() { m_pMemory = 0; m_allocationCount = 0; m_growSize = 0; m_size = 0; m_pElements = 0; }
};

struct CPhysTreeView
{
	bool (__cdecl *m_pLess)(const void *, const void *);
	char *m_pNodes;
	int m_pad[2];
	unsigned short m_Root;
	unsigned short m_Count;
	unsigned short sub_10046390(CPhysKey *key);
	unsigned short *sub_10047930(unsigned short i);
	unsigned short sub_10047280();
	void sub_100473c0(unsigned short n, unsigned short parent, bool left);
};
extern CPhysTreeView g_106bda84;
extern int g_106bda9c;
extern int g_109f0b7c;
extern int *sub_1042bff0(void *, void *);
void sub_10047160(void *dst, void *src);

// TARGET: CPhysObjSaveRestoreOps::vfunc1
void CPhysObjSaveRestoreOps::vfunc1(SaveRestoreFieldInfo_t *pArg, IRestore *unused)
{
#define pArg ((CPhysObjSaveRestoreOps_Arg *)pArg)
	void *pOwner = m_pObject04;
	if (!pOwner)
		return;
	int *pDst = pArg->m_pEntries;
	char *pInfo = pArg->m_pCount;
	CBaseEntity *pEnt = pArg->m_pEntity;
	CPhysKey key;
	CUtlVector56 *pHolder;
	key.key = pEnt;
	if (g_106bda9c)
		g_109f0b7c = g_106bda9c;
	unsigned short i = g_106bda84.sub_10046390(&key);
	if (i != 0xffff)
		pHolder = *(CUtlVector56 **)(g_106bda84.m_pNodes + i * 16 + 0xc);
	else
	{
		pHolder = new CPhysHolderNew;
		key.key = pEnt;
		key.holder = pHolder;
		if (g_106bda9c)
			g_109f0b7c = g_106bda9c;
		unsigned short cur = g_106bda84.m_Root;
		unsigned short parent = 0xffff;
		bool left = false;
		while (cur != 0xffff)
		{
			parent = cur;
			if (g_106bda84.m_pLess(&key, g_106bda84.m_pNodes + cur * 16 + 8))
			{
				left = true;
				cur = *g_106bda84.sub_10047930(cur);
			}
			else
			{
				left = false;
				cur = g_106bda84.sub_10047930(cur)[1];
			}
		}
		unsigned short n = g_106bda84.sub_10047280();
		g_106bda84.sub_100473c0(n, parent, left);
		g_106bda84.m_Count++;
		sub_10047160(g_106bda84.m_pNodes + n * 16 + 8, &key);
	}
	int idx = pHolder->sub_10046ba0(pHolder->m_size);
	char *pElem = pHolder->m_pMemory + idx * 0x38;
	*(int *)(pElem + 0x34) = (int)pDst;
	if (pEnt)
		*(int *)(pElem + 4) = *(int *)pEnt->vfunc1();
	else
		*(int *)(pElem + 4) = -1;
	*(void **)pElem = pOwner;
	*(int *)(pElem + 0xc) = *(short *)(pInfo + 0x10);
	{
		int tmp;
		*(int *)(pElem + 8) = *sub_1042bff0(&tmp, *(void **)(pInfo + 4));
	}
	memset(pDst, 0, *(short *)(pInfo + 0x10) * 4);
#undef pArg
}
// END FUNCTION

// FUNCTION: 0x10045d10 size=0x25
#include <string.h>

struct SPhysObjBufInfo_t
{
	char m_pad0000[0x10];
	short m_nCount;	// +0x10
};

struct SPhysObjBuf_t
{
	char *m_pData;	// +0x0
	int m_unk4;
	SPhysObjBufInfo_t *m_pInfo;	// +0x8
};

void __stdcall sub_10045d10(SPhysObjBuf_t *pBuf)
{
	memset(pBuf->m_pData, 0, (unsigned int)(pBuf->m_pInfo->m_nCount * 4));
}
// END FUNCTION

// FUNCTION: 0x10045d50 size=0x28
#include "CPhysObjSaveRestoreOps.h"
// TARGET: CPhysObjSaveRestoreOps::vfunc2
bool CPhysObjSaveRestoreOps::vfunc2(SaveRestoreFieldInfo_t *pArg)
{
#define pArg ((CPhysObjSaveRestoreOps_Arg *)pArg)
    int *pEntries = pArg->m_pEntries;
    int nCount = *(short *)(pArg->m_pCount + 0x10);
    for (int i = 0; i < nCount; i++)
    {
        if (pEntries[i] != 0)
            return false;
    }
    return true;
#undef pArg
}
// END FUNCTION
