// CTETParticle: particle temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTETParticle
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTETParticle *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1001267a();	// destructor body
};
