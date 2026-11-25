// CUtlMemory12: the memory part of a CUtlVector whose elements are 12 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory12
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	void sub_10119fe0(int num);
	void sub_1002d690(int num);
	CUtlMemory12 *sub_1002d430(int growSize, int allocationCount);	// constructor: allocates allocationCount * 12 bytes
};
