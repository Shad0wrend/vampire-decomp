// CUnk10230f00: the 16 byte block (a CVDmgBlock16_t without its constructor) the stat owner code of the 0x10230xxx unit
// builds on the stack: kind and number.
#pragma once

#include "CVDmg_t.h"

struct CUnk10230f00
{
	int m_a, m_b, m_c, m_d;

	CUnk10230f00 *sub_10230f00(int nKind, int nNumber);	// stub 0x1000892c: constructs the block and stores kind / number, returns this
	CVDmgBlock16_t *Block() { return (CVDmgBlock16_t *)this; }
};
