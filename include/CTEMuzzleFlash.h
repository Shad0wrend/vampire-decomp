// CTEMuzzleFlash: muzzle flash temp entity (derived from the CBaseTempEntity head at +0x0); only the vtable head is modelled.
#pragma once

#include "CBaseTempEntity.h"

class CTEMuzzleFlash : public CBaseTempEntityHead
{
public:
	virtual ServerClass *vfunc0();
	virtual int vfunc1();
	virtual CTEMuzzleFlash *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000df12();	// destructor body
	CTEMuzzleFlash *sub_10065e20(const char *name);	// constructor body: base constructor, vtable, fields 0x0c..0x28; returns this
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
public:
	virtual void vfunc3(int, int);
};
