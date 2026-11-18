// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006cce0 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown1006ccc0.h"
struct S1006cd00 { void sub_1006cd00(); };
// TARGET: CUnknown1006ccc0::~CUnknown1006ccc0
// the game's 0x1006cce0: a tail call (jmp) of S1006cd00::sub_1006cd00
CUnknown1006ccc0::~CUnknown1006ccc0()
{
	((S1006cd00 *)this)->S1006cd00::sub_1006cd00();
}
// END FUNCTION
