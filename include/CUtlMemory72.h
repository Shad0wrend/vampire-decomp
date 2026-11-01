// CUtlMemory72: the memory part of a CUtlVector whose elements are 72 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory72
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory72 *sub_10185010(int growSize, int allocationCount);	// constructor: allocates allocationCount * 72 bytes
};
