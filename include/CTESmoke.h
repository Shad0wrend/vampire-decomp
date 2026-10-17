// CTESmoke: smoke temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTESmoke
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTESmoke *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10002fa4();	// destructor body
};
