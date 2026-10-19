// CUnknown10250830: a CUtlLinkedList with unsigned short indices and 8-byte elements (4 bytes of data, previous and next
// index); real name not yet known.
#pragma once

struct CUnknown10250830_Elem
{
	int m_data;
	unsigned short m_Previous;
	unsigned short m_Next;
};

class CUnknown10250830
{
public:
	CUnknown10250830_Elem *m_pElements;	// +0x00
	int m_allocationCount;	// +0x04
	int m_growSize;	// +0x08
	unsigned short m_Head;	// +0x0c
	unsigned short m_Tail;	// +0x0e
	unsigned short m_FirstFree;	// +0x10
	unsigned short m_ElementCount;	// +0x12
	unsigned short m_TotalElements;	// +0x14

	void sub_10250830(unsigned short elem);	// "CUtlLinkedList::Unlink"
};
