// CUtlMemory40: the memory part of a CUtlVector whose elements are 40 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory40
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory40 *sub_101a57b0(int growSize, int allocationCount);	// constructor: allocates allocationCount * 40 bytes
};
