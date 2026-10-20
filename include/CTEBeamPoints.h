// CTEBeamPoints: beam-between-points temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBeamPoints
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamPoints *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000a9fc();	// destructor body
	void sub_1005c150(int a, int b);	// slot 4 (stub 0x10001c3a): sends the message; called directly on the global instance at 0x106bfb08 with the recipient filter and a second argument
};
