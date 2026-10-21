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
	void sub_100b4800(int num);	// same shape as sub_1003c220
	void sub_10349d50(int num);	// same shape as sub_1003c220
	void sub_10349ec0(int num);	// same shape as sub_1003c220
	void sub_10349f80(int a, int b);	// stub 0x1000bb63: called with (0, num) right after the grow

	char *Element(int i) { return m_pMemory + i * 16; }	// operator[] for the 16 byte elements
};
