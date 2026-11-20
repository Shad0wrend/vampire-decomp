// UtlVec40: a CUtlVector-like container of 40-byte elements (memory pointer at +0, size at +0xc).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

class UtlVec40
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;

	void sub_100b4dc0(int elem, int num);	// ShiftElementsRight
	void sub_100c1e70(int elem, int num);
	void sub_1012c600(int elem, int num);
};
