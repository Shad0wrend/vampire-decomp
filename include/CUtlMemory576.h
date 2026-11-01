// CUtlMemory576: the memory part of a CUtlVector whose elements are 576 bytes (pointer, allocation count, grow size).
#pragma once

struct CUtlMemory576
{
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory576 *sub_10185060(int growSize, int allocationCount);	// constructor: allocates allocationCount * 576 bytes
};
