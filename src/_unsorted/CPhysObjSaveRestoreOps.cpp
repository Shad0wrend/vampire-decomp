// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
bool CPhysObjSaveRestoreOps::vfunc2(CPhysObjSaveRestoreOps_Arg *pArg)
{
    int *pEntries = pArg->m_pEntries;
    int nCount = *(short *)(pArg->m_pCount + 0x10);
    for (int i = 0; i < nCount; i++)
    {
        if (pEntries[i] != 0)
            return false;
    }
    return true;
}
// END FUNCTION
