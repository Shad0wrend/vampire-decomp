// CUnknown10205dc0: a stat dependency record (block at +4, stat id at +0x14, value at +0x18); real name not yet known.
#pragma once

#include "CVDmg_t.h"
#include "CUnknown10205ba0.h"

class CUnknown10205dc0
{
public:
	int m_pad0000;
	CVDmgBlock16_t m_block;	// 0x04
	int m_nStat;	// 0x14
	CUnknown10205ba0 m_value;	// 0x18

	const char *sub_10205dc0();	// the text form of the dependency ("<name> <stat> <value>"); the empty text for an empty block
};
