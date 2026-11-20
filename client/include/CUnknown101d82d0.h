// CUnknown101d82d0: a growable array of 12 byte elements (count at +0, data at +4) that grows by one element per append;
// real name not yet known.
#pragma once

struct CUnknown101d82d0_Elem
{
	int m_a;
	int m_b;
	int m_c;

	CUnknown101d82d0_Elem();	// sets m_a and m_b to -1 and m_c to 0 (stub 0x10007612, body at 0x101d8140)
	~CUnknown101d82d0_Elem() {}
		// the element as text: by the kind of the entry m_a names (0: the name of entry m_b, quoted when bit 0 of m_c is set; 1 / 2: the text of the entry m_a), "" when it has none
};

class CUnknown101d82d0
{
public:
	int m_count;	// 0x00
	CUnknown101d82d0_Elem *m_pData;	// 0x04

	CUnknown101d82d0_Elem *sub_10145230();	// appends a default constructed element (reallocating the array to count + 1) and returns the last element
		// parses a list of clan names separated by " ,()" (lowercased; a leading '!' negates a name) and appends an element (id, sub id, negated) for every name that resolves
};
