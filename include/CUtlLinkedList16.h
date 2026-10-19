// CUtlLinkedList16: a CUtlLinkedList<T, unsigned short> whose nodes are 16 bytes (the free list "next" index is the
// unsigned short at +2 of a node); used by CPhysObjSaveRestoreOps.
#pragma once

struct CUtlLinkedList16Node
{
	unsigned short m_Data;
	unsigned short m_Next;
	unsigned short m_Previous;
	unsigned short m_Tag;
	char m_pad[8];
};

class CUtlLinkedList16
{
public:
	int m_unk0;	// 0x00
	CUtlLinkedList16Node *m_pMemory;	// 0x04
	int m_allocationCount;	// 0x08
	int m_growSize;	// 0x0c
	int m_unk10;	// 0x10
	unsigned short m_FirstFree;	// 0x14
	unsigned short m_NumAlloced;	// 0x16

	static unsigned short InvalidIndex() { return (unsigned short)~0; }

	CUtlLinkedList16Node &InternalElement(unsigned short i) const
	{
		static CUtlLinkedList16Node s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pMemory[i] : s_Sentinel;
	}

	unsigned short sub_10047280();	// "CUtlLinkedList::Alloc": takes the first free node (growing the memory by one node when none is free and the list is full) or counts a new one; returns its index
};
