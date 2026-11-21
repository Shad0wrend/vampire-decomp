// CUtlMemory20: the memory part of a CUtlVector whose elements are 20 bytes (pointer, allocation count, grow size).
#pragma once

class CUtlMemory20
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;

		// constructor: allocates allocationCount * 20 bytes
	void sub_1011fd10(int num);	// "CUtlMemory::Grow": grows the allocation by num elements
	void sub_1011fd80(int num);
	void sub_1011fdf0(int num);
	void sub_1011fe60(int num);
		// "CUtlMemory::Grow" (another instance)
		// "CUtlMemory::Grow" (another instance)
};
