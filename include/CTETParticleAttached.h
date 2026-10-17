// CTETParticleAttached: attached particle temp entity. Declared flat (bases not recovered).
#pragma once

class CTETParticleAttached
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTETParticleAttached *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100021e9();	// destructor body
};
