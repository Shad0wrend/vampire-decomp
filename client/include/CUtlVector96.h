// CUtlVector96: a CUtlVector whose elements are 96 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

struct UtlElem96 { char b[0x60]; };

class CUtlVector96
{
public:
	UtlElem96 *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	UtlElem96 *m_pElements;

	void sub_1010f870(int elem, int num);	// "CUtlVector::ShiftElementsRight": moves the elements after elem up by num
};
