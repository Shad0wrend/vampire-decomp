// CUtlVector4100: a CUtlVector whose elements are 0x1004 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct CUtlVector4100Elem
{
	char data[0x1004];
};

class CUtlVector4100
{
public:
	CUtlVector4100Elem *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	CUtlVector4100Elem *m_pElements;

	void sub_100eb1e0(int elem, int num);	// "CUtlVector::ShiftElementsLeft": moves the elements after elem + num down over elem
};
