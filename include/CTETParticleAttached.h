// CTETParticleAttached: attached particle temp entity. Declared flat (bases not recovered).
#pragma once

class CTETParticleAttached
{
public:

	void sub_100021e9();	// destructor body
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTETParticleAttached *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(int, int);
	virtual void vfunc4_slot();
	virtual void vfunc5();
};
