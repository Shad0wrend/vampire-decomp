// CUtlMemory24: the memory part of a CUtlVector whose elements are 24 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory24
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory24 *sub_1007f380(int growSize, int allocationCount);	// constructor: allocates allocationCount * 24 bytes
};
