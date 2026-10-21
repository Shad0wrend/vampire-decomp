// CUtlVector36: a CUtlVector whose elements are 36 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector36
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_10260870(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements (initial allocation 1)
	void sub_102e2b60(int num);	// same as sub_10260870 (another instance)
	void sub_10033040(int num);	// "CUtlMemory::Grow" of the touch event vector of CCollisionEvent (the memory part starts at the vector's start)
	void sub_10032b20(int elem, int num);	// "CUtlVector::ShiftElementsRight" of the touch event vector (stub 0x1000801c)
};
