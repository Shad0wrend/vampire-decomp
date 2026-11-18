// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10202c60 size=0x5
#define PCD_INITIALIZERS
#include "S4.h"
#include "CUnknown10202c80.h"
// TARGET: S4::~S4
// the game's 0x10202c60: a tail call (jmp) of CUnknown10202c80::sub_10202c80
S4::~S4()
{
	((CUnknown10202c80 *)this)->CUnknown10202c80::sub_10202c80();
}
// END FUNCTION
