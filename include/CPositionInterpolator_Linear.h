// CPositionInterpolator_Linear: declared by pcdecomp for 0x1012fa30 (vfunc3, plain member); only what matched code needs.
#pragma once
#include "CPositionInterpolator_Rope.h"

#include "Vector.h"

class CPositionInterpolator_Linear : public IPositionInterpolator
{
public:
	void vfunc2(int nIndex, const Vector *pPosition);	// slot 2: stores the position in the 28 byte state record nIndex of the global array at 0x1057519c
	void vfunc3(float flT, Vector *pOut);	// Lerp between the two positions of the global interpolator state (slot 3)
public:
	void vfunc0();
	int vfunc1(int, int, int);
	bool vfunc4(int, int);
};
