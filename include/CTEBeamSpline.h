// CTEBeamSpline: beam spline temp entity. Declared flat (bases not recovered).
#pragma once
#include "Vector.h"

class CTEBeamSpline
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamSpline *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3();
	virtual void vfunc4(void *pFilter, float delay);	// "Create": sends the effect (stub 0x1000e6f1 for 0x1005d4d0)

	void sub_10007f81();	// destructor body

	char m_pad04[8];
	Vector m_vecPoints[16];	// 0x0c
	int m_nPoints;	// 0xcc
};
