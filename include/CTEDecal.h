// CTEDecal: decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100038eb();	// destructor body
};
