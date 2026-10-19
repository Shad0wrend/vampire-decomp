// CUnknown101b9140: CUtlVector of 8-byte elements {word, dword} (default 0xffff / 0); real name not yet known.
#pragma once

#include "CMem8_t.h"

struct CUnknown101b9140Elem
{
	unsigned short m_w;
	int m_d;
};

class CUnknown101b9140 : public CMem8_t
{
public:
	int m_Size;	// 0x0c
	CUnknown101b9140Elem *m_pElements;	// 0x10

	int sub_101b9140(int elem, int num, const CUnknown101b9140Elem *pToCopy);	// "CUtlVector::InsertMultipleBefore": grows by num, shifts the tail up, default-constructs num elements, then copies pToCopy over them when set; returns elem
};
