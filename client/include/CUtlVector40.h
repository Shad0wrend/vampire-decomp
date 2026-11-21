// CUtlVector40: a CUtlVector whose elements are 40 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector40
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_100b4d30(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements (initial allocation 1)
	void sub_1012c570(int num);
	int sub_1012c3d0(int num, const void *pToCopy);	// "CUtlVector::AddMultipleToTail": InsertMultipleBefore(m_size, num, pToCopy), returns the first new index
};
