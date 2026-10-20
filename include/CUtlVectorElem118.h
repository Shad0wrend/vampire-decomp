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
};
