// CUtlVector20: a CUtlVector whose elements are 20 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector20
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_1002cc10(int elem, int num);	// "CUtlVector::ShiftElementsRight": memmove the tail up by num
	void sub_10032db0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
};
