// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012fb70 size=0x2d
#include "CPositionInterpolator_CatmullRom.h"

extern char *g_1057519c;

// TARGET: CPositionInterpolator_CatmullRom::vfunc2
void CPositionInterpolator_CatmullRom::vfunc2(int nIndex, const Vector *pPosition)
{
	Vector *pDest = (Vector *)(g_1057519c + nIndex * 28);
	*pDest = *pPosition;
}
// END FUNCTION
