// UtlVec8: a CUtlVector-like container of 8-byte elements (memory pointer at +0, size at +0xc).
#pragma once

void *__cdecl memmove(void *, const void *, unsigned int);

class UtlVec8
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;

	void sub_10032f00(int elem, int num);	// ShiftElementsRight
};
