// CTEGunshotDecal: gunshot decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEGunshotDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEGunshotDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1001520d();	// destructor body
};
