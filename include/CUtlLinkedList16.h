// CUtlLinkedList16: a CUtlLinkedList<T, unsigned short> whose nodes are 16 bytes (the free list "next" index is the
// unsigned short at +2 of a node); used by CPhysObjSaveRestoreOps.
#pragma once

class CUtlLinkedList16
{
public:
	int m_unk0;	// 0x00
	char *m_pMemory;	// 0x04
	int m_allocationCount;	// 0x08
	int m_growSize;	// 0x0c
	int m_unk10;	// 0x10
	unsigned short m_FirstFree;	// 0x14
	unsigned short m_NumAlloced;	// 0x16

	void sub_10047280();	// "CUtlLinkedList::AllocInternal": takes the first free node (growing the memory by one node when none is free and the list is full) or counts a new one
};
