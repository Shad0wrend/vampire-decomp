// CUtlVectorDel4: a CUtlVector of 4-byte pointers with an auto-delete flag (memory, allocation count, grow size, size, element pointer, flag).
#pragma once

class CUtlVectorDel4
{
public:
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;
	bool m_bAutoDelete;

	void sub_101c9bd0();
};
