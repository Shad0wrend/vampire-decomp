// CUnknown101b9140: CUtlVector of 8-byte elements {word, dword} (default 0xffff / 0); real name not yet known.
#pragma once

#include "CUnknown101b6630.h"

struct CUnknown101b9140Elem
{
	unsigned short m_w;
	int m_d;

	CUnknown101b9140Elem &operator=(const CUnknown101b9140Elem &o) { m_w = o.m_w; m_d = o.m_d; return *this; }
};

class CUnknown101b9140 : public CUnknown101b6630
{
public:
	int m_Size;	// 0x0c
	CUnknown101b9140Elem *m_pElements;	// 0x10

	int sub_10132db0(int elem, int num, const CUnknown101b9140Elem *pToCopy);	// "CUtlVector::InsertMultipleBefore": grows by num, shifts the tail up, default-constructs num elements, then copies pToCopy over them when set; returns elem
	int sub_10131e60(int num, const CUnknown101b9140Elem *pToCopy);	// "CUtlVector::AddMultipleToTail" (InsertMultipleBefore at the size, inlined); returns the old size
};
