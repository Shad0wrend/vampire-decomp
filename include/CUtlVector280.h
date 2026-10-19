// CUtlVector280: a CUtlVector whose elements are 0x118 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector280
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_1030b100(int num);	// grows the allocation to hold num more elements (initial allocation 1), then adds num to the size
};
