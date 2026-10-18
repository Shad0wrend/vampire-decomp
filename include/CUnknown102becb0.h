// CUnknown102becb0: a CUtlVector-like list (memory, allocation count, grow size, size, element pointer);
// real name not yet known. sub_102becb0 is the destructor body: Purge (RemoveAll + free) and then ~CUtlMemory (free again).
#pragma once

class CUnknown102becb0
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

	void sub_102becb0();
};
