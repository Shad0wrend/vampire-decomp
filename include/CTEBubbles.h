// CTEBubbles: bubbles temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBubbles
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBubbles *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e2c8();	// destructor body
};
