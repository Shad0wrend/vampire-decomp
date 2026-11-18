// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d6c00 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown101d6bd0.h"
struct S101d6d50 { void sub_101d6d50(); };
// TARGET: CUnknown101d6bd0::~CUnknown101d6bd0
// the game's 0x101d6c00: a tail call (jmp) of S101d6d50::sub_101d6d50
CUnknown101d6bd0::~CUnknown101d6bd0()
{
	((S101d6d50 *)this)->S101d6d50::sub_101d6d50();
}
// END FUNCTION
