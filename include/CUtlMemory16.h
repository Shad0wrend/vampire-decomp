// CUtlMemory16: the memory part of a CUtlVector whose elements are 16 bytes (pointer, allocation count, grow size).
#pragma once

class CUtlMemory16
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	CUtlMemory16 *sub_100b4610(int growSize, int allocationCount);	// constructor: allocates allocationCount * 16 bytes
};
