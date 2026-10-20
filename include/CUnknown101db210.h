// CUnknown101db210: DisciplineFX-style table class with a lazily grown array of item pointers at +0x2c (name provisional).
#pragma once

#include "CUnknown101da960.h"
#include "CUnknown101daf60.h"

struct S6;

class CUnknown101db210
{
public:
	int m_id;	// 0x0000: printed as "Affects_Table -- %d"
	char m_filter[0x10];	// 0x0004: a CUnknown101da960 (empty class), see Filter()
	CUnknown101daf60 m_first;	// 0x0014: embedded entry
	char m_pad0020[0x2c - 0x20];
	int m_allocCount;	// 0x002c
	int m_count;	// 0x0030
	S6 **m_pItems;	// 0x0034

	CUnknown101da960 *Filter() { return (CUnknown101da960 *)m_filter; }
	S6 *sub_101db210();	// grows by one slot and returns the (lazily created) item
	void sub_101db560();	// "Affects_Table" Debug_Display: prints the id, the filter, the first entry and every item
};
