// CUtlVectorHintData: a CUtlVector of CHintData_WW (0x48 byte elements): memory pointer, allocation count, grow size,
// size, element pointer.
#pragma once

class CHintData_WW;

class CUtlVectorHintData
{
public:
	char *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	int m_Size;	// 0x0c
	char *m_pElements;	// 0x10

	int sub_103dc090(int elem, const CHintData_WW *pSrc);	// "CUtlVector<CHintData_WW>::InsertBefore": grows by one, shifts the tail up, copy-constructs *pSrc into the new slot; returns elem
};
