// CUtlVector68: a CUtlVector whose elements are 0x44 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct CUtlVector68Elem
{
	char data[0x44];
};

class CUtlVector68
{
public:
	CUtlVector68Elem *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	CUtlVector68Elem *m_pElements;

	void sub_100ed460(int elem, int num);	// "CUtlVector::ShiftElementsLeft": moves the elements after elem + num down over elem
};
