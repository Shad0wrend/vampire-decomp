// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100cdd20 size=0x28
#include "CUnk100cdd20.h"

CUnk100cdd20::CUnk100cdd20()
{
	sub_1000f3ad();
}
// END FUNCTION

// FUNCTION: 0x100cdd60 size=0x5
#define PCD_INITIALIZERS
#include "CUnk100cdd20.h"
#include "CEventQueue.h"
// TARGET: CUnk100cdd20::~CUnk100cdd20
// the game's 0x100cdd60: a tail call (jmp) of CEventQueue::sub_100cdda0
CUnk100cdd20::~CUnk100cdd20()
{
	((CEventQueue *)this)->CEventQueue::sub_100cdda0();
}
// END FUNCTION
