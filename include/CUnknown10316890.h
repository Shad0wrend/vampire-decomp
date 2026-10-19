// CUnknown10316890: object holding an array of 16 entity handles (+0x1c) and their count (+0x5c); real name not yet known.
#pragma once

#include "Vector.h"

class CUnknown10316890
{
public:
	char m_pad0000[0x1c];
	unsigned int m_hEnts[16];	// 0x1c
	int m_nEnts;	// 0x5c

	void sub_10316890(int arg, Vector a, Vector b);	// calls slot 55(arg, a, b) on every handle that still resolves
	void sub_103169a0(int arg, Vector a, Vector b, int c);	// same, calling slot 56(arg, a, b, c)
	void sub_10316ab0(int arg, Vector a, Vector b);	// same, calling slot 57
};
