// CMem32_t: the CUtlMemory-shaped block of the 0x20-byte CListZItem array at CListZ+0x188. Its out-of-line
// EnsureCapacity (0x1022d2f0) grows m_nAllocationCount (m_nGrowSize -1 means no growth, 0 doubles, otherwise add
// it), then reallocs/allocates m_nAllocationCount * 0x20 bytes into m_pMemory.
#pragma once

class CMem32_t
{
public:
	void *m_pMemory;		// 0x00
	int m_nAllocationCount;	// 0x04
	int m_nGrowSize;		// 0x08

	void sub_1022d2f0(int nGrow);	// 0x1022d2f0: EnsureCapacity; allocates 0x20 bytes per element
};
