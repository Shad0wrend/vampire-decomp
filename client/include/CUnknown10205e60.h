// CUnknown10205e60: a trait dependency: a stat reference (+0x04) compared with a tagged value (+0x18) by the
// operator at +0x14 (0 equal, 1 not equal, 2 greater, 3 less); real name not yet known.
#pragma once

#include "CUnknown10204e90.h"
#include "CUnknown10205ba0.h"

class CUnknown10205e60
{
public:
	char m_pad0000[4];
	CUnknown10204e90 m_stat;	// 0x04
	char m_pad000c[0x14 - 0xc];
	int m_nOperator;	// 0x14
	CUnknown10205ba0 m_value;	// 0x18

	char sub_10161970(void *pCharacter);	// whether the dependency holds for the character
};
