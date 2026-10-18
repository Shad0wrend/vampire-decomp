// S1007e050: a CUtlVector-like list of ints (element pointer at +0x14, size at +0x20); real name not yet known.
#pragma once

class S1007e050
{
public:
	char m_pad0000[0x14];
	int *m_pElements;	// 0x0014
	char m_pad0018[8];
	int m_size;			// 0x0020

	int sub_1007e050(int elem);	// "CUtlVector::Find": index of elem or -1
	void sub_1007e000(int elem);	// "CUtlVector::FindAndRemove"
};
