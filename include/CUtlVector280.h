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

	void sub_1030b100(int num);	// grows the allocation to hold num more elements (initial allocation 1), then adds num to the size
	void sub_102e9e50(int num);	// "CUtlMemory::Grow": grows the allocation by at least num elements (realloc, or alloc when empty)
	int sub_102e9a90(int num, const void *pToCopy);	// "CUtlVector::AddMultipleToTail" (InsertMultipleBefore at the size, inlined): appends num default-constructed elements, copies pToCopy over them when set, returns the old size
};
