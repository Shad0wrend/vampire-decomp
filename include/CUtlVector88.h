// CUtlVector88: a CUtlVector whose elements are 88 bytes (memory, allocation count, grow size, size).
#pragma once

class CUtlVector88
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;

	void sub_10032bb0(int elem, int num);	// "CUtlVector::ShiftElementsRight": memmove the tail up by num
};
