// CTEShowLine: show-line temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "Vector.h"

class CTEShowLine
{
public:
	virtual int vfunc0();
	virtual int vfunc1();
	virtual CTEShowLine *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector *pOrigin, const Vector *pAngles);	// slot 3 "Test": a line from the origin (raised by 24 units) 100 units along the flattened forward direction, with a 128 unit wide cross bar at its end; then the effect is created for every player (slot 4)
	virtual void vfunc4(void *pFilter, int delay);	// "Create"

	char m_pad0004[8];
	Vector m_vecStart;	// 0x0c
	Vector m_vecEnd;	// 0x18

	void sub_1001527b();	// destructor body
	CTEShowLine *sub_10066a70(const char *name);	// constructor body (CBaseTempEntityHead base at stub 0x10015334), zeroes m_vecStart / m_vecEnd around the vtable store
};
