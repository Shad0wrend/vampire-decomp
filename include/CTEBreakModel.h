// CTEBreakModel: break model temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBreakModel
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBreakModel *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000f53d();	// destructor body
};
