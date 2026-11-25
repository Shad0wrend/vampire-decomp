// CUtlLinkedList776: a CUtlLinkedList<T, unsigned short> whose nodes are 0x308 bytes (0x304 of data, previous, next).
#pragma once

extern "C" void __cdecl Plat_Free_776(void *);

struct CUtlLinkedList776Node
{
	char m_Data[0x304];
	unsigned short m_Previous;
	unsigned short m_Next;
};

class CUtlLinkedList776
{
public:
	CUtlLinkedList776Node *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	unsigned short m_Head;	// 0x0c
	unsigned short m_Tail;	// 0x0e
	unsigned short m_FirstFree;	// 0x10
	unsigned short m_ElementCount;	// 0x12
	unsigned short m_TotalElements;	// 0x14
	unsigned short m_pad16;
	CUtlLinkedList776Node *m_pElements;	// 0x18 (debug pointer)

	static unsigned short InvalidIndex() { return (unsigned short)~0; }
};
