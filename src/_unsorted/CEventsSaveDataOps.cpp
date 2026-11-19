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
void CEventsSaveDataOps::vfunc0(SaveRestoreFieldInfo_t *pEvents, ISave *pSave)
{
#define pSave ((CSave *)pSave)
	CEventsList100cd9e0 *pList = (CEventsList100cd9e0 *)pEvents;
	TOutput *pOutput = (TOutput *)pList->m_pElements;
	for (int i = 0; i < ((short *)pList->m_pCount)[8]; i++, pOutput = (TOutput *)((char *)pOutput + 0x18)) {
		int nActions = sub_100cd940((CListNode100cd940 *)pOutput);
		pSave->vfunc10(&nActions, 1);
		pOutput->sub_100cd7e0((TSave *)pSave);
	}
#undef pSave
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
void CEventsSaveDataOps::vfunc1(SaveRestoreFieldInfo_t *pData, IRestore *pRestore)
{
#define pRestore ((CRestore *)pRestore)
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
#undef pRestore
}
// END FUNCTION

// FUNCTION: 0x100cdab0 size=0x3d
#include "CEventsSaveDataOps.h"

namespace block_100cdab0 {
struct CLinkItem { char pad[0x1c]; CLinkItem *m_pNext; };
struct CListNode100cd940 { char pad[0x14]; CLinkItem *m_pFirst; int m_n18; };
int __fastcall sub_100cd940(CListNode100cd940 *p)
{
	int n = 0;
	for (CLinkItem *i = p->m_pFirst; i; i = i->m_pNext)
		n++;
	return n;
}
struct CEvEntry : CListNode100cd940 { };
struct CEvList { char pad[0x10]; short m_nCount; };
struct CEvArg { CListNode100cd940 *m_pEntries; int m_n4; CEvList *m_pList; };
}
using namespace block_100cdab0;

// TARGET: CEventsSaveDataOps::vfunc2
bool CEventsSaveDataOps::vfunc2(SaveRestoreFieldInfo_t *pEvents)
{
	CEvArg *a = (CEvArg *)pEvents;
	CListNode100cd940 *e = a->m_pEntries;
	for (int i = 0; i < a->m_pList->m_nCount; i++, e = (CListNode100cd940 *)((char *)e + 0x18))
	{
		if (sub_100cd940(e) != 0)
			return false;
		if (*(int *)((char *)e + 0x10) != 0)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x100cdb00 size=0x3
#include "CEventsSaveDataOps.h"
void CEventsSaveDataOps::vfunc3(SaveRestoreFieldInfo_t *a0)
{
}
// END FUNCTION

// FUNCTION: 0x100cdb20 size=0x15
#include "CEventsSaveDataOps.h"
namespace lifted {
struct C10003e18 { int sub_10003e18(int); };
}
bool CEventsSaveDataOps::vfunc4(SaveRestoreFieldInfo_t *a0, const char *a1)
{
#define a0 ((int)a0)
#define a1 ((int)a1)
    ((lifted::C10003e18 *)(*(int *)((char *)a0)))->sub_10003e18(a1);
    return 1;
#undef a1
#undef a0
}
// END FUNCTION
