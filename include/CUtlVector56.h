// CUtlVector56: a CUtlVector whose elements are 56 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector56
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_102641b0(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements (initial allocation 1)
	void sub_10264280(int elem, int count);	// "CUtlVector::ShiftElementsRight" of the 0x38-byte elements (memmove of the tail), stub 0x10264280
	int sub_10264000(int elem, const void *pSrc);	// "CUtlVector::InsertBefore": grows by one (inlined), shifts the tail up, copies the 56 byte element from pSrc, returns elem
	int sub_10046ba0(int elem);	// "CUtlVector::InsertBefore" (default constructed element: dword +4 = -1, then the first 13 dwords zeroed): same as sub_10264000 for another element type, returns elem
};
