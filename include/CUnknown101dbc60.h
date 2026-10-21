// CUnknown101dbc60: a sound-range-like record (name provisional): range, source and affects indices into string tables,
// min / max radius, then an embedded CUnknown101da960 filter list at +0x14.
#pragma once

#include "CUnknown101da960.h"

class IKVNodeView;

struct CUnknown101dbc60Tail	// the object at +0x24
{
	void sub_10004b1f();	// debug display (stub 0x10004b1f)
	void sub_101db630(IKVNodeView *pKV, void *pFilter);	// loads the tail from the node (stub 0x1000394a)
};

struct CUnknown101dbc60Filter	// the filter list at +0x14 (a CUnknown101da960 with its bit set)
{
	char sub_101daa10(IKVNodeView *pKV);	// loads the filter from the node's "Affects Filters" child (stub 0x1000eceb)
};

class CUnknown101dbc60
{
public:
	int m_nRange;	// 0x00
	int m_iSource;	// 0x04
	int m_iAffects;	// 0x08
	int m_nMinRadius;	// 0x0c
	int m_nMaxRadius;	// 0x10
	char m_filter[0x10];	// 0x14: a CUnknown101da960 (empty class)
	char m_tail[4];	// 0x24: a CUnknown101dbc60Tail

	void sub_101dbc60();	// Debug_Display: prints the range, source, affects, radii, the filter and the tail with Msg
	void sub_101db960();	// the constructor body (stub 0x10005e16)
	char sub_101dbb20(IKVNodeView *pKV);	// loads the record from the "AoE" child of the node: Range, Source, Affects, MinRadius, MaxRadius, the filter and the tail; false for a null node
};
