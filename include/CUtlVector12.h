// CUtlVector12: a CUtlVector whose elements are 12 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector12
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_103dc280(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
	void sub_1007f690(int num);	// same shape as sub_103dc280
};
