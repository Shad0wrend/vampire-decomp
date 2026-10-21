// CUnknown101dbc60: a sound-range-like record (name provisional): range, source and affects indices into string tables,
// min / max radius, then an embedded CUnknown101da960 filter list at +0x14.
#pragma once

#include "CUnknown101da960.h"

struct CUnknown101dbc60Tail	// the object at +0x24
{
	void sub_10004b1f();	// debug display (stub 0x10004b1f)
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
};
