// CMem4_t: the memory part of a CUtlVector of 4 byte elements (memory pointer, allocation count, grow size).
#pragma once

class CMem4_t
{
public:
	int *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;

	void sub_102f9330(int num);	// "CUtlMemory::Grow": grows the allocation to hold num more elements
};
