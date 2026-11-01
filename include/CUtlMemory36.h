// CUtlMemory36: the memory part of a CUtlVector whose elements are 36 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory36
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory36 *sub_10263fb0(int growSize, int allocationCount);	// constructor: allocates allocationCount * 36 bytes
};
