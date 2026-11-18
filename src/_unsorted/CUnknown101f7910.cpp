// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101f7940 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown101f7910.h"
#include "CUnknown101f7bb0.h"
// TARGET: CUnknown101f7910::~CUnknown101f7910
// the game's 0x101f7940: a tail call (jmp) of CUnknown101f7bb0::sub_101f7a90
CUnknown101f7910::~CUnknown101f7910()
{
	((CUnknown101f7bb0 *)this)->CUnknown101f7bb0::sub_101f7a90();
}
// END FUNCTION
