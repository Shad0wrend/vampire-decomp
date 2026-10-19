// CUnknown100735a0: object holding a CUtlVector of 4-byte entries at +0x84 (name provisional).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

class CUnknown100735a0
{
public:
	char pad0[0x84];
	int *m_pMemory;	// 0x84
	int m_allocationCount;	// 0x88
	int m_growSize;	// 0x8c
	int m_size;	// 0x90
	int *m_pElements;	// 0x94

	void sub_100735a0(int value);	// "CUtlVector::AddToTail": grows by one and stores value at the end
};
