// CUnknown100eb490: object holding three CUtlVector<int> (at +0x08, +0x1c, +0x30); real name not yet known.
#pragma once

#include "CRestore.h"

class CUnknown100eb490
{
public:
	char m_pad0000[8];
	CRestoreVec m_vecA;	// 0x08
	CRestoreVec m_vecB;	// 0x1c
	CRestoreVec m_vecC;	// 0x30

	void sub_100eb490();	// destroys the three vectors in reverse order (the body of the destructor)
};
