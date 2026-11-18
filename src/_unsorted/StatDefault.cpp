// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006c770 size=0x2d
#include "StatDefault.h"
// TARGET: StatDefault::StatDefault
StatDefault::StatDefault(int id)
{
	CVDmgBlock16_t *pBlock = (CVDmgBlock16_t *)&a[6];
	pBlock->sub_10205380();
	a[0] = id;
	a[4] = 0;
	a[5] = 0;
	a[3] = 0;
	pBlock->sub_10204270();
}
// END FUNCTION

// FUNCTION: 0x1006c7b0 size=0x5
#include "StatDefault.h"
struct CUnknown1006c7d0 { void sub_1006c7d0(); };
// TARGET: StatDefault::~StatDefault
// the game's 0x1006c7b0: a tail call (jmp) of CUnknown1006c7d0::sub_1006c7d0
StatDefault::~StatDefault()
{
	((CUnknown1006c7d0 *)this)->CUnknown1006c7d0::sub_1006c7d0();
}
// END FUNCTION
