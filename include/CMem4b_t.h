// CMem4b_t: the memory part of a CUtlVector of 4 byte elements (memory pointer, allocation count, grow size).
#pragma once

class CMem4b_t
{
public:
	int *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;

	void sub_103dc400(int num);	// "CUtlMemory::Grow": grows the allocation to hold num more elements
};
