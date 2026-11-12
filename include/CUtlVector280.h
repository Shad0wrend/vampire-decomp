// CUtlVector280: a CUtlVector whose elements are 0x118 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector280
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	CUtlVector280 *sub_102e9c00(int growSize, int count);	// constructor: memory null, allocation count = count, grow size; allocates count elements when count is set
	void sub_1030b100(int num);	// grows the allocation to hold num more elements (initial allocation 1), then adds num to the size
	void sub_102e9e50(int num);	// "CUtlMemory::Grow": grows the allocation by at least num elements (realloc, or alloc when empty)
	void sub_1030b1d0(int elem, int num);	// "CUtlVector::ShiftElementsRight": memmove of the elements from elem up by num places
	int sub_102e9a90(int num, const void *pToCopy);	// "CUtlVector::AddMultipleToTail" (InsertMultipleBefore at the size, inlined): appends num default-constructed elements, copies pToCopy over them when set, returns the old size
	void sub_102e8b80(Vector *pPos);	// debug draw of the elements (0x118-byte records): copies, sorts and draws lines / text
};
