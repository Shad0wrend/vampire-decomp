// CBaseEntityList (RTTI .?AVCBaseEntityList@@, primary vtable 0x10455f0c, 2 slots): the base of CGlobalEntityList. Behind the
// entity slot table (+0x04, 0x2000 slots of 12 bytes) it holds two CUtlLinkedList<unsigned short> with 6 byte nodes: the live
// entities' list at +0x18004 and a second one at +0x18020.
#pragma once

struct CBaseEntityListNode	// a node of the linked lists
{
	unsigned short m_Element;	// 0x00
	unsigned short m_Previous;	// 0x02
	unsigned short m_Next;	// 0x04
};

struct CBaseEntityListLL	// one linked list: memory, allocation count, grow size, then the indices (0x18 bytes with the padding)
{
	CBaseEntityListNode *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08 (-1: the memory is not owned)
	unsigned short m_Head;	// 0x0c
	unsigned short m_Tail;	// 0x0e
	unsigned short m_FirstFree;	// 0x10
	unsigned short m_ElementCount;	// 0x12
	unsigned short m_NumAlloced;	// 0x14

	static unsigned short InvalidIndex() { return (unsigned short)~0; }
	CBaseEntityListNode &InternalElement(unsigned short i) { return m_pMemory[i]; }
};

class CBaseEntityList
{
public:
	virtual void vfunc0();
	virtual void vfunc1();

	char m_pad0004[0x18004 - 4];
	CBaseEntityListLL m_Live;	// 0x18004
	char m_pad1801c[0x18020 - 0x1801c];
	CBaseEntityListLL m_Second;	// 0x18020

	CBaseEntityList();	// 0x100f9a60: clears the slot table, sets up both linked lists, fills the second list with the indices 0x800..0x1fff, then clears the slot table again
	void sub_100fa0f0(unsigned int element);	// releases the entity of a live list node (stub 0x1000a362)
	void sub_100f9c40();	// destructor body: stores the vtable, releases every live node, then RemoveAll + Purge of both linked lists
};
