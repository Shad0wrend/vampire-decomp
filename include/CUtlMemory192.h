// CUtlMemory192: a CUtlVector whose elements are 192 (0xc0) bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

struct CUtlMemory192Elem	// two 0x60-byte strings
{
	char a[0x60];
	char b[0x60];
};

class CUtlMemory192
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_1040b120(int num);	// "CUtlVector::GrowVector": grows the allocation to hold num more elements
};
