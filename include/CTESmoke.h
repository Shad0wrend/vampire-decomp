// CTESmoke: smoke temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "Vector.h"

class CTESmoke
{
public:
	CTESmoke(const char *name);	// function 0x10067010
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTESmoke();	// function 0x10067080: the vtable, then the base's destructor body
#endif

	virtual int vfunc0();
	virtual int vfunc1();
	virtual CTESmoke *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector *pOrigin, const Vector *pAngles);	// slot 3 "Test": the smoke model, scale 5.0, frame rate 12; the position is the origin raised by 24 units, moved 50 units forward (flattened direction) and 25 units along the right vector; then the effect is created for every player (slot 4)
	virtual void vfunc4(void *pFilter, int delay);	// "Create"

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
	int m_nModelIndex;	// 0x18
	float m_fScale;	// 0x1c
	int m_nFrameRate;	// 0x20

	void sub_10002fa4();	// destructor body
	CTESmoke *sub_10067010(const char *name);	// constructor body (CBaseTempEntityHead base at stub 0x10015334), then the vtable and the zeroed fields from +0xc
};
