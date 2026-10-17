// S102d4390: growable vector of 16-byte elements (CUtlVector-like) whose member at 0x102d4390 grows the memory;
// real name not yet known.
#pragma once

struct S102d4390Element
{
	float x, y, z;
	float w;
};

class S102d4390
{
public:
	S102d4390Element *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	S102d4390Element *m_pElements;

	void sub_102d4390(int num);
};
