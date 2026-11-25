// BoneVec48: a CUtlVector of 48-byte matrix3x4_t elements (memory, allocation count, grow size, size, element pointer).
#pragma once

#include "matrix3x4_t.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class BoneVec48
{
public:
	matrix3x4_t *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	matrix3x4_t *m_pElements;

	void sub_10096fc0(int elem, int num, const matrix3x4_t *pSrc);	// "CUtlVector::InsertMultipleBefore": grows, shifts the tail up by num, copies pSrc
};
