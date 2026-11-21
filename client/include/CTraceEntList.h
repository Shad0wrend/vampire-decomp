// CTraceEntList: stack object of CNPC_VBaseBoss::vfunc617 holding a CUtlVector of 4-byte entries at +0xc (name provisional).
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

class CTraceEntList
{
public:
	char pad0[0xc];
	int *m_pMemory;	// 0xc
	int m_allocationCount;	// 0x10
	int m_growSize;	// 0x14
	int m_size;	// 0x18
	int *m_pElements;	// 0x1c

	void sub_1004b7e0(int value);	// "CUtlVector::AddToTail": grows by one and stores value at the end
};
