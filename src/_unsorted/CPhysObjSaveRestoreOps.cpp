// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
