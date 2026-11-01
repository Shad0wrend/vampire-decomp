// CUtlMemory12: the memory part of a CUtlVector whose elements are 12 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory12
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory12 *sub_100b4740(int growSize, int allocationCount);	// constructor: allocates allocationCount * 12 bytes
	CUtlMemory12 *sub_102ce7a0(int growSize, int allocationCount);
};
