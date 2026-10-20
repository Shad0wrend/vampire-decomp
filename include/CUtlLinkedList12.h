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

	bool sub_100decb0(int i);	// "CUtlLinkedList::IsInList": i is below the number of allocated nodes, not negative and the node's previous index is not itself (called through the stub at 0x1000ac54)
};
