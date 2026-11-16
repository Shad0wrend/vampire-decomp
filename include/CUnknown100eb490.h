// CUnknown100eb490: object holding three CUtlVector<int> (at +0x08, +0x1c, +0x30); real name not yet known.
#pragma once

#include "utlvector.h"

class CUnknown100eb490
{
public:
	char m_pad0000[8];
	CUtlVector<int> m_vecA;	// 0x08
	CUtlVector<int> m_vecB;	// 0x1c
	CUtlVector<int> m_vecC;	// 0x30

#ifdef PCD_INITIALIZERS	// the initializer units: the out-of-line constructor the global's initializer jumps to
	CUnknown100eb490();	// function 0x100eb440
#endif
	~CUnknown100eb490();
};
