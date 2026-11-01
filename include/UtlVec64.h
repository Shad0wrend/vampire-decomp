// UtlVec64: a CUtlVector-like container of 64-byte elements (memory pointer at +0, size at +0xc).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class UtlVec64
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;

	void sub_10185260(int elem, int num);	// ShiftElementsRight
};
