// UtlMem2: a CUtlVector<int>-like container (memory pointer at +0, allocation count at +4, grow size at +8, size at
// +0xc, element pointer at +0x10), the output vector of the sound emitter queries.
#pragma once

class UtlMem2
{
public:
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;

	void sub_100be200(int num);	// "CUtlMemory::Grow" (stub 0x1000ff51): grows the allocation by num elements
};
