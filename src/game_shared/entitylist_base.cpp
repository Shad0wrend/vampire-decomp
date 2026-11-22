// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 9 blocks
#include "vampire.h"

// FUNCTION: 0x100f9a60 size=0x17f
#include "utlvector.h"
#include "CBaseEntityList.h"

struct S100fa600 { void sub_100fa600(int num); };
struct S100fa3a0 { void sub_100fa3a0(unsigned short node); };
extern "C" void *__cdecl memset(void *, int, unsigned int);
void __cdecl sub_100fa5d0(CBaseEntityListNode *pNode, unsigned short *pValue);
extern void (__cdecl *g_109f366c)(const char *);

struct LLOps : CBaseEntityListLL
{
	unsigned short AllocInternal()
	{
		unsigned short elem;
		if (m_FirstFree == 0xffff) {
			if (m_NumAlloced == m_allocationCount)
				((S100fa600 *)this)->sub_100fa600(1);
			elem = m_NumAlloced++;
			if (elem == 0xffff)
				g_109f366c("CUtlLinkedList overflow!\n");
		} else {
			elem = m_FirstFree;
			m_FirstFree = m_pMemory[m_FirstFree].m_Next;
		}
		m_pMemory[elem].m_Previous = elem;
		m_pMemory[elem].m_Next = elem;
		m_pElements = m_pMemory;
		return elem;
	}
	void LinkToTail(unsigned short node)
	{
		((S100fa3a0 *)this)->sub_100fa3a0(node);
		CBaseEntityListNode &n = m_pMemory[node];
		n.m_Next = 0xffff;
		n.m_Previous = m_Tail;
		m_Tail = node;
		if (n.m_Previous == 0xffff)
			m_Head = node;
		else
			m_pMemory[n.m_Previous].m_Next = node;
		m_ElementCount++;
	}
	unsigned short AddToTail(unsigned short &src)
	{
		unsigned short node = AllocInternal();
		LinkToTail(node);
		sub_100fa5d0(&m_pMemory[node], &src);
		return node;
	}
};

CBaseEntityList::CBaseEntityList()
{
	for (unsigned short i = 0x800; i < 0x2000; i++)
		((LLOps *)&m_Second)->AddToTail(i);
	memset(m_EntPtrArray, 0, sizeof(m_EntPtrArray));
}
// END FUNCTION

// FUNCTION: 0x100f9c40 size=0x144
#include "utlrbtree.h"
#include "CBaseEntityList.h"

extern void *vt_10455f0c[];
extern void (*g_109f3624)(void *);

inline void ListRemoveAll(CBaseEntityListLL *p)
{
    if (p->m_NumAlloced) {
        unsigned short prev = CBaseEntityListLL::InvalidIndex();
        for (int i = (int)p->m_NumAlloced; --i >= 0; ) {
            p->InternalElement(i).m_Next = prev;
            p->InternalElement(i).m_Previous = i;
            prev = i;
        }
        p->m_FirstFree = 0;
        p->m_Head = CBaseEntityListLL::InvalidIndex();
        p->m_Tail = CBaseEntityListLL::InvalidIndex();
        p->m_ElementCount = 0;
    }
}

inline void ListPurge(CBaseEntityListLL *p)
{
    if (p->m_growSize != -1) {
        if (p->m_pMemory) {
            g_109f3624(p->m_pMemory);
            p->m_pMemory = 0;
        }
        p->m_allocationCount = 0;
    }
}

void CBaseEntityList::sub_100f9c40()
{
    unsigned short i = m_Live.m_Head;
    *(void **)this = vt_10455f0c;
    while (i != CBaseEntityListLL::InvalidIndex()) {
        unsigned short element = m_Live.InternalElement(i).m_Element;
        unsigned short next = m_Live.InternalElement(i).m_Next;
        sub_100fa0f0(element);
        i = next;
    }
    {
        CBaseEntityListLL *pSecond = &m_Second;
        ListRemoveAll(pSecond);
        ListPurge(pSecond);
    }
    {
        CBaseEntityListLL *pLive = &m_Live;
        ListRemoveAll(pLive);
        ListPurge(pLive);
    }
}
// END FUNCTION

// FUNCTION: 0x100f9df0 size=0x20
#include "vampire.h"
struct CUnk100f9df0
{
    void sub_100f9fc0(int a, int b, int c, int d);
    int sub_100f9df0(int a, int b, int c, int d);
};
// TARGET: CUnk100f9df0::sub_100f9df0
int CUnk100f9df0::sub_100f9df0(int a, int b, int c, int d)
{
    sub_100f9fc0(a, b, c, d);
    return a;
}
// END FUNCTION

// FUNCTION: 0x100f9e20 size=0x112
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CGlobalEntityList.h"

extern void (__cdecl *g_109f366c)(const char *, ...);

// TARGET: CGlobalEntityList::sub_100f9e20
CBaseHandle CGlobalEntityList::sub_100f9e20(CGlobalEntityList_Ent *pEnt)
{
	if (m_FreeNonNetworkableSlots.Count() == 0)
		g_109f366c("CBaseEntityList::AddNonNetworkableEntity: no free slots!");
	unsigned short iSlot = m_FreeNonNetworkableSlots.Element(m_FreeNonNetworkableSlots.Head());
	m_FreeNonNetworkableSlots.Remove(m_FreeNonNetworkableSlots.Head());
	return sub_100f9fc0(pEnt, iSlot, -1);
}
// END FUNCTION

// FUNCTION: 0x100f9f90 size=0x12
#include "CBaseEntityList.h"

// TARGET: sub_100f9f90
void __fastcall sub_100f9f90(CBaseEntityList *pThis, int, int a)
{
	pThis->sub_100fa0f0(a & 0x1fff);
}
// END FUNCTION

// FUNCTION: 0x100f9fc0 size=0xe2
#include "CGlobalEntityList.h"
#include "CUtlLinkedList6.h"

void __cdecl sub_100fa5d0(void *pDst, const void *pSrc);

struct CEntRefView
{
	virtual void SetRefEHandle(const CBaseHandle &handle);
};

struct CGlobalListNotify
{
	virtual void OnAddEntity(CGlobalEntityList_Ent *pEnt, CBaseHandle handle);
};

// TARGET: CGlobalEntityList::sub_100f9fc0
CBaseHandle CGlobalEntityList::sub_100f9fc0(CGlobalEntityList_Ent *pEnt, int slot, int forcedSerial)
{
	CGlobalEntityList_Slot *pSlot = &m_Slots[slot];
	pSlot->m_pEntity = pEnt;
	if (forcedSerial != -1)
		pSlot->m_Serial = forcedSerial;

	CUtlLinkedList6 *pList = (CUtlLinkedList6 *)&m_pNodes;
	forcedSerial = slot;
	unsigned short i = pList->sub_100fa470(false);
	pList->sub_100fa3a0(i);
	unsigned int off = (i & 0xffff) * 6;
	CUtlLinkedList6Node *pNode = (CUtlLinkedList6Node *)((char *)pList->m_pMemory + off);
	pNode->m_Next = 0xffff;
	pNode->m_Previous = pList->m_Tail;
	pList->m_Tail = i;
	if (pNode->m_Previous == 0xffff)
		pList->m_Head = i;
	else
		pList->m_pMemory[pNode->m_Previous].m_Next = i;
	pList->m_ElementCount++;
	sub_100fa5d0((char *)pList->m_pMemory + off, &forcedSerial);

	pSlot->m_ListIndex = i;
	CBaseHandle retVal(slot, pSlot->m_Serial);
	((CEntRefView *)pEnt)->SetRefEHandle(retVal);
	((CGlobalListNotify *)this)->OnAddEntity(pEnt, retVal);
	return retVal;
}
// END FUNCTION

// FUNCTION: 0x100fa0f0 size=0x1ec
#include "utlrbtree.h"
#include "utlvector.h"
#include "CBaseEntityList.h"
#include "CUtlLinkedList6.h"
#include "CBaseHandle.h"
struct S100fa600 { void sub_100fa600(int n); };
struct EntView { virtual void v0(int *p); };
struct ListView { virtual void v0(int, int); virtual void v1(void *pEnt, CBaseHandle h); };
extern void (__cdecl *g_109f366c)(const char *, ...);
struct LL6 : CUtlLinkedList6 {
	CUtlLinkedList6Node &InternalElement(unsigned short i) { return m_pMemory[i]; }
	CUtlLinkedList6Node &InternalElementW(unsigned short i) { return *(CUtlLinkedList6Node *)((char *)m_pMemory + i * sizeof(CUtlLinkedList6Node)); }
	unsigned short Alloc()
	{
		unsigned short elem;
		if (m_FirstFree == InvalidIndex()) {
			if (m_TotalElements == m_allocationCount)
				((S100fa600 *)this)->sub_100fa600(1);
			elem = m_TotalElements;
			++m_TotalElements;
			if (elem == InvalidIndex())
				g_109f366c("CUtlLinkedList overflow!\n");
		} else {
			elem = m_FirstFree;
			m_FirstFree = InternalElement(m_FirstFree).m_Next;
		}
		InternalElementW(elem).m_Next = InternalElementW(elem).m_Previous = elem;
		m_pElements = m_pMemory;
		return elem;
	}
	void LinkToTail(unsigned short elem)
	{
		sub_100fa3a0(elem);
		CUtlLinkedList6Node &newElem = InternalElement(elem);
		newElem.m_Next = InvalidIndex();
		newElem.m_Previous = m_Tail;
		m_Tail = elem;
		if (newElem.m_Previous == InvalidIndex())
			m_Head = elem;
		else
			InternalElement(newElem.m_Previous).m_Next = elem;
		++m_ElementCount;
	}
};
void CBaseEntityList::sub_100fa0f0(unsigned int element)
{
	CBaseEntityListEntry *pEntry = &*(m_EntPtrArray + (int)element);
	if (!(pEntry->m_pEntity)) return; int hTmp = -1;
		((EntView *)pEntry->m_pEntity)->v0(&hTmp);
		int t0; int t1 = pEntry->m_SerialNumber; t0 = t1; ((ListView *)this)->v1(pEntry->m_pEntity, CBaseHandle(element, t0));
		pEntry->m_SerialNumber = pEntry->m_SerialNumber + 1;
		pEntry->m_pEntity = 0;
		((CUtlLinkedList6 *)&m_Live)->Remove(*(unsigned short *)&pEntry->m_pad);
		if ((int)element >= 0x800) {
			unsigned short newElem;
			LL6 *l = (LL6 *)&m_Second; newElem = l->Alloc();
			l->LinkToTail(newElem);
			unsigned short *pe = &l->Element(newElem);
			if (pe)
				*pe = (unsigned short)element;
		}
}
// END FUNCTION

// FUNCTION: 0x100fa360 size=0x3
#include "CBaseEntityList.h"
void CBaseEntityList::vfunc0(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x100fa380 size=0x3
#include "CBaseEntityList.h"
void CBaseEntityList::vfunc1(int a0, int a1)
{
}
// END FUNCTION
