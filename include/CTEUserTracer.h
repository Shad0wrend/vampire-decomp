// CTEUserTracer: user tracer temp entity. Declared flat (bases not recovered).
#pragma once

class CTEUserTracer
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEUserTracer *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000b2b7();	// destructor body
};
