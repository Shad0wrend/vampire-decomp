// CUtlLinkedListBig: a CUtlLinkedList<T, unsigned short> with 0x5f324-byte nodes (8 bytes of links, then data).
#pragma once

struct CUtlLinkedListBigLinks
{
	unsigned short m_Data;
	unsigned short m_Next;
	unsigned short m_Previous;
	unsigned short m_Tag;
};

struct CUtlLinkedListBigNode
{
	CUtlLinkedListBigLinks m_Links;
	char m_pad[0x5f324 - 8];
};

class CUtlLinkedListBig
{
public:
	int m_unk0;	// 0x00
	CUtlLinkedListBigNode *m_pMemory;	// 0x04
	int m_allocationCount;	// 0x08
	int m_growSize;	// 0x0c
	unsigned short m_Head;	// 0x10
	unsigned short m_Tail;	// 0x12
	unsigned short m_FirstFree;	// 0x14
	unsigned short m_NumAlloced;	// 0x16

	static unsigned short InvalidIndex() { return (unsigned short)~0; }

	const CUtlLinkedListBigLinks &Links(unsigned short i) const
	{
		static CUtlLinkedListBigLinks s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pMemory[i].m_Links : s_Sentinel;
	}
};
