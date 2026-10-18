// CUtlMemory20: the memory part of a CUtlVector whose elements are 20 bytes (pointer, allocation count, grow size).
#pragma once

class CUtlMemory20
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory20 *sub_10032a60(int growSize, int allocationCount);	// constructor: allocates allocationCount * 20 bytes
};
