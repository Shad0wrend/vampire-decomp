// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011d340 size=0x77
#include "bf_read.h"

// TARGET: bf_read::ReadUBitLong
#pragma inline_depth(0)
unsigned int pcd_ReadUBitLong_1011d340(bf_read *p, int numbits)
{
	return p->ReadUBitLong(numbits);
}
// END FUNCTION
