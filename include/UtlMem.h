// UtlMem: the memory part of a CUtlVector<int>-like container (pointer, allocation count, grow size); its
// member at 0x10055ec0 grows the allocation (starting at 8 elements).
#pragma once

class UtlMem
{
public:
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	void sub_10055ec0(int num);
	void sub_1002cbd0();	// "CUtlMemory::Purge": frees the allocation unless the grow size is -1 (external memory)
};
