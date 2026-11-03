// CTEBeamSpline: beam spline temp entity. Declared flat (bases not recovered).
#pragma once
#include "Vector.h"

class CTEBeamSpline
{
public:
	CTEBeamSpline(const char *name);	// 0x1005d220: the CBaseTempEntityHead constructor with the name, the vtable, the 16 points zeroed, no points
	CTEBeamSpline *sub_1005d220(const char *name);	// the same constructor body written without the class's base (manual base call + vtable store)
	virtual int vfunc0();
	virtual int vfunc1();
	virtual CTEBeamSpline *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &current_origin, const Vector &current_angles);	// "Test": six points along a line in front of and beside the origin, sent to everyone
	virtual void vfunc4(void *pFilter, float delay);	// "Create": sends the effect (stub 0x1000e6f1 for 0x1005d4d0)

	void sub_10007f81();	// destructor body
	void sub_1005d4d0(void *pFilter, float delay);	// slot 4 called directly on the global instance

	char m_pad04[8];
	Vector m_vecPoints[16];	// 0x0c
	int m_nPoints;	// 0xcc
};
