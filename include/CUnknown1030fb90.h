// CUnknown1030fb90: AI helper holding a pointer at +4 to an owner entity whose flag bit 0 at +0x204 it tracks; real name not yet known.
#pragma once

struct CUnknown1030fb90_Owner
{
	char m_pad0000[0x204];
	unsigned int m_flags;	// 0x204
};

class CUnknown1030fb90
{
public:
	char m_pad0000[4];
	CUnknown1030fb90_Owner *m_pOwner;	// 0x04

	bool sub_1030fb90(void *pEnt);	// false while the owner's flag bit 0 is clear; true when pEnt has no object at +0xa8, or that object does not accept the owner after the visibility test (slot 363); otherwise clears the flag bit and returns false
};
