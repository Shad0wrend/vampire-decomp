// CUtlLinkedList776: a CUtlLinkedList<T, unsigned short> whose nodes are 0x308 bytes (0x304 of data, previous, next).
#pragma once
#include "utlmemory.h"

struct CUtlLinkedList776Node
{
	char m_Data[0x304];
	unsigned short m_Previous;
	unsigned short m_Next;
};

class CUtlLinkedList776
{
public:
	CUtlMemory<CUtlLinkedList776Node> m_Memory;	// 0x00
	unsigned short m_Head;	// 0x0c
	unsigned short m_Tail;	// 0x0e
	unsigned short m_FirstFree;	// 0x10
	unsigned short m_ElementCount;	// 0x12
	unsigned short m_TotalElements;	// 0x14
	unsigned short m_pad16;
	CUtlLinkedList776Node *m_pElements;	// 0x18 (debug pointer)

	static unsigned short InvalidIndex() { return (unsigned short)~0; }
	CUtlLinkedList776Node &InternalElement(unsigned short i) { return m_Memory[i]; }

	~CUtlLinkedList776() { RemoveAll(); }

	void RemoveAll()
	{
		if (m_TotalElements == 0)
			return;
		unsigned short prev = InvalidIndex();
		for (int i = (int)m_TotalElements; --i >= 0; ) {
			InternalElement(i).m_Previous = i;
			InternalElement(i).m_Next = prev;
			prev = i;
		}
		m_Head = InvalidIndex();
		m_Tail = InvalidIndex();
		m_FirstFree = 0;
		m_ElementCount = 0;
	}
};
