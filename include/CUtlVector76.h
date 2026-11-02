// CUtlVector76: a CUtlVector whose elements are 76 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector76
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_1034a030(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements (initial allocation 1)
	void sub_1034a100(int elem, int num);
};
