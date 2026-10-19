// Mem1c: the memory part (pointer, allocation count, grow size) of a CUtlVector of 0x1c byte elements (grows from 2 elements).
#pragma once

struct Mem1c
{
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;

	void sub_103e3ec0(int num);	// "CUtlMemory::Grow": grows the allocation by at least num elements
};
