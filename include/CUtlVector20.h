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

	void sub_1002cc10(int elem, int num);	// "CUtlVector::ShiftElementsRight": memmove the tail up by num
	void sub_10032db0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
	int sub_10042a80(int elem, int num, const void *pToCopy);	// "CUtlVector::InsertMultiple": inserts num elements at elem
	int sub_10042d90(int elem, int num, const void *pToCopy);	// same as sub_10042a80 (another instance)
	int sub_100430a0(int elem, int num, const void *pToCopy);	// same as sub_10042a80 (another instance)
	int sub_100433b0(int elem, int num, const void *pToCopy);	// same as sub_10042a80 (another instance)
	void sub_1027f990(int num);	// same shape as sub_10032db0
	void sub_10032e70(int elem, int num);	// provisional, like sub_1002cc10 (transplant)
	void sub_1027fa50(int elem, int num);	// provisional, like sub_1002cc10 (transplant)
};
