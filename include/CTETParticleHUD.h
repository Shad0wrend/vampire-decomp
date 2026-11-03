// CTETParticleHUD: particle HUD temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "ServerClass.h"

class CTETParticleHUD
{
public:

	void sub_10006a5a();	// destructor body
	CTETParticleHUD *sub_10069f00(int a);	// 0x10069f00: the base temp entity's constructor (0x10015334), then the vtable and the zeroed fields at +0xc, +0x10, +0x14, +0x18
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTETParticleHUD *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(int, int);
	virtual void vfunc4_slot();
	virtual void vfunc5();
};
