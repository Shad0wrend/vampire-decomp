// CUtlLinkedList6: a CUtlLinkedList<T, unsigned short> whose nodes are 6 bytes (2 bytes of data, previous, next).
#pragma once

struct CUtlLinkedList6Node
{
	unsigned short m_Data;
	unsigned short m_Previous;
	unsigned short m_Next;
};

class CUtlLinkedList6
{
public:
	CUtlLinkedList6Node *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	unsigned short m_Head;	// 0x0c
	unsigned short m_Tail;	// 0x0e
	unsigned short m_FirstFree;	// 0x10
	unsigned short m_ElementCount;	// 0x12
	unsigned short m_TotalElements;	// 0x14
	unsigned short m_pad16;
	CUtlLinkedList6Node *m_pElements;	// 0x18 (debug pointer)

	unsigned short sub_100e2840(bool multilist);	// "CUtlLinkedList::AllocInternal"
	void sub_100e27a0(unsigned short i);	// the per-node bookkeeping run after AllocInternal (stub 0x100139a8)

	static unsigned short InvalidIndex() { return (unsigned short)~0; }

	CUtlLinkedList6Node &InternalElement(unsigned short i) { return m_pMemory[i]; }
	unsigned short Head() const { return m_Head; }
	unsigned short Count() const { return m_ElementCount; }
	unsigned short &Element(unsigned short i) { return m_pMemory[i].m_Data; }

	bool IsInList(unsigned short i) const
	{
		return i < m_TotalElements && m_pMemory[i].m_Previous != i;
	}

	void Unlink(unsigned short elem)
	{
		if (IsInList(elem)) {
			CUtlLinkedList6Node *pBase = m_pMemory;
			CUtlLinkedList6Node *pOldElem = &pBase[elem];
			if (pOldElem->m_Previous != InvalidIndex())
				pBase[pOldElem->m_Previous].m_Next = pOldElem->m_Next;
			else
				m_Head = pOldElem->m_Next;
			if (pOldElem->m_Next != InvalidIndex())
				pBase[pOldElem->m_Next].m_Previous = pOldElem->m_Previous;
			else
				m_Tail = pOldElem->m_Previous;
			pOldElem->m_Previous = pOldElem->m_Next = elem;
			--m_ElementCount;
		}
	}

	void Remove(unsigned short elem)
	{
		Unlink(elem);
		m_pMemory[elem].m_Next = m_FirstFree;
		m_FirstFree = elem;
	}
};
