// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d7c30 size=0x5
#define PCD_INITIALIZERS
#include "CUnknown101d7c10.h"
void __fastcall sub_101d7c50(int *);
// TARGET: CUnknown101d7c10::~CUnknown101d7c10
// the game's 0x101d7c30: a tail call (jmp) of sub_101d7c50
CUnknown101d7c10::~CUnknown101d7c10()
{
	sub_101d7c50((int *)this);
}
// END FUNCTION
