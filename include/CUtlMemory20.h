// CUtlMemory20: the memory part of a CUtlVector whose elements are 20 bytes (pointer, allocation count, grow size).
#pragma once

class CUtlMemory20
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory20 *sub_10032a60(int growSize, int allocationCount);	// constructor: allocates allocationCount * 20 bytes
	void sub_100436c0(int num);	// "CUtlMemory::Grow": grows the allocation by num elements
	void sub_10043870(int num);	// "CUtlMemory::Grow" (another instance)
	void sub_1002ccc0(int num);	// "CUtlMemory::Grow" (another instance)
};
