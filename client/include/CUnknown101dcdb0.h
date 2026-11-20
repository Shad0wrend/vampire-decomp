// CUnknown101dcdb0: a growable array of owned pointers (word 0 is the grow size, word 1 the count, word 2 the array);
// real name not yet known. The pointer-list object has more members behind it (a sub-object at +0xc).
#pragma once

class CUnknown101dcdb0
{
public:
	int m_nGrow;	// 0x00
	int m_nCount;	// 0x04
	int **m_ppItems;	// 0x08

	void sub_10147b80();	// deletes every item and the array, clears the count and the grow size (stub 0x1000245a)
};
