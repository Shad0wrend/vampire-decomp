// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101e0c10 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown101e0be0.h"
#include "CUnknown101d5bd0.h"
// TARGET: CUnknown101e0be0::~CUnknown101e0be0
// the game's 0x101e0c10: a tail call (jmp) of CUnknown101d5bd0::sub_101e0d60
CUnknown101e0be0::~CUnknown101e0be0()
{
	((CUnknown101d5bd0 *)this)->CUnknown101d5bd0::sub_101e0d60();
}
// END FUNCTION
