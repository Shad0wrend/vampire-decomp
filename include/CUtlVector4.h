// CUtlVector4: a CUtlVector whose elements are 4 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class CUtlVector4
{
public:
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;

	int sub_1003c0e0(int elem, const int *src);	// "CUtlVector::InsertBefore": grows by one, shifts the tail up, stores *src
	void sub_10071ae0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
};
