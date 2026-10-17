// CTETextMessage: text message temp entity. Declared flat (bases not recovered).
#pragma once

class CTETextMessage
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTETextMessage *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10010e15();	// destructor body
};
