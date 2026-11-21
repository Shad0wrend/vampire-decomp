// CUtlVector16: a CUtlVector whose elements are 16 bytes (memory, allocation count, grow size, size, element pointer).
#pragma once

class CUtlVector16
{
public:
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;

		// "CUtlVector::GrowVector": grows the allocation to hold num more elements
		// same shape as sub_1003c220
		// same shape as sub_1003c220
		// same shape as sub_1003c220
		// "CUtlVector::ShiftElementsRight" (stub 0x10014f8d): called with (index, 1) right after the grow
		// stub 0x1000bb63: called with (0, num) right after the grow
		// 0x1003c2e0: memmove of the tail behind elem + num (the Remove-like shift, 16 byte elements)
		// 0x100b48c0: the same memmove shift as sub_1003c2e0
		// 0x10349e10: the same memmove shift as sub_1003c2e0
	void sub_10050100();	// 0x1007ee60: Purge-like (size = 0, frees the memory when growSize != -1)
	void sub_10130ba0();
		// 0x1007eeb0: the same Purge as sub_1007ee60
		// 0x101b65e0: the same Purge as sub_1007ee60
		// 0x102c8b10: the same Purge as sub_1007ee60
		// 0x102c8b60: the same Purge as sub_1007ee60
		// 0x102c8bb0: the same Purge as sub_1007ee60
		// 0x10359ba0 (stub 0x100027a2): the same Purge, on the vector whose memory is cleared by the destructor
		// 0x102f9040: the same Purge as sub_1007ee60
		// 0x10366b30: the same Purge as sub_1007ee60

	char *Element(int i) { return m_pMemory + i * 16; }	// operator[] for the 16 byte elements
};
