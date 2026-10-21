// CUnknown102d9ed0: object with a list of 0x1c byte place records at +0x580 and a ring of four timed line records
// (expiry time, start, end) at +0x594, the next slot index at +0x604; real name not yet known.
#pragma once

#include "Vector.h"

struct LineRecord_t
{
	float m_flExpireTime;	// 0x00
	Vector m_vecStart;	// 0x04
	Vector m_vecEnd;	// 0x10
};

struct PlaceRecord_t	// one 0x1c byte place of the list at +0x580
{
	int m_bUsed;	// 0x00
	Vector m_vecMin;	// 0x04
	Vector m_vecMax;	// 0x10
};

class CUnknown102d9ed0
{
public:
	char pad0[0x580];
	PlaceRecord_t *m_pPlaces;	// 0x580
	int m_nPlacesAlloc;	// 0x584
	int m_nPlaces;	// 0x588
	char pad58c[0x594 - 0x58c];
	LineRecord_t m_lines[4];	// 0x594
	int m_nNextLine;	// 0x604

	void sub_102d9ed0(const Vector *start, const Vector *end);	// adds a record that expires 2 seconds from now
	PlaceRecord_t *sub_102da9e0(const Vector *pPos, const Vector *pMaxOffset, const Vector *pMinOffset);	// the first used place that the box around pPos touches (min side: pPos + pMinOffset >= place min; max side: pPos + the x of pMaxOffset <= place max, for all three axes), null when none
};
