// CUtlLinkedList16: a CUtlLinkedList<T, unsigned short> whose nodes are 16 bytes (8 bytes of links, the free list
// "next" index is the unsigned short at +2, and 8 bytes of data); used by CPhysObjSaveRestoreOps.
#pragma once

struct CUtlLinkedList16Links
{
	unsigned short m_Data;
	unsigned short m_Next;
	unsigned short m_Previous;
	unsigned short m_Tag;
};

struct CUtlLinkedList16Node
{
	CUtlLinkedList16Links m_Links;
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

	const CUtlLinkedList16Links &Links(unsigned short i) const
	{
		static CUtlLinkedList16Links s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pMemory[i].m_Links : s_Sentinel;
	}

	unsigned short sub_10047280();	// "CUtlLinkedList::Alloc": takes the first free node (growing the memory by one node when none is free and the list is full) or counts a new one; returns its index
};
