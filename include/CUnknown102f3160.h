// CUnknown102f3160: class (not identified yet) whose destructor 0x102f3160 releases a CRestoreVec-style vector at +0x1ec.
#pragma once

#include "CRestore.h"

class CUnknown102f3160
{
public:
	void sub_102f3160();	// destructor-like: base work (stub 0x10003666), then the vector at +0x1ec is purged
	void sub_10003666();

	char m_pad0000[0x1ec];
	CRestoreVec m_vec;	// 0x01ec
};
