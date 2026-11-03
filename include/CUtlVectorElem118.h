// CUtlVectorElem118: a CUtlVector of 0x118 byte elements (memory pointer, allocation count, grow size, size, element pointer).
// The element's constructor sets the first dword to 7, the 5th dword to -1 and zeroes the rest of the first 0x1c bytes.
#pragma once

struct Elem118
{
	int m_type;	// 7 by default
	int m_b;
	int m_c;
	int m_d;
	int m_e;	// -1 by default
	int m_f;
	char m_g;
	char m_pad[0x118 - 0x19];

	Elem118()
	{
		m_type = 7;
		m_b = 0;
		m_c = 0;
		m_d = 0;
		m_e = -1;
		m_f = 0;
		m_g = 0;
	}
};

class CUtlVectorElem118
{
public:
	Elem118 *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	int m_Size;	// 0x0c
	Elem118 *m_pElements;	// 0x10

	int sub_102e9cd0(int elem, int num, const Elem118 *pToInsert);	// "CUtlVector::InsertMultipleBefore": grows by num, shifts the tail, default-constructs num elements and copies pToInsert[0..num) over them when given; returns elem
	void sub_102e9910(Elem118 *pBegin, Elem118 *pEnd);	// 0x102e9910 (todo): sorts the [pBegin, pEnd) element range (this = the vector)
	bool sub_102e91b0(Elem118 *pElems, int nCount, float *pOut);	// 0x102e91b0: appends nCount elements of pElems to a temporary copy of the vector, sorts it and picks the best element by a float score (+0x4 of the element), whose float at +0x8 goes to *pOut; false when nothing is picked. Fast path: nCount==1 with an empty vector and pElems[0].m_type==0 gives pElems[0].m_c
};
