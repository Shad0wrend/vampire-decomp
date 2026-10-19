// CUtlVector576: a CUtlVector whose elements are 0x240 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector576
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_10185620(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
};
