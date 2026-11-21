// CMem8_t: the memory part (pointer, allocation count, grow size) of a CUtlVector of 8-byte elements, starting at +0
// of the container (grows from 4 elements).
#pragma once

struct CMem8_t
{
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;

	void sub_101315b0(int num);	// "CUtlMemory::Grow": grows the allocation by at least num elements
};
