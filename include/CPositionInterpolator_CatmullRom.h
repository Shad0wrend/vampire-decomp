// CPositionInterpolator_CatmullRom (RTTI .?AVCPositionInterpolator_CatmullRom@@): only what matched code needs.
#pragma once
#include "CPositionInterpolator_Rope.h"

#include "Vector.h"

class CPositionInterpolator_CatmullRom : public IPositionInterpolator
{
public:
	void vfunc2(int nIndex, const Vector *pPosition);	// slot 2: stores the position in the 28 byte state record nIndex of the global array at 0x1057519c (as CPositionInterpolator_Linear::vfunc2)
	void vfunc3(int nIndex, int flTime);	// slot 3: the Catmull-Rom spline over the four state records around the global pointer at 0x1057519c (the record and the three before / after it, 0x1c bytes apart), for the time argument
public:
	void vfunc0();
	int vfunc1(int, int, int);
	int vfunc4(const char *pszName, int unused);
};
