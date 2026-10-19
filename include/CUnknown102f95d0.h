// CUnknown102f95d0: object with a CUtlVector<int> at +0x7c and a counter at +0x78; real name not yet known.
#pragma once

class CUnknown102f95d0
{
public:
	char m_pad0000[0x78];
	int m_nAdded;	// 0x78, incremented on every append
	int *m_pMemory;	// 0x7c  CUtlVector<int>: memory, allocation count, grow size, size, element pointer
	int m_allocationCount;	// 0x80
	int m_growSize;	// 0x84
	int m_size;	// 0x88
	int *m_pElements;	// 0x8c

	void sub_102f95d0(int value);	// "CUtlVector::AddToTail" (InsertBefore at the size, inlined) on the vector at +0x7c, then ++m_nAdded
};
