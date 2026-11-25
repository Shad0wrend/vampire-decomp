// CUtlLinkedList12: a CUtlLinkedList<T *, int> whose nodes are 12 bytes (data pointer, previous, next; int indices).
#pragma once

struct CUtlLinkedList12Node
{
	void *m_pData;
	int m_Previous;
	int m_Next;
};

class CUtlLinkedList12
{
public:
	CUtlLinkedList12Node *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	int m_Head;	// 0x0c
	int m_Tail;	// 0x10
	int m_FirstFree;	// 0x14
	int m_ElementCount;	// 0x18
	int m_NumAlloced;	// 0x1c
	CUtlLinkedList12Node *m_pElements;	// 0x20

		// "CUtlLinkedList::RemoveAll": puts every node into the free list (stub 0x10005d0d)
		// "CUtlLinkedList::IsInList": i is below the number of allocated nodes, not negative and the node's previous index is not itself (called through the stub at 0x1000ac54)
	void sub_100caa00(int elem);
	int sub_101be410(bool bInList);
	void sub_101be340(int before, int elem);	// "CUtlLinkedList::Unlink": takes the node out of the list when it is in it (IsInList inlined)

	bool IsValidIndex(int i) const
	{
		return (i < m_NumAlloced) && (i >= 0) && ((m_pMemory[i].m_Previous != i) || (m_pMemory[i].m_Next == i));
	}

	bool IsInList(int i) const
	{
		return i < m_NumAlloced && i >= 0 && m_pMemory[i].m_Previous != i;
	}
};
