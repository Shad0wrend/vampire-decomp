// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
