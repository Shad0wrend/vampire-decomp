// UtlVec12: a CUtlVector-like container of 12-byte elements (memory pointer at +0, size at +0xc).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class UtlVec12
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;

	void sub_1007f750(int elem, int num);	// ShiftElementsRight
	void sub_103dc340(int elem, int num);	// ShiftElementsRight (same as sub_1007f750)
};
