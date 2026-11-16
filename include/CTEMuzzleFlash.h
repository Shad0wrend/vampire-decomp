// CTEMuzzleFlash: muzzle flash temp entity (derived from the CBaseTempEntity head at +0x0); only the vtable head is modelled.
#pragma once

#include "CBaseTempEntity.h"

class CTEMuzzleFlash : public CBaseTempEntityHead
{
public:
	CTEMuzzleFlash(const char *name);	// function 0x10065e20
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEMuzzleFlash();	// function 0x10065ea0: the vtable, then the base's destructor body
#endif

	virtual ServerClass *vfunc0();
	virtual int vfunc1();
	virtual CTEMuzzleFlash *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000df12();	// destructor body
	CTEMuzzleFlash *sub_10065e20(const char *name);	// constructor body: base constructor, vtable, fields 0x0c..0x28; returns this
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
public:
	virtual void vfunc3(int, int);
};
