// CUnknown100f6d80: object with an int vector (CUtlVector<int>-like) at +0x18048; real name not yet known.
#pragma once

struct CUnknown100f6d80Mem
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	void sub_100f9940(int num);
};

struct CUnknown100f6d80Vec
{
	CUnknown100f6d80Mem m_mem;
	int m_size;
	int *m_pElements;
};

class CUnknown100f6d80
{
public:
	char pad0[0x18048];
	CUnknown100f6d80Vec m_vec;

	void sub_100f6d80(int value);	// adds value to the vector if it is not already in it
};
