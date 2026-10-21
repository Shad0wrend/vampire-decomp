// CUnknown101e56e0: a cost record of a stat-based skill (a table of 16 byte entries at +0x20, count at +0x1c, kind at +0x10);
// real name not yet known. Also the holder class that points to it (the owner of the skill functions at 0x101e7fb0 ...).
#pragma once

#include "CBaseCombatCharacter.h"

class CUnknown101e56e0
{
public:
	char m_pad0000[0x10];
	int m_nKind;	// 0x10

	int sub_101e56e0(CBaseCombatCharacter *pCharacter);	// the cost of the skill for the character (stub 0x1000f03d), clamped to its limit
};

struct CUnknown101e56e0Holder
{
	int m_pad0000;
	CUnknown101e56e0 *m_pCost;	// 0x04
};

class CUnknown101e7fb0
{
public:
	char m_pad0000[0x1c];
	CUnknown101e56e0Holder *m_pHolder;	// 0x1c

	int sub_101e7fb0(CBaseCombatCharacter *pCharacter, CBaseCombatCharacter *pTarget);	// 10 * (10 - cost for pCharacter + the stat 0xb of pTarget's stat list of type 1)
};
