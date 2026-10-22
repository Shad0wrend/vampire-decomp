// CTEFogRipple: fog ripple temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "Vector.h"

class CRecipientFilter;

class CTEFogRipple
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEFogRipple *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector *pOrigin, const Vector *pAngles);	// slot 3 "Test": the position is the origin raised by a constant and moved 50 units forward (flattened direction) and 25 to the side, then the effect is created for every player (slot 4)
	virtual void vfunc4(CRecipientFilter *pFilter, float flDelay);	// slot 4 "Create"

	void sub_1000a08d();	// destructor body

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
};
