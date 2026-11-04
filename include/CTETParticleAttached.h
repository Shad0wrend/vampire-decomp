// CTETParticleAttached: attached particle temp entity. Declared flat (bases not recovered).
#pragma once
#include "ServerClass.h"

class CTETParticleAttached
{
public:

	void sub_100021e9();	// destructor body
	CTETParticleAttached *sub_10069a10(int a);	// constructor: base temp entity ctor, vtable, fields
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
	char m_pad0004[0xc - 4];
	int m_nEntIndex;	// 0x0c: engine index of the entity the particles attach to
	int m_nParticle;	// 0x10: the precached particle system
	int m_n14;	// 0x14
	int m_n18;	// 0x18
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTETParticleAttached *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(int, int);
	virtual void vfunc4_slot();
	virtual void vfunc5();
};
