// utllinkedlist.h: Source's CUtlLinkedList<T, I> (tier1 utllinkedlist.h, 2004 public SDK form) as the game compiled
// it: an index-based list over CUtlMemory<ListElem_t> (element, then previous and next index). Only the members the
// game's code shows so far; add the SDK's others as they are needed.
//
// Layout (I = unsigned short: 0x18 bytes): node memory +0/+4/+8, head +0xc, tail +0xe, first free +0x10, element
// count +0x12, total elements +0x14, m_pElements +0x18 (the SDK keeps it for the debugger, in release builds too).
// The constructor: memory zeroed, head / tail / first free = invalid, both counts 0, m_pElements = the memory.
// The destructor: RemoveAll (every node into the free list), then CUtlMemory's own destructor purges the memory.
#pragma once

#include "utlmemory.h"

template <class T, class I = unsigned short>
class CUtlLinkedList
{
public:
	typedef T ElemType_t;
	typedef I IndexType_t;

	CUtlLinkedList(int growSize = 0, int initSize = 0);
	~CUtlLinkedList();

	T &Element(I i) { return m_Memory[i].m_Element; }

	static I InvalidIndex() { return (I)~0; }
	bool IsValidIndex(I i) const { return (i < m_TotalElements) && (i >= 0) && (m_Memory[i].m_Previous != i); }

	void RemoveAll();

protected:
	struct ListElem_t
	{
		T m_Element;
		I m_Previous;
		I m_Next;
	};

	void ConstructList();
	ListElem_t &InternalElement(I i) { return m_Memory[i]; }
	void ResetDbgInfo() { m_pElements = m_Memory.Base(); }

	CUtlMemory<ListElem_t> m_Memory;
	I m_Head;
	I m_Tail;
	I m_FirstFree;
	I m_ElementCount;	// the number actually in the list
	I m_TotalElements;	// the number allocated
	ListElem_t *m_pElements;
};

template <class T, class I>
inline CUtlLinkedList<T, I>::CUtlLinkedList(int growSize, int initSize)
	: m_Memory(growSize, initSize)
{
	ConstructList();
	ResetDbgInfo();
}

template <class T, class I>
inline CUtlLinkedList<T, I>::~CUtlLinkedList()
{
	RemoveAll();
}

template <class T, class I>
inline void CUtlLinkedList<T, I>::ConstructList()
{
	m_Head = InvalidIndex();
	m_Tail = InvalidIndex();
	m_FirstFree = InvalidIndex();
	m_ElementCount = m_TotalElements = 0;
}

template <class T, class I>
inline void CUtlLinkedList<T, I>::RemoveAll()
{
	if (m_TotalElements == 0)
		return;

	// put everything into the free list
	I prev = InvalidIndex();
	for (int i = (int)m_TotalElements; --i >= 0; )
	{
		// invoke the destructor
		if (IsValidIndex((I)i))
			Destruct(&Element((I)i));

		// next points to the next free list item
		InternalElement((I)i).m_Next = prev;

		// indicates it's in the free list
		InternalElement((I)i).m_Previous = (I)i;
		prev = (I)i;
	}

	// first free points to the first element
	m_FirstFree = 0;

	// clear everything else out
	m_Head = InvalidIndex();
	m_Tail = InvalidIndex();
	m_ElementCount = 0;
}
