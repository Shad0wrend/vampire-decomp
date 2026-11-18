// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101f0e80 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown101f0e50.h"
#include "CReactionData.h"
// TARGET: CUnknown101f0e50::~CUnknown101f0e50
// the game's 0x101f0e80: a tail call (jmp) of CReactionData::sub_101f0fd0
CUnknown101f0e50::~CUnknown101f0e50()
{
	((CReactionData *)this)->CReactionData::sub_101f0fd0();
}
// END FUNCTION
