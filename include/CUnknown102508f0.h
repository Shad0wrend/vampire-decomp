// CUnknown102508f0: memory-block wrapper (CUtlMemory-like) of 8-byte elements; the method returns the address of element i; real name not yet known.
#pragma once

struct CUnknown102508f0_Elem
{
	int m_a;
	int m_b;
};

class CUnknown102508f0
{
public:
	CUnknown102508f0_Elem *m_pMemory;

	CUnknown102508f0_Elem *sub_102508f0(int index);
};
