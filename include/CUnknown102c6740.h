// CUnknown102c6740: memory-block wrapper (CUtlMemory-like) of 8-byte elements; the method returns the address of element i; real name not yet known.
#pragma once

struct CUnknown102c6740_Elem
{
	int m_a;
	int m_b;
};

class CUnknown102c6740
{
public:
	CUnknown102c6740_Elem *m_pMemory;

	CUnknown102c6740_Elem *sub_102c6740(int index);
};
