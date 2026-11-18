// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d91f0 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown101d91c0.h"
#include "CUnknown101d9210.h"
// TARGET: CUnknown101d91c0::~CUnknown101d91c0
// the game's 0x101d91f0: a tail call (jmp) of CUnknown101d9210::sub_101d9210
CUnknown101d91c0::~CUnknown101d91c0()
{
	((CUnknown101d9210 *)this)->CUnknown101d9210::sub_101d9210();
}
// END FUNCTION
