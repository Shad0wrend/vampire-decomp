// UtlVec32: a CUtlVector-like container of 32-byte elements (memory pointer at +0, size at +0xc).
#pragma once

void *__cdecl memmove(void *, const void *, unsigned int);

class UtlVec32
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;

	void sub_10032d20(int elem, int num);	// ShiftElementsRight
};
