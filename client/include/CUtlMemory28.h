// CUtlMemory28: the memory part of a CUtlVector whose elements are 28 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory28
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory28 *sub_100a33d0(int growSize, int allocationCount);	// constructor: allocates allocationCount * 28 bytes
};
