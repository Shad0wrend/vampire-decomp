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
