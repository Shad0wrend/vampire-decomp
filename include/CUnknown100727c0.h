// CUnknown100727c0.h: the 0x11c byte object the global 0x106c8298 is: its out-of-line constructor (function
// 0x100727c0) clears a CUtlVector<int> at 0, 0x41 dwords after it, the byte at 0x118 and sets 0x34 to -1; the implicit
// destructor destroys the vector inline. Only the initializer units (PCD_INITIALIZERS) see it.
#pragma once
#ifdef PCD_INITIALIZERS
#include "utlvector.h"
struct CUnknown100727c0
{
	CUnknown100727c0();	// function 0x100727c0
	CUtlVector<int> m_vec;
	int m_n0014[0x41];
	char m_b0118;
	char m_pad0119[3];
};
#endif
