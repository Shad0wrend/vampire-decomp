// CUtlVector16: a CUtlVector whose elements are 16 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector16
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_1003c220(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
};
