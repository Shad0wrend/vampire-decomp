// CTETracer: tracer temp entity. Declared flat (bases not recovered).
#pragma once

class CTETracer
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTETracer *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000f236();	// destructor body
};
