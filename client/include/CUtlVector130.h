// CUtlVector130: a CUtlVector whose elements are 130 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector130
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_10131540(int elem, int num);	// "CUtlVector::ShiftElementsRight": moves the elements from elem up by num (memmove of size - elem - num elements)
	void sub_101314a0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements (initial allocation 1)
};
