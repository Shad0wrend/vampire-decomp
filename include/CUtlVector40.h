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

	void sub_101a58e0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements (initial allocation 1)
	int sub_101a56d0(int num, const void *pToCopy);	// "CUtlVector::AddMultipleToTail": InsertMultipleBefore(m_size, num, pToCopy), returns the first new index
};
