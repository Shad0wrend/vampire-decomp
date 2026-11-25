// CUtlLinkedList16: a CUtlLinkedList<T, unsigned short> whose nodes are 16 bytes (12-byte element, previous, next; short indices).
#pragma once

class CUtlLinkedList16
{
public:
	void *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	unsigned short m_Head;	// 0x0c
	unsigned short m_Tail;	// 0x0e
	unsigned short m_FirstFree;	// 0x10
	unsigned short m_ElementCount;	// 0x12
	unsigned short m_NumAlloced;	// 0x14
	void *m_pElements;	// 0x18

	CUtlLinkedList16()
	{
		m_pMemory = 0;
		m_allocationCount = 0;
		m_growSize = 0;
		m_Head = 0xffff;
		m_Tail = 0xffff;
		m_FirstFree = 0xffff;
		m_NumAlloced = 0;
		m_ElementCount = 0;
		m_pElements = 0;
	}
};
