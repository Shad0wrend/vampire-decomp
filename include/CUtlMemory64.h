// CUtlMemory64: the memory part of a CUtlVector whose elements are 64 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory64
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory64 *sub_10184ee0(int growSize, int allocationCount);	// constructor: allocates allocationCount * 64 bytes
};
