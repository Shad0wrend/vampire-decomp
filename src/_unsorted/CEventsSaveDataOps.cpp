// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100cd9e0 size=0x51
#include "CEventsSaveDataOps.h"
#include "CSave.h"
struct TSave;
struct TOutput { int sub_100cd7e0(TSave *pSave); };
struct CListNode100cd940;
int __fastcall sub_100cd940(CListNode100cd940 *p);
struct CEventsList100cd9e0 { char *m_pElements; int m_n4; short *m_pCount; };
void CEventsSaveDataOps::vfunc0(void *pEvents, CSave *pSave)
{
	CEventsList100cd9e0 *pList = (CEventsList100cd9e0 *)pEvents;
	TOutput *pOutput = (TOutput *)pList->m_pElements;
	for (int i = 0; i < ((short *)pList->m_pCount)[8]; i++, pOutput = (TOutput *)((char *)pOutput + 0x18)) {
		int nActions = sub_100cd940((CListNode100cd940 *)pOutput);
		pSave->vfunc10(&nActions, 1);
		pOutput->sub_100cd7e0((TSave *)pSave);
	}
}
// END FUNCTION

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

// FUNCTION: 0x100cdb00 size=0x3
#include "CEventsSaveDataOps.h"
void CEventsSaveDataOps::vfunc3(int a0)
{
}
// END FUNCTION
