// CUtlVector72: a CUtlVector whose elements are 72 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct Elem72
{
	float m_matrix[3][4];
	float m_a;
	float m_b;
	float m_c;
	float m_d;
	float m_e;
	float m_f;
};

class CUtlVector72
{
public:
	Elem72 *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	Elem72 *m_pElements;

	void sub_10097160(int num);	// "CUtlMemory::Grow": grows the allocation to hold num more elements
	int sub_1018be70(int elem, int num, const Elem72 *pToCopy);	// "CUtlVector::InsertMultipleBefore": grows by num, shifts the tail, copies pToCopy
};
