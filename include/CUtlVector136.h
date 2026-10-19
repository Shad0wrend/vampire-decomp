// CUtlVector136: a CUtlVector whose elements are 0x88 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector136
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_10078c90(int num);	// grows the allocation to hold num more elements (initial allocation 1), then adds num to the size
};
