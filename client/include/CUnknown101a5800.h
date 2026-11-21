// CUnknown101a5800: a CUtlVector of 40 byte elements (memory, allocation count, grow size, size, element pointer).
// The growth routine at 0x101a59f0 is declared in CUnknown101a59f0 (same object start).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct CVecElem40_t
{
	int m_data[10];
};

class CUnknown101a5800
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	int sub_1012c4c0(int elem, int num, const CVecElem40_t *pToCopy);	// "CUtlVector::InsertMultiple": grows, shifts the tail up by num and copies num elements from pToCopy (when set); returns elem
};
