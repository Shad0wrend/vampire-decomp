// CUnknown10073b00: the 0x88 byte record kept in the per-index vectors at CUnknown10075aa0 +0x2e4 (elements of the
// CUtlVector136 views); real name not yet known. It is probably the same class as CUnknown10073b60 (the int at +0x84).
// Only what recovered code touches is declared.
#pragma once

class CUnknown10075aa0;

class CUnknown10073b00
{
public:
	char m_data[0x88];

	void sub_10073a50(CUnknown10075aa0 *pOwner, int a, int b);	// constructor (stub 0x10006717, ret 12): builds a record for the owner from the second and third argument of CUnknown10075aa0::sub_10077bd0; the sentinel temp is built with (owner = 1, "", 0)
	void sub_10073a90(const CUnknown10073b00 *pOther);	// copy constructor (stub 0x10005547, ret 4)
	float sub_10073b00();	// the float key the owner sorts the records by (matched)
};
