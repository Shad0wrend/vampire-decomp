// CTEEnergySplash: energy splash temp entity. Declared flat (bases not recovered).
#pragma once

#include "Vector.h"

class CRecipientFilter;

class CTEEnergySplash
{
public:
	CTEEnergySplash(const char *name);	// function 0x10061250
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEEnergySplash();	// function 0x100612c0: the vtable, then the base's destructor body
#endif

	virtual int vfunc0();
	virtual int vfunc1();
	virtual CTEEnergySplash *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector *pOrigin, const Vector *pAngles);	// slot 3 "Test": the position is the origin raised by a constant, the direction comes from the angles (AngleVectors), flattened and normalised; the position is then moved 100 units along it and the effect is created for every player (slot 4)
	virtual void vfunc4(CRecipientFilter *pFilter, float flDelay);	// slot 4 "Create"

	void sub_10001c7b();	// destructor body
	CTEEnergySplash *sub_10061250(int a);	// constructor body: base constructor (0x10015334), vtable, fields 0x0c..0x24; returns this

	char m_pad0004[8];
	Vector m_vecPos;	// 0x0c
	Vector m_vecDir;	// 0x18
	char m_b24;	// 0x24
};
