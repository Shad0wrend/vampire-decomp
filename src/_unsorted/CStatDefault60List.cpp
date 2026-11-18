// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101db610 size=0x5
#include "CStatDefault60List.h"
struct S101db7e0 { void sub_101db7e0(); };
// TARGET: CStatDefault60List::~CStatDefault60List
// the game's 0x101db610: a tail call (jmp) of S101db7e0::sub_101db7e0
CStatDefault60List::~CStatDefault60List()
{
	((S101db7e0 *)this)->S101db7e0::sub_101db7e0();
}
// END FUNCTION
