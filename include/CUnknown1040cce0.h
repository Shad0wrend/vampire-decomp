// CUnknown1040cce0: holds an owner handle (0x14c) and a per-weapon float table (0xcc); class name unknown.
#pragma once

class CUnknown1040cce0
{
public:
	float sub_1040cce0(void *pWeapon);

	char m_pad00[0xcc];
	float m_fTable[32];	// 0xcc
	unsigned int m_hOwner;	// 0x14c
};
