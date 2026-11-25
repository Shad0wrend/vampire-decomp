// CMem16_t: the memory part (pointer, allocation count, grow size) of a CUtlVector of 16-byte elements, starting at +0
// of the container (grows from 2 elements); sub_10127830 is its out-of-line Grow (the queued handle lookup list).
#pragma once

struct CMem16_t
{
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;

	void sub_10127830(int num);	// "CUtlMemory::Grow": grows the allocation by at least num elements
};
