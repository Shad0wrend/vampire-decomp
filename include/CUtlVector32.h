// CUtlVector32: a CUtlVector whose elements are 32 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector32
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_10032c60(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
};
