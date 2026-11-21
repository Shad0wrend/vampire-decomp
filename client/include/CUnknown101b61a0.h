// CUnknown101b61a0: a CUtlVector of 8-byte elements (short + int, with a constructor); real name not yet known.
#pragma once

#include "UtlVec8.h"

struct CUnknown101b61a0Elem
{
	short m_a;
	int m_b;

	void sub_10133290();	// the element constructor, called through the stub
};

class CUnknown101b61a0 : public UtlVec8
{
public:
		// copy assignment ("CUtlVector::CopyArray"): empties, grows to other's size, constructs the elements and copies them one by one
};
