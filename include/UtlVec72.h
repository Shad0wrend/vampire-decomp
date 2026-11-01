// UtlVec72: a CUtlVector-like container of 72-byte elements (memory pointer at +0, size at +0xc).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class UtlVec72
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;

	void sub_10185570(int elem, int num);	// ShiftElementsRight
	void sub_1022d190(int elem, int num);	// ShiftElementsRight (same as sub_10185570)
};
