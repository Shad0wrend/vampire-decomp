// CTEBubbleTrail: bubble trail temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBubbleTrail
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBubbleTrail *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100157ee();	// destructor body
};
