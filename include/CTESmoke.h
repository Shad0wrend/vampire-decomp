// CTESmoke: smoke temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "Vector.h"

class CTESmoke
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTESmoke *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector *pOrigin, const Vector *pAngles);	// slot 3 "Test": the smoke model, scale 5.0, frame rate 12; the position is the origin raised by 24 units, moved 50 units forward (flattened direction) and 25 units along the right vector; then the effect is created for every player (slot 4)
	virtual void vfunc4(void *pFilter, int delay);	// "Create"

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
	int m_nModelIndex;	// 0x18
	float m_fScale;	// 0x1c
	int m_nFrameRate;	// 0x20

	void sub_10002fa4();	// destructor body
};
