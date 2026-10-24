// CUnknown101b4680: object holding two CUtlVector<int> (at +0x20 and +0x34); real name not yet known.
#pragma once

#include "utlvector.h"

class CUnknown101b4680
{
public:
	char m_pad0000[0x20];
	CUtlVector<int> m_vecA;	// 0x20
	CUtlVector<int> m_vecB;	// 0x34

	~CUnknown101b4680();
};
