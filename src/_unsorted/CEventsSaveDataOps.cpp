// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100cda60 size=0x40
#include "CEventsSaveDataOps.h"
#include "CRestore.h"
#include "COutputEvent.h"

struct CUnknownCount100cda60 {
    char pad[0x10];
    short nCount;
};

struct CUnknownEvents100cda60 {
    COutputEvent *pEvents;
    int unk4;
    CUnknownCount100cda60 *pCount;
};

// TARGET: CEventsSaveDataOps::vfunc1
void CEventsSaveDataOps::vfunc1(void *pData, CRestore *pRestore)
{
    CUnknownEvents100cda60 *pEvents = (CUnknownEvents100cda60 *)pData;
    int i = 0;
    COutputEvent *pOutput = pEvents->pEvents;
    if (pEvents->pCount->nCount > i) {
        do {
            int nElements = pRestore->vfunc14();
            pOutput->sub_100cd870(pRestore, nElements);
            i++;
            pOutput++;
        } while (i < pEvents->pCount->nCount);
    }
}
// END FUNCTION
