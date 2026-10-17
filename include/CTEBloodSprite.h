// CTEBloodSprite: blood sprite temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBloodSprite
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBloodSprite *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000d4b8();	// destructor body
};
