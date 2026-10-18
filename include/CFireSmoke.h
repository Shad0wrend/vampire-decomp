// CFireSmoke: fire smoke entity. Declared flat (bases not recovered).
#pragma once

class CFireSmoke
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CFireSmoke *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000eff7();	// destructor body
	void sub_10057570();	// slot 104 (Precache): precaches the fire sprite through the engine interface
};
