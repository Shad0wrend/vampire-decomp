// CTETextMessage: text message temp entity. Declared flat (bases not recovered).
#pragma once

class CTETextMessage
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTETextMessage *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3();
	virtual void vfunc4(int a, int b);	// the Test/Create worker: the global instance at 0x106c5e80 (message fields at +0xc.., text at +0x4c) is sent with these two arguments

	void sub_10010e15();	// destructor body
};
