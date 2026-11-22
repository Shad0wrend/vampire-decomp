// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 82 blocks
#include "vampire.h"

// FUNCTION: 0x100cd2a0 size=0x14
#include "COutputEvent.h"

// TARGET: COutputEvent::COutputEvent
COutputEvent::COutputEvent()
{
	int *p = (int *)this;
	p[0] = 0;
	p[3] = -1;
	p[4] = 0;
	p[5] = 0;
}
// END FUNCTION

// FUNCTION: 0x100cd2d0 size=0x1c
void sub_100cd240(void *p);

void __fastcall sub_100cd2d0(char *p)
{
	char *n = *(char **)(p + 0x14);
	while (n != 0)
	{
		char *next = *(char **)(n + 0x1c);
		sub_100cd240(n);
		n = next;
	}
}
// END FUNCTION

// FUNCTION: 0x100cd300 size=0x282
#include "COutputEvent.h"
#include "CEventAction.h"
#include "CEventQueue.h"
#include "CBaseEntity.h"
#include "CUnknown100cd640.h"
#include "CUnknown10738964.h"
#include "Tier1.h"

extern char g_106b8540[];
extern float g_104454c4;
extern CEventQueue g_106e7050;
extern CUnknown10738964 *g_106cfe54;
int sub_100cd240(int);

void COutputEvent::sub_100cd300(CVariantCopy Value, void *pActivator, void *pCaller, float flDelay)
{
	CEventAction *ev = m_pActionList;
	CEventAction *prev = 0;
	CBaseEntity *pCallerEnt = (CBaseEntity *)pCaller;

	while (ev != 0)
	{
		CUnknown100cd640 *pInput = (CUnknown100cd640 *)&ev->m_iTargetInput;
		if (ev->m_iParameter == 0)
		{
			g_106e7050.sub_100cddf0(((CUnknown100cd640 *)ev)->sub_100cd640(), pInput->sub_100cd640(), Value, ev->m_flDelay + flDelay, (CBaseEntity *)pActivator, pCallerEnt, ev->m_iIDStamp, *(CEQExtra *)&ev->m_iUnk0c);
		}
		else
		{
			CVariantCopy ValueOverride;
			ValueOverride.m_value = ev->m_iParameter;
			ValueOverride.m_hEntity = 0xffffffff;
			ValueOverride.m_fieldType = 2;
			g_106e7050.sub_100cddf0(((CUnknown100cd640 *)ev)->sub_100cd640(), pInput->sub_100cd640(), ValueOverride, ev->m_flDelay, (CBaseEntity *)pActivator, pCallerEnt, ev->m_iIDStamp, CEQExtra());
		}

		if (!g_106cfe54->vfunc1() && g_106cfe54->m_n2c)
		{
			if (ev->m_flDelay != g_104454c4)
			{
				const char *pszName = pCallerEnt ? (pCallerEnt->m_name26c ? pCallerEnt->m_name26c : g_106b8540) : "NULL";
				const char *pszClass = pCallerEnt ? (pCallerEnt->m_classname11c ? pCallerEnt->m_classname11c : g_106b8540) : "NULL";
				g_109f3630("output: (%s,%s) -> (%s,%s,%.1f)\n", pszClass, pszName, ((CUnknown100cd640 *)ev)->m_pString ? ((CUnknown100cd640 *)ev)->m_pString : g_106b8540, pInput->m_pString ? pInput->m_pString : g_106b8540, ev->m_flDelay);
			}
			else
			{
				const char *pszName = pCallerEnt ? (pCallerEnt->m_name26c ? pCallerEnt->m_name26c : g_106b8540) : "NULL";
				const char *pszClass = pCallerEnt ? (pCallerEnt->m_classname11c ? pCallerEnt->m_classname11c : g_106b8540) : "NULL";
				g_109f3630("output: (%s,%s) -> (%s,%s)\n", pszClass, pszName, ((CUnknown100cd640 *)ev)->m_pString ? ((CUnknown100cd640 *)ev)->m_pString : g_106b8540, pInput->m_pString ? pInput->m_pString : g_106b8540);
			}
		}

		if (pCallerEnt && (*(unsigned char *)&pCallerEnt->m_fDebugOverlays224 & 0x10))
			pCallerEnt->sub_100ab980(ev);

		bool bRemove = false;
		if (ev->m_nTimesToFire != -1)
		{
			ev->m_nTimesToFire--;
			if (ev->m_nTimesToFire == 0)
			{
				if (!g_106cfe54->vfunc1() && g_106cfe54->m_n2c)
				{
					const char *pszName = pCallerEnt ? (pCallerEnt->m_name26c ? pCallerEnt->m_name26c : g_106b8540) : "NULL";
					const char *pszClass = pCallerEnt ? (pCallerEnt->m_classname11c ? pCallerEnt->m_classname11c : g_106b8540) : "NULL";
					g_109f3630("Removing from action list: (%s,%s) -> (%s,%s)\n", pszClass, pszName, ((CUnknown100cd640 *)ev)->m_pString ? ((CUnknown100cd640 *)ev)->m_pString : g_106b8540, pInput->m_pString ? pInput->m_pString : g_106b8540);
				}
				bRemove = true;
			}
		}

		if (!bRemove)
		{
			prev = ev;
			ev = ev->m_pNext;
		}
		else
		{
			if (prev != 0)
				prev->m_pNext = ev->m_pNext;
			else
				m_pActionList = ev->m_pNext;

			CEventAction *next = ev->m_pNext;
			sub_100cd240((int)ev);
			ev = next;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100cd640 size=0xc
#include "CUnknown100cd640.h"
extern char g_106b8540[];
char *CUnknown100cd640::sub_100cd640()
{
	if (m_pString)
		return m_pString;
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x100cd660 size=0x4f
#include "COutputEvent.h"
void COutputEvent::sub_100cd660(void *pActivator, void *pCaller, float flDelay)
{
	CVariantCopy value;
	value.sub_1000b320(0, 0);
	sub_100cd300(value, pActivator, pCaller, flDelay);
}
// END FUNCTION

// FUNCTION: 0x100cd6d0 size=0x39
void *sub_1000ffec(int nSize);

struct CUnknown100cd6d0Action {
    void *sub_100ccf90(void *pOwner);
};

struct CUnknown100cd6d0 {
    char m_pad0000[0x14];
    void *m_pHead;
    void sub_100cd6d0(void *pOwner);
};

// TARGET: CUnknown100cd6d0::sub_100cd6d0
void CUnknown100cd6d0::sub_100cd6d0(void *pOwner)
{
    void *pAction = sub_1000ffec(0x20);
    if (pAction != 0) {
        pAction = ((CUnknown100cd6d0Action *)pAction)->sub_100ccf90(pOwner);
    } else {
        pAction = 0;
    }
    *(void **)((char *)pAction + 0x1c) = m_pHead;
    m_pHead = pAction;
}
// END FUNCTION

// FUNCTION: 0x100cd720 size=0x5
int * sub_100cd760(void);
int * g_106e6f98 = ((int * (*)(int))sub_100cd760)(0);
// END FUNCTION

// FUNCTION: 0x100cd760 size=0x56
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055e01c;
extern int g_1055dc00[2];

int *sub_100cd760()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 10, "m_Value", {0, 0}, 1, 2, 0, g_1055e01c, (void *)0 },
    };
    g_1055dc00[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1055dc00[0] = (int)&dataDesc[1];
    return g_1055dc00;
}
// END FUNCTION

// FUNCTION: 0x100cd7e0 size=0x69
extern int g_1055dc00, g_1055dc04, g_1055da88, g_1055da8c;

struct TSave {
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual int v3(const char *name, void *data, int a, int b, int c);
};

struct TOutput {
	char pad[0x14];
	TOutput *next0;
	char pad2[4];
	TOutput *next;
	int sub_100cd7e0(TSave *save);
};

int TOutput::sub_100cd7e0(TSave *save)
{
	if (!save->v3("Value", this, 0, g_1055dc00, g_1055dc04))
		return 0;
	for (TOutput *p = next0; p; p = p->next) {
		if (!save->v3("EntityOutput", p, 0, g_1055da88, g_1055da8c))
			return 0;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100cd870 size=0x9e
#include "CBaseEntity.h"
#include "COutputEvent.h"
#include "CEventAction.h"
#include "CRestore.h"

extern int g_1055dc00, g_1055dc04, g_1055da88, g_1055da8c;

// The first slots of the restore context's vtable; slot 3 (ReadFields) answers whether the read worked.
struct CRestoreView {
    virtual void v0();
    virtual void v1();
    virtual int v2(CBaseEntity *pEnt, int map);
    virtual int vfunc3(int a, int b, int c, int d, int e);
};

int COutputEvent::sub_100cd870(CRestore *pRestore, int nElements)
{
    CRestoreView *pView = (CRestoreView *)pRestore;
    if (!pView->vfunc3((int)"Value", (int)this, 0, g_1055dc00, g_1055dc04))
        return 0;
    *(CEventAction **)(m_data + 0x14) = 0;
    for (int i = 0; i < nElements; i++) {
        CEventAction *pAction = (CEventAction *)CEventAction::sub_100cd220(0x20);
        pAction = pAction ? pAction->sub_100ccf90(0) : 0;
        if (!pView->vfunc3((int)"EntityOutput", (int)pAction, 0, g_1055da88, g_1055da8c))
            return 0;
        pAction->m_pNext = *(CEventAction **)(m_data + 0x14);
        *(CEventAction **)(m_data + 0x14) = pAction;
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100cd940 size=0x12
struct CListNode100cd940 {
    char pad0[0x14];
    CListNode100cd940 *next14;
    char pad1[4];
    CListNode100cd940 *next1c;
};

int __fastcall sub_100cd940(CListNode100cd940 *p)
{
    int n = 0;
    CListNode100cd940 *q = p->next14;
    while (q != 0) {
        q = q->next1c;
        n++;
    }
    return n;
}
// END FUNCTION

// FUNCTION: 0x100cd970 size=0x1e
// TARGET: CUnk100cd970::sub_100cd970
struct CUnk100cd970Node
{
    char pad[0x1c];
    CUnk100cd970Node *m_next;
};
struct CUnk100cd970
{
    char pad[0x14];
    CUnk100cd970Node *m_head;
    CUnk100cd970Node *sub_100cd970(int index);
};
CUnk100cd970Node *CUnk100cd970::sub_100cd970(int index)
{
    int i; i = 0;
    CUnk100cd970Node *p = m_head;
    while (p != 0)
    {
        if (i == index)
        {
            return p;
        }
        p = p->m_next;
        i++;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100cd9a0 size=0x5
#include "CEventsSaveDataOps.h"
CEventsSaveDataOps g_106e70d8;
// END FUNCTION

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

// FUNCTION: 0x100cdb50 size=0x3a
struct CListNode100cdb50 {
	char pad[0x18];
	CListNode100cdb50 *next;
};

struct CListHolder100cdb50 {
	CListNode100cdb50 *head;
};

void sub_1000205e(void *p);

void __fastcall sub_100cdb50(CListHolder100cdb50 *pThis)
{
	if (pThis->head) {
		CListNode100cdb50 *n = pThis->head->next;
		while (n) {
			pThis->head->next = n->next;
			sub_1000205e(n);
			n = pThis->head->next;
		}
		sub_1000205e(pThis->head);
	}
}
// END FUNCTION

// FUNCTION: 0x100cdba0 size=0x82
#include "CUnknown100cdba0.h"

void *sub_100cdc60(unsigned int size);

void CUnknown100cdba0::sub_100cdba0(CUnknown100cdba0Data data, int key)
{
	for (CUnknown100cdba0Node *p = m_pHead; p; p = p->m_pNext) {
		if (p->m_key == key) {
			p->m_data = data;
			return;
		}
	}
	CUnknown100cdba0Node *node;
	CUnknown100cdba0Node *mem = (CUnknown100cdba0Node *)sub_100cdc60(sizeof(CUnknown100cdba0Node));
	if (mem) {
		mem->m_data.m_f0 = 0;
		mem->m_data.m_fc = -1;
		mem->m_data.m_f10 = 0;
		node = mem;
	} else {
		node = 0;
	}
	node->m_data = data;
	node->m_key = key;
	CUnknown100cdba0Node *head = m_pHead;
	if (head == 0) {
		m_pHead = node;
		node->m_pNext = head;
		return;
	}
	node->m_pNext = head;
	m_pHead = node;
}
// END FUNCTION

// FUNCTION: 0x100cdc60 size=0x10
namespace lifted {
extern char g_106e6fc8;
struct C1000bbd6 { int sub_1000bbd6(int); };
}
int sub_100cdc60(int a0)
{
    return ((lifted::C1000bbd6 *)((int)&lifted::g_106e6fc8))->sub_1000bbd6(a0);
}
// END FUNCTION

// FUNCTION: 0x100cdc80 size=0x10
namespace lifted {
extern char g_106e6fc8;
struct C1000330f { int sub_1000330f(int); };
}
int sub_100cdc80(int a0)
{
    return ((lifted::C1000330f *)((int)&lifted::g_106e6fc8))->sub_1000330f(a0);
}
// END FUNCTION

// FUNCTION: 0x100cdca0 size=0xa
#define PCD_INITIALIZERS
#include "CUnk100cdd20.h"
CUnk100cdd20 g_106e7050;
// END FUNCTION

// FUNCTION: 0x100cdd20 size=0x28
#include "CUnk100cdd20.h"

CUnk100cdd20::CUnk100cdd20()
{
	sub_1000f3ad();
}
// END FUNCTION

// FUNCTION: 0x100cdd60 size=0x5
#define PCD_INITIALIZERS
#include "CUnk100cdd20.h"
#include "CEventQueue.h"
// TARGET: CUnk100cdd20::~CUnk100cdd20
// the game's 0x100cdd60: a tail call (jmp) of CEventQueue::sub_100cdda0
CUnk100cdd20::~CUnk100cdd20()
{
	((CEventQueue *)this)->CEventQueue::sub_100cdda0();
}
// END FUNCTION

// FUNCTION: 0x100cdd80 size=0x5
#include "CEventQueue.h"
struct CWrap100cdd80 { void sub_100cdd80(); };
// TARGET: sub_100cdd80
// the game's 0x100cdd80: a tail call (jmp) of CEventQueue::sub_100cdda0
void CWrap100cdd80::sub_100cdd80()
{
	((CEventQueue *)this)->CEventQueue::sub_100cdda0();
}
// END FUNCTION

// FUNCTION: 0x100cdda0 size=0x38
// TARGET: CEventQueue::sub_100cdda0
#include "CEventQueue.h"

extern int g_106e70e4;

void CEventQueue::sub_100cdda0()
{
	CEQEvent *p = m_pHead;
	while (p)
	{
		CEQEvent *pNext = p->m_pNext;
		delete p;
		p = pNext;
	}
	m_pHead = 0;
	m_n54 = 0;
	g_106e70e4 = 0;
}
// END FUNCTION

// FUNCTION: 0x100cddf0 size=0xd9
#include "CEventQueue.h"
#include "CBaseEntity.h"
#include "CVDmg_t.h"
extern "C" void *__cdecl memset(void *, int, unsigned int);

inline const char *MAKE_STRING(const char *s) { return *s ? s : 0; }

void CEventQueue::sub_100cddf0(const char *pszTarget, const char *pszTargetInput, CVariantCopy Value, float fireDelay, CBaseEntity *pActivator, CBaseEntity *pCaller, int nOutputID, int nExtra)
{
	CEQEvent *pEvent = new CEQEvent;
	memset(pEvent, 0, 0x50);
	pEvent->m_n34 = 0;
	pEvent->m_flFireTime = fireDelay + gpGlobals->curtime;
	pEvent->m_pszTarget = MAKE_STRING(pszTarget);
	((EHANDLE &)pEvent->m_hTarget) = (CBaseEntity *)0;
	pEvent->m_pszTargetInput = MAKE_STRING(pszTargetInput);
	((EHANDLE &)pEvent->m_hActivator) = pActivator;
	((EHANDLE &)pEvent->m_hCaller) = pCaller;
	*(CVariantCopy *)&pEvent->m_n20 = Value;
	pEvent->m_nOutputID = nOutputID;
	pEvent->m_n3c = nExtra;
	((CVDmgBlock16_t *)pEvent->m_block40)->sub_10204270();
	sub_100ce210(pEvent);
}
// END FUNCTION

// FUNCTION: 0x100cdf10 size=0xe1
#include "CEventQueue.h"
#include "CBaseEntity.h"
#include "CVDmg_t.h"
extern "C" void *__cdecl memset(void *, int, unsigned int);


void CEventQueue::sub_100cdf10(CBaseEntity *pTarget, const char *pszAction, CVariantCopy Value, float fireDelay, CBaseEntity *pActivator, CBaseEntity *pCaller, int nOutputID, int nExtra)
{
	CEQEvent *pEvent = new CEQEvent;
	memset(pEvent, 0, 0x50);
	pEvent->m_n34 = 0;
	pEvent->m_n3c = nExtra;
	pEvent->m_flFireTime = fireDelay + gpGlobals->curtime;
	pEvent->m_pszTarget = 0;
	if (pTarget)
		pEvent->m_hTarget = *pTarget->vfunc1();
	else
		pEvent->m_hTarget = -1;
	pEvent->m_pszTargetInput = *pszAction ? pszAction : 0;
	if (pActivator)
		pEvent->m_hActivator = *pActivator->vfunc1();
	else
		pEvent->m_hActivator = -1;
	if (pCaller)
		pEvent->m_hCaller = *pCaller->vfunc1();
	else
		pEvent->m_hCaller = -1;
	pEvent->m_n3c = 0;
	*(CVariantCopy *)&pEvent->m_n20 = Value;
	pEvent->m_nOutputID = nOutputID;
	((CVDmgBlock16_t *)pEvent->m_block40)->sub_10204270();
	sub_100ce210(pEvent);
}
// END FUNCTION

// FUNCTION: 0x100ce040 size=0x69
#include "CBaseEntity.h"
#include "CEventQueue.h"

void CEventQueue::sub_100ce040(CBaseEntity *pTarget, const char *pszAction, float fireDelay, CBaseEntity *pActivator, CBaseEntity *pCaller, int nOutputID)
{
	CVariantCopy Value;
	Value.sub_1000b320(0, 0);
	sub_100cdf10(pTarget, pszAction, Value, fireDelay, pActivator, pCaller, nOutputID, CEQExtra());
}
// END FUNCTION

// FUNCTION: 0x100ce0d0 size=0xb7
#include "CEventQueue.h"
#include "CVDmg_t.h"

struct GlobalVarsView
{
	char m_pad0000[0xc];
	float curtime;
};
extern GlobalVarsView *g_1070b228;
void *operator new(unsigned int);
extern "C" void *memset(void *, int, unsigned int);

// TARGET: CEventQueue::sub_100ce0d0
void CEventQueue::sub_100ce0d0(int a, float fireDelay, int nOutputID)
{
	CVariantCopy Value;
	Value.sub_1000b320(0, 0);
	CEQEvent *pEvent = new CEQEvent;
	memset(pEvent, 0, sizeof(CEQEvent));
	pEvent->m_n34 = 1;
	float fireTime = fireDelay + g_1070b228->curtime;
	*(int *)&pEvent->m_pszTarget = 0;
	*(volatile float *)&pEvent->m_flFireTime = fireTime;
	*(volatile int *)&pEvent->m_hTarget = -1;
	*(volatile int *)&pEvent->m_pszTargetInput = 0;
	*(volatile int *)&pEvent->m_hActivator = -1;
	*(volatile int *)&pEvent->m_hCaller = -1;
	*(CVariantCopy *)&pEvent->m_n20 = Value;
	pEvent->m_nOutputID = nOutputID;
	pEvent->m_pRefCount = (int *)a;
	pEvent->m_n3c = 0;
	((CVDmgBlock16_t *)pEvent->m_block40)->sub_10204270();
	sub_100ce210(pEvent);
}
// END FUNCTION

// FUNCTION: 0x100ce1c0 size=0x37
#include "CEventQueue.h"

// TARGET: CEventQueue::sub_100ce1c0
void CEventQueue::sub_100ce1c0(CEQEvent *pEvent)
{
	CEQEvent *pCopy = (CEQEvent *)new CEQEventFull(*(const CEQEventFull *)pEvent);
	sub_100ce210(pCopy);
}
// END FUNCTION

// FUNCTION: 0x100ce210 size=0x79
#include "CEventQueue.h"

extern float g_106e70e4;
extern float g_106e70ec;

void CEventQueue::sub_100ce210(CEQEvent *pEvent)
{
	if (gpGlobals->curtime < g_106e70e4) {
		pEvent->m_flFireTime = pEvent->m_flFireTime + ((g_106e70e4 - gpGlobals->curtime) + 0.005);
	}
	CEQEvent *pCurrent = (CEQEvent *)this;
	while (pCurrent->m_pNext && !(pCurrent->m_pNext->m_flFireTime > pEvent->m_flFireTime))
		pCurrent = pCurrent->m_pNext;
	if (pEvent->m_pRefCount)
		(*pEvent->m_pRefCount)++;
	pEvent->m_pNext = pCurrent->m_pNext;
	pCurrent->m_pNext = pEvent;
	g_106e70ec = pEvent->m_flFireTime;
	g_106e70e4 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100ce2b0 size=0xc3
#include "CBaseEntity.h"
#include "CEventQueue.h"
#include "CVariantCopy.h"
extern "C" void *__cdecl memset(void *, int, unsigned int);
#pragma intrinsic(memset)

void CEventQueue::sub_100ce2b0(CBaseEntity *pTarget, CVariantCopy Value, float fireDelay, const CEQBlock16 *pBlock, int nOutputID)
{
	CEQNewEvent *e = new CEQNewEvent;
	memset(e, 0, sizeof(CEQNewEvent));
	e->m_nKind = 2;
	e->m_flFireTime = fireDelay + gpGlobals->curtime;
	e->m_iTarget = 0;
	e->m_hTarget = pTarget;
	e->m_iTargetInput = 0;
	e->m_hActivator = 0;
	e->m_hCaller = 0;
	e->m_n3c = 0;
	e->m_Variant = Value;
	e->m_iOutputID = nOutputID;
	e->m_Block = *pBlock;
	sub_100ce210((CEQEvent *)e);
	m_n54 = (int)e;
}
// END FUNCTION

// FUNCTION: 0x100ce3c0 size=0x64
struct Node_t { char pad[0x38]; Node_t *next; };
struct CList_t {
	char pad0[0x38]; Node_t *m_pFirst; char pad1[0x18]; Node_t *m_pCur;
	unsigned char sub_100ce750(Node_t *n, void *ent, int *p);
	// TARGET: CList_t::sub_100ce3c0
	bool sub_100ce3c0(void *ent, int *p);
};

bool CList_t::sub_100ce3c0(void *ent, int *p)
{
	if (m_pCur && sub_100ce750(m_pCur, ent, p))
		return true;
	Node_t *n = m_pFirst;
	while (n) {
		if (sub_100ce750(n, ent, p)) {
			m_pCur = n;
			return true;
		}
		n = n->next;
	}
	m_pCur = 0;
	return false;
}
// END FUNCTION

// FUNCTION: 0x100ce450 size=0x64
struct Node_t { char pad[0x38]; Node_t *next; };
struct CList_t {
	char pad0[0x38]; Node_t *m_pFirst; char pad1[0x18]; Node_t *m_pCur;
	unsigned char sub_100ce810(Node_t *n, void *ent, int *p);
	// TARGET: CList_t::sub_100ce450
	bool sub_100ce450(void *ent, int *p);
};

bool CList_t::sub_100ce450(void *ent, int *p)
{
	if (m_pCur && sub_100ce810(m_pCur, ent, p))
		return true;
	Node_t *n = m_pFirst;
	while (n) {
		if (sub_100ce810(n, ent, p)) {
			m_pCur = n;
			return true;
		}
		n = n->next;
	}
	m_pCur = 0;
	return false;
}
// END FUNCTION

// FUNCTION: 0x100ce4e0 size=0x64
struct CList_node;
struct CList_t {
    char pad0[0x38];
    CList_node *m_head;
    char pad1[0x54 - 0x3c];
    CList_node *m_cur;
    bool sub_100ce450(void *, int *);
    bool sub_100ce4e0(void *, int *);
};
struct CList_node {
    char pad[0x38];
    CList_node *next;
};
// TARGET: CList_t::sub_100ce4e0
bool CList_t::sub_100ce4e0(void *a, int *b)
{
    if (sub_100ce450(a, b) && m_cur) {
        CList_node *p = m_head;
        if (p != m_cur) {
            for (; p; p = p->next) {
                if (p->next == m_cur) {
                    p->next = m_cur->next;
                    goto done;
                }
            }
            return false;
        } else {
            m_head = m_cur->next;
        }
done:
        delete m_cur;
        m_cur = 0;
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x100ce570 size=0x3b
#include "CList_t.h"

struct CList_tEntry5
{
    int v[5];
};

bool CList_t::sub_100ce570(int a, int b, int *pOut)
{
    if (sub_100ce3c0(a, b)) {
        char *node = m_pNode54;
        if (node != 0) {
            *(CList_tEntry5 *)pOut = *(CList_tEntry5 *)(node + 0x20);
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x100ce5c0 size=0x23
#include <string.h>
// TARGET: sub_100ce5c0
char __fastcall sub_100ce5c0(void *pSelf, int unused, void *pDst)
{
    char *pObj = *(char **)((char *)pSelf + 0x54);
    if (pObj != 0) {
        memcpy(pDst, pObj + 0x20, 5 * 4);
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ce600 size=0x19
struct CUnk100ce600
{
	char m_pad0000[0x54];
	int *m_pValue;	// 0x54: a pointer to the value, null when there is none

	bool sub_100ce600(int *pOut);
};

// TARGET: sub_100ce600
bool CUnk100ce600::sub_100ce600(int *pOut)
{
	if (m_pValue) {
		*pOut = *m_pValue;
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x100ce630 size=0x64
#include "CUnknown100ce630.h"


// TARGET: CUnknown100ce630::sub_100ce630
bool CUnknown100ce630::sub_100ce630(float delay)
{
	CUnknown100ce630Item *pItem = m_pCurrent;
	if (!pItem)
		return false;
	CUnknown100ce630Item *p = m_pHead;
	if (p != pItem)
	{
		for (; p; p = p->m_pNext)
		{
			if (p->m_pNext == pItem)
			{
				p->m_pNext = pItem->m_pNext;
				goto relink;
			}
		}
		return false;
	}
	m_pHead = pItem->m_pNext;
relink:
	m_pCurrent->m_pNext = 0;
	m_pCurrent->m_time = delay + gpGlobals->curtime;
	sub_100ce210(m_pCurrent);
	return true;
}
// END FUNCTION

// FUNCTION: 0x100ce6c0 size=0x3b
#include "CList_t.h"

// TARGET: CList_t::sub_100ce6c0
bool CList_t::sub_100ce6c0(int a, int b, CList_tValue value)
{
	if (sub_100ce3c0(a, b)) {
		if (m_pNode54) {
			*(CList_tValue *)(m_pNode54 + 0x20) = value;
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x100ce710 size=0x23
struct CUnknown100ce710Block {
	int v[5];
};

struct CUnknown100ce710 {
	char m_pad0000[0x54];
	char *m_p54;
	bool sub_100ce710(CUnknown100ce710Block block);
};

// TARGET: CUnknown100ce710::sub_100ce710
bool CUnknown100ce710::sub_100ce710(CUnknown100ce710Block block)
{
	if (m_p54 != 0) {
		*(CUnknown100ce710Block *)(m_p54 + 0x20) = block;
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x100ce750 size=0x85
struct EntInfo { void *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;
extern char g_106b8540[];
extern "C" int __cdecl strcmp(const char *, const char *);
#pragma intrinsic(strcmp)

struct CListNode_t
{
	char m_pad0[8];
	const char *m_pName;
	char m_pad0c[0xc];
	unsigned int m_hOwner;
};

static inline void *LookupHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntInfo *e = &g_10566458->m_entries[h & 0x1fff];
		if (e->m_serial == (int)(h >> 13))
			return e->m_pEntity;
	}
	return 0;
}

struct CList_t
{
	bool sub_100ce750(CListNode_t *node, void *owner, const char *name);
};

bool CList_t::sub_100ce750(CListNode_t *node, void *owner, const char *name)
{
	if (LookupHandle(node->m_hOwner) == owner) {
		const char *s = node->m_pName;
		if (!s)
			s = g_106b8540;
		if (strcmp(s, name) == 0)
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x100ce810 size=0x65
struct Slot_t { void *pEnt; unsigned int serial; };
struct Entry_t { int unused; Slot_t slot; };
extern Entry_t *g_10566458;

struct Ev_t {
	char pad0[0x18]; unsigned int handle;
	char pad1[0x18]; int type;
	char pad2[0x8]; int a; int b; char pad3[4]; int c;
};

static inline void *Lookup(unsigned int h)
{
	if (h != 0xffffffff) {
		Slot_t *s = &g_10566458[h & 0x1fff].slot;
		if (s->serial == h >> 13)
			return s->pEnt;
	}
	return 0;
}

unsigned char __stdcall sub_100ce810(Ev_t *ev, void *ent, int *p)
{
	if (ev->type == 2) {
		if (Lookup(ev->handle) == ent && ev->a == p[0] && ev->b == p[1])
			return ev->c == p[3];
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100ce8a0 size=0xbb
struct PyObject;
struct PyTypeObject
{
	char pad[0x18];
	void (__cdecl *tp_dealloc)(PyObject *);
};
struct PyObject
{
	int ob_refcnt;
	PyTypeObject *ob_type;
};
struct PyHost
{
	virtual void v0();
	virtual bool v1();
	char pad[0x2c - 4];
	int m_f2c;
};

extern PyObject *(__cdecl *g_109f3750)(const char *);
extern PyObject *(__cdecl *g_109f3754)(PyObject *);
extern PyObject *(__cdecl *g_109f3758)(const char *, int, PyObject *, PyObject *);
extern void (__cdecl *g_109f375c)();
extern void (__cdecl *g_109f3760)();
extern int (__cdecl *g_109f3764)();
extern void (__cdecl *g_109f3768)();
extern void (__cdecl *g_109f3628)(const char *, ...);
extern PyHost *g_107318bc;

void __stdcall sub_100ce8a0(const char *code)
{
	if (code) {
		PyObject *module = g_109f3750("__main__");
		if (module) {
			PyObject *dict = g_109f3754(module);
			if (!g_107318bc->v1() && g_107318bc->m_f2c)
				g_109f3628("RUNNING PYTHON AT TIME %f:\n%s\n\n", gpGlobals->curtime, code);
			PyObject *result = g_109f3758(code, 0x100, dict, dict);
			if (!result) {
				g_109f375c();
				g_109f3760();
				return;
			}
			if (--result->ob_refcnt == 0)
				result->ob_type->tp_dealloc(result);
			if (g_109f3764())
				g_109f3768();
			g_109f3760();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100ce990 size=0x1a2
#include "CDevFlagObj.h"

struct PyObject;
struct PyTypeObject
{
	char m_pad0000[0x18];
	void (__cdecl *tp_dealloc)(PyObject *);	// 0x18
};
struct PyObject
{
	int ob_refcnt;
	PyTypeObject *ob_type;
};

#define Py_DECREF(op) if (--(op)->ob_refcnt == 0) (*(op)->ob_type->tp_dealloc)(op)
#define Py_XDECREF(op) if ((op) != 0) { Py_DECREF(op); }

extern "C" int __cdecl _snprintf(char *, unsigned int, const char *, ...);
extern "C" __declspec(dllimport) void Msg(const char *pszFormat, ...);
extern PyObject *(__cdecl *g_109f3750)(const char *);	// PyImport_AddModule
extern PyObject *(__cdecl *g_109f3754)(PyObject *);	// PyModule_GetDict
extern PyObject *(__cdecl *g_109f3758)(const char *, int, PyObject *, PyObject *);	// PyRun_String
extern PyObject *(__cdecl *g_109f374c)(PyObject *, const char *, ...);	// PyObject_CallFunction
extern void (__cdecl *g_109f375c)();	// PyErr_Print
extern void (__cdecl *g_109f3760)();	// Py_FlushConsoleOutput
extern int (__cdecl *g_109f3764)();	// Py_FlushLine
extern void (__cdecl *g_109f3768)();	// PyErr_Clear
extern PyObject *g_109f3748;	// &_Py_NoneStruct
extern CDevFlagObj *g_107318bc;
PyObject *sub_101966a0(int arg);

void __stdcall sub_100ce990(const char *pszFunction, int a, int b, int c)
{
	char szCommand[1024];
	PyObject *pMain = g_109f3750("__main__");
	if (pMain) {
		PyObject *pDict = g_109f3754(pMain);
		_snprintf(szCommand, 0x400, "__main__.%s", pszFunction);
		if (!g_107318bc->vfunc1() && g_107318bc->m_n2c)
			Msg("RUNNING PYTHON AT TIME %f:\n%s\n\n", (double)gpGlobals->curtime, szCommand);
		PyObject *pFunc = g_109f3758(szCommand, 0x100, pDict, pDict);
		if (pFunc) {
			if (pFunc != g_109f3748) {
				PyObject *pArg1 = sub_101966a0(a);
				PyObject *pArg2 = sub_101966a0(b);
				PyObject *pArg3 = sub_101966a0(c);
				PyObject *pResult = g_109f374c(pFunc, "OOO", pArg1, pArg2, pArg3);
				if (!pResult) {
					g_109f375c();
				} else {
					if (g_109f3764())
						g_109f3768();
					Py_DECREF(pResult);
					Py_XDECREF(pArg1);
					Py_XDECREF(pArg2);
					Py_XDECREF(pArg3);
				}
				Py_DECREF(pFunc);
			}
		} else {
			g_109f375c();
		}
		g_109f3760();
	}
}
// END FUNCTION

// FUNCTION: 0x100cebb0 size=0x3cc
#include "CEventQueue.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CUnknown10738964.h"
#include "CUnknown100cd640.h"
#include "CBaseHandle.h"
#include "Tier1.h"

extern char g_106cff51;
extern int g_10552814;
extern CGlobalEntityList *g_10566458;
extern CGlobalEntityList g_106eb5d8;
extern CUnknown10738964 *g_106cfe54;
extern char g_106b8540[];
extern char *(*g_109f36cc)(void *);

struct CPyTypeView { char m_pad[0x18]; void (*tp_dealloc)(void *); };
struct CPyObjectView { int ob_refcnt; CPyTypeView *ob_type; };

struct CEventStatBlock { int m_a, m_b, m_c, m_d; };
struct CEventStatBlockOps
{
	void sub_10230ed0();
	void sub_10230f90(const CEventStatBlock *pOther);
};
struct CEventQueuePyOps
{
	void sub_100ce8a0(const char *psz);
	void sub_100ce990(const char *psz, CBaseEntity *pA, CBaseEntity *pB, CBaseEntity *pC);
};
void sub_10230910(CEventStatBlock *pBlock, CBaseEntity *pEntity, int nValue, int nFlag);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct CEQEventView
{
	float m_flFireTime;
	const char *m_iTarget;
	const char *m_iTargetInput;
	EHANDLE m_pActivator;
	EHANDLE m_pCaller;
	int m_iOutputID;
	EHANDLE m_pEntTarget;
	CPyObjectView *m_pPy;
	int m_n20;
	int m_n24, m_n28, m_n2c;
	int m_n30;
	int m_nKind;
	CEQEventView *m_pNext;
	const char *m_iTarget2;
	CEventStatBlock m_block;
};

void CEventQueue::sub_100cebb0()
{
	if (g_106cff51 && g_10552814 <= 0)
		return;

	while (m_pHead && m_pHead->m_flFireTime <= gpGlobals->curtime)
	{
		CEQEventView *pe = (CEQEventView *)m_pHead;
		m_n54 = 0;
		int nKind = pe->m_nKind;
		CBaseEntity *target = 0;
		bool targetFound = false;

		if (nKind == 0)
		{
			if (pe->m_iTarget)
			{
				for (;;)
				{
					CBaseEntity *pActivator = (CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)&pe->m_pActivator);
					target = g_106eb5d8.sub_100f7770(target, pe->m_iTarget ? pe->m_iTarget : g_106b8540, pActivator, 0);
					if (!target)
						break;
					target->vfunc118(
						((CUnknown100cd640 *)&pe->m_iTargetInput)->sub_100cd640(),
						(CBaseEntity *)((CBaseHandle *)&pe->m_pActivator)->sub_100d1590(),
						(CBaseEntity *)((CBaseHandle *)&pe->m_pCaller)->sub_100d1590(),
						*(CVariantCopy *)&pe->m_n20,
						pe->m_iOutputID);
					targetFound = true;
				}
			}
			if (pe->m_iTarget2)
			{
				CBaseEntity *pActivator = (CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)&pe->m_pActivator);
				const char *pszTarget2 = STRINGR(pe->m_iTarget2);
				((CEventQueuePyOps *)this)->sub_100ce990(pszTarget2, target, pActivator,
					(CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)&pe->m_pCaller));
			}
			if (pe->m_pEntTarget)
			{
				CBaseEntity *pTarget = (CBaseEntity *)((CBaseHandle *)&pe->m_pEntTarget)->sub_100d15d0();
				pTarget->vfunc118(
					((CUnknown100cd640 *)&pe->m_iTargetInput)->sub_100cd640(),
					(CBaseEntity *)((CBaseHandle *)&pe->m_pActivator)->sub_100d1590(),
					(CBaseEntity *)((CBaseHandle *)&pe->m_pCaller)->sub_100d1590(),
					*(CVariantCopy *)&pe->m_n20,
					pe->m_iOutputID);
				targetFound = true;
			}
			if (!targetFound)
			{
				const char *pClass = g_106b8540;
				const char *pName = pClass;
				if (pe->m_pCaller)
				{
					pClass = STRINGR(pe->m_pCaller->m_classname11c);
					pName = STRINGR(pe->m_pCaller->m_name26c);
				}
				if (!g_106cfe54->vfunc1() && g_106cfe54->m_n2c)
				{
					const char *pTg = pe->m_iTarget ? pe->m_iTarget : g_106b8540;
					const char *pIn = pe->m_iTargetInput ? pe->m_iTargetInput : g_106b8540;
					if (pName < pClass || pClass < pName || pName < pIn) g_109f3630("unhandled input: (%s) -> (%s), from (%s,%s)\n", pIn, pTg, pClass, pName);
					else g_109f3630("unhandled input: (%s) -> (%s), from (%s,%s)\n", pIn, pTg, pClass, pName);
				}
			}
		}
		else if (nKind == 1)
		{
			const char *psz = 0;
			if (pe->m_pPy)
				psz = g_109f36cc(pe->m_pPy);
			if (psz)
				((CEventQueuePyOps *)this)->sub_100ce8a0(psz);
			else
				g_109f364c("Invalid python entry in the event queue.\n");
		}
		else if (2 == nKind)
		{
			CEventStatBlock block;
			((CEventStatBlockOps *)&block)->sub_10230ed0();
			((CEventStatBlockOps *)&block)->sub_10230f90(&pe->m_block);
			int nValue = (pe->m_n30 == 4) ? pe->m_n20 : 0;
			sub_10230910(&block, pe->m_pEntTarget, nValue, 1);
		}
		else
		{
			if (!g_106cfe54->vfunc1() && g_106cfe54->m_n2c)
				g_109f3630("unhandled input: Unknown Event Type: (%d)\n", pe->m_nKind);
		}

		CEQEventView *pPrev = (CEQEventView *)this;
		while (pPrev)
		{
			if (pPrev->m_pNext == pe)
			{
				pPrev->m_pNext = pe->m_pNext;
				if (pe->m_pPy)
				{
					if (0 == --pe->m_pPy->ob_refcnt)
						pe->m_pPy->ob_type->tp_dealloc(pe->m_pPy);
					pe->m_pPy = 0;
				}
				delete pe;
			}
			pPrev = pPrev->m_pNext;
		}

		if (g_106cff51)
		{
			if (g_10552814 <= 0)
				return;
			if (--g_10552814 <= 0)
				return;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100cf080 size=0xb0
#include "CBaseEntity.h"
#include "CEventQueue.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CEQRunArgs	// 16 byte local the event's block is copied into
{
	int m_data[4];
	void sub_10230ed0();	// stub 0x1001067c: constructor body
	void sub_10230f90(const void *pBlock);	// stub 0x10014790: copies the event's block
};

void sub_10230910(CEQRunArgs *pArgs, CBaseEntity *pTarget, int value, int a);	// stub 0x1000736a

static inline CBaseEntity *EQLookup(const int &r)
{
	unsigned int h = r;
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return (CBaseEntity *)s->m_pEntity;
	}
	return 0;
}

void CEventQueue::sub_100cf080()
{
	CEQEvent *pEvent = m_pHead;
	if (pEvent) {
		do {
			if (pEvent->m_n34 == 2) {
				CEQRunArgs args;
				args.sub_10230ed0();
				args.sub_10230f90(pEvent->m_block40);
				int value = pEvent->m_n30 == 4 ? pEvent->m_n20 : 0;
				sub_10230910(&args, EQLookup(pEvent->m_hTarget), value, 0);
				CEQEvent *p = (CEQEvent *)this;
				do {
					if (p->m_pNext == pEvent) {
						p->m_pNext = pEvent->m_pNext;
						delete pEvent;
					}
					p = p->m_pNext;
				} while (p);
				pEvent = m_pHead;
			} else {
				pEvent = pEvent->m_pNext;
			}
		} while (pEvent);
	}
}
// END FUNCTION

// FUNCTION: 0x100cf160 size=0x221
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CEventQueue.h"
#include "CBaseCombatCharacter.h"
#include "CVStatList_t.h"
#include "CUnk10230f00.h"
#include "CEHandleGet.h"

extern void (__cdecl *g_109f364c)(const char *fmt, ...);
void sub_10230910(CVDmgBlock16_t *pBlock, void *pCharacter, int nValue, int nFlag);

void CEventQueue::sub_100cf160(CBaseEntity *pEntity, int nStat)
{
	unsigned int hEntity;
	if (pEntity)
		hEntity = *pEntity->vfunc1();
	else
		hEntity = -1;
	CEQEvent *pEvent = m_pHead;
	if (pEvent) {
		CUnk10230f00 block;
		block.sub_10230f00(3, nStat);
		if (pEntity) {
			CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)pEntity->m_p9c;
			if (pChar) {
				if (pChar->vfunc296(nStat)) {
					g_109f364c("%s cannot remove discipline: %s\n", pChar->sub_100ab4f0(), block.Block()->sub_102043a0());
					return;
				}
				if (nStat == 0xb)
					*(int *)((char *)pChar + 0x10d8) = CVStatListSet::Of(pChar)->Find(3)->sub_10010609(0xb);
				do {
					if (pEvent->m_n34 == 2 && ((CVDmgBlock16_t *)pEvent->m_block40)->sub_10204360(block.Block())) {
						void *pSelf = EHandle_Get(hEntity);
						void *pOther = EHandle_Get((unsigned int &)pEvent->m_hTarget);
						if (pOther != pSelf) {
							pEvent = pEvent->m_pNext;
						} else {
							int nValue = pEvent->m_n30 == 4 ? pEvent->m_n20 : 0;
							CBaseEntity *pTarget = (CBaseEntity *)EHandle_Get((unsigned int &)pEvent->m_hTarget);
							void *pTargetChar;
							if (!pTarget)
								pTargetChar = 0;
							else
								pTargetChar = pTarget->m_p9c;
							sub_10230910(block.Block(), pTargetChar, nValue, 0);
							CEQEvent *pLink = (CEQEvent *)this;
							do {
								if (pLink->m_pNext == pEvent) {
									pLink->m_pNext = pEvent->m_pNext;
									delete pEvent;
								}
								pLink = pLink->m_pNext;
							} while (pLink);
							pEvent = m_pHead;
						}
					} else {
						pEvent = pEvent->m_pNext;
					}
				} while (pEvent);
				*(int *)((char *)pChar + 0x10d8) = -1;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100cf420 size=0x1e0
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CEventQueue.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CVStatList_t.h"

struct EQBlock
{
	int a, b, c, d;
	EQBlock *sub_10230ed0();
	void sub_10230f90(const void *pSrc);
	const char *sub_102043a0();
};
struct EQCharacter : CEntityVSlots
{
	char m_pad[0x10d8 - 4];
	int m_n10d8;
	char m_pad2[0x13a8 - 0x10dc];
	CVStatListSet m_Set;
};
extern void (*g_109f364c)(const char *, ...);
const char *__fastcall sub_100ab4f0(void *p);
void sub_10230910(EQBlock *p, void *pChar, int a, int b);

void CEventQueue::sub_100cf420(CBaseEntity *pPlayer)
{
	CEventQueue *pQueue = this;
	EHANDLE hPlayer = pPlayer;
	CEQEvent *pEvent = m_pHead;
	if (pEvent && pPlayer) {
		EQCharacter *pChar = *(EQCharacter **)((char *)pPlayer + 0x9c);
		if (pChar) {
			CVStatList_t *pList = pChar->m_Set.Find(3);
			pChar->m_n10d8 = pList->sub_102012d0(0xb);
			do {
				if (pEvent->m_n34 == 2 && *(int *)pEvent->m_block40 == 3) {
					CBaseEntity *pWanted = hPlayer.Get();
					CBaseEntity *pTarget = ((EHANDLE *)&pEvent->m_hTarget)->Get();
					if (pTarget == pWanted) {
						EQBlock block;
						block.sub_10230ed0();
						block.sub_10230f90(pEvent->m_block40);
						if (!pChar->slot296(block.b)) {
							sub_10230910(&block, pChar, pEvent->m_n30 == 4 ? pEvent->m_n20 : 0, 0);
							CEQEvent *pPrev = (CEQEvent *)pQueue;
							do {
								if (pPrev->m_pNext == pEvent) {
									pPrev->m_pNext = pEvent->m_pNext;
									delete pEvent;
									break;
								}
								pPrev = pPrev->m_pNext;
							} while (pPrev);
							pEvent = pQueue->m_pHead;
							continue;
						} else {
							g_109f364c("%s cannot remove discipline: %s\n", sub_100ab4f0(pChar), block.sub_102043a0());
						}
					}
				}
				pEvent = pEvent->m_pNext;
			} while (pEvent);
			pChar->m_n10d8 = -1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100cf680 size=0xa
namespace lifted {
extern char g_106e7050;
struct C10005fc9 { int sub_10005fc9(); };
}
int sub_100cf680()
{
    return ((lifted::C10005fc9 *)((int)&lifted::g_106e7050))->sub_10005fc9();
}
// END FUNCTION

// FUNCTION: 0x100cf6a0 size=0xa
#include "ConCommand.h"
void sub_100cf680(void);
ConCommand g_106e70b0("debug_dump_eventqueue", sub_100cf680, "Dumps a list of the current event queue.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100cf730 size=0x5f
#include "CEventQueue.h"
__declspec(dllimport) void __cdecl DevMsg(const char *pszFormat, ...);
void CEventQueue::sub_100cf730()
{
	int nEvents = 0;
	for (CEQEvent *p = m_pHead; p; p = p->m_pNext)
		nEvents++;
	DevMsg("\nEventQueue Dump: (CurTime: %f) (TotalEvents: %d)\n\n", gpGlobals->curtime, nEvents);
	int i = 0;
	for (CEQEvent *q = m_pHead; q; q = q->m_pNext) {
		DevMsg("%d: ", i);
		sub_100cf7b0(q);
		i++;
	}
}
// END FUNCTION

// FUNCTION: 0x100cf7b0 size=0x268
#include "CEventQueue.h"
#include "CBaseEntity.h"
#include "CVDmg_t.h"

struct EQNetView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual int vfunc5(); };
struct EQUnkView { virtual void v0(); virtual void v1(); virtual void v2(); virtual EQNetView *vfunc3(); };
struct EQEdictView { int m_pad[0x10]; EQUnkView *m_pUnk; };
struct EQEventView
{
	float m_flFireTime;
	const char *m_pszTarget;
	int m_n08;
	int m_n0c;
	EHANDLE m_hCaller;
	int m_n14;
	EHANDLE m_hTarget;
	void *m_pPyObj;
	int m_n20[5];
	int m_nType;
	int m_n38;
	const char *m_pszScript;
	CVDmgBlock16_t m_block;
};
__declspec(dllimport) void DevMsg(const char *pMsg, ...);
extern char *(__cdecl *g_109f36cc)(void *);
extern char g_106b8540[];

static IHandleEntity *(EHandleEntityList::*s_pfnLookup)(const CBaseHandle &) const = &EHandleEntityList::LookupEntity;

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline EQEdictView *EQEdict(CBaseEntity *p) { return (EQEdictView *)p->m_pEdict2e0; }
inline const char *EQClassname(CBaseEntity *p) { return (const char *)p->sub_1009f200(); }

// TARGET: CEventQueue::sub_100cf7b0
void CEventQueue::sub_100cf7b0(CEQEvent *pEvent)
{
	EQEventView *pe = (EQEventView *)pEvent;
	const char *typeNames[3] = { "Entity", "Python", "Stat" };
	DevMsg("(FireTime: %f)  (Type: %s)", pe->m_flFireTime, typeNames[pe->m_nType]);
	if (pe->m_pszTarget)
		DevMsg("  (Tgt: %s)", STRINGR(pe->m_pszTarget));
	if (pe->m_pszScript)
		DevMsg("  (Scr: %s)", STRINGR(pe->m_pszScript));
	if (pe->m_hTarget && EQEdict(pe->m_hTarget))
	{
		EQEdictView *pEdict = EQEdict(pe->m_hTarget);
		if (!pEdict->m_pUnk || pEdict->m_pUnk->vfunc3()->vfunc5())
			DevMsg("  (EntTgt: %s)", EQClassname(pe->m_hTarget));
	}
	if (pe->m_hCaller && EQEdict(pe->m_hCaller))
	{
		EQEdictView *pEdict = EQEdict(pe->m_hCaller);
		if (!pEdict->m_pUnk || pEdict->m_pUnk->vfunc3()->vfunc5())
			DevMsg("  (Caller: %s)", EQClassname(pe->m_hCaller));
	}
	if (pe->m_pPyObj)
		DevMsg("  (PyObj: %s)", g_109f36cc(pe->m_pPyObj));
	if (!pe->m_block.sub_10204250())
		DevMsg("  (VTDep: %s)", pe->m_block.sub_102043a0());
	DevMsg("\n");
}
// END FUNCTION

// FUNCTION: 0x100cfac0 size=0xa
namespace lifted {
extern char g_106e7050;
struct C100144fc { int sub_100144fc(); };
}
int sub_100cfac0()
{
    return ((lifted::C100144fc *)((int)&lifted::g_106e7050))->sub_100144fc();
}
// END FUNCTION

// FUNCTION: 0x100cfae0 size=0x5
#include "datamap.h"
// EventQueuePrioritizedEvent_t's DATADESC (the SDK's BEGIN_SIMPLE_DATADESC in eventqueue.cpp, with the game's Python
// fields; no dummy entry: the save code hands this table itself on). The custom fields name their ops through pointer
// variables, so VC6 builds the table from the first of them on at load time.
extern ISaveRestoreOps *g_1055deb4;	// the Python object ops (CPyObjStrSaveRestoreDataOps 0x106e6ffc)
extern ISaveRestoreOps *g_1055e01c;	// variantFuncs (CVariantSaveDataOps 0x106e70dc)
extern ISaveRestoreOps *g_1055deb8;	// the VTS dependency ops (CVTSDependencySaveRestoreDataOps 0x106e6ff8)
typedescription_t g_1055dca0[] = {
	{ 15, "m_flFireTime", {0x00, 0}, 1, 2, 0, 0, 0 },
	{ 2, "m_iTarget", {0x04, 0}, 1, 2, 0, 0, 0 },
	{ 2, "m_iTargetInput", {0x08, 0}, 1, 2, 0, 0, 0 },
	{ 12, "m_pActivator", {0x0c, 0}, 1, 2, 0, 0, 0 },
	{ 12, "m_pCaller", {0x10, 0}, 1, 2, 0, 0, 0 },
	{ 4, "m_iOutputID", {0x14, 0}, 1, 2, 0, 0, 0 },
	{ 12, "m_pEntTarget", {0x18, 0}, 1, 2, 0, 0, 0 },
	{ 10, "m_pPyObj", {0x1c, 0}, 1, 2, 0, g_1055deb4, 0 },
	{ 10, "m_VariantValue", {0x20, 0}, 1, 2, 0, g_1055e01c, 0 },
	{ 4, "m_qeType", {0x34, 0}, 1, 2, 0, 0, 0 },
	{ 2, "m_iScript", {0x3c, 0}, 1, 2, 0, 0, 0 },
	{ 10, "m_vtsDependency", {0x40, 0}, 1, 2, 0, g_1055deb8, 0 },
};
// END FUNCTION

// FUNCTION: 0x100cfd00 size=0x77
struct SaveX {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int WriteFields(const char *name, void *base, void *data, void *desc, int n);
};
extern char g_1055dc74[];
extern char g_1055dca0[];
struct PEvent {
    char pad[0x38];
    PEvent *m_pNext;
};
struct Queue {
    char pad[0x38];
    PEvent *m_pNext;
    char pad2[0x50 - 0x3c];
    int m_Count;
    int sub_100cfd00(SaveX *save);
};

int Queue::sub_100cfd00(SaveX *save)
{
    PEvent *e = m_pNext;
    m_Count = 0;
    for (; e != 0; e = e->m_pNext)
        m_Count++;
    if (!save->WriteFields("EventQueue", this, 0, g_1055dc74, 1))
        return 0;
    for (e = m_pNext; e != 0; e = e->m_pNext) {
        if (!save->WriteFields("PEvent", e, 0, g_1055dca0, 12))
            return 0;
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100cfda0 size=0xa2
#include "CEventQueue.h"

extern int g_1055dc74[];	// the field table of the queue
extern int g_1055dca0[];	// the field table of a PEvent

int CEventQueue::sub_100cfda0(IEQRestore *pRestore)
{
	sub_100cdda0();
	CEQEvent ev;
	if (!pRestore->ReadFields("EventQueue", this, 0, g_1055dc74, 1))
		return 0;
	for (int i = 0; i < m_nEvents; i++) {
		if (!pRestore->ReadFields("PEvent", &ev, 0, g_1055dca0, 0xc))
			return 0;
		sub_100ce1c0(&ev);
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100cfe80 size=0x5
#define PCD_INITIALIZERS
#include "CEQ_SaveRestoreBlockHandler.h"
CEQ_SaveRestoreBlockHandler g_106e70a8;
// END FUNCTION

// FUNCTION: 0x100cfec0 size=0x6
#include "CEQ_SaveRestoreBlockHandler.h"
namespace lifted {
extern char g_1055e5bc;
}
int CEQ_SaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_1055e5bc;
}
// END FUNCTION

// FUNCTION: 0x100cfee0 size=0xa
#include "CEQ_SaveRestoreBlockHandler.h"
namespace lifted {
extern char g_106e7050;
struct C100024a5 { int sub_100024a5(); };
}
void CEQ_SaveRestoreBlockHandler::vfunc2()
{
    ((lifted::C100024a5 *)((int)&lifted::g_106e7050))->sub_100024a5();
}
// END FUNCTION

// FUNCTION: 0x100cff00 size=0x13
#include "vampire.h"

struct CUnknown100cff00
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(const void *pData, int a);
};

extern char g_1055deb0[];

// TARGET: sub_100cff00
void __stdcall sub_100cff00(CUnknown100cff00 *pObj)
{
	pObj->v8(g_1055deb0, 1);
}
// END FUNCTION

// FUNCTION: 0x100cff30 size=0x2b
#include "CEQ_SaveRestoreBlockHandler.h"

extern short g_1055deb0;

void CEQ_SaveRestoreBlockHandler::vfunc6(IRestoreRead *pRestore)
{
	short version;
	pRestore->ReadShort(&version, 1, 0);
	m_bVersionMatches = (version == g_1055deb0);
}
// END FUNCTION

// FUNCTION: 0x100cff70 size=0x19
#include "CEQ_SaveRestoreBlockHandler.h"
#include "CEventQueue.h"

extern CEventQueue g_106e7050;

// TARGET: CEQ_SaveRestoreBlockHandler::vfunc7
void CEQ_SaveRestoreBlockHandler::vfunc7(int a, int b, int c)
{
	if (m_bVersionMatches)
		g_106e7050.sub_100cfda0((IEQRestore *)a);
}
// END FUNCTION

// FUNCTION: 0x100cffa0 size=0x6
namespace lifted {
extern char g_106e70a8;
}
int sub_100cffa0()
{
    return (int)&lifted::g_106e70a8;
}
// END FUNCTION

// FUNCTION: 0x100cffc0 size=0x5
#include "CPyObjStrSaveRestoreDataOps.h"
CPyObjStrSaveRestoreDataOps g_106e6ffc;
// END FUNCTION

// FUNCTION: 0x100d0000 size=0x77
#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SaveIf0 { TEN(a) };
struct SaveIf : SaveIf0 {
    virtual void WriteInt(int *p, int n);
    virtual void b1();
    virtual void WriteBool(bool *p, int n);
    virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7();
    virtual void b8(); virtual void b9();
    virtual void WriteString(const char *s);
};
struct PyObject { int ob_refcnt; void *ob_type; };
struct Field { PyObject **pField; };
__declspec(dllimport) extern char PyString_Type[];
__declspec(dllimport) char *PyString_AsString(PyObject *);
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)

struct CPySave {
    void sub_100d0000(Field *fieldInfo, SaveIf *pSave);
};

void CPySave::sub_100d0000(Field *fieldInfo, SaveIf *pSave)
{
    PyObject *obj = *fieldInfo->pField;
    bool isStr = obj != 0 && obj->ob_type == (void *)PyString_Type;
    pSave->WriteBool(&isStr, 1);
    if (isStr) {
        char *s = PyString_AsString(obj);
        int len = strlen(s);
        pSave->WriteInt(&len, 1);
        pSave->WriteString(s);
    }
}
// END FUNCTION

// FUNCTION: 0x100d00a0 size=0x70
#include "CPyObjStrSaveRestoreDataOps.h"
#define V5(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4();
struct IRestoreLike {
    V5(a) V5(b)
    virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3();
    virtual int v14();
    virtual void f0(); virtual void f1(); virtual void v17(bool *out, int a, int b);
    virtual void g0(); virtual void g1(); virtual void g2();
    virtual void v21(char *buf, int a, int b);
};
extern void *(*g_109f37c8)(char *);
extern "C" void *malloc(unsigned);
extern "C" void free(void *);
void CPyObjStrSaveRestoreDataOps::vfunc1(SaveRestoreFieldInfo_t *field, IRestore *restore)
{
#define field ((void **)field)
#define restore ((IRestoreLike *)restore)
    void **dest = (void **)*field;
    bool has = false;
    restore->v17(&has, 1, 1);
    if (has) {
        int len = restore->v14() + 1;
        char *buf = (char *)malloc(len);
        restore->v21(buf, len, len);
        *dest = g_109f37c8(buf);
        free(buf);
    } else
        *dest = 0;
#undef restore
#undef field
}
// END FUNCTION

// FUNCTION: 0x100d0130 size=0x29
#include "CPyObjStrSaveRestoreDataOps.h"

extern void *g_109f37d0;

// TARGET: CPyObjStrSaveRestoreDataOps::vfunc2
bool CPyObjStrSaveRestoreDataOps::vfunc2(SaveRestoreFieldInfo_t *ppField)
{
	void **pObj = *(void ***)ppField;	// the field holds the Python object pointer's address
	return !(pObj && *pObj && *(void **)((char *)*pObj + 4) == g_109f37d0);	// empty unless a Python string
}
// END FUNCTION

// FUNCTION: 0x100d0170 size=0xf
#include "CPyObjStrSaveRestoreDataOps.h"
void CPyObjStrSaveRestoreDataOps::vfunc3(SaveRestoreFieldInfo_t *a0)
{
#define a0 ((int)a0)
    *(int *)((char *)(*(int *)((char *)a0))) = 0;
    a0;
#undef a0
}
// END FUNCTION

// FUNCTION: 0x100d0190 size=0x5
#include "CPyObjStrSaveRestoreDataOps.h"
bool CPyObjStrSaveRestoreDataOps::vfunc4(SaveRestoreFieldInfo_t *a0, const char *a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100d01b0 size=0x5
#include "CVTSDependencySaveRestoreDataOps.h"
CVTSDependencySaveRestoreDataOps g_106e6ff8;
// END FUNCTION

// FUNCTION: 0x100d01f0 size=0x71
#include "CVTSDependencySaveRestoreDataOps.h"
#include <string.h>
void CVTSDependencySaveRestoreDataOps::vfunc0(SaveRestoreFieldInfo_t *pField, ISave *pSave)
{
#define pField ((CVTSDependencyField *)pField)
#define pSave ((CSave *)pSave)
	CVTSDependencyRecord *pRecord = pField->m_pRecord;
	bool bHas = pRecord && !pRecord->sub_10204250();
	pSave->vfunc12(&bHas, 1);
	if (bHas) {
		const char *psz = pRecord->sub_102043a0();
		int len = strlen(psz);
		pSave->vfunc10(&len, 1);
		pSave->vfunc20(psz);
	}
#undef pSave
#undef pField
}
// END FUNCTION

// FUNCTION: 0x100d0290 size=0x6e
#include "CVTSDependencySaveRestoreDataOps.h"
extern "C" void *malloc(unsigned int);
extern "C" void free(void *);

void CVTSDependencySaveRestoreDataOps::vfunc1(SaveRestoreFieldInfo_t *pField, IRestore *pRestore)
{
#define pField ((CVTSDependencyField *)pField)
#define pRestore ((CVTSDependencyRestore *)pRestore)
    CVTSDependencyRecord *pRecord = pField->m_pRecord;
    char bPresent = 0;
    pRestore->vfunc17(&bPresent, 1, 1);
    if (bPresent) {
        int nLength = pRestore->vfunc14() + 1;
        char *pBuffer = (char *)malloc(nLength);
        pRestore->vfunc21(pBuffer, nLength, nLength);
        pRecord->sub_10204570(pBuffer);
        free(pBuffer);
    } else {
        pRecord->sub_10204270();
    }
#undef pRestore
#undef pField
}
// END FUNCTION

// FUNCTION: 0x100d0320 size=0x20
#include "vampire.h"
char __fastcall sub_10204250(void *p);
// TARGET: sub_100d0320
int __stdcall sub_100d0320(void **p)
{
    if (*p != 0) {
        if (sub_10204250(*p) != 0) {
            return 1;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100d0350 size=0xe
#include "CVTSDependencySaveRestoreDataOps.h"
namespace lifted {
struct C10010573 { int sub_10010573(); };
}
void CVTSDependencySaveRestoreDataOps::vfunc3(SaveRestoreFieldInfo_t *a0)
{
#define a0 ((int)a0)
    ((lifted::C10010573 *)(*(int *)((char *)a0)))->sub_10010573();
#undef a0
}
// END FUNCTION

// FUNCTION: 0x100d0370 size=0x5
#include "CVTSDependencySaveRestoreDataOps.h"
bool CVTSDependencySaveRestoreDataOps::vfunc4(SaveRestoreFieldInfo_t *a0, const char *a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100d0390 size=0xe0
#include "CBaseEntity.h"
#include "inputdata_t.h"

struct color32_v { unsigned char r, g, b, a; };

// TARGET: variant_t::sub_100d0390
void variant_t::sub_100d0390(int type, void *pData)
{
    fieldType = type;
    switch (type) {
    case 5: iValue = *(bool *)pData; break;
    case 4: iValue = *(int *)pData; break;
    case 2: iszValue = *(const char **)pData; break;
    case 1: flValue = *(float *)pData; break;
    case 8: *(color32_v *)&iValue = *(color32_v *)pData; break;
    case 3:
    case 14:
        ((float *)&flValue)[0] = ((float *)pData)[0];
        ((float *)&flValue)[1] = ((float *)pData)[1];
        ((float *)&flValue)[2] = ((float *)pData)[2];
        break;
    case 12: eVal = *(unsigned int *)pData; break;
    case 11: {
        CBaseEntity *pEnt = *(CBaseEntity **)pData;
        if (pEnt)
            eVal = *pEnt->vfunc1();
        else
            eVal = 0xffffffff;
        break;
    }
    case 0:
    default:
        iValue = 0;
        fieldType = 0;
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x100d04b0 size=0xdc
#include "CBaseEntity.h"
#include "inputdata_t.h"

void variant_t::sub_100d04b0(void *data)
{
	switch (fieldType) {
	case 5:  *((bool *)data) = iValue != 0; break;
	case 4:  *((int *)data) = iValue; break;
	case 2:  *((const char **)data) = iszValue; break;
	case 1:  *((float *)data) = flValue; break;
	case 8:  *((int *)data) = iValue; break;
	case 3:
	case 14:
		((int *)data)[0] = ((int *)this)[0];
		((int *)data)[1] = ((int *)this)[1];
		((int *)data)[2] = ((int *)this)[2];
		break;
	case 12: *((unsigned int *)data) = eVal; break;
	case 11: *((CBaseEntity **)data) = ((EHANDLE *)&eVal)->Get(); break;
	}
}
// END FUNCTION

// FUNCTION: 0x100d05d0 size=0x348
#include "CBaseEntity.h"
#include "CVariantCopy.h"
#include <stdlib.h>
#include <stdio.h>
#include "CGlobalEntityList.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern CGlobalEntityList g_106eb5d8;
extern float g_104454c4;

struct CVariantConvert : CVariantCopy
{
	void SetFloatS(float v) { flVal = v; m_fieldType = 1; }
};

bool CVariantCopy::sub_100d05d0(int newType)
{
	if (newType == m_fieldType)
		return true;
	if (newType == 0) {
		sub_1000b320(0, 0);
		return true;
	}
	if (newType == 0x12)
		return true;
	switch (m_fieldType) {
	case 4:
		switch (newType) {
		case 1:
			SetFloat((float)m_value);
			return true;
		case 5:
			SetBool(m_value != 0);
			return true;
		}
		break;
	case 1:
		switch (newType) {
		case 4:
			m_value = (int)flVal;
			m_fieldType = 4;
			return true;
		case 5:
			SetBool(flVal != g_104454c4);
			return true;
		}
		break;
	case 2:
		switch (newType) {
		case 4:
			if (iszVal) {
				m_value = atoi(iszVal);
				m_fieldType = 4;
				return true;
			}
			goto int0;
		case 1:
			if (iszVal) {
				((CVariantConvert *)this)->SetFloatS(atof(iszVal));
				return true;
			}
			goto float0;
		case 5:
			if (iszVal) {
				int n = atoi(iszVal);
				SetBool(n != 0);
			} else {
				rgba[0] = 0;
				m_fieldType = 5;
			}
			return true;
		case 3:
			if (sscanf(STRINGR_F(iszVal), "[%f %f %f]", &vecVal[0], &vecVal[1], &vecVal[2]) == 0)
				sscanf(STRINGR_F(iszVal), "%f %f %f", &vecVal[0], &vecVal[1], &vecVal[2]);
			return true;
		case 8: {
			int r = 0, g = 0, b = 0, a = 255;
			sscanf(STRINGR_F(iszVal), "%d %d %d %d", &r, &g, &b, &a);
			rgba[0] = r;
			rgba[1] = g;
			rgba[2] = b;
			rgba[3] = a;
			return true;
		}
		case 12: {
			CBaseEntity *ent = 0;
			if (iszVal)
				ent = (CBaseEntity *)g_106eb5d8.sub_100f7770(0, iszVal, 0, 0);
			((EHANDLE *)&m_hEntity)->Set(ent);
			m_fieldType = 12;
			return true;
		}
		}
		break;
	case 12:
		switch (newType) {
		case 2:
			return true;
		}
		break;
	case 0:
		switch (newType) {
		case 4:
int0:
			m_value = 0;
			m_fieldType = 4;
			return true;
		case 2:
			m_value = 0;
			m_fieldType = 2;
			return true;
		case 1:
float0:
			m_value = 0;
			m_fieldType = 1;
			return true;
		}
		break;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x100d0a00 size=0x1c4
#include "CBaseEntity.h"
#include "CVariantCopy.h"
#include "CEHandleGet.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
extern "C" char *_itoa(int value, char *pBuffer, int radix);
extern char g_106e7000[0x50];

const char *CVariantCopy::sub_100d0a00() const
{
	switch (m_fieldType) {
	case 2:
		return iszVal ? iszVal : "";
	case 5:
		if (!m_value)
			Q_strncpy(g_106e7000, "false", 0x50);
		else
			Q_strncpy(g_106e7000, "true", 0x50);
		return g_106e7000;
	case 4:
		return _itoa(m_value, g_106e7000, 10);
	case 1:
		Q_snprintf(g_106e7000, 0x50, "%g", flVal);
		return g_106e7000;
	case 8:
		Q_snprintf(g_106e7000, 0x50, "%d %d %d %d", rgba[0], rgba[1], rgba[2], rgba[3]);
		return g_106e7000;
	case 3:
		Q_snprintf(g_106e7000, 0x50, "[%g %g %g]", vecVal[0], vecVal[1], vecVal[2]);
		return g_106e7000;
	case 0:
		g_106e7000[0] = 0;
		return g_106e7000;
	case 12:
		if (EHandle_Get(m_hEntity) != 0)
			Q_snprintf(g_106e7000, 0x50, "%s", ((CBaseEntity *)EHandle_Get(m_hEntity))->sub_1000b5cd());
		else
			Q_snprintf(g_106e7000, 0x50, "(null entity)");
		return g_106e7000;
	default:
		return "No conversion to string";
	}
}
// END FUNCTION
