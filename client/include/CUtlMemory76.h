// CUtlMemory76: the memory part of a CUtlVector whose elements are 76 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory76
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory76 *sub_10096cd0(int growSize, int allocationCount);	// constructor: allocates allocationCount * 76 bytes
};
