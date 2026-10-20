// CTETextMessage: text message temp entity. Declared flat (bases not recovered).
#pragma once

class CTETextMessage
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTETextMessage *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10010e15();	// destructor body
	void sub_10068d50(int a, int b);	// slot 4 (stub 0x1000ab6e): sends the message; called directly on the global instance at 0x106c5e80 (message fields at +0xc.., text at +0x4c) with the recipient filter and a second argument
};
