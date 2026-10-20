// CUnknown10072f10: object with a CUtlVector of 4-byte entries at +0x164 (name provisional).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class CUnknown10072f10
{
public:
	char pad0[0x164];
	int *m_pMemory;	// 0x164
	int m_allocationCount;	// 0x168
	int m_growSize;	// 0x16c
	int m_size;	// 0x170
	int *m_pElements;	// 0x174

	void sub_10072f10(int value);	// "CUtlVector::AddToTail": grows by one and stores value at the end
	void sub_10073090(int i, int j);	// swaps elements i and j (both non-null) via inlined Remove + InsertBefore
};
