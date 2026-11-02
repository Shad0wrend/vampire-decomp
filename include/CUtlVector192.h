// CUtlVector192: a CUtlVector whose elements are 192 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector192
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_1040aff0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements (initial allocation 1)
	void sub_1040b0b0(int elem, int num);	// "CUtlVector::ShiftElementsRight": moves the elements after elem up by num
};
