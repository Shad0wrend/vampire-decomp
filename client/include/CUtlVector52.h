// CUtlVector52: a CUtlVector whose elements are 52 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct Elem52 { int m_d[13]; };

class CUtlVector52
{
public:
	Elem52 *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	Elem52 *m_pElements;

	void sub_10097080(int num);
	int sub_10096ea0(int elem, int num, const Elem52 *pToInsert);
};
