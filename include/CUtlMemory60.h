// CUtlMemory60: the memory part of a CUtlVector whose elements are 60 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory60
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory60 *sub_10097b00(int growSize, int allocationCount);	// constructor: allocates allocationCount * 60 bytes
};
