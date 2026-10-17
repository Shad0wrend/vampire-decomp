// CTEShowLine: show-line temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEShowLine
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEShowLine *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1001527b();	// destructor body
};
