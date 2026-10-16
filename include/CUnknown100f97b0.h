// CUnknown100f97b0: memory-block wrapper (CUtlMemory-like) of 8-byte elements; the method returns the address of element i; real name not yet known.
#pragma once

struct CUnknown100f97b0_Elem
{
	int m_a;
	int m_b;
};

class CUnknown100f97b0
{
public:
	CUnknown100f97b0_Elem *m_pMemory;

	CUnknown100f97b0_Elem *sub_100f97b0(int index);
};
