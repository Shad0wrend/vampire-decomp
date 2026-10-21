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

	unsigned short sub_100fa470(bool multilist);	// "CUtlLinkedList::AllocInternal"
	void sub_100fa3a0(unsigned short i);	// the per-node bookkeeping run after AllocInternal (stub 0x100139a8)
};
