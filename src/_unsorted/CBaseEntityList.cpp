// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
