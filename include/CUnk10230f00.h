// CUnk10230f00: the 16 byte block the stat owner code of the 0x10230xxx unit builds on the stack (kind and number).
#pragma once

#include "CVDmg_t.h"

struct CUnk10230f00 : CVDmgBlock16_t
{
	CUnk10230f00 *sub_10230f00(int nKind, int nNumber);	// stub 0x1000892c: constructs the block and stores kind / number, returns this
};
