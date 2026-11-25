// CUtlLinkedList10: a CUtlLinkedList<T, unsigned short> whose nodes are 10 bytes (6 bytes of data, previous, next).
#pragma once

struct CUtlLinkedList10Node
{
	unsigned short m_Data0;
	unsigned short m_Data1;
	unsigned short m_Data2;
	unsigned short m_Previous;
	unsigned short m_Next;
};

class CUtlLinkedList10
{
public:
	CUtlLinkedList10Node *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	unsigned short m_Head;	// 0x0c
	unsigned short m_Tail;	// 0x0e
	unsigned short m_FirstFree;	// 0x10
	unsigned short m_ElementCount;	// 0x12
	unsigned short m_TotalElements;	// 0x14
	unsigned short m_pad16;
	CUtlLinkedList10Node *m_pElements;	// 0x18 (debug pointer)

	unsigned short sub_100d89e0(bool multilist);	// "CUtlLinkedList::AllocInternal"
	void sub_100d8900(unsigned short i);	// Unlink

	static unsigned short InvalidIndex() { return (unsigned short)~0; }
	CUtlLinkedList10Node &InternalElement(unsigned short i) { return m_pMemory[i]; }

	__forceinline unsigned short AddToTail()
	{
		unsigned short elem = sub_100d89e0(false);
		sub_100d8900(elem);
		CUtlLinkedList10Node *pNewElem = &InternalElement(elem);
		pNewElem->m_Next = InvalidIndex();
		pNewElem->m_Previous = m_Tail;
		m_Tail = elem;
		if (pNewElem->m_Previous == InvalidIndex())
			m_Head = elem;
		else
			InternalElement(pNewElem->m_Previous).m_Next = elem;
		++m_ElementCount;
		return elem;
	}
};
