// UtlMem6: the memory part of a CUtlVector of 4-byte elements (pointer, allocation count, grow size, size, element
// pointer); its member at 0x1007fce0 grows the allocation (starting at 8 elements).
#pragma once

class UtlMem6
{
public:
	void **m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	void **m_pElements;

	void sub_1007fce0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
};
