// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d5510 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown101d54f0.h"
struct S101d5660 { void sub_101d5660(); };
// TARGET: CUnknown101d54f0::~CUnknown101d54f0
// the game's 0x101d5510: a tail call (jmp) of S101d5660::sub_101d5660
CUnknown101d54f0::~CUnknown101d54f0()
{
	((S101d5660 *)this)->S101d5660::sub_101d5660();
}
// END FUNCTION
