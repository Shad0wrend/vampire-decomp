// CUnknown102d9ed0: object with a ring of four timed line records (expiry time, start, end) at +0x594 and the
// next slot index at +0x604; real name not yet known.
#pragma once

#include "Vector.h"

struct LineRecord_t
{
	float m_flExpireTime;	// 0x00
	Vector m_vecStart;	// 0x04
	Vector m_vecEnd;	// 0x10
};

class CUnknown102d9ed0
{
public:
	char pad0[0x594];
	LineRecord_t m_lines[4];	// 0x594
	int m_nNextLine;	// 0x604

	void sub_102d9ed0(const Vector *start, const Vector *end);	// adds a record that expires 2 seconds from now
};
