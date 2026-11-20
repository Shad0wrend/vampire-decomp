// CUtlVector20: a CUtlVector whose elements are 20 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector20
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

		// "CUtlVector::ShiftElementsRight": memmove the tail up by num
		// "CUtlVector::GrowVector": grows the allocation to hold num more elements
	int sub_1011f350(int elem, int num, const void *pToCopy);	// "CUtlVector::InsertMultiple": inserts num elements at elem
	int sub_1011f5c0(int elem, int num, const void *pToCopy);
	int sub_1011f830(int elem, int num, const void *pToCopy);
	int sub_1011faa0(int elem, int num, const void *pToCopy);
		// same as sub_10042a80 (another instance)
		// same as sub_10042a80 (another instance)
		// same as sub_10042a80 (another instance)
		// same shape as sub_10032db0
		// provisional, like sub_1002cc10 (transplant)
		// provisional, like sub_1002cc10 (transplant)
};
