// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101e98a0 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown101e9880.h"
#include "CUnknown101e98c0.h"
// TARGET: CUnknown101e9880::~CUnknown101e9880
// the game's 0x101e98a0: a tail call (jmp) of CUnknown101e98c0::sub_101e98c0
CUnknown101e9880::~CUnknown101e9880()
{
	((CUnknown101e98c0 *)this)->CUnknown101e98c0::sub_101e98c0();
}
// END FUNCTION
