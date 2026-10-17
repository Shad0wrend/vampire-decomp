// CDisciplineParticle: discipline particle entity. Declared flat (bases not recovered).
#pragma once

class CDisciplineParticle
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CDisciplineParticle *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000f10f();	// destructor body
};
